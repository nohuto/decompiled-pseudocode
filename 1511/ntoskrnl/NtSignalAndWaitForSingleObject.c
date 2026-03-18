/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1401E61A0
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetWaitObject @ 0x14002E8F8 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtSignalAndWaitForSingleObject(
        HANDLE SignalObject,
        HANDLE WaitObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  KPROCESSOR_MODE PreviousMode; // si
  LARGE_INTEGER *v7; // rdi
  int v8; // ebx
  void *v9; // r14
  POBJECT_TYPE *v10; // rcx
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v14; // [rsp+58h] [rbp-30h] BYREF
  LARGE_INTEGER v15; // [rsp+60h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = Time;
  if ( Time && PreviousMode )
  {
    if ( (unsigned __int64)Time >= MmUserProbeAddress )
      v7 = (LARGE_INTEGER *)MmUserProbeAddress;
    v15 = *v7;
    v7 = &v15;
  }
  v8 = ObReferenceObjectByHandleWithTag(SignalObject, 0, 0LL, PreviousMode, 0x7457624Fu, &Object, &HandleInformation);
  if ( v8 >= 0 )
  {
    v8 = ObReferenceObjectByHandleWithTag(WaitObject, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v14, 0LL);
    if ( v8 < 0 )
    {
LABEL_21:
      ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
      return v8;
    }
    v9 = (void *)ObpGetWaitObject((__int64)v14 - 48);
    v10 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v8 = -1073741790;
    if ( v10 == ExEventObjectType )
    {
      if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
        goto LABEL_20;
      KeSetEvent((PRKEVENT)Object, 1, 1u);
    }
    else if ( v10 == (POBJECT_TYPE *)ExMutantObjectType )
    {
      KeReleaseMutant((PRKMUTANT)Object, 1, 0, 1u);
    }
    else
    {
      if ( v10 != ExSemaphoreObjectType )
      {
        v8 = -1073741788;
        goto LABEL_20;
      }
      if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
        goto LABEL_20;
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, 1, 1u);
    }
    v8 = KeWaitForSingleObject(v9, UserRequest, PreviousMode, Alertable, v7);
LABEL_20:
    ObfDereferenceObjectWithTag(v14, 0x7457624Fu);
    goto LABEL_21;
  }
  return v8;
}

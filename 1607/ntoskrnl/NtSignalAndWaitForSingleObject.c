/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1401FEA5C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObpGetWaitObject @ 0x1400EDF20 (ObpGetWaitObject.c)
 *     KeReleaseMutant @ 0x1400F6E00 (KeReleaseMutant.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtSignalAndWaitForSingleObject(
        HANDLE SignalObject,
        HANDLE WaitObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  KPROCESSOR_MODE PreviousMode; // di
  PLARGE_INTEGER v7; // rsi
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
    if ( (unsigned __int64)Time >= 0x7FFFFFFF0000LL )
      v7 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
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

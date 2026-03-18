/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1402331B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtSignalAndWaitForSingleObject(
        HANDLE SignalObject,
        HANDLE WaitObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  KPROCESSOR_MODE PreviousMode; // r14
  LARGE_INTEGER *v7; // rsi
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdi
  POBJECT_TYPE *v11; // rcx
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v15; // [rsp+58h] [rbp-30h] BYREF
  LARGE_INTEGER v16; // [rsp+60h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = Time;
  if ( Time && PreviousMode )
  {
    if ( (unsigned __int64)Time >= MmUserProbeAddress )
      v7 = (LARGE_INTEGER *)MmUserProbeAddress;
    v16 = *v7;
    v7 = &v16;
  }
  v8 = ObReferenceObjectByHandleWithTag(SignalObject, 0, 0LL, PreviousMode, 0x7457624Fu, &Object, &HandleInformation);
  if ( v8 >= 0 )
  {
    v8 = ObReferenceObjectByHandleWithTag(WaitObject, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v15, 0LL);
    if ( v8 < 0 )
    {
LABEL_29:
      ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
      return v8;
    }
    v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v15 - 48) >> 8)];
    v10 = *(_QWORD *)(v9 + 32);
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 2) != 0 )
      {
        if ( (*(_DWORD *)((_BYTE *)v15 + *(unsigned __int16 *)(v9 + 180)) & *(_DWORD *)(v9 + 176)) == *(_DWORD *)(v9 + 176) )
          v10 = *(_QWORD *)((char *)v15 + *(unsigned __int16 *)(v9 + 182));
        else
          v10 = (__int64)v15 + v10 - 3;
      }
      else
      {
        v10 = *(_QWORD *)((char *)v15 + v10 - 1);
      }
    }
    else if ( v10 >= 0 )
    {
      v10 += (__int64)v15;
    }
    v11 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v8 = -1073741790;
    if ( v11 == ExEventObjectType )
    {
      if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
        goto LABEL_28;
      KeSetEvent((PRKEVENT)Object, 1, 1u);
    }
    else if ( v11 == (POBJECT_TYPE *)ExMutantObjectType )
    {
      KeReleaseMutant((PRKMUTANT)Object, 1, 0, 1u);
    }
    else
    {
      if ( v11 != ExSemaphoreObjectType )
      {
        v8 = -1073741788;
        goto LABEL_28;
      }
      if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
        goto LABEL_28;
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, 1, 1u);
    }
    v8 = KeWaitForSingleObject((PVOID)v10, UserRequest, PreviousMode, Alertable, v7);
LABEL_28:
    ObfDereferenceObjectWithTag(v15, 0x7457624Fu);
    goto LABEL_29;
  }
  return v8;
}

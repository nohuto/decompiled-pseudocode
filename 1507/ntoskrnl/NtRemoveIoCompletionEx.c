/*
 * XREFs of NtRemoveIoCompletionEx @ 0x1405432F8
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  __int64 v7; // rsi
  __int64 *v10; // rbx
  KPROCESSOR_MODE PreviousMode; // r15
  _DWORD *v13; // rcx
  LARGE_INTEGER *v14; // r14
  SIZE_T v15; // rdx
  PLIST_ENTRY *PoolWithTagPriority; // rax
  PLIST_ENTRY *v17; // rbx
  int v18; // edi
  ULONG v19; // [rsp+44h] [rbp-E4h] BYREF
  LARGE_INTEGER *v20; // [rsp+48h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v23[128]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = Count;
  v10 = (__int64 *)Timeout;
  v19 = 0;
  if ( !Count || Count > 0x7FFFFFF )
    return -1073741811;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(IoCompletionInformation, 32LL * Count, 8u);
    v13 = NumEntriesRemoved;
    if ( (unsigned __int64)NumEntriesRemoved >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    if ( Timeout )
    {
      v20 = (LARGE_INTEGER *)&v22;
      if ( (unsigned __int64)Timeout >= MmUserProbeAddress )
        v10 = (__int64 *)MmUserProbeAddress;
      v22 = *v10;
    }
    v14 = v20;
  }
  else
  {
    v14 = v20;
    if ( Timeout )
      v14 = Timeout;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    v15 = 8 * v7;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (PLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                             NonPagedPoolNx,
                                             v15,
                                             0x20206F49u,
                                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (PLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x20206F49u);
    v17 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
      goto LABEL_21;
    LODWORD(v7) = 16;
  }
  v17 = (PLIST_ENTRY *)v23;
LABEL_21:
  v18 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v18 >= 0 )
  {
    v18 = (unsigned int)IoRemoveIoCompletion(
                          (struct _KQUEUE *)Object,
                          (__int64)IoCompletionInformation,
                          v17,
                          v7,
                          &v19,
                          PreviousMode,
                          v14,
                          Alertable);
    ObfDereferenceObject(Object);
  }
  if ( v17 != (PLIST_ENTRY *)v23 )
    ExFreePoolWithTag(v17, 0);
  if ( v18 >= 0 )
    *NumEntriesRemoved = v19;
  return v18;
}

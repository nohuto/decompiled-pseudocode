/*
 * XREFs of PnpRemoveDeviceActionRequests @ 0x14013175C
 * Callers:
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 **v6; // rax
  _DWORD *v7; // rax
  struct _KEVENT *v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
  }
  v3 = (__int64 *)PnpEnumerationRequestList;
  if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v4 = *v3;
      if ( v3[2] == a1 )
      {
        v6 = (__int64 **)v3[1];
        if ( *(__int64 **)(v4 + 8) != v3 || *v6 != v3 )
          __fastfail(3u);
        *v6 = (__int64 *)v4;
        *(_QWORD *)(v4 + 8) = v6;
        v7 = (_DWORD *)v3[6];
        if ( v7 )
          *v7 = -1073741810;
        v8 = (struct _KEVENT *)v3[5];
        if ( v8 )
          KeSetEvent(v8, 0, 0);
        ObfDereferenceObjectWithTag((PVOID)v3[2], 0x746C6644u);
        ExFreePoolWithTag(v3, 0x32706E50u);
      }
      v3 = (__int64 *)v4;
    }
    while ( (PVOID *)v4 != &PnpEnumerationRequestList );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

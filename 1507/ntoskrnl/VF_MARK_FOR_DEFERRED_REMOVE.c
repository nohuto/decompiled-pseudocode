/*
 * XREFs of VF_MARK_FOR_DEFERRED_REMOVE @ 0x14073A8A0
 * Callers:
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall VF_MARK_FOR_DEFERRED_REMOVE(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR i; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Lock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&Lock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Lock);
  }
  for ( i = ViAdapterList; &ViAdapterList != (ULONG_PTR *)i; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
      *(_BYTE *)(i + 32) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Lock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&Lock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

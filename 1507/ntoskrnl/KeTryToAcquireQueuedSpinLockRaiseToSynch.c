/*
 * XREFs of KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140200AD8
 * Callers:
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140748EAC (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  char *v4; // r8
  _DWORD *v5; // rdx
  int v6; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  v5 = (_DWORD *)*((_QWORD *)v4 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v6 = KiTryToAcquireQueuedSpinLockInstrumented(v4);
  }
  else
  {
    _m_prefetchw(v5);
    if ( *v5 || _InterlockedCompareExchange64((volatile signed __int64 *)v5, (signed __int64)v4, 0LL) )
    {
      _mm_pause();
      goto LABEL_9;
    }
    v6 = 1;
  }
  if ( v6 )
  {
    *a2 = CurrentIrql;
    return 1LL;
  }
LABEL_9:
  __writecr8(CurrentIrql);
  return 0LL;
}

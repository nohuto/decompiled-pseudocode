/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FD3FC
 * Callers:
 *     MiAttachToOwningSession @ 0x1400FD2E0 (MiAttachToOwningSession.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  a2[1] = a1;
  *a2 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(a2);
  }
  else
  {
    _m_prefetchw(a1);
    if ( *a1 || _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)a2, 0LL) )
      _mm_pause();
    else
      return 1;
  }
  return v2;
}

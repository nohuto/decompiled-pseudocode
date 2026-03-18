/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x1401DE068
 * Callers:
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 */

unsigned __int8 __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned __int8 result; // al

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_1402FEE08 << 25 >> 16;
    _InterlockedExchange64((volatile __int64 *)qword_1402FEE08, 0LL);
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v2, 0, 1u);
    else
      KeFlushSingleCurrentTb(v2, 0);
  }
  v3 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v3 & 1) != 0 || (v3 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v3 & 8) != 0 || (v3 & 0x10) != 0 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)a1 + 2);
    }
  }
  result = *((_BYTE *)a1 + 4);
  if ( result != 17 )
    __writecr8(result);
  return result;
}

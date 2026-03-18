/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x1401487C8
 * Callers:
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401470C4 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     KeFlushSingleTb @ 0x14010A628 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14012C860 (KeFlushSingleCurrentTb.c)
 */

unsigned __int8 __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int8 result; // al

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_140327208 << 25;
    _InterlockedExchange64((volatile __int64 *)qword_140327208, 0LL);
    v3 = v2 >> 16;
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v3, 0, 1u);
    else
      KeFlushSingleCurrentTb(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 8) != 0 || (v4 & 0x10) != 0 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)a1 + 2);
    }
  }
  result = *((_BYTE *)a1 + 4);
  if ( result != 17 )
    __writecr8(result);
  return result;
}

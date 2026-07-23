/*
 * XREFs of KeAbEntryFree @ 0x1400F4C90
 * Callers:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011B984 (KiAbThreadUnboostCpuPriority.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14025CCD0 (EtwTraceAutoBoostClearFloor.c)
 */

void __fastcall KeAbEntryFree(__int64 a1, ULONG_PTR a2)
{
  __int16 v4; // ax

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  v4 = *(_WORD *)(a1 + 88);
  if ( v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 1412));
      PsBoostThreadIoEx(a2, 1, 0, 0LL);
    }
    if ( (*(_WORD *)(a1 + 88) & 0xFFFE) != 0 )
      KiAbThreadUnboostCpuPriority(a2);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceAutoBoostClearFloor(
        a2,
        *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
        *(unsigned __int16 *)(a1 + 88));
    *(_WORD *)(a1 + 88) = 0;
  }
  *(_BYTE *)(a1 + 25) &= ~1u;
  *(_QWORD *)(a1 + 32) = 0LL;
}

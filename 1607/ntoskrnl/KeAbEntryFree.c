/*
 * XREFs of KeAbEntryFree @ 0x14002C430
 * Callers:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A13E8 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1400B2E3C (KiAbThreadUnboostIoPriority.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140225908 (EtwTraceAutoBoostClearFloor.c)
 */

__int64 __fastcall KeAbEntryFree(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree(a1);
  result = *(unsigned int *)(a1 + 88);
  if ( (result & 0x1FFFF) != 0 )
  {
    if ( (result & 0x8000u) != 0LL )
      result = KiAbThreadUnboostIoPriority(a2, 0LL);
    if ( (*(_BYTE *)(a1 + 90) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 1416));
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 1788));
    }
    if ( (*(_WORD *)(a1 + 88) & 0x7FFF) != 0 )
      result = KiAbThreadUnboostCpuPriority(a2);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      result = EtwTraceAutoBoostClearFloor(
                 a2,
                 *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
                 *(_DWORD *)(a1 + 88) & 0x1FFFF);
    *(_DWORD *)(a1 + 88) &= 0xFFFE0000;
  }
  *(_BYTE *)(a1 + 25) &= ~1u;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}

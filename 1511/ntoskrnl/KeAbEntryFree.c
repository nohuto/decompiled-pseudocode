/*
 * XREFs of KeAbEntryFree @ 0x140033200
 * Callers:
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 * Callees:
 *     KiAbThreadUnboostCpuPriority @ 0x140031C60 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14020DA64 (EtwTraceAutoBoostClearFloor.c)
 */

__int64 __fastcall KeAbEntryFree(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  __int64 result; // rax

  v3 = a2;
  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  result = *(unsigned __int16 *)(a1 + 88);
  if ( (_WORD)result )
  {
    if ( (result & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1412));
      LOBYTE(a2) = 1;
      result = PsBoostThreadIoEx(v3, a2, 0LL, 0LL);
    }
    if ( (*(_WORD *)(a1 + 88) & 0xFFFE) != 0 )
      result = KiAbThreadUnboostCpuPriority(v3, a1, a3);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      result = EtwTraceAutoBoostClearFloor(
                 v3,
                 *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
                 *(unsigned __int16 *)(a1 + 88));
    *(_WORD *)(a1 + 88) = 0;
  }
  *(_BYTE *)(a1 + 25) &= ~1u;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}

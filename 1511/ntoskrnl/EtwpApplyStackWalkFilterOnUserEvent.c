/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x140666DCC
 * Callers:
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkFilter @ 0x1402113F8 (EtwpApplyStackWalkFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkFilter(*(unsigned __int16 *)(a1 + 40), a2, a3, 1);
}

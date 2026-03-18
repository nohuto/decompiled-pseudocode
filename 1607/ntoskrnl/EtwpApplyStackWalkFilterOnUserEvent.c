/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x1406A8D10
 * Callers:
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkFilter @ 0x140229CBC (EtwpApplyStackWalkFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkFilter(*(unsigned __int16 *)(a1 + 40), a2, a3, 1);
}

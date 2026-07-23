/*
 * XREFs of EtwGetTraceEnableFlags @ 0x180086770
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwGetTraceEnableFlags(__int64 a1)
{
  if ( (unsigned __int16)(a1 - 64) > 0xFFBEu && a1 )
    return HIDWORD(a1);
  RtlSetLastWin32Error(6);
  return 0LL;
}

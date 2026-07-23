/*
 * XREFs of EtwGetTraceEnableLevel @ 0x1800867B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 */

char __fastcall EtwGetTraceEnableLevel(__int64 a1)
{
  if ( (unsigned __int16)(a1 - 64) > 0xFFBEu && a1 )
    return BYTE2(a1);
  RtlSetLastWin32Error(6);
  return 0;
}

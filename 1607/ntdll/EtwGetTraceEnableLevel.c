/*
 * XREFs of EtwGetTraceEnableLevel @ 0x1800867C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 */

char __fastcall EtwGetTraceEnableLevel(__int64 a1)
{
  if ( (unsigned __int16)(a1 - 64) > 0xFFBEu && a1 )
    return BYTE2(a1);
  RtlSetLastWin32Error(6u);
  return 0;
}

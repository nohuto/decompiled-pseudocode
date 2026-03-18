/*
 * XREFs of EtwTraceAuditApiSetWinEventHook @ 0x1C0079EB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqqqqp @ 0x1C00AE820 (Template_qqqqqp.c)
 */

__int64 __fastcall EtwTraceAuditApiSetWinEventHook(int a1, int a2, int a3, char a4, char a5, __int64 a6)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    return Template_qqqqqp(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}

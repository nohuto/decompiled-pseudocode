/*
 * XREFs of EtwTraceTokenStateChangedEvent @ 0x1C00AC3A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqxqttxx @ 0x1C00ADF7C (Template_pqqxqttxx.c)
 */

__int64 __fastcall EtwTraceTokenStateChangedEvent(
        int a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_pqqxqttxx(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}

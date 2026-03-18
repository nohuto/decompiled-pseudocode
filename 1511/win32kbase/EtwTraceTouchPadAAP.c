/*
 * XREFs of EtwTraceTouchPadAAP @ 0x1C00AC4C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqqtq @ 0x1C00AEDB0 (Template_qqqtq.c)
 */

__int64 __fastcall EtwTraceTouchPadAAP(int a1, int a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return Template_qqqtq(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}

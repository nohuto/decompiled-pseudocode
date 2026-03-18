/*
 * XREFs of EtwPhysicalSurfCreateEvent @ 0x1C00744F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_xqxq @ 0x1C00C0388 (Template_xqxq.c)
 */

__int64 __fastcall EtwPhysicalSurfCreateEvent(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xqxq(a1, a2, a3, a1, a2, a3, a4);
  return result;
}

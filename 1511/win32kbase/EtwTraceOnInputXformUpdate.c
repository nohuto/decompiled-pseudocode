/*
 * XREFs of EtwTraceOnInputXformUpdate @ 0x1C0077DC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pxq @ 0x1C00AE0EC (Template_pxq.c)
 */

__int64 __fastcall EtwTraceOnInputXformUpdate(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return Template_pxq(a1, a2, a3, a1, a2, a3);
  return result;
}

/*
 * XREFs of DxgLogEtwEventCb @ 0x1C0022DF0
 * Callers:
 *     <none>
 * Callees:
 *     Template_jchb @ 0x1C0022FF4 (Template_jchb.c)
 */

__int64 __fastcall DxgLogEtwEventCb(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return Template_jchb(a1, a2, a3, a1, a2, a3, a4);
  return result;
}

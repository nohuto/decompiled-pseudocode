/*
 * XREFs of HvlDisableEnlightenment @ 0x1401E4A64
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlDisableEnlightenment(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 1 )
    result = 0x4000LL;
  HvlEnlightenments &= result;
  return result;
}

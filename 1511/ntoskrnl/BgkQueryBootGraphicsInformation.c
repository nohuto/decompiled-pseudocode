/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x1406DB260
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140305D78 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}

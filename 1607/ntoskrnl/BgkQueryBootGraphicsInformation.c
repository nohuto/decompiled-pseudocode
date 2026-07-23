/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140726E70
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140328E20 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}

/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x14075E2A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140353AF0 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}

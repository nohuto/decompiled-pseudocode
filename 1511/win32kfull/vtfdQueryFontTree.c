/*
 * XREFs of vtfdQueryFontTree @ 0x1C01122B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vtfdQueryFontTree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  if ( a2 && a3 && a3 <= *(_DWORD *)(a2 + 36) && a4 == 3 )
    return *(_QWORD *)(a2 + 48LL * (a3 - 1) + 72) + 24LL;
  else
    return 0LL;
}

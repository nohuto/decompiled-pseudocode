/*
 * XREFs of BmfdQueryFontTree @ 0x1C014F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BmfdQueryFontTree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  if ( a2 && a3 && a3 <= *(_DWORD *)(a2 + 28) && a4 == 3 )
    return *(_QWORD *)(88LL * (a3 - 1) + a2 + 112) + 24LL;
  else
    return 0LL;
}

/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x1C02A7910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(__int64 a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0LL;
}

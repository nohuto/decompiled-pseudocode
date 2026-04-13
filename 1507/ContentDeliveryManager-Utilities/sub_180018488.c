/*
 * XREFs of sub_180018488 @ 0x180018488
 * Callers:
 *     sub_18000DF5C @ 0x18000DF5C (sub_18000DF5C.c)
 *     sub_18000EEB0 @ 0x18000EEB0 (sub_18000EEB0.c)
 *     sub_1800101E4 @ 0x1800101E4 (sub_1800101E4.c)
 *     sub_180010494 @ 0x180010494 (sub_180010494.c)
 *     sub_18001066C @ 0x18001066C (sub_18001066C.c)
 *     sub_180010860 @ 0x180010860 (sub_180010860.c)
 *     sub_180010970 @ 0x180010970 (sub_180010970.c)
 *     sub_180010BA0 @ 0x180010BA0 (sub_180010BA0.c)
 *     sub_180010DF0 @ 0x180010DF0 (sub_180010DF0.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall sub_180018488(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rsi
  unsigned __int64 v4; // rbx

  v2 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    LODWORD(v4) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v2, v4, (HSTRING_HEADER *)(string + 1), string);
  return string;
}

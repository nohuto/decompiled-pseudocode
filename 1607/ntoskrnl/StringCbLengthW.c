/*
 * XREFs of StringCbLengthW @ 0x14010D2B8
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     sub_1406BDC4C @ 0x1406BDC4C (sub_1406BDC4C.c)
 *     sub_1406BE068 @ 0x1406BE068 (sub_1406BE068.c)
 *     sub_1406BEA18 @ 0x1406BEA18 (sub_1406BEA18.c)
 *     sub_1406BF57C @ 0x1406BF57C (sub_1406BF57C.c)
 *     sub_1406BFBA8 @ 0x1406BFBA8 (sub_1406BFBA8.c)
 *     sub_1406C0AE4 @ 0x1406C0AE4 (sub_1406C0AE4.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  STRSAFE_PCNZWCH v5; // r9
  size_t v6; // rax
  size_t v7; // r8
  HRESULT v8; // ecx

  v3 = cbMax >> 1;
  v5 = psz;
  v6 = 0LL;
  if ( !psz )
    goto LABEL_12;
  if ( v3 > 0x7FFFFFFF )
    goto LABEL_12;
  v7 = v3;
  v8 = 0;
  if ( !v3 )
    goto LABEL_12;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v6 = v3 - v7;
  else
LABEL_12:
    v8 = -2147024809;
  if ( pcbLength )
  {
    if ( v8 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v6;
  }
  return v8;
}

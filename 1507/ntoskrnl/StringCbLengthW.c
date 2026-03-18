/*
 * XREFs of StringCbLengthW @ 0x1401196B4
 * Callers:
 *     sub_140511984 @ 0x140511984 (sub_140511984.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     sub_1405870FC @ 0x1405870FC (sub_1405870FC.c)
 *     sub_1406FEC28 @ 0x1406FEC28 (sub_1406FEC28.c)
 *     sub_1406FF044 @ 0x1406FF044 (sub_1406FF044.c)
 *     sub_1406FF424 @ 0x1406FF424 (sub_1406FF424.c)
 *     sub_140700570 @ 0x140700570 (sub_140700570.c)
 *     sub_140700DB4 @ 0x140700DB4 (sub_140700DB4.c)
 *     sub_140701190 @ 0x140701190 (sub_140701190.c)
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

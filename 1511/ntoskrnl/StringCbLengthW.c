/*
 * XREFs of StringCbLengthW @ 0x1400E6560
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     sub_140516C6C @ 0x140516C6C (sub_140516C6C.c)
 *     sub_14067A85C @ 0x14067A85C (sub_14067A85C.c)
 *     sub_14067AC78 @ 0x14067AC78 (sub_14067AC78.c)
 *     sub_14067B814 @ 0x14067B814 (sub_14067B814.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
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

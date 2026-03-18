/*
 * XREFs of StringCbLengthW @ 0x1400890C8
 * Callers:
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     sub_1406BDB14 @ 0x1406BDB14 (sub_1406BDB14.c)
 *     sub_1406BDF30 @ 0x1406BDF30 (sub_1406BDF30.c)
 *     sub_1406BE8E0 @ 0x1406BE8E0 (sub_1406BE8E0.c)
 *     sub_1406BF444 @ 0x1406BF444 (sub_1406BF444.c)
 *     sub_1406BFA70 @ 0x1406BFA70 (sub_1406BFA70.c)
 *     sub_1406C09AC @ 0x1406C09AC (sub_1406C09AC.c)
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

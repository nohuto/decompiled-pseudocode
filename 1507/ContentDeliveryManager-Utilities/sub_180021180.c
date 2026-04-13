/*
 * XREFs of sub_180021180 @ 0x180021180
 * Callers:
 *     sub_18000AC84 @ 0x18000AC84 (sub_18000AC84.c)
 *     sub_180018F50 @ 0x180018F50 (sub_180018F50.c)
 *     sub_180021EDC @ 0x180021EDC (sub_180021EDC.c)
 * Callees:
 *     sub_180022A10 @ 0x180022A10 (sub_180022A10.c)
 *     memset @ 0x18002654C (memset.c)
 */

_DWORD *__fastcall sub_180021180(_DWORD *a1)
{
  void *v2; // rax
  signed int v3; // ebx
  __int64 v4; // rsi

  *a1 = 0;
  memset(a1 + 1, 0, 0x2CuLL);
  *a1 = *(_DWORD *)(__lc_handle_func() + 8);
  a1[1] = __lc_codepage_func();
  a1[2] = __mb_cur_max_func();
  v2 = (void *)sub_180022A10(2LL);
  a1[3] = v2 == 0LL;
  free(v2);
  if ( !a1[3] )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      if ( ismbblead(v3) )
        *((_BYTE *)a1 + (v4 >> 3) + 16) |= 1 << (v3 & 7);
      ++v3;
      ++v4;
    }
    while ( v3 < 256 );
  }
  return a1;
}

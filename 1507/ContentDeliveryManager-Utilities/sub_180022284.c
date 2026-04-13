/*
 * XREFs of sub_180022284 @ 0x180022284
 * Callers:
 *     sub_18000AC84 @ 0x18000AC84 (sub_18000AC84.c)
 * Callees:
 *     sub_180022A10 @ 0x180022A10 (sub_180022A10.c)
 */

__int64 __fastcall sub_180022284(__int64 a1)
{
  void *v2; // rax
  const unsigned __int16 *v3; // rax
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  __int128 v6; // xmm1
  const unsigned __int16 *v7; // rax

  *(_DWORD *)a1 = *(_DWORD *)(__lc_handle_func() + 4);
  *(_DWORD *)(a1 + 4) = __lc_codepage_func();
  v2 = calloc(0x100uLL, 2uLL);
  *(_QWORD *)(a1 + 8) = v2;
  if ( v2 )
  {
    v3 = _pctype_func();
    v4 = *(_OWORD **)(a1 + 8);
    v5 = 4LL;
    do
    {
      *v4 = *(_OWORD *)v3;
      v4[1] = *((_OWORD *)v3 + 1);
      v4[2] = *((_OWORD *)v3 + 2);
      v4[3] = *((_OWORD *)v3 + 3);
      v4[4] = *((_OWORD *)v3 + 4);
      v4[5] = *((_OWORD *)v3 + 5);
      v4[6] = *((_OWORD *)v3 + 6);
      v4 += 8;
      v6 = *((_OWORD *)v3 + 7);
      v3 += 64;
      *(v4 - 1) = v6;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(a1 + 16) = 1;
  }
  else
  {
    v7 = _pctype_func();
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 8) = v7;
  }
  *(_QWORD *)(a1 + 24) = sub_180022A10(1LL);
  return a1;
}

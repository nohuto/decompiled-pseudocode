/*
 * XREFs of RtlpWow64CtxFromAmd64 @ 0x1404FC85C
 * Callers:
 *     RtlpWow64GetContextOnAmd64 @ 0x1404FC680 (RtlpWow64GetContextOnAmd64.c)
 * Callees:
 *     RtlFxToFnFrame @ 0x1400F4680 (RtlFxToFnFrame.c)
 */

__int64 __fastcall RtlpWow64CtxFromAmd64(int a1, __int64 a2, int *a3)
{
  int v3; // esi
  __int64 v6; // rdx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  v3 = a1;
  if ( (a1 & 0x10001) == 0x10001 )
  {
    a3[45] = *(_DWORD *)(a2 + 160);
    a3[47] = 35;
    a3[46] = *(_DWORD *)(a2 + 248);
    a3[50] = 43;
    a3[49] = *(_DWORD *)(a2 + 152);
    a3[48] = *(_DWORD *)(a2 + 68);
  }
  if ( (a1 & 0x10002) == 0x10002 )
  {
    a3[39] = *(_DWORD *)(a2 + 176);
    a3[40] = *(_DWORD *)(a2 + 168);
    a3[41] = *(_DWORD *)(a2 + 144);
    a3[42] = *(_DWORD *)(a2 + 136);
    a3[43] = *(_DWORD *)(a2 + 128);
    a3[44] = *(_DWORD *)(a2 + 120);
  }
  if ( (a1 & 0x10004) == 0x10004 )
  {
    a3[35] = 43;
    a3[37] = 43;
    a3[38] = 43;
    a3[36] = 83;
  }
  if ( (a1 & 0x10020) == 0x10020 )
  {
    v6 = 2LL;
    v7 = a3 + 51;
    v8 = (_OWORD *)(a2 + 256);
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      v9 = v8[7];
      v8 += 8;
      *(v7 - 1) = v9;
      --v6;
    }
    while ( v6 );
    *v7 = *v8;
    v7[1] = v8[1];
  }
  if ( (v3 & 0x10008) == 0x10008 )
  {
    a3[34] = 0;
    RtlFxToFnFrame(a3 + 7, (unsigned __int16 *)(a2 + 256));
  }
  if ( (v3 & 0x10010) == 0x10010 )
  {
    if ( (*(_DWORD *)(a2 + 112) & 0x355LL) != 0 )
    {
      a3[1] = *(_DWORD *)(a2 + 72);
      a3[2] = *(_DWORD *)(a2 + 80);
      a3[3] = *(_DWORD *)(a2 + 88);
      a3[4] = *(_DWORD *)(a2 + 96);
      a3[5] = *(_DWORD *)(a2 + 104);
      a3[6] = *(_DWORD *)(a2 + 112) & 0xFFFF0155;
    }
    else
    {
      a3[1] = 0;
      a3[2] = 0;
      a3[3] = 0;
      a3[4] = 0;
      a3[5] = 0;
      a3[6] = 0;
    }
  }
  if ( (v3 & 0x40000000) != 0 )
    v3 = *(_DWORD *)(a2 + 48) ^ (*(_DWORD *)(a2 + 48) ^ v3) & 0x67FFFFFF;
  *a3 = v3;
  return 0LL;
}

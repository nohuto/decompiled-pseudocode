/*
 * XREFs of RtlpWow64CtxToAmd64 @ 0x1404FD838
 * Callers:
 *     RtlpWow64SetContextOnAmd64 @ 0x1404FD654 (RtlpWow64SetContextOnAmd64.c)
 * Callees:
 *     RtlFnToFxFrame @ 0x1400F4F10 (RtlFnToFxFrame.c)
 */

__int64 __fastcall RtlpWow64CtxToAmd64(unsigned int a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  _QWORD *v10; // rcx
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 v13; // rax

  v5 = a1;
  if ( *(_WORD *)(a3 + 56) != 35 )
    v5 = a1 & 0xFFFEFFF8 | 0x10000;
  if ( (v5 & 0x10001) == 0x10001 )
  {
    *(_WORD *)(a3 + 56) = 35;
    *(_WORD *)(a3 + 66) = 43;
    *(_QWORD *)(a3 + 248) = (unsigned int)a2[46];
    *(_QWORD *)(a3 + 160) = (unsigned int)a2[45];
    *(_QWORD *)(a3 + 152) = (unsigned int)a2[49];
    *(_DWORD *)(a3 + 68) = a2[48];
  }
  if ( (v5 & 0x10002) == 0x10002 )
  {
    *(_QWORD *)(a3 + 176) = (unsigned int)a2[39];
    *(_QWORD *)(a3 + 168) = (unsigned int)a2[40];
    *(_QWORD *)(a3 + 144) = (unsigned int)a2[41];
    *(_QWORD *)(a3 + 136) = (unsigned int)a2[42];
    *(_QWORD *)(a3 + 128) = (unsigned int)a2[43];
    *(_QWORD *)(a3 + 120) = (unsigned int)a2[44];
  }
  if ( (v5 & 0x10020) == 0x10020 )
  {
    v6 = 2LL;
    v7 = (_OWORD *)(a3 + 256);
    v8 = a2 + 51;
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
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a3 + 280);
  }
  if ( (v5 & 0x10008) == 0x10008 )
    RtlFnToFxFrame(a3 + 256, (__int64)(a2 + 7));
  if ( (v5 & 0x10010) == 0x10010 )
  {
    v10 = (_QWORD *)(a3 + 72);
    v11 = 6LL;
    v12 = a2 + 1;
    do
    {
      v13 = *v12++;
      *v10++ = v13;
      --v11;
    }
    while ( v11 );
    if ( (a2[6] & 0x55) == 0 && (a2[1] || a2[2] || a2[3] || a2[4]) )
      *(_QWORD *)(a3 + 112) |= 0x100uLL;
  }
  return 0LL;
}

/*
 * XREFs of KiInitializeContextThread @ 0x1400EEAC0
 * Callers:
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 * Callees:
 *     KxContextToKframes @ 0x1400847BC (KxContextToKframes.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

unsigned __int64 __fastcall KiInitializeContextThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  __int64 v5; // rbx
  _OWORD *v8; // rdi
  unsigned __int64 v9; // r14
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // r15
  __int128 v22; // xmm1
  _QWORD *v23; // rbx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 result; // rax
  _BYTE v32[48]; // [rsp+40h] [rbp-508h] BYREF
  int v33; // [rsp+70h] [rbp-4D8h]
  __int16 v34; // [rsp+78h] [rbp-4D0h]
  __int16 v35; // [rsp+82h] [rbp-4C6h]

  v5 = *(_QWORD *)(a1 + 40);
  v8 = a5;
  v9 = (v5 - (unsigned int)KeXStateLength) & 0xFFFFFFFFFFFFFFC0uLL;
  v11 = (_QWORD *)(v9 - 48);
  memset((void *)(v9 - 48), 0, v5 - (v9 - 48));
  *v11 = v5;
  v11[1] = v5 - (unsigned int)KeKernelStackSize;
  *(_DWORD *)(v9 + 24) = 8064;
  if ( a5 )
  {
    v12 = 9LL;
    v13 = v32;
    do
    {
      v14 = v8[1];
      *v13 = *v8;
      v15 = v8[2];
      v13[1] = v14;
      v16 = v8[3];
      v13[2] = v15;
      v17 = v8[4];
      v13[3] = v16;
      v18 = v8[5];
      v13[4] = v17;
      v19 = v8[6];
      v13[5] = v18;
      v20 = v8[7];
      v8 += 8;
      v13[6] = v19;
      v13 += 8;
      *(v13 - 1) = v20;
      --v12;
    }
    while ( v12 );
    v21 = v9 - 448;
    v22 = v8[1];
    v23 = (_QWORD *)(v9 - 768);
    *v13 = *v8;
    v24 = v8[2];
    v13[1] = v22;
    v25 = v8[3];
    v13[2] = v24;
    v26 = v8[4];
    v27 = v9 - 832;
    v13[3] = v25;
    v13[4] = v26;
    v33 = v33 & 6 | 0x100001;
    v34 = 51;
    v35 = 43;
    memset((void *)(v9 - 768), 0, 0x140uLL);
    memset((void *)(v9 - 448), 0, 0x190uLL);
    *(_BYTE *)(v21 + 43) = 1;
    KxContextToKframes(v9 - 448, v9 - 768, (__int64)v32, v33, 1);
    v23[2] = a2;
    v23[39] = &KiStartUserThreadReturn;
    *v23 = a4;
    v23[1] = a3;
    *(_QWORD *)(v9 - 832 + 56) = &KiStartUserThread;
    *(_WORD *)v9 = 639;
    *(_DWORD *)(v21 + 44) = 8064;
    if ( (KeFeatureBits & 0x800000) != 0 )
      *(_QWORD *)(v9 + 512) = 1LL;
    v28 = MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(a1 + 562) = 1;
    v29 = v28 | 1;
  }
  else
  {
    v27 = v9 - 160;
    *(_QWORD *)(v9 - 80) = a2;
    v21 = 0LL;
    *(_QWORD *)(v9 - 56) = 0LL;
    *(_QWORD *)(v9 - 96) = a4;
    *(_QWORD *)(v9 - 88) = a3;
    *(_QWORD *)(v9 - 160 + 56) = KxStartSystemThread;
    v29 = MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL;
    *(_BYTE *)(a1 + 562) = 0;
  }
  *(_QWORD *)(a1 + 592) = v29;
  *(_QWORD *)(v27 + 48) = v21 + 128;
  result = 0xFFFFF780000003D8uLL;
  *(_BYTE *)(v27 + 40) = 1;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    result = MEMORY[0xFFFFF780000003EC];
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = 0x8000000000000003uLL;
      *(_QWORD *)(v9 + 520) = 0x8000000000000003uLL;
    }
  }
  *(_QWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 88) = v27;
  *(_QWORD *)(a1 + 96) = v9;
  return result;
}

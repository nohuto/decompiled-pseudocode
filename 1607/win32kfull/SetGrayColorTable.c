/*
 * XREFs of SetGrayColorTable @ 0x1C000D2AC
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00F36D4 (AAHalftoneBitmap.c)
 *     GetDstBFInfo @ 0x1C024A770 (GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGrayColorTable(_OWORD *a1, __int64 a2)
{
  int v2; // r11d
  unsigned __int8 *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  _OWORD *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r8
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  _OWORD *v17; // r8
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  _OWORD *v21; // rdx
  _OWORD *v22; // rax
  __int128 v23; // xmm1

  v2 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) )
  {
    v4 = *(unsigned __int8 **)(a2 + 80);
    if ( a1 )
    {
      do
      {
        v5 = v4[2] + 512;
        v6 = v4[1] + 256;
        v7 = *v4;
        v4 += 4;
        *(v4 - 1) = (unsigned __int16)(*((_WORD *)a1 + 2 * v7) + *((_WORD *)a1 + 2 * v6) + *((_WORD *)a1 + 2 * v5)) >> 8;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        v8 = 19595 * v4[2];
        v9 = 38469 * v4[1];
        v10 = *v4;
        v4 += 4;
        *(v4 - 1) = (7471 * v10 + v9 + v8 + 0x7FFF) / 0xFFFFu;
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    v11 = *(_OWORD **)(a2 + 8);
    if ( a1 != v11 )
    {
      v12 = 8LL;
      v13 = 8LL;
      v14 = &v11[64 * *(unsigned __int8 *)(a2 + 68)];
      v15 = a1;
      do
      {
        *v14 = *v15;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        v14[4] = v15[4];
        v14[5] = v15[5];
        v14[6] = v15[6];
        v14 += 8;
        v16 = v15[7];
        v15 += 8;
        *(v14 - 1) = v16;
        --v13;
      }
      while ( v13 );
      v17 = (_OWORD *)(*(_QWORD *)(a2 + 8) + 4LL * (*(unsigned __int8 *)(a2 + 67) << 8));
      v18 = 8LL;
      v19 = a1 + 64;
      do
      {
        *v17 = *v19;
        v17[1] = v19[1];
        v17[2] = v19[2];
        v17[3] = v19[3];
        v17[4] = v19[4];
        v17[5] = v19[5];
        v17[6] = v19[6];
        v17 += 8;
        v20 = v19[7];
        v19 += 8;
        *(v17 - 1) = v20;
        --v18;
      }
      while ( v18 );
      v21 = (_OWORD *)(*(_QWORD *)(a2 + 8) + 4LL * (*(unsigned __int8 *)(a2 + 66) << 8));
      v22 = a1 + 128;
      do
      {
        *v21 = *v22;
        v21[1] = v22[1];
        v21[2] = v22[2];
        v21[3] = v22[3];
        v21[4] = v22[4];
        v21[5] = v22[5];
        v21[6] = v22[6];
        v21 += 8;
        v23 = v22[7];
        v22 += 8;
        *(v21 - 1) = v23;
        --v12;
      }
      while ( v12 );
    }
  }
}

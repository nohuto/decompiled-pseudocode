/*
 * XREFs of GrayFastExpAA_CX @ 0x1C02581E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayFastExpAA_CX(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // r12
  unsigned __int16 v9; // r14
  unsigned __int8 *v10; // rsi
  unsigned __int16 v11; // r15
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  int v14; // edx
  int v15; // r11d
  int v16; // r8d
  _WORD *v17; // rdi
  _WORD *v18; // rdi
  _WORD *v19; // rdi
  int v20; // ecx
  int v21; // r11d
  _WORD *v22; // rdi
  _WORD *v23; // rdi
  int v24; // ecx
  int v25; // ecx
  int v26; // r9d
  _WORD *v27; // rdi
  int v28; // edx

  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a1 + 80);
    v6 = *(unsigned __int16 **)(a1 + 88);
    v9 = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2 - 1)];
    v10 = (unsigned __int8 *)(v5 + a2 + 1);
    v11 = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2)];
    while ( 1 )
    {
      v12 = *v10;
      v13 = v9;
      v14 = *v6;
      v9 = v11;
      ++v10;
      ++v6;
      v11 = GrayIdxWORD[v12];
      if ( v14 == 1 )
        break;
      switch ( v14 )
      {
        case 2:
          v28 = 3 * v9;
          *a3 = (v28 + v13 + 2) >> 2;
          a3 = (_WORD *)((char *)a3 + a5);
          v25 = (v11 + v28 + 2) >> 2;
          goto LABEL_16;
        case 3:
          v26 = 2 * v9;
          *a3 = (v13 + v9 + 2 * (v26 + v13 + 2)) >> 3;
          v27 = (_WORD *)((char *)a3 + a5);
          *v27 = (v11 + 14 * v9 + v13 + 8) >> 4;
          a3 = (_WORD *)((char *)v27 + a5);
          v24 = v9 + v11 + 2 * (v26 + v11 + 2);
LABEL_11:
          v25 = v24 >> 3;
LABEL_16:
          *a3 = v25;
          goto LABEL_17;
        case 4:
          v21 = 2 * v9;
          *a3 = (v13 + v9 + 2 * (v21 + v13 + 2)) >> 3;
          v22 = (_WORD *)((char *)a3 + a5);
          *v22 = (v13 + 4 * v9 + 8 + v11 + 2 * (v13 + 4 * v9)) >> 4;
          v23 = (_WORD *)((char *)v22 + a5);
          *v23 = (v11 + 4 * v9 + 8 + v13 + 2 * (v11 + 4 * v9)) >> 4;
          a3 = (_WORD *)((char *)v23 + a5);
          v24 = v9 + v11 + 2 * (v21 + v11 + 2);
          goto LABEL_11;
        case 5:
          v15 = 19 * v9;
          v16 = 25 * v9;
          *a3 = (v15 + 13 * v13 + 16) >> 5;
          v17 = (_WORD *)((char *)a3 + a5);
          *v17 = (v16 + v11 + 2 * (v13 + 2 * (v13 + 4))) >> 5;
          v18 = (_WORD *)((char *)v17 + a5);
          *v18 = (v13 + v11 + 2 * (v13 + v11 + 13 * v9 + 8)) >> 5;
          v19 = (_WORD *)((char *)v18 + a5);
          *v19 = (v13 + v16 + 2 * (v11 + 2 * (v11 + 4))) >> 5;
          a3 = (_WORD *)((char *)v19 + a5);
          v20 = 13 * v11 + v15 + 16;
          goto LABEL_15;
      }
      a3 = (_WORD *)((char *)a3 + (unsigned int)(a5 * (v14 - 1)));
LABEL_17:
      a3 = (_WORD *)((char *)a3 + a5);
      if ( a3 == a4 )
        return;
    }
    v20 = v13 + v11 + 2 * (v9 + 2 * (v13 + v9 + v11 + 4 * (v9 + 1)));
LABEL_15:
    v25 = v20 >> 5;
    goto LABEL_16;
  }
}

/*
 * XREFs of GrayFastExpAA_CX @ 0x140309F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayFastExpAA_CX(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  unsigned __int16 *v5; // r12
  __int64 v6; // rcx
  unsigned __int8 *v8; // r13
  unsigned __int16 v9; // r15
  int v10; // ebp
  __int64 v11; // rax
  int v12; // edx
  int v13; // r10d
  int v14; // r8d
  int v15; // ebx
  int v16; // edi
  int v17; // ecx
  int v18; // r9d
  int v19; // r11d
  _WORD *v20; // r9
  unsigned int v21; // ecx
  int v22; // edi
  _WORD *v23; // r9
  int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  _WORD *v27; // rdx
  unsigned __int16 v28; // [rsp+40h] [rbp+10h]

  if ( a2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 88);
    v6 = *(unsigned __int8 *)(a1 + 80);
    v8 = (unsigned __int8 *)(v6 + a2 + 1);
    v9 = GrayIdxWORD[*(unsigned __int8 *)(v6 + a2 - 1)];
    LOWORD(v10) = GrayIdxWORD[*(unsigned __int8 *)(v6 + a2)];
    while ( 1 )
    {
      v11 = *v8++;
      v12 = *v5++;
      v13 = (unsigned __int16)v10;
      v14 = (unsigned __int16)v10;
      v15 = (unsigned __int16)v10;
      v16 = (unsigned __int16)v10;
      v17 = v9;
      v18 = v9;
      v19 = v9;
      v28 = v9;
      v9 = v10;
      v10 = (unsigned __int16)GrayIdxWORD[v11];
      if ( v12 == 1 )
        break;
      switch ( v12 )
      {
        case 2:
          *a3 = (unsigned int)(v17 + 3 * v14 + 2) >> 2;
          a3 = (_WORD *)((char *)a3 + a5);
          v26 = (unsigned int)(v10 + 3 * v14 + 2) >> 2;
          goto LABEL_16;
        case 3:
          v27 = (_WORD *)((char *)a3 + a5);
          *a3 = (unsigned int)(v18 + v14 + 2 * (2 * v14 + v18 + 2)) >> 3;
          a3 = (_WORD *)((char *)v27 + a5);
          *v27 = (unsigned int)(v18 + 14 * v14 + v10 + 8) >> 4;
          v25 = v10 + v14 + 2 * (2 * v14 + v10 + 2);
LABEL_11:
          v26 = v25 >> 3;
LABEL_16:
          *a3 = v26;
          goto LABEL_17;
        case 4:
          v22 = v15;
          v23 = (_WORD *)((char *)a3 + a5);
          v24 = 2 * v15;
          *a3 = (unsigned int)(v19 + v22 + 2 * (v24 + v19 + 2)) >> 3;
          a3 = &v23[a5];
          *v23 = (unsigned int)(4 * v22 + v19 + 8 + v10 + 2 * (4 * v22 + v19)) >> 4;
          *(_WORD *)((char *)v23 + a5) = (unsigned int)(4 * v22 + v10 + 8 + v19 + 2 * (4 * v22 + v10)) >> 4;
          v25 = v22 + v10 + 2 * (v24 + v10 + 2);
          goto LABEL_11;
        case 5:
          v20 = (_WORD *)((char *)a3 + a5);
          *a3 = (19 * v16 + 13 * (unsigned int)v28 + 16) >> 5;
          *v20 = (v10 + 25 * v16 + 2 * (v28 + 2 * ((unsigned int)v28 + 4))) >> 5;
          a3 = (_WORD *)((char *)&v20[a5] + a5);
          *(_WORD *)((char *)v20 + a5) = (v28 + v10 + 2 * ((unsigned int)v28 + v10 + 13 * v16 + 8)) >> 5;
          v20[a5] = (25 * v16 + 6 * v10 + (unsigned int)v28 + 16) >> 5;
          v21 = 13 * v10 + 19 * v16 + 16;
          goto LABEL_15;
      }
      a3 = (_WORD *)((char *)a3 + (unsigned int)(a5 * (v12 - 1)));
LABEL_17:
      a3 = (_WORD *)((char *)a3 + a5);
      if ( a3 == a4 )
        return;
    }
    v21 = v10 + v17 + 22 * v13 + 4 * (v10 + 4 + v17);
LABEL_15:
    v26 = v21 >> 5;
    goto LABEL_16;
  }
}

/*
 * XREFs of ?vPatCpyRect4_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C1470
 * Callers:
 *     ?vBrushPath4_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02CCAB0 (-vBrushPath4_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJ11@Z @ 0x1C02C28BC (-vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJ11@Z.c)
 */

void __fastcall vPatCpyRect4_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _RECTL *v3; // rsi
  int v5; // ebp
  unsigned int *v6; // rdi
  unsigned int *v7; // r14
  char *v8; // r9
  char v9; // r11
  char *v10; // r8
  char v11; // al
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  unsigned int v15; // r15d
  int v16; // r12d
  int v17; // r9d
  int v18; // [rsp+70h] [rbp-58h]
  char v19; // [rsp+78h] [rbp-50h] BYREF
  char v20; // [rsp+7Ah] [rbp-4Eh] BYREF
  __int64 v21; // [rsp+98h] [rbp-30h] BYREF

  v3 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 8) )
  {
    v6 = (unsigned int *)&v19;
    v7 = (unsigned int *)&v21;
    v8 = &v20;
    v9 = 4 * *((_BYTE *)a1 + 32);
    v10 = (char *)(*((_QWORD *)a1 + 1) + 2LL);
    do
    {
      HIBYTE(v18) = *(v10 - 2);
      BYTE2(v18) = *(v10 - 1);
      v11 = *v10;
      v10 += 4;
      BYTE1(v18) = v11;
      LOBYTE(v18) = *(v10 - 3);
      v12 = __ROR4__(v18, v9);
      v8[1] = v12;
      *v8 = BYTE1(v12);
      *(v8 - 1) = BYTE2(v12);
      *(v8 - 2) = HIBYTE(v12);
      v8 += 4;
    }
    while ( v8 - 2 < (char *)&v21 );
  }
  else
  {
    v6 = (unsigned int *)*((_QWORD *)a1 + 1);
    v7 = v6 + 8;
  }
  do
  {
    v13 = dword_1C02F29B8[v3->left & 7];
    v14 = ~v13;
    v15 = dword_1C02F29B8[v3->right & 7];
    if ( !v15 )
      v15 = -1;
    v16 = (int)(((v3->right >> 1) & 0xFFFFFFFC) - (((v3->left + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v16 == -1 )
      goto LABEL_19;
    if ( !v16 )
    {
      if ( v13 && v15 != -1 )
      {
        v17 = 8;
        goto LABEL_20;
      }
LABEL_19:
      v14 &= v15;
      v17 = 9;
      v13 = ~v14;
      goto LABEL_20;
    }
    if ( (unsigned int)(v16 - 1) > 8 )
    {
      if ( v13 )
        v17 = v15 == -1;
      else
        v17 = 3 - (v15 != -1);
    }
    else if ( v13 )
    {
      v17 = 5 - (v15 != -1);
    }
    else
    {
      v17 = 7 - (v15 != -1);
    }
LABEL_20:
    vPatternCopyLoop(
      v3,
      (unsigned int *)(*(_QWORD *)a1 + (((__int64)v3->left >> 1) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + *((_DWORD *)a1 + 4) * v3->top),
      a1,
      v17,
      v15,
      v14,
      ~v15,
      v13,
      v16,
      v5,
      8 * v5,
      v6,
      v7);
    ++v3;
    --a2;
  }
  while ( a2 );
}

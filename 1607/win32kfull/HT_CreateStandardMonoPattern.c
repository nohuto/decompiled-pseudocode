/*
 * XREFs of HT_CreateStandardMonoPattern @ 0x1C024A0C0
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C027D154 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     pDCIAdjClr @ 0x1C00F3FD4 (pDCIAdjClr.c)
 *     GetCachedSMP @ 0x1C0249C30 (GetCachedSMP.c)
 *     HT_CreateHalftoneBrush @ 0x1C0249F68 (HT_CreateHalftoneBrush.c)
 *     ComputeBytesPerScanLine @ 0x1C024A6D8 (ComputeBytesPerScanLine.c)
 */

__int64 __fastcall HT_CreateStandardMonoPattern(__int64 a1, __int16 *a2)
{
  unsigned __int8 v2; // si
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int16 v10; // r10
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r10
  int v13; // r11d
  __int64 v14; // rdx
  char v15; // cl
  __int16 v16; // ax
  unsigned int CachedSMP; // eax
  unsigned int v18; // ebx
  _DWORD v19[4]; // [rsp+40h] [rbp-20h] BYREF
  int *v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *((_BYTE *)a2 + 3);
  if ( v2 > 0x76u )
    return 4294967269LL;
  v21 = 0;
  v6 = pDCIAdjClr(a1, 0LL, 0LL, 0, 0, 0, &v22);
  v7 = v6;
  if ( !v6 )
    return v22;
  if ( v2 < 0x12u )
  {
    CachedSMP = GetCachedSMP(v6, (unsigned __int8 *)a2);
LABEL_14:
    v18 = CachedSMP;
    goto LABEL_15;
  }
  v8 = *(unsigned __int16 *)(v6 + 166);
  v10 = *(_WORD *)(v6 + 170);
  BYTE2(v22) = *((_BYTE *)a2 + 2);
  v9 = BYTE2(v22);
  a2[4] = v8;
  a2[5] = v10;
  v11 = ComputeBytesPerScanLine(1LL, v9, v8);
  v14 = *((_QWORD *)a2 + 2);
  a2[3] = v11;
  if ( v14 )
  {
    v15 = v13;
    BYTE1(v21) = 118 - v2;
    v20 = &v21;
    v16 = *a2;
    LOBYTE(v21) = 118 - v2;
    v19[0] = 196864;
    if ( (v16 & 2) != 0 )
      v15 = v13 + 2;
    v19[1] = 100;
    LOBYTE(v22) = v15;
    v19[2] = v13;
    if ( ((unsigned __int8)v16 & (unsigned __int8)v13) == 0 )
      LOBYTE(v22) = v15 | 8;
    BYTE1(v22) = v13;
    HIBYTE(v22) = 0;
    CachedSMP = HT_CreateHalftoneBrush(a1, 0LL, (__int64)v19, v22, v14);
    goto LABEL_14;
  }
  v18 = v12 * v11;
LABEL_15:
  EngReleaseSemaphore(*(HSEMAPHORE *)(v7 + 8));
  return v18;
}

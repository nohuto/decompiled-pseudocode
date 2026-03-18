/*
 * XREFs of HT_CreateHalftoneBrush @ 0x1C024D928
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     HT_CreateStandardMonoPattern @ 0x1C01147D4 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     pDCIAdjClr @ 0x1C00A57C8 (pDCIAdjClr.c)
 *     ComputeBytesPerScanLine @ 0x1C0114F90 (ComputeBytesPerScanLine.c)
 *     CreateHalftoneBrushPat @ 0x1C024F4A4 (CreateHalftoneBrushPat.c)
 */

__int64 __fastcall HT_CreateHalftoneBrush(__int64 a1, __m128i *a2, __int64 a3, int a4, __int64 a5)
{
  __int16 v7; // cx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // r10
  unsigned int v13; // ebx
  int HalftoneBrushPat; // eax
  unsigned int v15; // [rsp+40h] [rbp-10h] BYREF
  PVOID pv; // [rsp+48h] [rbp-8h] BYREF
  int v17; // [rsp+80h] [rbp+30h]

  pv = 0LL;
  if ( !a3 || *(_DWORD *)(a3 + 8) != 1 || !*(_QWORD *)(a3 + 16) )
    return 4294967262LL;
  BYTE1(v17) = *(_BYTE *)(a3 + 3);
  v7 = 16;
  LOBYTE(v17) = 0;
  HIBYTE(v17) = BYTE1(a4);
  BYTE2(v17) = HIBYTE(a4);
  if ( (a4 & 1) != 0 || BYTE1(a4) == 1 )
    v7 = 17;
  if ( (a4 & 4) != 0 )
    v7 |= 2u;
  if ( (a4 & 2) != 0 )
    v7 |= 4u;
  if ( (a4 & 0x10) != 0 )
    v7 |= 8u;
  v8 = a5;
  v9 = pDCIAdjClr(a1, a2, (char **)((unsigned __int64)&pv & -(__int64)(a5 != 0)), 0, v7, v17, &v15);
  if ( !v9 )
    return v15;
  v11 = ComputeBytesPerScanLine(BYTE1(a4), BYTE2(a4), *(unsigned __int16 *)(v9 + 166));
  v13 = v11 * *(unsigned __int16 *)(v12 + 170);
  if ( a5 )
  {
    if ( (a4 & 8) != 0 )
    {
      v8 = (int)(v13 - v11) + a5;
      v11 = -v11;
    }
    HalftoneBrushPat = CreateHalftoneBrushPat(v12, a3, pv, v8, v11);
    if ( HalftoneBrushPat <= 0 )
      v13 = HalftoneBrushPat;
    EngFreeMem(pv);
  }
  else
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(v12 + 8));
  }
  return v13;
}

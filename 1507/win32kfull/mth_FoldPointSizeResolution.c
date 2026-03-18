/*
 * XREFs of mth_FoldPointSizeResolution @ 0x1C00BA6A8
 * Callers:
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 * Callees:
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 */

__int64 __fastcall mth_FoldPointSizeResolution(int a1, __int16 a2, __int16 a3, int *a4)
{
  __int64 v4; // rbx
  int v6; // eax
  int fixed; // eax
  int v8; // ecx
  int v9; // r10d
  int v10; // eax
  int v11; // ecx
  int v12; // r10d
  __int64 v13; // r11
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // r10d
  int v18; // eax
  int v19; // ecx
  int v20; // r10d
  __int64 result; // rax

  v4 = a2;
  v6 = CompDiv(72LL, a1 * (__int64)a3);
  fixed = FixMul(a4[1], v6);
  v8 = a4[4];
  a4[1] = fixed;
  v10 = FixMul(v8, v9);
  v11 = a4[7];
  a4[4] = v10;
  a4[7] = FixMul(v11, v12);
  v14 = CompDiv(72LL, v13 * v4);
  v15 = FixMul(*a4, v14);
  v16 = a4[3];
  *a4 = v15;
  v18 = FixMul(v16, v17);
  v19 = a4[6];
  a4[3] = v18;
  result = FixMul(v19, v20);
  a4[6] = result;
  return result;
}

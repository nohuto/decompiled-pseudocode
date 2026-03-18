/*
 * XREFs of mth_FoldPointSizeResolution @ 0x1C001BA58
 * Callers:
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall mth_FoldPointSizeResolution(int a1, __int16 a2, __int16 a3, unsigned int *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned int fixed; // eax
  __int64 v9; // rcx
  unsigned int v10; // r10d
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r10d
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r10d
  __int64 v26; // r8
  __int64 result; // rax

  v4 = a2;
  v6 = CompDiv(72LL, a1 * (__int64)a3);
  fixed = FixMul(a4[1], v6, v7);
  v9 = a4[4];
  a4[1] = fixed;
  v12 = FixMul(v9, v10, v11);
  v13 = a4[7];
  a4[4] = v12;
  a4[7] = FixMul(v13, v14, v15);
  v17 = CompDiv(72LL, v16 * v4);
  v19 = FixMul(*a4, v17, v18);
  v20 = a4[3];
  *a4 = v19;
  v23 = FixMul(v20, v21, v22);
  v24 = a4[6];
  a4[3] = v23;
  result = FixMul(v24, v25, v26);
  a4[6] = result;
  return result;
}

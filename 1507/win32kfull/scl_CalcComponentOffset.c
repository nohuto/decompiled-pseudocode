/*
 * XREFs of scl_CalcComponentOffset @ 0x1C00B9D20
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00B991C (fsg_MergeGlyphData.c)
 * Callees:
 *     mth_max_abs @ 0x1C00AB868 (mth_max_abs.c)
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     InvokeGlobalGSScale @ 0x1C00B9E24 (InvokeGlobalGSScale.c)
 *     scl_ScaleBack @ 0x1C011DEF4 (scl_ScaleBack.c)
 */

__int64 __fastcall scl_CalcComponentOffset(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int *a9,
        int *a10)
{
  __int64 v11; // r8
  int v14; // eax
  int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  int v19; // edx
  __int16 v20; // cx
  unsigned int v21; // eax
  __int16 v22; // cx
  int v23; // eax
  __int64 v24; // r8
  int v25; // r9d
  int v26; // r10d
  int v27; // r10d
  int v28; // edx

  v11 = (unsigned int)a2;
  if ( a5 )
  {
    v14 = InvokeGlobalGSScale(*(unsigned int *)(a1 + 184), a1 + 264, v11);
    v15 = a9;
    v16 = a1 + 280;
    *a9 = v14;
    v17 = *(unsigned int *)(a1 + 188);
  }
  else
  {
    v23 = InvokeGlobalGSScale(*(unsigned int *)(a1 + 176), a1 + 232, v11);
    v15 = a9;
    v16 = a1 + 248;
    *a9 = v23;
    v17 = *(unsigned int *)(a1 + 180);
  }
  result = InvokeGlobalGSScale(v17, v16, (unsigned int)a3);
  *a10 = result;
  if ( a6 )
  {
    mth_max_abs(*a7, a7[1]);
    v26 = mth_max_abs(*(_DWORD *)(v24 + 12), *(_DWORD *)(v24 + 16));
    result = 0x10000LL;
    if ( v25 != 0x10000 || v26 != 0x10000 )
    {
      *v15 = FixMul(*v15, v25);
      result = FixMul(*a10, v27);
      *a10 = result;
    }
  }
  if ( a4 )
  {
    v20 = *(_WORD *)(a1 + 452);
    v19 = a8;
    if ( (v20 & 1) != 0 && (a8 == 2 || (a8 == 0) != (v20 & 4)) )
      v21 = (*v15 + 2) & 0xFFFFFFFC;
    else
      v21 = (*v15 + 32) & 0xFFFFFFC0;
    *v15 = v21;
    v22 = *(_WORD *)(a1 + 452);
    if ( (v22 & 1) != 0 && (a8 == 2 || (a8 == 0) == (v22 & 4)) )
      result = (*a10 + 2) & 0xFFFFFFFC;
    else
      result = (*a10 + 32) & 0xFFFFFFC0;
    *a10 = result;
  }
  if ( !a5 )
  {
    scl_ScaleBack(a1 + 232, v19, (_DWORD)v15, (_DWORD)v15, 1);
    return scl_ScaleBack((int)a1 + 248, v28, (_DWORD)a10, (_DWORD)a10, 1);
  }
  return result;
}

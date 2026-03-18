/*
 * XREFs of vCheckForSingularXform @ 0x1C001A658
 * Callers:
 *     bNewXform @ 0x1C0019E50 (bNewXform.c)
 * Callees:
 *     iHipot @ 0x1C001A758 (iHipot.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall vCheckForSingularXform(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // esi
  unsigned int v4; // eax
  __int64 v5; // r8
  int fixed; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // edi
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // r10d
  int v14; // r11d
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r10d
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r10d
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r10d
  __int64 v28; // r8
  int v29; // r11d

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int16 *)(v1 + 308) << 16;
  v4 = iHipot(*(unsigned int *)(a1 + 96), *(unsigned int *)(a1 + 92));
  fixed = FixMul(v4, v3, v5);
  if ( (int)(((fixed >> 15) + 1) & 0xFFFFFFFE) < 4 )
  {
    *(_DWORD *)(a1 + 116) |= 0x20u;
    if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      v10 = -1;
      v11 = -1;
      if ( *(int *)(a1 + 96) >= 0 )
        v11 = 1;
      if ( *(int *)(a1 + 80) >= 0 )
        v10 = 1;
      v12 = CompDiv(*(unsigned __int16 *)(v1 + 308), 0x20000LL);
      *(_DWORD *)(a1 + 96) = v12;
      if ( v14 != v13 )
        v12 = CompDiv(v13, v14 * (__int64)v12);
      *(_DWORD *)(a1 + 80) = v12;
      if ( v11 < 0 )
        *(_DWORD *)(a1 + 96) = -*(_DWORD *)(a1 + 96);
      if ( v10 < 0 )
        *(_DWORD *)(a1 + 80) = -*(_DWORD *)(a1 + 80);
    }
    else
    {
      v15 = CompDiv((unsigned int)fixed, 0x200000000LL);
      v17 = FixMul(*(unsigned int *)(a1 + 80), v15, v16);
      v18 = *(unsigned int *)(a1 + 84);
      *(_DWORD *)(a1 + 80) = v17;
      v21 = FixMul(v18, v19, v20);
      v22 = *(unsigned int *)(a1 + 92);
      *(_DWORD *)(a1 + 84) = v21;
      v25 = FixMul(v22, v23, v24);
      v26 = *(unsigned int *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v25;
      *(_DWORD *)(a1 + 96) = FixMul(v26, v27, v28);
      *(float *)(a1 + 56) = (float)v29 * 0.000015258789;
      *(float *)(a1 + 68) = (float)*(int *)(a1 + 96) * 0.000015258789;
      *(float *)(a1 + 60) = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a1 + 64) = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
    }
  }
  v7 = iHipot(*(unsigned int *)(a1 + 80), *(unsigned int *)(a1 + 84));
  result = FixMul(v7, v3, v8);
  if ( (int)result <= 0x8000 )
    *(_DWORD *)(a1 + 116) |= 8u;
  return result;
}

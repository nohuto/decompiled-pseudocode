/*
 * XREFs of vCheckForSingularXform @ 0x1C01197B0
 * Callers:
 *     bNewXform @ 0x1C0118F04 (bNewXform.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     iHipot @ 0x1C0119834 (iHipot.c)
 */

__int64 __fastcall vCheckForSingularXform(__int64 a1)
{
  __int64 v1; // r14
  int v3; // esi
  int v4; // eax
  int fixed; // eax
  int v6; // eax
  __int64 result; // rax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // r10d
  int v12; // r11d
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // r10d
  int v17; // eax
  int v18; // ecx
  int v19; // r10d
  int v20; // eax
  int v21; // ecx
  int v22; // r10d
  int v23; // r11d

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int16 *)(v1 + 308) << 16;
  v4 = iHipot(*(unsigned int *)(a1 + 96), *(unsigned int *)(a1 + 92));
  fixed = FixMul(v4, v3);
  if ( (int)(((fixed >> 15) + 1) & 0xFFFFFFFE) < 4 )
  {
    *(_DWORD *)(a1 + 116) |= 0x20u;
    if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      v8 = -1;
      v9 = -1;
      if ( *(int *)(a1 + 96) >= 0 )
        v9 = 1;
      if ( *(int *)(a1 + 80) >= 0 )
        v8 = 1;
      v10 = CompDiv(*(unsigned __int16 *)(v1 + 308), 0x20000LL);
      *(_DWORD *)(a1 + 96) = v10;
      if ( v12 != v11 )
        v10 = CompDiv(v11, v12 * (__int64)v10);
      *(_DWORD *)(a1 + 80) = v10;
      if ( v9 < 0 )
        *(_DWORD *)(a1 + 96) = -*(_DWORD *)(a1 + 96);
      if ( v8 < 0 )
        *(_DWORD *)(a1 + 80) = -*(_DWORD *)(a1 + 80);
    }
    else
    {
      v13 = CompDiv(fixed, 0x200000000LL);
      v14 = FixMul(*(_DWORD *)(a1 + 80), v13);
      v15 = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(a1 + 80) = v14;
      v17 = FixMul(v15, v16);
      v18 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a1 + 84) = v17;
      v20 = FixMul(v18, v19);
      v21 = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v20;
      *(_DWORD *)(a1 + 96) = FixMul(v21, v22);
      *(float *)(a1 + 56) = (float)v23 * 0.000015258789;
      *(float *)(a1 + 68) = (float)*(int *)(a1 + 96) * 0.000015258789;
      *(float *)(a1 + 60) = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a1 + 64) = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
    }
  }
  v6 = iHipot(*(unsigned int *)(a1 + 80), *(unsigned int *)(a1 + 84));
  result = FixMul(v6, v3);
  if ( (int)result <= 0x8000 )
    *(_DWORD *)(a1 + 116) |= 8u;
  return result;
}

/*
 * XREFs of ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18004B9C8
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004B090 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
        float *a1,
        float *a2,
        char a3,
        __int64 a4)
{
  float v4; // xmm1_4
  unsigned int v5; // r10d
  int v8; // eax
  float v9; // xmm1_4
  __int64 v10; // rcx
  int v11; // eax
  float v12; // xmm1_4
  __int64 v13; // rcx
  int v14; // eax
  float v15; // xmm1_4
  __int64 v16; // r8

  v4 = a1[1];
  v5 = 0;
  if ( a2[1] > v4 )
  {
    *(float *)(a4 + 4) = v4;
    *(float *)(a4 + 12) = a2[1];
    if ( a3 )
    {
      *(float *)a4 = *a2;
      v8 = *((_DWORD *)a2 + 2);
    }
    else
    {
      *(float *)a4 = *a1;
      v8 = *((_DWORD *)a1 + 2);
    }
    *(_DWORD *)(a4 + 8) = v8;
    v5 = 1;
  }
  v9 = *a1;
  if ( *a2 > *a1 )
  {
    v10 = 2LL * v5;
    *(float *)(a4 + 8 * v10) = v9;
    *(float *)(a4 + 8 * v10 + 8) = *a2;
    if ( a3 )
    {
      *(float *)(a4 + 16LL * v5 + 4) = a1[1];
      v11 = *((_DWORD *)a1 + 3);
    }
    else
    {
      *(float *)(a4 + 16LL * v5 + 4) = a2[1];
      v11 = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(a4 + 16LL * v5++ + 12) = v11;
  }
  v12 = a2[2];
  if ( a1[2] > v12 )
  {
    if ( v5 < 4 )
    {
      v13 = 2LL * v5;
      *(float *)(a4 + 8 * v13) = v12;
      *(float *)(a4 + 8 * v13 + 8) = a1[2];
      if ( a3 )
      {
        *(float *)(a4 + 16LL * v5 + 4) = a1[1];
        v14 = *((_DWORD *)a1 + 3);
      }
      else
      {
        *(float *)(a4 + 16LL * v5 + 4) = a2[1];
        v14 = *((_DWORD *)a2 + 3);
      }
      *(_DWORD *)(a4 + 16LL * v5 + 12) = v14;
    }
    ++v5;
  }
  v15 = a2[3];
  if ( a1[3] > v15 )
  {
    if ( v5 < 4 )
    {
      v16 = 2LL * v5;
      *(float *)(a4 + 8 * v16 + 4) = v15;
      *(float *)(a4 + 8 * v16 + 12) = a1[3];
      if ( a3 )
      {
        *(float *)(a4 + 16LL * v5) = *a2;
        *(float *)(a4 + 16LL * v5 + 8) = a2[2];
      }
      else
      {
        *(float *)(a4 + 16LL * v5) = *a1;
        *(float *)(a4 + 16LL * v5 + 8) = a1[2];
      }
    }
    ++v5;
  }
  return v5;
}

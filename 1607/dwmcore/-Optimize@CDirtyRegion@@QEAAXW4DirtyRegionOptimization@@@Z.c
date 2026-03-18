/*
 * XREFs of ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x18000CB24
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z @ 0x18000CA84 (-ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180071150 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

char __fastcall CDirtyRegion::Optimize(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rdi
  unsigned int i; // esi
  unsigned int v7; // r8d
  float *v8; // rdx
  unsigned int j; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 2724) )
  {
    *(_DWORD *)(a1 + 576) = 1;
  }
  else
  {
    memset_0((void *)(a1 + 416), 0, 0x80uLL);
LABEL_20:
    for ( i = 0; i < 8; ++i )
    {
      LOBYTE(v2) = 2 * i;
      if ( *(float *)(a1 + 16LL * i + 32) > *(float *)(a1 + 16LL * i + 24)
        && *(float *)(a1 + 16LL * i + 36) > *(float *)(a1 + 16LL * i + 28) )
      {
        for ( j = i + 1; j < 8; ++j )
        {
          LOBYTE(v2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(16LL * j + a1 + 24);
          if ( !(_BYTE)v2 )
          {
            LOBYTE(v2) = CDirtyRegion::ShouldMerge(a1, i, j, a2);
            if ( (_BYTE)v2 )
            {
              CDirtyRegion::Merge((CDirtyRegion *)a1, i, j);
              goto LABEL_20;
            }
          }
        }
      }
    }
    v7 = 0;
    v8 = (float *)(a1 + 36);
    do
    {
      if ( *(v8 - 1) > *(v8 - 3) && *v8 > *(v8 - 2) )
      {
        LOBYTE(v2) = 2 * (v3 + 26);
        *(_OWORD *)(a1 + 16 * (v3 + 26)) = *(_OWORD *)(v8 - 3);
        *(_DWORD *)(a1 + 4 * v3 + 544) = v7;
        v3 = (unsigned int)(v3 + 1);
      }
      ++v7;
      v8 += 4;
    }
    while ( v7 < 8 );
    *(_DWORD *)(a1 + 576) = v3;
  }
  *(_BYTE *)(a1 + 2726) = 1;
  return (char)v2;
}

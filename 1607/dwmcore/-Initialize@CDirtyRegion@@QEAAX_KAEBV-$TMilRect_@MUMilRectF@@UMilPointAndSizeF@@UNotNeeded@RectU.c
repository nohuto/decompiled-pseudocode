/*
 * XREFs of ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180070EE8
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180072544 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, __int64 a2, _OWORD *a3, char a4)
{
  char *v8; // rbp
  __int64 result; // rax

  memset_0((char *)this + 24, 0, 0x80uLL);
  memset_0((char *)this + 2288, 0, 0x120uLL);
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 676) = 0;
  *((_DWORD *)this + 144) = 0;
  *(_WORD *)((char *)this + 2725) = 0;
  *((_BYTE *)this + 2724) = a4 != 0;
  *(_OWORD *)((char *)this + 2708) = *a3;
  CDirtyRegion::ClearDirtyRegionAnnotationLists(this);
  v8 = (char *)this + 160;
  result = 8LL;
  do
  {
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 - 1) = 0LL;
    v8[2428] = 1;
    *(_QWORD *)(v8 + 2420) = 0LL;
    *((_DWORD *)v8 + 604) = 0;
    *((_QWORD *)v8 - 16) = 0LL;
    *((_QWORD *)v8 - 17) = 0LL;
    v8 += 16;
    --result;
  }
  while ( result );
  return result;
}

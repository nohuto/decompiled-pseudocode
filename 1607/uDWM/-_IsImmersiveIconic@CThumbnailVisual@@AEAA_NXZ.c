/*
 * XREFs of ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800160D0
 * Callers:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180016068 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180016280 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180016980 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x180016F44 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180017064 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007DCFC (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007DE78 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CThumbnailVisual::_IsImmersiveIconic(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rdx

  v2 = 0;
  v3 = *((_QWORD *)this + 44);
  if ( v3 && CWindowData::IsImmersiveWindow(*(CWindowData **)(v3 + 24)) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 44) + 36LL) & 0x800000) != 0 )
    {
      return 1;
    }
    else
    {
      v5 = *((_QWORD *)this + 45);
      if ( v5 )
        return *(_DWORD *)(v5 + 72) == 3;
    }
  }
  return v2;
}

/*
 * XREFs of ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x18009416C
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(__int64 a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // edx
  unsigned int v5; // r10d
  __int64 v6; // rbx
  char v7; // r8
  char v8; // r9
  int v9; // r10d
  __int64 v10; // r11
  int v11; // eax

  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v3 = *(_DWORD *)(a1 + 320);
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    return v4;
  v6 = *(_QWORD *)(a1 + 296);
  while ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(96LL * v5 + v6 + 24)) )
  {
LABEL_6:
    v5 = v9 + 1;
    if ( v5 >= v3 )
      goto LABEL_7;
  }
  v11 = *(_DWORD *)(v10 + v6 + 4);
  if ( v11 == DisplayId::None )
  {
    v7 = 1;
    goto LABEL_6;
  }
  v8 = 1;
  if ( v11 != a2 )
    goto LABEL_6;
  v7 = 1;
LABEL_7:
  if ( v7 )
    return (unsigned int)(v8 != 0) + 1;
  return v4;
}

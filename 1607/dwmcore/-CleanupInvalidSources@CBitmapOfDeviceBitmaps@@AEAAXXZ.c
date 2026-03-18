/*
 * XREFs of ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC
 * Callers:
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x18009416C (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180094688 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017939C (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x180179988 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179CC0 (-NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x180020C20 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180083320 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x1800A4064 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::CleanupInvalidSources(CBitmapOfDeviceBitmaps *this)
{
  __int64 v1; // rbx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = *((unsigned int *)this + 80);
  v3 = v1;
  if ( (_DWORD)v1 )
  {
    v4 = 96 * v1;
    do
    {
      v4 -= 96LL;
      v5 = v4 + *((_QWORD *)this + 37);
      --v3;
      if ( !CHwBitmapColorSource::IsValid(*(CHwBitmapColorSource **)(v5 + 16)) )
      {
        CHwBitmapColorSource::RemoveResourceNotifier(
          (CHwBitmapColorSource *)(v6 + 104),
          (CBitmapOfDeviceBitmaps *)((char *)this + 264));
        CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v5);
        v1 = (unsigned int)(v1 - 1);
        if ( v3 != (_DWORD)v1 )
        {
          v7 = *((_QWORD *)this + 37);
          *(_OWORD *)v5 = *(_OWORD *)(96 * v1 + v7);
          *(_OWORD *)(v5 + 16) = *(_OWORD *)(96 * v1 + v7 + 16);
          *(_OWORD *)(v5 + 32) = *(_OWORD *)(96 * v1 + v7 + 32);
          *(_OWORD *)(v5 + 48) = *(_OWORD *)(96 * v1 + v7 + 48);
          *(_OWORD *)(v5 + 64) = *(_OWORD *)(96 * v1 + v7 + 64);
          *(_OWORD *)(v5 + 80) = *(_OWORD *)(96 * v1 + v7 + 80);
        }
      }
    }
    while ( v3 );
  }
  *((_DWORD *)this + 80) = v1;
}

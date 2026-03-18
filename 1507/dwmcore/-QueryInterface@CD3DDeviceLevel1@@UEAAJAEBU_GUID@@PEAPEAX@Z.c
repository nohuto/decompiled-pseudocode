/*
 * XREFs of ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019550
 * Callers:
 *     ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800825F0 (-GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x180121F7C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180137564 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::QueryInterface(CD3DDeviceLevel1 *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = -2147024809;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v4 )
      goto LABEL_10;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_10:
      *a3 = this;
      v3 = 0;
      (*(void (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  return v3;
}

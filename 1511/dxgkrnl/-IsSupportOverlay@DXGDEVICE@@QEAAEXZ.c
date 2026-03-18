/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C001E980
 * Callers:
 *     DxgkCreateOverlay @ 0x1C01488D0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0148DC0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C01491D0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0149510 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0149900 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 (__fastcall **v3)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 354)
    && DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(v1 + 16))
    && v3[69] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[75] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    return 1;
  }
  return v2;
}

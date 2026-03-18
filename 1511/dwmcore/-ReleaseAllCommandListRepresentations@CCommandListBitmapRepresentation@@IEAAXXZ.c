/*
 * XREFs of ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x18002C430
 * Callers:
 *     ?OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000F3F0 (-OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18000F778 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x18002C4B8 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18002E260 (-NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18002E2C0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations(
        CCommandListBitmapRepresentation *this)
{
  unsigned int i; // edi
  __int64 v3; // r14

  for ( i = 0; i < *((_DWORD *)this + 82); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 38) + 16LL * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 304, 16LL);
}

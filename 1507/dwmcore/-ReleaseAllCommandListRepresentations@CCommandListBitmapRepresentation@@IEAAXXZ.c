/*
 * XREFs of ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x180087D14
 * Callers:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180011E04 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180011EA0 (-OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180087540 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x180087D9C (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18008D100 (-NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 38, 0x10u);
}

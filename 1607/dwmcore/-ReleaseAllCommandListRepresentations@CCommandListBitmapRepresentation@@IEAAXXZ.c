/*
 * XREFs of ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0DC0
 * Callers:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18000A314 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000A3E0 (-OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180093850 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800B0E54 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180142A20 (-NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations(
        CCommandListBitmapRepresentation *this)
{
  unsigned int i; // ebx
  __int64 v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 84); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 39) + 16LL * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 84) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 312, 0x10u);
}

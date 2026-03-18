/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D290
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029DD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DA00 (-QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F100 (-QueryInterface@CMILFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032EB0 (-QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180033118 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131EF0 (-QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013AC80 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180002DA0 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D740 (-HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085460 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E610 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A17B0 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1940 (-HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CHwTextureRenderTarget *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  void (*v9)(void); // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v6 == CHwTextureRenderTarget::HrFindInterface )
      {
        Interface = CHwTextureRenderTarget::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CBitmap::HrFindInterface )
      {
        Interface = CBitmap::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CImageSource::HrFindInterface )
      {
        Interface = CImageSource::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CSystemMemoryBitmap::HrFindInterface )
      {
        Interface = CSystemMemoryBitmap::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CBoundsBitmap::HrFindInterface )
      {
        Interface = CBoundsBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        Interface = v6(this, a2, a3);
      }
      v4 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    v9 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v9 == (char *)CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef((CBoundsBitmap *)*a3);
    else
      v9();
  }
  return v4;
}

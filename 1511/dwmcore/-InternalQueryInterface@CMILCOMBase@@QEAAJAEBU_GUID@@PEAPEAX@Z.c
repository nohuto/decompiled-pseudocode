/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085ED8
 * Callers:
 *     ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F3A0 (-QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800270C0 (-QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CD90 (-QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18005AC78 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010F4F0 (-QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x180124F2C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180027050 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027060 (-HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027290 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CB10 (-HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085150 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800894F0 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CBoundsBitmap *, const struct _GUID *, void **); // rbx
  int Interface; // eax
  CBitmapOfDeviceBitmaps *v9; // rdi
  __int64 (__fastcall *v10)(CBitmapOfDeviceBitmaps *); // rsi

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CBoundsBitmap *, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v6 == CImageSource::HrFindInterface )
      {
        Interface = CImageSource::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CHwTextureRenderTarget::HrFindInterface )
      {
        Interface = CHwTextureRenderTarget::HrFindInterface(this, a2, a3);
      }
      else if ( v6 == CBitmap::HrFindInterface )
      {
        Interface = CBitmap::HrFindInterface(this, a2, a3);
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
    v9 = (CBitmapOfDeviceBitmaps *)*a3;
    v10 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v9 + 8LL);
    if ( v10 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v9);
    else
      v10(v9);
  }
  return v4;
}

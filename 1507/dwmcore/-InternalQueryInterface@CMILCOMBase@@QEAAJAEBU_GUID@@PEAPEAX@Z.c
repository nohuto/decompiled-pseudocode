/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180003348 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000EF20 (-QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B860 (-QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180052B18 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082AD0 (-QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1270 (-QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x1801080CC (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180015F10 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070D70 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080330 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082FB0 (-HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083AD0 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084060 (-HrFindInterface@CBoundsBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CImageSource *__hidden, const struct _GUID *, void **); // rbx
  int Interface; // eax
  CBoundsBitmap *v8; // rdi
  unsigned int (__fastcall *v9)(CBoundsBitmap *); // rsi

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CImageSource *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v6 == CImageSource::HrFindInterface )
      {
        Interface = CImageSource::HrFindInterface(this, a2, a3);
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
      else if ( v6 == CHwTextureRenderTarget::HrFindInterface )
      {
        Interface = CHwTextureRenderTarget::HrFindInterface(this, a2, a3);
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
    v8 = (CBoundsBitmap *)*a3;
    v9 = *(unsigned int (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v8);
    else
      v9(v8);
  }
  return v4;
}

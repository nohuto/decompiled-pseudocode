/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180146848
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800147E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x18001C764 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1801339B0 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180142010 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150BC0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x180145C28 (--0CFormatConverter@@QEAA@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180146A10 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  CFormatConverter *v9; // rax
  CFormatConverter *v10; // rbx
  int v11; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IBitmapSource *, int *))(*(_QWORD *)a1 + 24LL))(a1, &v13);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26Eu);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v7 >= 0 )
  {
    if ( v13 == *(_DWORD *)a2 && v8 == *((_DWORD *)a2 + 1) )
    {
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 8LL))(a1);
      *a3 = a1;
    }
    else
    {
      v9 = (CFormatConverter *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 832LL);
      if ( v9 )
        v10 = CFormatConverter::CFormatConverter(v9);
      else
        v10 = 0LL;
      if ( v10 )
      {
        CBitmapOfDeviceBitmaps::AddRef(v10);
        v11 = CFormatConverter::Initialize(v10, a1, a2, 0.0);
        v7 = v11;
        if ( v11 >= 0 )
        {
          *a3 = (CFormatConverter *)((char *)v10 + 72);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x28Au);
          CMILCOMBase::InternalRelease(v10);
        }
      }
      else
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x297u);
      }
    }
  }
  return (unsigned int)v7;
}

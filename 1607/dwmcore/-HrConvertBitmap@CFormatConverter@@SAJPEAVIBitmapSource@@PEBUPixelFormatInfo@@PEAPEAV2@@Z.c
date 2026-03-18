/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180184D28
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800827C8 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180133444 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180181034 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x180184220 (--0CFormatConverter@@QEAA@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180184ED0 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  CFormatConverter *v9; // rax
  CFormatConverter *v10; // rdi
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

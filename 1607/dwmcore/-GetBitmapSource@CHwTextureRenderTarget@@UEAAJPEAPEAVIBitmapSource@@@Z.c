/*
 * XREFs of ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18002D610
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B40F8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapSource(CHwTextureRenderTarget *this, struct IBitmapSource **a2)
{
  CMILCOMBase *v2; // rbx
  unsigned int v3; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  struct IBitmapSource *v11; // rax
  CMILCOMBase *v13; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0LL;
  v3 = 0;
  v13 = 0LL;
  if ( !*((_QWORD *)this + 9) )
  {
    v6 = *((_DWORD *)this - 42);
    v7 = *((_DWORD *)this - 41);
    v14[0] = 0;
    v14[1] = 0;
    v14[2] = v6;
    v14[3] = v7;
    v8 = CBitmapOfDeviceBitmaps::Create(v6, v7, (CHwTextureRenderTarget *)((char *)this + 40), &v13);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x249u);
      v2 = v13;
      goto LABEL_10;
    }
    v2 = v13;
    v10 = CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
            v13,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL),
            v9,
            *((unsigned int *)this - 15),
            v14,
            *((_QWORD *)this + 4));
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x24Fu);
      goto LABEL_10;
    }
    *((_QWORD *)this + 9) = v2;
    v2 = 0LL;
  }
  v11 = (struct IBitmapSource *)*((_QWORD *)this + 9);
  if ( v11 )
    v11 = (struct IBitmapSource *)((char *)v11 + 16);
  *a2 = v11;
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)this + 9));
LABEL_10:
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v3;
}

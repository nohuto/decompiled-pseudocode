/*
 * XREFs of ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18002C860
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x18008AD68 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B08C8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapSource(CHwTextureRenderTarget *this, struct IBitmapSource **a2)
{
  struct CBitmapOfDeviceBitmaps *v2; // rbx
  unsigned int v3; // esi
  struct IBitmapSource *v6; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  struct CBitmapOfDeviceBitmaps *v15; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0LL;
  v3 = 0;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    v16[0] = 0;
    v16[1] = 0;
    v8 = *((_DWORD *)this - 42);
    v9 = *((_DWORD *)this - 41);
    v16[2] = v8;
    v16[3] = v9;
    if ( *((_BYTE *)this + 64) )
      v10 = *((_DWORD *)this - 16);
    else
      v10 = DisplayId::None;
    v11 = CBitmapOfDeviceBitmaps::Create(v8, v9, (CHwTextureRenderTarget *)((char *)this + 24), &v15);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x26Cu);
      v2 = v15;
      goto LABEL_5;
    }
    v13 = v10;
    v2 = v15;
    v14 = CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
            v15,
            *((_QWORD *)this - 2),
            v12,
            v13,
            v16,
            *((_QWORD *)this + 2));
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x272u);
      goto LABEL_5;
    }
    *((_QWORD *)this + 7) = v2;
    v2 = 0LL;
  }
  v6 = (struct IBitmapSource *)*((_QWORD *)this + 7);
  if ( v6 )
    v6 = (struct IBitmapSource *)((char *)v6 + 16);
  *a2 = v6;
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)this + 7));
LABEL_5:
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v3;
}

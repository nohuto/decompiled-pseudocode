/*
 * XREFs of ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002B704
 * Callers:
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z @ 0x18002B864 (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z.c)
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18002BD50 (-ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A1B20 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RecreateBitmap(CGdiSpriteBitmap *this)
{
  struct IBitmapSource **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned __int8 PixelFormatSize; // al
  int v6; // r8d
  unsigned int v7; // ebp
  unsigned int v8; // r11d
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // r12d
  bool v12; // sf
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  int v15; // ecx
  unsigned int v16; // ecx
  INT v17; // r11d
  unsigned int v18; // edx
  enum DXGI_FORMAT v19; // ecx
  unsigned int RequiredBufferSize; // eax
  unsigned int v21; // r11d
  int BitmapFromMemory; // eax
  WICRect v24; // [rsp+40h] [rbp-28h] BYREF

  v1 = (struct IBitmapSource **)((char *)this + 136);
  v3 = 0;
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *v1 = 0LL;
  }
  if ( !*((_QWORD *)this + 81) )
    goto LABEL_15;
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 42));
  v7 = *((_DWORD *)this + 48);
  v8 = *((_DWORD *)this + 49);
  v9 = *((_DWORD *)this + 51);
  v11 = v6 * *((_DWORD *)this + 40) + v10 * (PixelFormatSize >> 3);
  v12 = v10 + v9 < 0;
  v13 = v10 + v9;
  *((_DWORD *)this + 41) = v11;
  if ( v12 )
    v13 = 0;
  if ( v7 < v13 )
    v13 = v7;
  v14 = v7 - v13;
  v15 = *((_DWORD *)this + 53);
  v12 = v6 + v15 < 0;
  v16 = v6 + v15;
  *((_DWORD *)this + 32) = v14;
  if ( v12 )
    v16 = 0;
  if ( v8 < v16 )
    v16 = v8;
  v17 = v8 - v16;
  *((_DWORD *)this + 33) = v17;
  if ( !v14 )
    goto LABEL_15;
  if ( !v17 )
    goto LABEL_15;
  v18 = *((_DWORD *)this + 40);
  v19 = *((_DWORD *)this + 42);
  *(_QWORD *)&v24.X = 0LL;
  v24.Width = v14;
  v24.Height = v17;
  RequiredBufferSize = GetRequiredBufferSize(v19, v18, &v24);
  BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                       v14,
                       v21,
                       (CGdiSpriteBitmap *)((char *)this + 168),
                       *((_DWORD *)this + 40),
                       RequiredBufferSize,
                       (unsigned __int8 *)(*((_QWORD *)this + 82) + v11),
                       0LL,
                       v1);
  v3 = BitmapFromMemory;
  if ( BitmapFromMemory < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x21Eu);
  else
LABEL_15:
    CResource::NotifyOnChanged((char *)this + 16, 0LL, 0LL);
  return v3;
}

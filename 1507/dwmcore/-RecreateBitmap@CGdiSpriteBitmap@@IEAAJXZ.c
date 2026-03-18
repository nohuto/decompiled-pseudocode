/*
 * XREFs of ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007F4A4
 * Callers:
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z @ 0x18007F5EC (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z.c)
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18007FAE0 (-ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18005F184 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RecreateBitmap(CGdiSpriteBitmap *this)
{
  struct IBitmapSource **v1; // r15
  __int64 v2; // r14
  unsigned int v4; // esi
  unsigned __int8 PixelFormatSize; // al
  int v7; // r8d
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // r12d
  bool v13; // sf
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int RequiredBufferSize; // eax
  int BitmapFromMemory; // eax
  WICRect v23; // [rsp+40h] [rbp-38h] BYREF

  v1 = (struct IBitmapSource **)((char *)this + 64);
  v2 = *((_QWORD *)this + 8);
  v4 = 0;
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 8));
    *v1 = 0LL;
  }
  if ( !*((_QWORD *)this + 72) )
    goto LABEL_4;
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 24));
  v8 = *((_DWORD *)this + 30);
  v9 = *((_DWORD *)this + 31);
  v10 = *((_DWORD *)this + 33);
  v12 = v7 * *((_DWORD *)this + 22) + v11 * (PixelFormatSize >> 3);
  v13 = v11 + v10 < 0;
  v14 = v11 + v10;
  *((_DWORD *)this + 23) = v12;
  if ( v13 )
    v14 = 0;
  if ( v8 < v14 )
    v14 = v8;
  v15 = v8 - v14;
  v16 = *((_DWORD *)this + 35);
  v13 = v7 + v16 < 0;
  v17 = v7 + v16;
  *((_DWORD *)this + 14) = v15;
  if ( v13 )
    v17 = 0;
  if ( v9 < v17 )
    v17 = v9;
  v18 = v9 - v17;
  *((_DWORD *)this + 15) = v18;
  if ( !v15 )
    goto LABEL_4;
  if ( !v18 )
    goto LABEL_4;
  v19 = *((unsigned int *)this + 22);
  v20 = *((_DWORD *)this + 24);
  *(_QWORD *)&v23.X = 0LL;
  v23.Width = v15;
  v23.Height = v18;
  RequiredBufferSize = GetRequiredBufferSize(v20, v19, &v23);
  BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                       v15,
                       v18,
                       (CGdiSpriteBitmap *)((char *)this + 96),
                       *((_DWORD *)this + 22),
                       RequiredBufferSize,
                       (unsigned __int8 *)(*((_QWORD *)this + 73) + v12),
                       0LL,
                       v1);
  v4 = BitmapFromMemory;
  if ( BitmapFromMemory < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x21Eu);
  else
LABEL_4:
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  return v4;
}

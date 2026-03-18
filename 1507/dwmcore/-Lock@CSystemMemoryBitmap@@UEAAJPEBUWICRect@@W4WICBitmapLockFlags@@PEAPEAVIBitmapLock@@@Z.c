/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180083910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180052658 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18005F184 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180080174 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180080424 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180144354 (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 */

__int64 __fastcall CSystemMemoryBitmap::Lock(
        CSystemMemoryBitmap *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  CBitmap *v4; // rdi
  char *v7; // rcx
  bool v8; // zf
  int v9; // eax
  int v10; // ebx
  unsigned __int8 PixelFormatSize; // al
  int v12; // r14d
  unsigned int v13; // r15d
  unsigned int v14; // r9d
  unsigned int v15; // ebx
  int v16; // ecx
  void *v17; // r13
  int v18; // r11d
  __int64 (__fastcall **v19)(CBitmap *, GUID *, struct WICRect *); // rcx
  int v20; // eax
  int v21; // eax
  int v23; // eax
  int v25; // [rsp+64h] [rbp-35h]
  int v26; // [rsp+68h] [rbp-31h]
  unsigned int RequiredBufferSize; // [rsp+6Ch] [rbp-2Dh]
  struct WICRect v28; // [rsp+70h] [rbp-29h] BYREF
  struct IBitmapLock **v29; // [rsp+80h] [rbp-19h]
  char *v30; // [rsp+88h] [rbp-11h] BYREF
  struct tagRECT v31; // [rsp+90h] [rbp-9h] BYREF

  v4 = (CSystemMemoryBitmap *)((char *)this - 24);
  v29 = a4;
  if ( this == (CSystemMemoryBitmap *)24 )
    v7 = 0LL;
  else
    v7 = (char *)this + 88;
  v8 = v7[48] == 0;
  v30 = v7;
  if ( !v8 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  v9 = CBitmap::HrCheckPixelRect(v4, a2, &v31);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x52u);
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 44));
  v12 = v31.left * PixelFormatSize;
  v13 = (LOBYTE(v31.left) * PixelFormatSize) & 7;
  if ( v10 >= 0 )
  {
    v14 = *((_DWORD *)this + 62);
    v15 = v31.right - v31.left;
    v28.X = 0;
    v28.Y = 0;
    v25 = v31.bottom - v31.top;
    v28.Height = v31.bottom - v31.top;
    v16 = *((_DWORD *)this + 44);
    v26 = v31.right - v31.left;
    v17 = (void *)(*((_QWORD *)this + 30) + v12 / 8 + (__int64)(int)(v31.top * v14));
    v28.Width = v31.right - v31.left;
    RequiredBufferSize = GetRequiredBufferSize(v16, v14, &v28);
    if ( v13 )
    {
      v23 = CBitmap::HrLockUnaligned(
              v4,
              v15,
              v25,
              (CSystemMemoryBitmap *)((char *)this + 176),
              v13,
              v31.right * v18 - v12,
              *((_DWORD *)this + 62),
              RequiredBufferSize,
              v17,
              a3,
              v29);
      v10 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x9Cu);
    }
    else
    {
      v19 = *(__int64 (__fastcall ***)(CBitmap *, GUID *, struct WICRect *))v4;
      *(_QWORD *)&v28.X = 0LL;
      v20 = (*v19)(v4, &IID_IUnknown, &v28);
      v10 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x7Bu);
      }
      else
      {
        v21 = CBitmap::HrLock(
                v4,
                v26,
                v25,
                (CSystemMemoryBitmap *)((char *)this + 176),
                *((_DWORD *)this + 62),
                RequiredBufferSize,
                v17,
                a3,
                v29,
                0,
                *(struct IUnknown **)&v28.X);
        v10 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x87u);
      }
    }
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v30);
  return (unsigned int)v10;
}

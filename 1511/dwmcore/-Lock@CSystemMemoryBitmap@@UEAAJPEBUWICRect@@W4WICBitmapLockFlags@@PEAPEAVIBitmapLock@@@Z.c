/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800270D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800270C0 (-QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18008920C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180089310 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A30C8 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180152534 (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
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
  enum DXGI_FORMAT v16; // ecx
  void *v17; // r13
  int v18; // r11d
  __int64 (__fastcall **v19)(CBitmap *, GUID *, WICRect *); // rcx
  int Interface; // eax
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-79h]
  int v24; // [rsp+60h] [rbp-39h]
  WICRect v26; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+78h] [rbp-21h]
  unsigned int RequiredBufferSize; // [rsp+7Ch] [rbp-1Dh]
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
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 44));
  v12 = v31.left * PixelFormatSize;
  v13 = (LOBYTE(v31.left) * PixelFormatSize) & 7;
  if ( v10 < 0 )
    goto LABEL_13;
  v14 = *((_DWORD *)this + 62);
  v15 = v31.right - v31.left;
  v26.X = 0;
  v26.Y = 0;
  v24 = v31.bottom - v31.top;
  v26.Height = v31.bottom - v31.top;
  v16 = *((_DWORD *)this + 44);
  v27 = v31.right - v31.left;
  v17 = (void *)(*((_QWORD *)this + 30) + v12 / 8 + (__int64)(int)(v31.top * v14));
  v26.Width = v31.right - v31.left;
  RequiredBufferSize = GetRequiredBufferSize(v16, v14, &v26);
  if ( v13 )
  {
    v21 = CBitmap::HrLockUnaligned(
            v4,
            v15,
            v24,
            (CSystemMemoryBitmap *)((char *)this + 176),
            v13,
            v31.right * v18 - v12,
            *((_DWORD *)this + 62),
            RequiredBufferSize,
            v17,
            a3,
            v29);
    v10 = v21;
    if ( v21 >= 0 )
      goto LABEL_13;
    v23 = 156;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v23);
    goto LABEL_13;
  }
  v19 = *(__int64 (__fastcall ***)(CBitmap *, GUID *, WICRect *))v4;
  *(_QWORD *)&v26.X = 0LL;
  if ( (char *)*v19 == (char *)CDxHandleDecodeBitmapRealization::QueryInterface )
    Interface = CDxHandleDecodeBitmapRealization::QueryInterface(v4, &IID_IUnknown, (void **)&v26);
  else
    Interface = (*v19)(v4, &IID_IUnknown, &v26);
  v10 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Interface, 0x7Bu);
    goto LABEL_13;
  }
  v21 = CBitmap::HrLock(
          v4,
          v27,
          v24,
          (CSystemMemoryBitmap *)((char *)this + 176),
          *((_DWORD *)this + 62),
          RequiredBufferSize,
          v17,
          a3,
          v29,
          0,
          *(struct IUnknown **)&v26.X);
  v10 = v21;
  if ( v21 < 0 )
  {
    v23 = 135;
    goto LABEL_20;
  }
LABEL_13:
  CGuard<CMTALock>::~CGuard<CMTALock>(&v30);
  return (unsigned int)v10;
}

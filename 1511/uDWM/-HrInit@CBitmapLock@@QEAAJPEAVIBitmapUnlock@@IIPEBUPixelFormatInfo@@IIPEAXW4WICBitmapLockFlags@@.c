/*
 * XREFs of ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180041A90
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180042494 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180043364 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CBitmapLock::HrInit(
        CBitmapLock *this,
        struct IBitmapUnlock *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        enum WICBitmapLockFlags a9,
        bool a10,
        struct IUnknown *a11)
{
  int v15; // eax
  unsigned int v16; // ebp

  v15 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a5, a6, a3, a4, a7);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x5Fu);
  }
  else
  {
    *((_BYTE *)this + 89) = a10;
    *((_QWORD *)this + 12) = a11;
    *((_BYTE *)this + 88) = 1;
    *((_DWORD *)this + 26) = a3;
    *((_DWORD *)this + 27) = a4;
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)a5;
    *((_QWORD *)this + 17) = *((_QWORD *)a5 + 2);
    *((_DWORD *)this + 28) = a6;
    *((_QWORD *)this + 18) = a8;
    *((_DWORD *)this + 38) = a7;
    *((_QWORD *)this + 21) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)this + 40) = a9;
  }
  return v16;
}

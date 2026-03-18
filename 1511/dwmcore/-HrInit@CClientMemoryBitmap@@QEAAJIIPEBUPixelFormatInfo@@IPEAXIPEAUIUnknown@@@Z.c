/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800A3168
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A342C (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x1800A1830 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x1800A33A0 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct IUnknown *a8)
{
  const struct PixelFormatInfo *v9; // rbx
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v15; // [rsp+20h] [rbp-38h]

  v9 = a4;
  if ( !IsValidPixelFormatInfo(a4) || !a2 || !a3 || !a6 || !a7 )
  {
    v15 = 35;
    goto LABEL_15;
  }
  if ( a3 >= 0x7FFFFFFF / a7 )
  {
    v15 = 40;
LABEL_15:
    v13 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v15);
    return v13;
  }
  v12 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)v9, a7, a2, a3, a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x31u);
  }
  else
  {
    *((_QWORD *)this + 35) = a8;
    if ( a8 )
    {
      ((void (__fastcall *)(struct IUnknown *))a8->lpVtbl->AddRef)(a8);
      v9 = a4;
    }
    *((_DWORD *)this + 46) = a2;
    *((_DWORD *)this + 47) = a3;
    *(_OWORD *)((char *)this + 200) = *(_OWORD *)v9;
    *((_QWORD *)this + 27) = *((_QWORD *)v9 + 2);
    *((_QWORD *)this + 33) = a6;
    *((_DWORD *)this + 68) = a7;
  }
  return v13;
}

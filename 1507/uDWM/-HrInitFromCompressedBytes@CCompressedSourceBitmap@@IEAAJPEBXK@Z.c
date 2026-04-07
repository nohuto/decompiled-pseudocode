/*
 * XREFs of ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x18003E630
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18003DFDC (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrInitFromCompressedBytes(
        CCompressedSourceBitmap *this,
        const void *a2,
        unsigned int a3)
{
  unsigned int v6; // esi
  void *v7; // rax

  v6 = 0;
  v7 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 a3);
  *((_QWORD *)this + 36) = v7;
  if ( v7 )
  {
    *((_DWORD *)this + 74) = a3;
    memcpy_0(v7, a2, a3);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x93u);
  }
  return v6;
}

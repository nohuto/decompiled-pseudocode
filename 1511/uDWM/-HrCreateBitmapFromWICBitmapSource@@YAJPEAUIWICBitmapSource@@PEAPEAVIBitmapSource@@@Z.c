/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800415C0
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180041CD8 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180042F48 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180043088 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x1800430FC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180043150 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IBitmapSource *v8; // rax

  v4 = (CWICBitmapWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              264LL);
  if ( v4 )
    v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v6 = CWICBitmapWrapper::HrInit(v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x5Cu);
    }
    else
    {
      v8 = (CMILCOMBase *)((char *)v5 + 16);
      v5 = 0LL;
      *a2 = v8;
    }
    if ( v5 )
      CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x59u);
  }
  return v7;
}

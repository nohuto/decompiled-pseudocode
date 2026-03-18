/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180143AE8
 * Callers:
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001C248 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1800EA25C (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x180062A80 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        CSystemMemoryBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5)
{
  unsigned __int64 v6; // rbp
  int v9; // eax
  WPF *v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  int v13; // eax
  bool v14; // zf
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = a3;
  v9 = HrCalcDWordAlignedScanlineStride(a2, *(_DWORD *)a4, &v16);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = v16;
    v13 = WPF::HrMalloc(v10, v16, v6, (_QWORD *)this + 33);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v14 = !a5;
      *((_DWORD *)this + 46) = a2;
      *((_DWORD *)this + 47) = v6;
      *(_OWORD *)((char *)this + 200) = *(_OWORD *)a4;
      *((_QWORD *)this + 27) = *((_QWORD *)a4 + 2);
      *((_DWORD *)this + 68) = v12;
      if ( !v14 )
        memset_0(*((void **)this + 33), 0, (unsigned int)v6 * v12);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x133u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12Cu);
  }
  return v11;
}

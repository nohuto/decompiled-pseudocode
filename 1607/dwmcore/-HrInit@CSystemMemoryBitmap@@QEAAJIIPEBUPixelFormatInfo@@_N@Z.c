/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180182234
 * Callers:
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800822E4 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18011C5E4 (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        CSystemMemoryBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5)
{
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // edi
  void **v12; // r14
  LPVOID (__fastcall *v13)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v14; // rdx
  LPVOID v15; // rax
  bool v16; // zf
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  v9 = HrCalcDWordAlignedScanlineStride(a2, *(_DWORD *)a4, &v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x12Cu);
  }
  else
  {
    v11 = v18;
    v12 = (void **)((char *)this + 264);
    v10 = 0;
    if ( this != (CSystemMemoryBitmap *)-264LL && a3 && v18 && v18 < 0xFFFFFFFFFFFFFFFFuLL / a3 )
    {
      v13 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v14 = a3 * (unsigned __int64)v18;
      if ( v13 == WPF::ProcessHeapImpl::Alloc )
        v15 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v14);
      else
        v15 = v13(WPF::g_pProcessHeap, v14);
      *v12 = v15;
      if ( !v15 )
        v10 = -2147024882;
    }
    else
    {
      v10 = -2147024809;
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x133u);
    }
    else
    {
      v16 = !a5;
      *((_DWORD *)this + 46) = a2;
      *((_DWORD *)this + 47) = a3;
      *(_OWORD *)((char *)this + 200) = *(_OWORD *)a4;
      *((_QWORD *)this + 27) = *((_QWORD *)a4 + 2);
      *((_DWORD *)this + 68) = v11;
      if ( !v16 )
        memset_0(*v12, 0, a3 * v11);
    }
  }
  return (unsigned int)v10;
}

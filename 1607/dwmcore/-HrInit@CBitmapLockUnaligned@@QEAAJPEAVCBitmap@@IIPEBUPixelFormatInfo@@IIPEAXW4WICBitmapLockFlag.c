/*
 * XREFs of ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180183244
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180182AF4 (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18009E518 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x1801834AC (-ReadUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

__int64 __fastcall CBitmapLockUnaligned::HrInit(
        CBitmapLockUnaligned *this,
        struct CBitmap *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        enum WICBitmapLockFlags a9,
        unsigned int a10,
        unsigned int a11)
{
  struct CBitmap *v11; // r13
  enum WICBitmapLockFlags v12; // r12d
  CBitmapLock *v13; // r14
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r15
  unsigned __int8 *v18; // rdi
  LPVOID (__fastcall *v19)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v20; // rdx
  unsigned __int8 *v21; // rax
  unsigned int v22; // esi
  unsigned __int8 *v23; // rbx
  __int64 v24; // r13
  const unsigned __int8 *v25; // r15
  unsigned __int64 v26; // r14
  unsigned int v27; // ebp
  unsigned int v28; // esi
  struct IBitmapUnlock *v29; // rdx
  int v30; // eax
  unsigned int v32; // [rsp+60h] [rbp-58h]

  v11 = a2;
  v12 = a9;
  v13 = this;
  *((_DWORD *)this + 46) = a6;
  *((_QWORD *)this + 22) = a8;
  *((_DWORD *)this + 47) = a7;
  *((_DWORD *)this + 49) = a10;
  *((_DWORD *)this + 48) = a11;
  *((_DWORD *)this + 40) = v12;
  v14 = a4;
  v15 = HrCalcDWordAlignedScanlineStride(a3, *(_DWORD *)a5, &a7);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x98u);
  v17 = a7;
  v18 = 0LL;
  if ( v16 >= 0 )
  {
    v16 = 0;
    if ( (_DWORD)v14 && a7 && a7 < 0xFFFFFFFFFFFFFFFFuLL / v14 )
    {
      v19 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v20 = v14 * a7;
      if ( v19 == WPF::ProcessHeapImpl::Alloc )
        v21 = (unsigned __int8 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v20);
      else
        v21 = (unsigned __int8 *)v19(WPF::g_pProcessHeap, v20);
      v18 = v21;
      if ( !v21 )
        v16 = -2147024882;
    }
    else
    {
      v16 = -2147024809;
    }
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA3u);
  }
  v22 = v14 * v17;
  v32 = v14 * v17;
  if ( v16 < 0 )
    goto LABEL_26;
  if ( (v12 & 1) != 0 )
  {
    v23 = v18;
    if ( (_DWORD)v14 )
    {
      v24 = v17;
      v25 = a8;
      v26 = v14;
      v27 = a11;
      v28 = a10;
      do
      {
        ReadUnalignedScanline(v23, v25, v27, v28);
        v25 += a6;
        v23 += v24;
        --v26;
      }
      while ( v26 );
      v22 = v32;
      LODWORD(v14) = a4;
      LODWORD(v17) = a7;
      v13 = this;
      v11 = a2;
      v12 = a9;
    }
  }
  if ( v11 )
    v29 = (struct CBitmap *)((char *)v11 + 32);
  else
    v29 = 0LL;
  v30 = CBitmapLock::HrInit(v13, v29, a3, v14, a5, v17, v22, v18, v12, 0, 0LL);
  v16 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xD0u);
LABEL_26:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int8 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v18);
  }
  return (unsigned int)v16;
}

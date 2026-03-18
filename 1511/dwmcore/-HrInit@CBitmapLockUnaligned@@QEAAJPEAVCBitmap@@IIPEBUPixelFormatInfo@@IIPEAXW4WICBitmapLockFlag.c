/*
 * XREFs of ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1801539A8
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180152534 (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800A239C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800A4418 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?ReadUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x180153BE4 (-ReadUnalignedScanline@@YAXPEAEPEBEII@Z.c)
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
  CBitmapLock *v13; // r15
  unsigned __int64 v14; // rbx
  int v15; // eax
  WPF *v16; // rcx
  int v17; // esi
  unsigned __int64 v18; // rdi
  unsigned __int8 *v19; // rbp
  int v20; // eax
  unsigned int v21; // r14d
  unsigned __int8 *v22; // rsi
  unsigned __int64 v23; // r12
  const unsigned __int8 *v24; // r13
  unsigned int v25; // r14d
  unsigned int v26; // ebp
  struct IBitmapUnlock *v27; // rdx
  int v28; // eax
  unsigned __int64 v30[13]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+20h]

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
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x98u);
  v18 = a7;
  v19 = 0LL;
  v30[0] = 0LL;
  if ( v17 >= 0 )
  {
    v20 = WPF::HrMalloc(v16, a7, v14, v30);
    v17 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xA3u);
    v19 = (unsigned __int8 *)v30[0];
  }
  v21 = v14 * v18;
  v34 = v14 * v18;
  if ( v17 < 0 )
    goto LABEL_18;
  if ( (v12 & 1) != 0 )
  {
    v22 = v19;
    if ( (_DWORD)v14 )
    {
      v23 = v14;
      v24 = a8;
      v25 = a10;
      v26 = a11;
      v30[2] = v18;
      do
      {
        ReadUnalignedScanline(v22, v24, v26, v25);
        v24 += a6;
        v22 += v18;
        --v23;
      }
      while ( v23 );
      v19 = (unsigned __int8 *)v30[0];
      LODWORD(v18) = a7;
      v21 = v34;
      v13 = this;
      v11 = a2;
      v12 = a9;
    }
  }
  if ( v11 )
    v27 = (struct CBitmap *)((char *)v11 + 32);
  else
    v27 = 0LL;
  v28 = CBitmapLock::HrInit(v13, v27, a3, (unsigned int)v14, a5, v18, v21, v19, v12, 0, 0LL);
  v17 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xD0u);
LABEL_18:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int8 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v19);
  }
  return (unsigned int)v17;
}

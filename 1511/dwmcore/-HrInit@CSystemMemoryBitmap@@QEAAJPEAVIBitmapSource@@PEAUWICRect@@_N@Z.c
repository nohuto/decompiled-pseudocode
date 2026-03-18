/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180151DA8
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18015F3E4 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800A4418 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801522E8 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  unsigned int v6; // esi
  unsigned int *v7; // rbx
  int v8; // eax
  WPF *v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  _DWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_12:
    if ( (v6 & 0x80000000) == 0 )
      return v6;
    goto LABEL_13;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1D1u);
    goto LABEL_13;
  }
  v7 = (unsigned int *)((char *)this + 272);
  v8 = HrCalcDWordAlignedScanlineStride(*((unsigned int *)this + 46), *((_DWORD *)this + 50), (unsigned int *)this + 68);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1D8u);
    goto LABEL_13;
  }
  v10 = WPF::HrMalloc(v9, *v7, *((unsigned int *)this + 47), (_QWORD *)this + 33);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v11 = *((_DWORD *)this + 46);
    v12 = *v7;
    v13 = *((_DWORD *)this + 47);
    v17[0] = 0;
    v17[1] = 0;
    v17[2] = v11;
    v14 = *(_QWORD *)a2;
    v17[3] = v13;
    v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, _QWORD, _QWORD, _QWORD))(v14 + 72))(
            a2,
            v17,
            v12,
            v13 * v12,
            *((_QWORD *)this + 33));
    v6 = v15;
    if ( v15 >= 0 )
      return v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1F4u);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1E1u);
LABEL_13:
  if ( *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
  return v6;
}

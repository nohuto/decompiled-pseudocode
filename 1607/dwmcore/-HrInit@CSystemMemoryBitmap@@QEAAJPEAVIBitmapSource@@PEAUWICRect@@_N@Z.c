/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180182370
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1801336E4 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801828C4 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  int v6; // ebx
  int *v7; // r15
  int v8; // r9d
  unsigned __int64 v9; // r9
  _QWORD *v10; // r14
  unsigned __int64 v11; // r8
  LPVOID (__fastcall *v12)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v13; // rdx
  LPVOID v14; // rax
  int v15; // edx
  int v16; // eax
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-48h]
  _DWORD v23[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
    goto LABEL_23;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v6 = inited;
  if ( inited >= 0 )
  {
    v7 = (int *)((char *)this + 272);
    inited = HrCalcDWordAlignedScanlineStride(
               *((unsigned int *)this + 46),
               *((_DWORD *)this + 50),
               (unsigned int *)this + 68);
    v6 = inited;
    if ( inited < 0 )
    {
      v22 = 472;
      goto LABEL_6;
    }
    v9 = *((unsigned int *)this + 47);
    v10 = (_QWORD *)((char *)this + 264);
    v11 = (unsigned int)*v7;
    v6 = 0;
    if ( this != (CSystemMemoryBitmap *)-264LL && *((_DWORD *)this + 47) && *v7 && v11 < 0xFFFFFFFFFFFFFFFFuLL / v9 )
    {
      v12 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v13 = v9 * v11;
      if ( v12 == WPF::ProcessHeapImpl::Alloc )
        v14 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v13);
      else
        v14 = v12(WPF::g_pProcessHeap, v13);
      *v10 = v14;
      if ( !v14 )
        v6 = -2147024882;
    }
    else
    {
      v6 = -2147024809;
    }
    if ( v6 < 0 )
    {
      v22 = 481;
      v8 = v6;
      goto LABEL_19;
    }
    v15 = *((_DWORD *)this + 47);
    v16 = *((_DWORD *)this + 46);
    v17 = *v7;
    v18 = (unsigned int)*v7;
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = v16;
    v19 = *(_QWORD *)a2;
    v23[3] = v15;
    v20 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v19 + 72))(
            a2,
            v23,
            v18,
            (unsigned int)(v15 * v17),
            *v10);
    v6 = v20;
    if ( v20 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1F4u);
LABEL_23:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_24;
  }
  v22 = 465;
LABEL_6:
  v8 = inited;
LABEL_19:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v22);
LABEL_24:
  if ( *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 33) = 0LL;
  }
  return (unsigned int)v6;
}

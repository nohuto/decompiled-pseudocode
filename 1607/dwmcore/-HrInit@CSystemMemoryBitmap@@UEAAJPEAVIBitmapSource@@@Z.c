/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180182540
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801828C4 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  int v5; // ebx
  int *v6; // r15
  int v7; // r9d
  unsigned __int64 v8; // r9
  _QWORD *v9; // r14
  unsigned __int64 v10; // r8
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v12; // rdx
  LPVOID v13; // rax
  int v14; // edx
  int v15; // eax
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-48h]
  _DWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    goto LABEL_23;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v5 = inited;
  if ( inited >= 0 )
  {
    v6 = (int *)((char *)this + 272);
    inited = HrCalcDWordAlignedScanlineStride(
               *((unsigned int *)this + 46),
               *((_DWORD *)this + 50),
               (unsigned int *)this + 68);
    v5 = inited;
    if ( inited < 0 )
    {
      v21 = 345;
      goto LABEL_6;
    }
    v8 = *((unsigned int *)this + 47);
    v9 = (_QWORD *)((char *)this + 264);
    v10 = (unsigned int)*v6;
    v5 = 0;
    if ( this != (CSystemMemoryBitmap *)-264LL && *((_DWORD *)this + 47) && *v6 && v10 < 0xFFFFFFFFFFFFFFFFuLL / v8 )
    {
      v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v12 = v8 * v10;
      if ( v11 == WPF::ProcessHeapImpl::Alloc )
        v13 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v12);
      else
        v13 = v11(WPF::g_pProcessHeap, v12);
      *v9 = v13;
      if ( !v13 )
        v5 = -2147024882;
    }
    else
    {
      v5 = -2147024809;
    }
    if ( v5 < 0 )
    {
      v21 = 354;
      v7 = v5;
      goto LABEL_19;
    }
    v14 = *((_DWORD *)this + 47);
    v15 = *((_DWORD *)this + 46);
    v16 = *v6;
    v17 = (unsigned int)*v6;
    v22[0] = 0;
    v22[1] = 0;
    v22[2] = v15;
    v18 = *(_QWORD *)a2;
    v22[3] = v14;
    v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v18 + 72))(
            a2,
            v22,
            v17,
            (unsigned int)(v14 * v16),
            *v9);
    v5 = v19;
    if ( v19 >= 0 )
      return (unsigned int)v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x16Cu);
LABEL_23:
    if ( v5 >= 0 )
      return (unsigned int)v5;
    goto LABEL_24;
  }
  v21 = 339;
LABEL_6:
  v7 = inited;
LABEL_19:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v21);
LABEL_24:
  if ( *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 33) = 0LL;
  }
  return (unsigned int)v5;
}

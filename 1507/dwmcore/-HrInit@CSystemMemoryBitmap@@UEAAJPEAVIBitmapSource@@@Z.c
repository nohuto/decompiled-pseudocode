/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180143D50
 * Callers:
 *     <none>
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x180062A80 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180144108 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  unsigned int v5; // esi
  unsigned int *v6; // rbx
  int v7; // eax
  WPF *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // rax
  int v14; // eax
  _DWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
LABEL_12:
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    goto LABEL_13;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x153u);
    goto LABEL_13;
  }
  v6 = (unsigned int *)((char *)this + 272);
  v7 = HrCalcDWordAlignedScanlineStride(*((unsigned int *)this + 46), *((_DWORD *)this + 50), (unsigned int *)this + 68);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x159u);
    goto LABEL_13;
  }
  v9 = WPF::HrMalloc(v8, *v6, *((unsigned int *)this + 47), (_QWORD *)this + 33);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v10 = *((_DWORD *)this + 46);
    v11 = *v6;
    v12 = *((_DWORD *)this + 47);
    v16[0] = 0;
    v16[1] = 0;
    v16[2] = v10;
    v13 = *(_QWORD *)a2;
    v16[3] = v12;
    v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, _QWORD, _QWORD, _QWORD))(v13 + 72))(
            a2,
            v16,
            v11,
            v12 * v11,
            *((_QWORD *)this + 33));
    v5 = v14;
    if ( v14 >= 0 )
      return v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x16Cu);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x162u);
LABEL_13:
  if ( *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
  return v5;
}

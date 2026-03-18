/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x18011A6F8
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2)
{
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _OWORD *v5; // rax
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  _OWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v4 == WPF::ProcessHeapImpl::Alloc )
    v5 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
  else
    v5 = (_OWORD *)v4(WPF::g_pProcessHeap, 32LL);
  v6 = 0;
  v11 = v5;
  if ( !v5 )
    v6 = -2147024882;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26u);
  }
  else
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v7 = *((_DWORD *)this + 14);
    v8 = v7 + 1;
    if ( v7 + 1 >= v7 )
    {
      v6 = 0;
      if ( v8 <= *((_DWORD *)this + 13) )
      {
        *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * *((unsigned int *)this + 14)) = v11;
        *((_DWORD *)this + 14) = v8;
        return (unsigned int)v6;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &v11);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v6 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2Eu);
  }
  if ( v11 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  return (unsigned int)v6;
}

/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x1800E8288
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2)
{
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  _OWORD *v5; // rax
  int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  _OWORD *v10; // rbp
  int v12; // eax
  _OWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v4 == WPF::ProcessHeapImpl::Alloc )
    v5 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
  else
    v5 = (_OWORD *)v4(WPF::g_pProcessHeap, 32LL);
  v6 = 0;
  v13 = v5;
  if ( !v5 )
    v6 = -2147024882;
  if ( v6 >= 0 )
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v7 = *((_DWORD *)this + 14);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v6 = -2147024362;
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2Eu);
      goto LABEL_20;
    }
    v6 = 0;
    if ( v8 > *((_DWORD *)this + 13) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &v13);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      v6 = v9;
      if ( v9 < 0 )
        goto LABEL_19;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * *((unsigned int *)this + 14)) = v13;
      *((_DWORD *)this + 14) = v8;
    }
    v10 = 0LL;
    v13 = 0LL;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26u);
LABEL_20:
  v10 = v13;
LABEL_13:
  if ( v10 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _OWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v10);
  return (unsigned int)v6;
}

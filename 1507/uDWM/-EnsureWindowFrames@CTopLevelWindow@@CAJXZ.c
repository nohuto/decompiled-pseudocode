/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000882C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001B9C8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x180040CF4 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x1800459B0 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  int v2; // edi
  void *(*v3)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  CTopLevelWindow::WindowFrame *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !dword_1800BC688 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      v4 = v3 == WPF::ProcessHeapImpl::AllocClear
         ? (CTopLevelWindow::WindowFrame *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x498uLL)
         : (CTopLevelWindow::WindowFrame *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v3)(
                                             WPF::g_pProcessHeap,
                                             1176LL);
      if ( v4 )
      {
        v5 = CTopLevelWindow::WindowFrame::WindowFrame(v4);
        v8 = v5;
      }
      else
      {
        v5 = 0LL;
        v8 = 0LL;
      }
      if ( !v5 )
        break;
      v6 = dword_1800BC688 + 1;
      if ( dword_1800BC688 + 1 < (unsigned int)dword_1800BC688 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v6 > dword_1800BC684 )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet(&CTopLevelWindow::s_rgpwfWindowFrames, 8LL, 1LL, &v8);
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1800BC688) = v8;
        dword_1800BC688 = v6;
      }
      if ( (unsigned int)++v2 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1C9u);
  }
  return v0;
}

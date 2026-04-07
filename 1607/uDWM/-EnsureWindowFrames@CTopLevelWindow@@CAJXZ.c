/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18004191C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800488C4 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180047074 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  int v2; // edi
  void *(__fastcall *v3)(WPF::ProcessHeapImpl *, size_t); // rax
  CTopLevelWindow::WindowFrame *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !dword_1800B7E88 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      v4 = v3 == WPF::ProcessHeapImpl::AllocClear
         ? (CTopLevelWindow::WindowFrame *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x760uLL)
         : (CTopLevelWindow::WindowFrame *)v3(WPF::g_pProcessHeap, 1888LL);
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
      v6 = dword_1800B7E88 + 1;
      if ( dword_1800B7E88 + 1 < (unsigned int)dword_1800B7E88 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v6 > dword_1800B7E84 )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u, 1, &v8);
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1800B7E88) = v8;
        dword_1800B7E88 = v6;
      }
      if ( (unsigned int)++v2 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1A0u);
  }
  return v0;
}

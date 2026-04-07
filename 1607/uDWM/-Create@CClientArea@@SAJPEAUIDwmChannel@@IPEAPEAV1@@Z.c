/*
 * XREFs of ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800082F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015E80 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800267F0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038B3C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180015F50 (-Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::Create(struct IDwmChannel *a1, unsigned int a2, struct CClientArea **a3)
{
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CVisual *v7; // rax
  CClientArea *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  if ( a3 )
  {
    v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v6 == WPF::ProcessHeapImpl::AllocClear )
      v7 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x110uLL);
    else
      v7 = (CVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(WPF::g_pProcessHeap, 272LL);
    v8 = v7;
    if ( v7 )
    {
      CVisual::CVisual(v7);
      *(_QWORD *)v8 = &CClientArea::`vftable';
    }
    if ( v8 )
    {
      v9 = CClientArea::Initialize(v8, a1, a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x32u);
      }
      else
      {
        *a3 = v8;
        v8 = 0LL;
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2Cu);
  }
  return v10;
}

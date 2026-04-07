/*
 * XREFs of ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039EC8
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180004F10 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAVCWindowData@@PEAPEAV1@@Z @ 0x180039E24 (-CreateWindowWithNotify@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A7BC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180024960 (-Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180024E2C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Create(struct MIL_CHANNEL__ *const a1, CBaseObject ***a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  CTopLevelWindow *v5; // rax
  CBaseObject **v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xF8u);
    return v8;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CTopLevelWindow *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x328uLL);
  else
    v5 = (CTopLevelWindow *)v4(WPF::g_pProcessHeap, 808LL);
  if ( v5 )
    v6 = (CBaseObject **)CTopLevelWindow::CTopLevelWindow(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_15;
  }
  v7 = CTopLevelWindow::Initialize(v6, a1, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xF8u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  return v8;
}

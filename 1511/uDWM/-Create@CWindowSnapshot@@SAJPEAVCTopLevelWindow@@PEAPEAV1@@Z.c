/*
 * XREFs of ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003D9F0
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180012D50 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18003DB40 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::Create(struct CTopLevelWindow *a1, struct CWindowSnapshot **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  struct CWindowSnapshot *v5; // rax
  struct CWindowSnapshot *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct CWindowSnapshot *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v5 = (struct CWindowSnapshot *)v4(WPF::g_pProcessHeap, 104LL);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_QWORD *)v5 + 12) = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CWindowSnapshot::`vftable'{for `CBaseObject'};
    *((_QWORD *)v5 + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    *((_DWORD *)v5 + 18) = 1065353216;
    v7 = CWindowSnapshot::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x36u);
    }
    else
    {
      *a2 = v6;
      v6 = 0LL;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x34u);
  }
  return v8;
}

/*
 * XREFs of ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041500
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??0CText@@AEAA@XZ @ 0x180017EEC (--0CText@@AEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::Create(struct IDwmChannel *a1, struct CText **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CText *v5; // rax
  CText *v6; // rbx
  __int64 (__fastcall *v7)(CVisual *, struct IDwmChannel *); // rax
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x26u);
    return v9;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CText *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1A0uLL);
  else
    v5 = (CText *)v4(WPF::g_pProcessHeap, 416LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x1A0uLL);
    v6 = CText::CText(v6);
  }
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_18;
  }
  v7 = *(__int64 (__fastcall **)(CVisual *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CVisual::Initialize )
    v8 = CVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x26u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}

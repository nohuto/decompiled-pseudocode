/*
 * XREFs of ?Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0019724
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C0017390 (NtDCompositionRetireFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositionFrame::Retire(
        DirectComposition::CCompositionFrame *this,
        const struct DXGI_FRAME_STATISTICS *a2)
{
  char *v2; // rsi
  char *i; // rdi

  v2 = (char *)this + 136;
  *((_DWORD *)this + 18) = 2;
  for ( i = (char *)*((_QWORD *)this + 17); i != v2; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *, const struct DXGI_FRAME_STATISTICS *))(*((_QWORD *)i - 1) + 48LL))(
      (_QWORD *)i - 1,
      a2);
  DirectComposition::CCompositionFrame::ReturnLegacyTokenBuffer(this);
}

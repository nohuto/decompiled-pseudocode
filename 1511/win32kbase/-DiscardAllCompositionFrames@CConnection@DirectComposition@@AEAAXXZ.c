/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0013AC4
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0013638 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00A89F4 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  char *v1; // rdi
  char **v2; // rax
  char **v3; // rcx
  DirectComposition::CCompositionFrame *v4; // rbx

  v1 = (char *)this + 184;
  v2 = (char **)*((_QWORD *)this + 24);
  v3 = (char **)v2[1];
  if ( *v2 != v1 || *v3 != (char *)v2 )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (char **)v1 )
      break;
    v4 = (DirectComposition::CCompositionFrame *)(v2 - 1);
    DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)(v2 - 1));
    DirectComposition::CCompositionFrame::Release(v4);
    v2 = (char **)*((_QWORD *)v1 + 1);
    v3 = (char **)v2[1];
    if ( *v2 != v1 || *v3 != (char *)v2 )
      __fastfail(3u);
  }
}

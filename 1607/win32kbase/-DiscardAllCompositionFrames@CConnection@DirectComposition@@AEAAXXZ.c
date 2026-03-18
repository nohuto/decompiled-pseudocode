/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00192AC
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00196F8 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00B14B8 (-AcquireExclusive@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  DirectComposition::CPushLockCriticalSection *v1; // rsi
  char *v3; // rdi
  char **v4; // rax
  char **v5; // rcx
  DirectComposition::CCompositionFrame *v6; // rbx

  v1 = (DirectComposition::CConnection *)((char *)this + 200);
  DirectComposition::CPushLockCriticalSection::AcquireExclusive((DirectComposition::CConnection *)((char *)this + 200));
  v3 = (char *)this + 184;
  v4 = (char **)*((_QWORD *)v3 + 1);
  v5 = (char **)v4[1];
  if ( *v4 != v3 || *v5 != (char *)v4 )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v3 + 1) = v5;
    *v5 = v3;
    if ( v4 == (char **)v3 )
      break;
    v6 = (DirectComposition::CCompositionFrame *)(v4 - 1);
    DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)(v4 - 1));
    DirectComposition::CCompositionFrame::Release(v6);
    v4 = (char **)*((_QWORD *)v3 + 1);
    v5 = (char **)v4[1];
    if ( *v4 != v3 || *v5 != (char *)v4 )
      __fastfail(3u);
  }
  DirectComposition::CPushLockCriticalSection::Release(v1);
}

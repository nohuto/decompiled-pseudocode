/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C006B614
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006B434 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C006B374 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?AcquireExclusive@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00A4250 (-AcquireExclusive@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  DirectComposition::CPushLockCriticalSection *v1; // rsi
  unsigned int v3; // edx
  char *v4; // rdi
  char **v5; // rax
  char **v6; // rcx
  DirectComposition::CCompositionFrame *v7; // rbx
  unsigned int v8; // edx

  v1 = (DirectComposition::CConnection *)((char *)this + 200);
  DirectComposition::CPushLockCriticalSection::AcquireExclusive((DirectComposition::CConnection *)((char *)this + 200));
  v4 = (char *)this + 184;
  v5 = (char **)*((_QWORD *)v4 + 1);
  v6 = (char **)v5[1];
  if ( *v5 != v4 || *v6 != (char *)v5 )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v4 + 1) = v6;
    *v6 = v4;
    if ( v5 == (char **)v4 )
      break;
    v7 = (DirectComposition::CCompositionFrame *)(v5 - 1);
    DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)(v5 - 1), v3);
    DirectComposition::CCompositionFrame::Release(v7, v8);
    v5 = (char **)*((_QWORD *)v4 + 1);
    v6 = (char **)v5[1];
    if ( *v5 != v4 || *v6 != (char *)v5 )
      __fastfail(3u);
  }
  DirectComposition::CPushLockCriticalSection::Release(v1);
}

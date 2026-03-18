/*
 * XREFs of ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C00186D8
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C0017390 (NtDCompositionRetireFrame.c)
 * Callees:
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00196F8 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 */

void __fastcall DirectComposition::CConnection::DiscardPreviousFrames(
        DirectComposition::CConnection *this,
        unsigned __int64 a2)
{
  DirectComposition::CPushLockCriticalSection *v2; // rdi
  DirectComposition::CConnection *v5; // rbp
  DirectComposition::CConnection *v6; // rax
  __int64 v7; // rdx
  DirectComposition::CConnection *v8; // rbx

  v2 = (DirectComposition::CConnection *)((char *)this + 200);
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)v2 + 8) = 1;
  v5 = (DirectComposition::CConnection *)((char *)this + 184);
  v6 = (DirectComposition::CConnection *)*((_QWORD *)this + 24);
  if ( v6 != (DirectComposition::CConnection *)((char *)this + 184) )
  {
    do
    {
      if ( *((_QWORD *)v6 + 7) >= a2 )
        break;
      v7 = *(_QWORD *)v6;
      v8 = (DirectComposition::CConnection *)*((_QWORD *)v6 + 1);
      if ( *(DirectComposition::CConnection **)(*(_QWORD *)v6 + 8LL) != v6
        || *(DirectComposition::CConnection **)v8 != v6 )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      DirectComposition::CCompositionFrame::Release((DirectComposition::CConnection *)((char *)v6 - 8));
      v6 = v8;
    }
    while ( v8 != v5 );
  }
  DirectComposition::CPushLockCriticalSection::Release(v2);
}

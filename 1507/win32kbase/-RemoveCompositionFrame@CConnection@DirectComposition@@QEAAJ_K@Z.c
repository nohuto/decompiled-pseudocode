/*
 * XREFs of ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A43C8
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0045E30 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C006B374 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C006B730 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::RemoveCompositionFrame(
        DirectComposition::CConnection *this,
        __int64 a2)
{
  DirectComposition::CPushLockCriticalSection *v2; // rsi
  unsigned int v5; // edi
  char *v6; // rax
  char *v7; // rbx
  __int64 v9; // r8
  char **v10; // rdx

  v2 = (DirectComposition::CConnection *)((char *)this + 200);
  v5 = -1073741275;
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)v2 + 8) = 1;
  v6 = (char *)*((_QWORD *)this + 24);
  v7 = (char *)this + 184;
  while ( v6 != v7 )
  {
    if ( *((_QWORD *)v6 + 7) == a2 )
    {
      v9 = *(_QWORD *)v6;
      v10 = (char **)*((_QWORD *)v6 + 1);
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *v10 != v6 )
        __fastfail(3u);
      *v10 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      DirectComposition::CCompositionFrame::Release((DirectComposition::CCompositionFrame *)(v6 - 8), (unsigned int)v10);
      v5 = 0;
      break;
    }
    v6 = (char *)*((_QWORD *)v6 + 1);
  }
  DirectComposition::CPushLockCriticalSection::Release(v2);
  return v5;
}

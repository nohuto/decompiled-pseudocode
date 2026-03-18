/*
 * XREFs of ?FlushChannelHandles@CHandleTable@@QEAAXI@Z @ 0x1800A1520
 * Callers:
 *     ?Commit@CChannel@@QEAAJXZ @ 0x1800A03A8 (-Commit@CChannel@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

void __fastcall CHandleTable::FlushChannelHandles(CHandleTable *this, unsigned int a2)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( a2 )
  {
    v4 = *((_QWORD *)this + 3);
    do
    {
      v5 = *(_DWORD *)(v4 + 12LL * a2 + 8);
      memset_0((void *)(*((_QWORD *)this + 3) + a2 * *((_DWORD *)this + 2)), 0, *((unsigned int *)this + 2));
      a2 = v5;
    }
    while ( v5 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
}

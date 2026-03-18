/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0009544
 * Callers:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00CE14C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00CE444 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C00A2908 (--1DXGPROCESS@@AEAA@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(__int64 *P)
{
  __int64 v3; // rax

  if ( P[3] <= 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v3 + 24) = 866LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( P[3]-- == 1 )
  {
    DXGPROCESS::~DXGPROCESS((DXGPROCESS *)P);
    ExFreePoolWithTag(P, 0);
  }
}

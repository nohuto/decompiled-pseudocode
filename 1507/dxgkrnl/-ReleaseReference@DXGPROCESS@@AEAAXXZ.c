/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0002D00
 * Callers:
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00A8050 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00DB224 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C000975C (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     ??1DXGPROCESS@@QEAA@XZ @ 0x1C0085220 (--1DXGPROCESS@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(DXGPROCESS *this)
{
  __int64 v3; // rax

  if ( *((__int64 *)this + 4) <= 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 885LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( (*((_QWORD *)this + 4))-- == 1LL )
  {
    DXGPROCESS::~DXGPROCESS(this);
    DXGQUOTAALLOCATOR<1,1265072196>::operator delete(this);
  }
}

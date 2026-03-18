/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C00018D0
 * Callers:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00B3C50 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C00048AC (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     ??1DXGPROCESS@@QEAA@XZ @ 0x1C0068064 (--1DXGPROCESS@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(DXGPROCESS *this)
{
  __int64 v3; // rax

  if ( *((__int64 *)this + 4) <= 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 737LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( (*((_QWORD *)this + 4))-- == 1LL )
  {
    DXGPROCESS::~DXGPROCESS(this);
    DXGQUOTAALLOCATOR<1,1265072196>::operator delete(this);
  }
}

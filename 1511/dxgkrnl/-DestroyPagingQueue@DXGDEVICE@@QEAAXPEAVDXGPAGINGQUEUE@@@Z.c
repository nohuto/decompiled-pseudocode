/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@@Z @ 0x1C006E370
 * Callers:
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C006D5D8 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C008BD50 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(PERESOURCE *this, struct DXGPAGINGQUEUE *a2)
{
  struct DXGPAGINGQUEUE *v3; // rcx
  struct DXGPAGINGQUEUE **v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 6902LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 6903LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v3 = *(struct DXGPAGINGQUEUE **)a2;
  v4 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  DXGPAGINGQUEUE::~DXGPAGINGQUEUE(a2);
  DXGQUOTAALLOCATOR<1,1265072196>::operator delete(a2);
}

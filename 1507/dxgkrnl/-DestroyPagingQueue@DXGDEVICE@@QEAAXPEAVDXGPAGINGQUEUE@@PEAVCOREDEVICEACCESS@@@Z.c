/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0135774
 * Callers:
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001BFD4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C001C5F0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0135474 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0144558 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(
        PERESOURCE *this,
        struct DXGPAGINGQUEUE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGPAGINGQUEUE *v19; // rcx
  struct DXGPAGINGQUEUE **v20; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v7 + 24) = 6905LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 6906LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]->OwnerTable) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 6907LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 6910LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGPAGINGQUEUE::DestroyCoreState(a2, a3);
  v19 = *(struct DXGPAGINGQUEUE **)a2;
  v20 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2 || *v20 != a2 )
    __fastfail(3u);
  *v20 = v19;
  *((_QWORD *)v19 + 1) = v20;
  DXGPAGINGQUEUE::`scalar deleting destructor'(a2);
}

/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C006CE10
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C0018878 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C008BBBC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        PERESOURCE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  DXGPAGINGQUEUE *v14; // rax
  PERESOURCE v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v17 + 24) = 6848LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v18 + 24) = 6849LL;
    WdLogEvent5_WdAssertion(v18);
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x38uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v10 = 0LL;
    PoolWithQuotaTag[2] = this;
    *PoolWithQuotaTag = 0LL;
    PoolWithQuotaTag[1] = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 6) = 0;
    PoolWithQuotaTag[4] = 0LL;
    PoolWithQuotaTag[5] = 0LL;
    PoolWithQuotaTag[6] = 1LL;
  }
  *a4 = (struct DXGPAGINGQUEUE *)PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v13 = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)PoolWithQuotaTag, a2, a3);
    if ( v13 >= 0 )
    {
      v14 = *a4;
      v15 = this[40];
      *(_QWORD *)v14 = v15;
      *((_QWORD *)v14 + 1) = this + 40;
      if ( (PERESOURCE *)v15->SystemResourcesList.Blink != this + 40 )
        __fastfail(3u);
      v15->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v14;
      this[40] = (PERESOURCE)v14;
      return (unsigned int)v13;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    v13 = -1073741801;
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v19);
  }
  if ( *a4 )
    DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
  *a4 = 0LL;
  return (unsigned int)v13;
}

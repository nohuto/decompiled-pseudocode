/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0095284
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00D1FBC (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C0006FAC (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0007994 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C009002C (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016E9B0 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // esi
  DXGPAGINGQUEUE *v20; // rax
  DXGPAGINGQUEUE **v21; // rcx
  __int64 v22; // rdx

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 7167LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((DXGADAPTER ***)this + 2)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 7168LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 7169LL;
    WdLogEvent5_WdAssertion(v12);
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x40uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v15 = 0LL;
    PoolWithQuotaTag[2] = this;
    *PoolWithQuotaTag = 0LL;
    PoolWithQuotaTag[1] = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 6) = 0;
    PoolWithQuotaTag[4] = 0LL;
    PoolWithQuotaTag[5] = 0LL;
    PoolWithQuotaTag[6] = 1LL;
    *((_BYTE *)PoolWithQuotaTag + 56) = 0;
  }
  *a4 = (struct DXGPAGINGQUEUE *)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v19 = -1073741801;
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v18);
LABEL_13:
    DXGPAGINGQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
    return (unsigned int)v19;
  }
  v19 = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)PoolWithQuotaTag, a2, a3);
  if ( v19 < 0 )
    goto LABEL_13;
  v20 = *a4;
  v21 = (DXGPAGINGQUEUE **)((char *)this + 344);
  v22 = *((_QWORD *)this + 43);
  if ( *(DXGDEVICE **)(v22 + 8) != (DXGDEVICE *)((char *)this + 344) )
    __fastfail(3u);
  *(_QWORD *)v20 = v22;
  *((_QWORD *)v20 + 1) = v21;
  *(_QWORD *)(v22 + 8) = v20;
  *v21 = v20;
  _InterlockedIncrement64((volatile signed __int64 *)this + 8);
  return (unsigned int)v19;
}

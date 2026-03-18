/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C0096ED8
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C008BBBC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E8C00 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0093984 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00948DC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00949B8 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C0094B30 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        union _LARGE_INTEGER *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a5,
        struct DXGPAGINGQUEUE *a6,
        struct DXGSYNCOBJECT **a7,
        struct DXGDEVICESYNCOBJECT **a8,
        unsigned int *a9)
{
  DXGSYNCOBJECT *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGSYNCOBJECT *v16; // rbx
  int v17; // edi
  union _LARGE_INTEGER v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  DXGSYNCOBJECT *v22; // rax
  __int64 v23; // rax

  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v20 + 24) = 1636LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a7 )
  {
    *a7 = 0LL;
    if ( a8 )
      goto LABEL_5;
  }
  else
  {
    if ( a8 )
    {
LABEL_5:
      *a8 = 0LL;
      goto LABEL_6;
    }
    v21 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v21 + 24) = 1637LL;
    WdLogEvent5_WdAssertion(v21);
  }
LABEL_6:
  if ( a9 )
    *a9 = 0;
  if ( (a5->Flags.Value & 4) != 0 )
  {
    v22 = (DXGSYNCOBJECT *)operator new[](0x108uLL, 0x4B677844u, (POOL_TYPE)512);
    v16 = v22;
    if ( v22 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v22, (struct DXGGLOBAL *)this, a5);
      *((_QWORD *)v16 + 32) = 0LL;
      *((_QWORD *)v16 + 31) = (char *)v16 + 240;
      *((_QWORD *)v16 + 30) = (char *)v16 + 240;
      goto LABEL_11;
    }
  }
  else
  {
    PoolWithTag = (DXGSYNCOBJECT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x118uLL, 0x4B677844u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(PoolWithTag, (struct DXGGLOBAL *)this, a5);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)v16 + 240), a2);
      goto LABEL_11;
    }
  }
  v16 = 0LL;
LABEL_11:
  if ( v16 )
  {
    v17 = DXGSYNCOBJECT::Initialize(v16, a6);
    if ( v17 < 0 )
      goto LABEL_28;
    if ( a9 )
      v17 = DXGSYNCOBJECT::Open(
              v16,
              a2,
              a3,
              a8,
              a9,
              &a5->MonitoredFence.FenceValueCPUVirtualAddress,
              &a5->MonitoredFence.FenceValueGPUVirtualAddress,
              a4,
              a5->Flags);
    else
      _InterlockedIncrement((volatile signed __int32 *)v16 + 6);
    if ( v17 < 0 )
    {
LABEL_28:
      DXGSYNCOBJECT::Destroy(v16);
    }
    else
    {
      DXGFASTMUTEX::Acquire(this + 38);
      v18 = this[46];
      *(union _LARGE_INTEGER *)v16 = v18;
      *((_QWORD *)v16 + 1) = this + 46;
      if ( *(union _LARGE_INTEGER **)(v18.QuadPart + 8) != &this[46] )
        __fastfail(3u);
      *(_QWORD *)(v18.QuadPart + 8) = v16;
      this[46].QuadPart = (LONGLONG)v16;
      DXGFASTMUTEX::Release((DXGFASTMUTEX *)&this[38]);
      if ( a7 )
        *a7 = v16;
    }
    return (unsigned int)v17;
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
}

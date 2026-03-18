/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C009002C (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E3A78 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0025664 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C007F55C (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00A47B0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00A4854 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C00A49E0 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        DXGGLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a5,
        struct DXGPAGINGQUEUE *a6,
        struct DXGSYNCOBJECT **a7,
        struct DXGDEVICESYNCOBJECT **a8,
        unsigned int *a9)
{
  __int64 v11; // rax
  __int64 v12; // rax
  DXGSYNCOBJECT *v13; // rax
  _QWORD *v14; // rcx
  DXGSYNCOBJECT *v15; // rbx
  DXGSYNCOBJECT *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r9
  DXGSYNCOBJECT **v24; // rax
  __int64 v25; // rcx

  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 1724LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !a8 )
      goto LABEL_8;
  }
  else if ( !a8 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 1725LL;
    WdLogEvent5_WdAssertion(v12);
    goto LABEL_8;
  }
  *a8 = 0LL;
LABEL_8:
  if ( a9 )
    *a9 = 0;
  if ( (a5->Flags.Value & 4) != 0 )
  {
    v13 = (DXGSYNCOBJECT *)operator new(0xF0uLL, 0x4B677844u, (POOL_TYPE)512);
    v15 = v13;
    if ( v13 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v13, this, a5);
      v14[29] = 0LL;
      v14[28] = v14 + 27;
      v14[27] = v14 + 27;
      goto LABEL_16;
    }
  }
  else
  {
    v16 = (DXGSYNCOBJECT *)operator new(0x100uLL, 0x4B677844u, (POOL_TYPE)512);
    v15 = v16;
    if ( v16 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v16, this, a5);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v17 + 216), a2);
      goto LABEL_16;
    }
  }
  v15 = 0LL;
LABEL_16:
  if ( v15 )
  {
    v21 = DXGSYNCOBJECT::Initialize(v15, a6);
    if ( v21 < 0 )
      goto LABEL_19;
    if ( a9 || *((_DWORD *)v15 + 32) == 5 )
      v21 = DXGSYNCOBJECT::Open(
              v15,
              a2,
              a3,
              a8,
              a9,
              &a5->MonitoredFence.FenceValueCPUVirtualAddress,
              &a5->MonitoredFence.FenceValueGPUVirtualAddress,
              a4,
              a5->Flags);
    else
      DXGSYNCOBJECT::AddReference(v15, v20, v22, v23);
    if ( v21 < 0 )
    {
LABEL_19:
      DXGSYNCOBJECT::Destroy(v15);
    }
    else
    {
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 256));
      v24 = (DXGSYNCOBJECT **)((char *)this + 296);
      v25 = *((_QWORD *)this + 37);
      if ( *(DXGGLOBAL **)(v25 + 8) != (DXGGLOBAL *)((char *)this + 296) )
        __fastfail(3u);
      *(_QWORD *)v15 = v25;
      *((_QWORD *)v15 + 1) = v24;
      *(_QWORD *)(v25 + 8) = v15;
      *v24 = v15;
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 32);
      if ( a7 )
        *a7 = v15;
    }
    return (unsigned int)v21;
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
}

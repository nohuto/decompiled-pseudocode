/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E3A78
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C007EBE0 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3BDC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C018E3A8 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        struct DXGDEVICE *a1,
        DXGADAPTER **a2,
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a3,
        D3DKMT_HANDLE **a4)
{
  struct DXGDEVICE *v7; // rbp
  UINT EngineAffinity; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  DXGGLOBAL *v11; // rax
  int v12; // ebx
  D3DKMT_HANDLE *v13; // rdx
  __int64 v15; // rax
  _BYTE v16[16]; // [rsp+50h] [rbp-38h] BYREF
  D3DKMT_HANDLE v17; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSYNCOBJECT *v18; // [rsp+A0h] [rbp+18h] BYREF

  v7 = a1;
  if ( a1 && !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 28LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = 0LL;
  v17 = 0;
  EngineAffinity = 0;
  v18 = 0LL;
  if ( a3->Info.Type == D3DDDI_MONITORED_FENCE )
  {
    EngineAffinity = a3->Info.MonitoredFence.EngineAffinity;
    a1 = (struct DXGDEVICE *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 248LL);
    if ( (_DWORD)a1 == 1 )
      EngineAffinity = 1;
    if ( EngineAffinity >= 1 << (char)a1 )
      EngineAffinity = (1 << (char)a1) - 1;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v16, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v16);
  v11 = DXGGLOBAL::GetGlobal(v10);
  v12 = DXGGLOBAL::CreateSyncObject(
          v11,
          (struct ADAPTER_RENDER *)a2,
          v7,
          EngineAffinity,
          &a3->Info,
          0LL,
          &v18,
          0LL,
          (unsigned int *)((unsigned __int64)&v17 & -(__int64)(v7 != 0LL)));
  if ( v16[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v16);
  if ( v12 >= 0 )
  {
    v13 = (D3DKMT_HANDLE *)v18;
    a3->hSyncObject = v17;
    a3->Info.SharedHandle = v13[18];
    *a4 = v13;
  }
  return (unsigned int)v12;
}

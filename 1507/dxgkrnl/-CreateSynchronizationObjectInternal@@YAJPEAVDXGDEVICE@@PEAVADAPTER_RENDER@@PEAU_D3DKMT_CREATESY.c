/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DD9A0
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0082940 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C235C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0162030 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00C3020 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGGLOBAL *v14; // rax
  int v15; // ebx
  D3DKMT_HANDLE *v16; // rdx
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+50h] [rbp-38h] BYREF
  D3DKMT_HANDLE v20; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSYNCOBJECT *v21; // [rsp+A0h] [rbp+18h] BYREF

  v7 = a1;
  if ( a1 && !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 28LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *a4 = 0LL;
  v20 = 0;
  EngineAffinity = 0;
  v21 = 0LL;
  if ( a3->Info.Type == D3DDDI_MONITORED_FENCE )
  {
    EngineAffinity = a3->Info.MonitoredFence.EngineAffinity;
    a1 = (struct DXGDEVICE *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 232LL);
    if ( (_DWORD)a1 == 1 )
      EngineAffinity = 1;
    if ( EngineAffinity >= 1 << (char)a1 )
      EngineAffinity = (1 << (char)a1) - 1;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v19);
  v14 = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
  v15 = DXGGLOBAL::CreateSyncObject(
          v14,
          (struct ADAPTER_RENDER *)a2,
          v7,
          EngineAffinity,
          &a3->Info,
          0LL,
          &v21,
          0LL,
          (unsigned int *)((unsigned __int64)&v20 & -(__int64)(v7 != 0LL)));
  if ( v19[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v19);
  if ( v15 >= 0 )
  {
    v16 = (D3DKMT_HANDLE *)v21;
    a3->hSyncObject = v20;
    a3->Info.SharedHandle = v16[18];
    *a4 = v16;
  }
  return (unsigned int)v15;
}

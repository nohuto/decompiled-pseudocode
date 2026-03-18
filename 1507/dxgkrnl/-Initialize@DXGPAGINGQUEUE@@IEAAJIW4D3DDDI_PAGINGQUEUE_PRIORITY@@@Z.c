/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01457C8
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C013531C (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0002DD8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0004C5C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C001E98C (-VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00C3020 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGDEVICE *v18; // rsi
  char *v19; // r13
  struct ADAPTER_RENDER *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  DXGGLOBAL *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _BYTE v44[16]; // [rsp+58h] [rbp-29h] BYREF
  _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v45; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v46; // [rsp+E8h] [rbp+67h] BYREF

  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 864LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
         a2,
         a3,
         (char *)this + 32);
  v10 = v5;
  if ( v5 < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = *((_QWORD *)this + 2);
LABEL_3:
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  memset(&v45, 0, sizeof(v45));
  v13 = *((_QWORD *)this + 2);
  v45.Flags.Value |= 0x10u;
  v45.Type = D3DDDI_MONITORED_FENCE;
  v45.Fence.FenceValue = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 1944LL);
  Global = DXGGLOBAL::GetGlobal(v45.Fence.FenceValue, v14, v15, v16);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44);
  v18 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v19 = (char *)this + 40;
  v20 = (struct ADAPTER_RENDER *)*((_QWORD *)v18 + 2);
  v24 = DXGGLOBAL::GetGlobal(v4, v21, v22, v23);
  v25 = DXGGLOBAL::CreateSyncObject(
          v24,
          v20,
          v18,
          (unsigned int)(1 << v4),
          &v45,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          &v46);
  v30 = v25;
  if ( v25 >= 0 )
  {
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44);
    v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v32 + 192));
    v33 = (v46 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *(_DWORD *)(v32 + 232) )
    {
      v34 = *(_QWORD *)(v32 + 216);
      v35 = *(unsigned int *)(v34 + 16 * v33 + 8);
      if ( ((v46 >> 26) & 0x30) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x30) && (v35 & 0xF) != 0 )
      {
        v36 = 2 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v34 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
        {
          v37 = WdLogNewEntry5_WdAssertion((v46 >> 26) & 0x30, v46, v35, v34);
          *(_QWORD *)(v37 + 24) = 194LL;
          WdLogEvent5_WdAssertion(v37);
        }
        *(_DWORD *)(*(_QWORD *)(v32 + 216) + 8 * v36 + 8) &= ~0x1000u;
      }
    }
    *(_QWORD *)(v32 + 200) = 0LL;
    ExReleasePushLockExclusiveEx(v32 + 192, 0LL);
    KeLeaveCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v44,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v19 + 32LL) + 32LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v19 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v19 + 16LL) + 16LL));
    VIDMM_EXPORT::VidMmSetPagingFenceObject(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
      *((struct VIDMM_PAGING_QUEUE **)this + 4),
      VidSchSyncObject,
      v45.Fence.FenceValue);
    if ( v44[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
    v39 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
    *((_DWORD *)this + 6) = v39;
    if ( !v39 )
    {
      v11 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      v10 = -1073741801LL;
      *(_QWORD *)(v11 + 24) = this;
      goto LABEL_3;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v31 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v31 + 32) = v30;
    WdLogEvent5_WdWarning(v31);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44);
  }
  return (unsigned int)v30;
}

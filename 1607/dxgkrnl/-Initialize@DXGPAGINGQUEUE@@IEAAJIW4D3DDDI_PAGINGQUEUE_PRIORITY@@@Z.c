/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C009002C
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0095284 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0006FD8 (-VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00097B4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0009A6C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A4A70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, __int64 a2, __int64 a3)
{
  char v4; // r15
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGDEVICE *v15; // rsi
  char *v16; // r13
  struct ADAPTER_RENDER *v17; // rdi
  DXGGLOBAL *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _BYTE v37[16]; // [rsp+58h] [rbp-29h] BYREF
  _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v38; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v39; // [rsp+E8h] [rbp+67h] BYREF

  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 888LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 560LL),
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
  memset(&v38, 0, sizeof(v38));
  v13 = *((_QWORD *)this + 2);
  v38.Flags.Value |= 0x10u;
  v38.Type = D3DDDI_MONITORED_FENCE;
  v38.Fence.FenceValue = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 2096LL);
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  v15 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v16 = (char *)this + 40;
  v17 = (struct ADAPTER_RENDER *)*((_QWORD *)v15 + 2);
  v18 = DXGGLOBAL::GetGlobal();
  v19 = DXGGLOBAL::CreateSyncObject(
          v18,
          v17,
          v15,
          1 << v4,
          &v38,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          &v39);
  v24 = v19;
  if ( v19 >= 0 )
  {
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37);
    v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v26 + 184));
    v27 = (v39 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v26 + 224) )
    {
      v28 = *(_QWORD *)(v26 + 208);
      if ( ((v39 >> 26) & 0x30) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x30)
        && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0xF) != 0 )
      {
        v29 = 2 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v28 + 16 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion((v39 >> 26) & 0x30);
          *(_QWORD *)(v30 + 24) = 193LL;
          WdLogEvent5_WdAssertion(v30);
        }
        *(_DWORD *)(*(_QWORD *)(v26 + 208) + 8 * v29 + 8) &= ~0x1000u;
      }
    }
    *(_QWORD *)(v26 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 184, 0LL);
    KeLeaveCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v37,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v16 + 32LL) + 32LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v16 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v16 + 16LL) + 16LL));
    VIDMM_EXPORT::VidMmSetPagingFenceObject(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
      *((struct VIDMM_PAGING_QUEUE **)this + 4),
      VidSchSyncObject,
      v38.Fence.FenceValue);
    if ( v37[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
    v32 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
    *((_DWORD *)this + 6) = v32;
    if ( !v32 )
    {
      v11 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      v10 = -1073741801LL;
      *(_QWORD *)(v11 + 24) = this;
      goto LABEL_3;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v25 + 32) = v24;
    WdLogEvent5_WdWarning(v25);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37);
  }
  return (unsigned int)v24;
}

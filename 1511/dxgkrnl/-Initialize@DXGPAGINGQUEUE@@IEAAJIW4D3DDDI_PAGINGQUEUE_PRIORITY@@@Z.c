/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C008BBBC
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C006CE10 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0004320 (-VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C0096ED8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGDEVICE *v8; // rsi
  char *v9; // r15
  struct ADAPTER_RENDER *v10; // rdi
  DXGGLOBAL *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+58h] [rbp-29h] BYREF
  char v20; // [rsp+60h] [rbp-21h]
  _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v21; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v22; // [rsp+E8h] [rbp+67h] BYREF

  v4 = a2;
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                        + 8LL)
                                                                            + 872LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
                  a2,
                  a3,
                  (char *)this + 32);
  if ( (int)v5 >= 0 )
  {
    memset(&v21, 0, sizeof(v21));
    v6 = *((_QWORD *)this + 2);
    v21.Flags.Value |= 0x10u;
    v21.Type = D3DDDI_MONITORED_FENCE;
    v21.Fence.FenceValue = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 1956LL);
    Global = DXGGLOBAL::GetGlobal(v21.Fence.FenceValue);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v19);
    v8 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v9 = (char *)this + 40;
    v10 = (struct ADAPTER_RENDER *)*((_QWORD *)v8 + 2);
    v11 = DXGGLOBAL::GetGlobal(v4);
    v5 = (int)DXGGLOBAL::CreateSyncObject(
                v11,
                v10,
                v8,
                1 << v4,
                &v21,
                this,
                0LL,
                (struct DXGDEVICESYNCOBJECT **)this + 5,
                &v22);
    if ( v20 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v19);
    if ( (int)v5 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = *((_QWORD *)this + 2);
      *(_QWORD *)(v18 + 32) = v5;
      WdLogEvent5_WdWarning(v18);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v19,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v9 + 32LL) + 32LL));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *(DXGSYNCOBJECT **)(*(_QWORD *)v9 + 32LL),
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 16LL));
      VIDMM_EXPORT::VidMmSetPagingFenceObject(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
        *((struct VIDMM_PAGING_QUEUE **)this + 4),
        VidSchSyncObject,
        v21.Fence.FenceValue);
      if ( v20 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    }
  }
  return (unsigned int)v5;
}

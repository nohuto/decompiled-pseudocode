/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0177C70
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000A0CC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0025664 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A4A70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rsi
  struct VIDMM_MONITORED_FENCE_STORAGE *v29; // rax
  int v30; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v32; // rax
  unsigned int *Current; // rbx
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // r8d
  _BYTE v41[8]; // [rsp+40h] [rbp-20h] BYREF
  char v42; // [rsp+48h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v11 + 24) = 142LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 16) = a3;
  *((_QWORD *)this + 4) = a2;
  v12 = DXGSYNCOBJECT::AddReference(a2, v7, v9, v10);
  v17 = v12;
  if ( v12 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v17;
  }
  *((_BYTE *)this + 68) |= 1u;
  v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v21 = *(_QWORD *)(v20 + 408);
  v17 = *(_QWORD *)(v20 + 400);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  LODWORD(v17) = (*(__int64 (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *, char *))(*(_QWORD *)(v17 + 8) + 928LL))(
                   v21,
                   MonitoredFenceStorage,
                   (char *)this + 56);
  if ( (int)v17 < 0 )
    return (unsigned int)v17;
  if ( *(_BYTE *)&a3.0 >= 0 )
  {
    v24 = *((_QWORD *)this + 2);
    v25 = *((_QWORD *)this + 7);
    v26 = *(_QWORD *)(v24 + 16);
    v27 = *(_QWORD *)(v24 + 560);
    v28 = *(_QWORD *)(v26 + 408);
    v17 = *(_QWORD *)(v26 + 400);
    v29 = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
    LODWORD(v17) = (*(__int64 (__fastcall **)(__int64, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *, __int64, char *, int))(*(_QWORD *)(v17 + 8) + 936LL))(
                     v28,
                     v27,
                     v29,
                     v25,
                     (char *)this + 48,
                     a4);
    if ( (int)v17 < 0 )
      return (unsigned int)v17;
  }
  v30 = *((_DWORD *)this + 16);
  if ( (v30 & 0x10) == 0 && (v30 & 0x40) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( VidSchSyncObject )
    {
      v32 = operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
      *((_QWORD *)this + 3) = v32;
      if ( !v32 )
      {
        LODWORD(v17) = -1073741801;
        if ( v42 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
        return (unsigned int)v17;
      }
      *v32 = 0LL;
      v32[1] = 0LL;
      v32[2] = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                         + 8LL)
                                             + 576LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
        *((_QWORD *)this + 3));
    }
    if ( v42 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
  }
  if ( (*((_BYTE *)this + 68) & 4) != 0 )
  {
    Current = (unsigned int *)DXGPROCESS::GetCurrent(v23);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v41,
      (struct DXGPROCESS *)Current);
    v34 = HMGRTABLE::AllocHandle(Current + 52, (__int64)this, 11, 0, 0);
    *((_DWORD *)this + 10) = v34;
    v36 = v34;
    if ( !v34 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v35);
      LODWORD(v17) = -1073741801;
      *(_QWORD *)(v37 + 24) = this;
      *(_QWORD *)(v37 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v37);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      return (unsigned int)v17;
    }
    v38 = (v34 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < Current[56] )
    {
      v39 = *((_QWORD *)Current + 26);
      v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
      if ( ((v36 >> 26) & 0x30) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x30) && (v40 & 0x1000) == 0 && (v40 & 0xF) != 0 )
        *(_DWORD *)(v39 + 16 * (((unsigned __int64)v36 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  }
  return 0LL;
}

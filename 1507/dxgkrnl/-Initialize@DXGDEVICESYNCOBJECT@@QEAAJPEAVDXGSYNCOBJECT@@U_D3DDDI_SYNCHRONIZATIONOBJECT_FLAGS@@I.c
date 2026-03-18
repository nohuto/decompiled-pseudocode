/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C014F5B0
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0002830 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C001E7D8 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
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
  DXGSYNCOBJECT *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rsi
  struct VIDMM_MONITORED_FENCE_STORAGE *v31; // rax
  int v32; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v34; // rax
  unsigned int *Current; // rbx
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r9
  int v42; // r8d
  _BYTE v43[8]; // [rsp+40h] [rbp-20h] BYREF
  char v44; // [rsp+48h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 142LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 16) = a3;
  *((_QWORD *)this + 4) = a2;
  LOBYTE(v12) = EvaluateCurrentState((int **)&g_Feature_2402071864_57775485_FeatureDescriptorDetails);
  v13 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    v14 = DXGSYNCOBJECT::AddReference(v13);
    v19 = v14;
    if ( v14 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = v19;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v19;
    }
  }
  else
  {
    DXGSYNCOBJECT::AddReference(v13);
  }
  *((_BYTE *)this + 68) |= 1u;
  v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v23 = *(_QWORD *)(v22 + 408);
  v19 = *(_QWORD *)(v22 + 400);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  LODWORD(v19) = (*(__int64 (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *, char *))(*(_QWORD *)(v19 + 8) + 904LL))(
                   v23,
                   MonitoredFenceStorage,
                   (char *)this + 56);
  if ( (int)v19 < 0 )
    return (unsigned int)v19;
  if ( *(_BYTE *)&a3.0 >= 0 )
  {
    v26 = *((_QWORD *)this + 2);
    v27 = *((_QWORD *)this + 7);
    v28 = *(_QWORD *)(v26 + 16);
    v29 = *(_QWORD *)(v26 + 536);
    v30 = *(_QWORD *)(v28 + 408);
    v19 = *(_QWORD *)(v28 + 400);
    v31 = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
    LODWORD(v19) = (*(__int64 (__fastcall **)(__int64, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *, __int64, char *, int))(*(_QWORD *)(v19 + 8) + 912LL))(
                     v30,
                     v29,
                     v31,
                     v27,
                     (char *)this + 48,
                     a4);
    if ( (int)v19 < 0 )
      return (unsigned int)v19;
  }
  v32 = *((_DWORD *)this + 16);
  if ( (v32 & 0x10) == 0 && (v32 & 0x40) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( VidSchSyncObject )
    {
      v34 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
      *((_QWORD *)this + 3) = v34;
      if ( !v34 )
      {
        LODWORD(v19) = -1073741801;
        if ( v44 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
        return (unsigned int)v19;
      }
      *v34 = 0LL;
      v34[1] = 0LL;
      v34[2] = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                         + 8LL)
                                             + 576LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
        *((_QWORD *)this + 3));
    }
    if ( v44 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
  }
  if ( (*((_BYTE *)this + 68) & 4) != 0 )
  {
    Current = (unsigned int *)DXGPROCESS::GetCurrent(v25);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v43,
      (struct DXGPROCESS *)Current);
    v36 = HMGRTABLE::AllocHandle(Current + 54, (__int64)this, 11LL, 0LL, 0);
    *((_DWORD *)this + 10) = v36;
    v38 = v36;
    if ( !v36 )
    {
      v39 = WdLogNewEntry5_WdLowResource(v37);
      LODWORD(v19) = -1073741801;
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v39);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      return (unsigned int)v19;
    }
    v40 = (v36 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 < Current[58] )
    {
      v41 = *((_QWORD *)Current + 27);
      v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
      if ( ((v38 >> 26) & 0x30) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x30) && (v42 & 0x1000) == 0 && (v42 & 0xF) != 0 )
        *(_DWORD *)(v41 + 16 * (((unsigned __int64)v38 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  }
  return 0LL;
}

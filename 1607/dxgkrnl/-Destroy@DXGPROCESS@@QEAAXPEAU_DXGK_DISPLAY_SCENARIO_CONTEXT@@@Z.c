/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328
 * Callers:
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C00A2908 (--1DXGPROCESS@@AEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00CE444 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CC84 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CCA8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C001EDFC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0025618 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0070374 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C0074920 (OutputDuplProcessTerminate.c)
 *     VidMmTerminateProcessX @ 0x1C0090344 (VidMmTerminateProcessX.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A21A4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C00A3154 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00A31C8 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     VidSchTerminateProcessX @ 0x1C00D29DC (VidSchTerminateProcessX.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00DBB18 (DxgkDestroyCsrssProcess.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0147588 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C016AFD8 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGFASTMUTEX **this, struct _ERESOURCE *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // r14
  unsigned int i; // r15d
  struct DXGSYNCOBJECT *EntryObject; // rdi
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  unsigned int j; // ebx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rcx
  unsigned int v23; // ebx
  DXGKEYEDMUTEX *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGGLOBAL *v38; // rax
  _BYTE v39[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v40; // [rsp+38h] [rbp-51h]
  __int64 v41; // [rsp+40h] [rbp-49h]
  char v42; // [rsp+48h] [rbp-41h]
  _BYTE v43[144]; // [rsp+50h] [rbp-39h] BYREF
  char v44; // [rsp+F0h] [rbp+67h] BYREF
  char v45; // [rsp+F1h] [rbp+68h]
  union _LARGE_INTEGER Interval; // [rsp+100h] [rbp+77h] BYREF
  PERESOURCE Resource; // [rsp+108h] [rbp+7Fh] BYREF

  if ( KeGetCurrentIrql() )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v26 + 24) = 1104LL;
    WdLogEvent5_WdAssertion(v26);
  }
  while ( *((_DWORD *)this + 75) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C00573B8 && (DXGFASTMUTEX *)qword_1C00573B8 == this[7] )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  v45 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v44);
  if ( *((_BYTE *)this + 288) )
    DxgkDestroyCsrssProcess();
  v4 = this + 30;
  if ( (_QWORD *)*v4 != v4 )
  {
    DXGPROCESS::ReleaseVidPnSourceOwners((DXGPROCESS *)this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( (_QWORD *)*v4 != v4 )
    {
      if ( *v4 )
        v16 = *v4 - 24LL;
      else
        v16 = 0LL;
      v17 = *(_QWORD *)(v16 + 16);
      v18 = *(_QWORD *)(v16 + 2856);
      v19 = *(_QWORD *)(v17 + 16);
      if ( v18 )
        OutputDuplProcessTerminate(0LL, *(PERESOURCE **)(v17 + 16), v18);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, v16, 2, v15, 0);
      v20 = *(_QWORD *)(v19 + 2136);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v20 + 24, 0LL);
      *(_QWORD *)(v20 + 32) = KeGetCurrentThread();
      v21 = *(_QWORD *)(v19 + 2136);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v21 + 40, 0LL);
      *(_QWORD *)(v21 + 48) = KeGetCurrentThread();
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v43);
      if ( !*(_QWORD *)(v19 + 2136) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v25 + 24) = 1188LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 176LL) == 4 )
      {
        v27 = *(_QWORD **)(v16 + 32);
        v28 = v16 + 24;
        v29 = *(_QWORD *)v28;
        if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 || *v27 != v28 )
          __fastfail(3u);
        *v27 = v29;
        *(_QWORD *)(v29 + 8) = v27;
      }
      else
      {
        if ( *(_DWORD *)(v16 + 376) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v43);
          DXGDEVICE::FlushScheduler((_QWORD *)v16, 4);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v43);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v19 + 2136), (struct DXGDEVICE *)v16, 0LL);
      }
      *(_QWORD *)(v21 + 48) = 0LL;
      ExReleasePushLockExclusiveEx(v21 + 40, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v20 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 24, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    }
  }
  OutputDuplProcessTerminate(1LL, 0LL, 0LL);
  v6 = this + 33;
  if ( (_QWORD *)*v6 != v6 )
  {
    DXGFASTMUTEX::Acquire(this[35]);
    while ( (_QWORD *)*v6 != v6 )
    {
      if ( *v6 )
        v30 = *v6 - 24LL;
      else
        v30 = 0LL;
      v31 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL);
      v41 = v31;
      v42 = 0;
      if ( v31 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v31 + 24));
        v40 = -1LL;
      }
      COREACCESS::AcquireShared((COREACCESS *)v39);
      if ( !*(_QWORD *)(v31 + 2128) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v33 + 24) = 1242LL;
        WdLogEvent5_WdAssertion(v33);
      }
      if ( *(_DWORD *)(v31 + 176) == 4 )
        DXGPROCESS::RemoveCopyProtection((DXGPROCESS *)this, (struct DXGCOPYPROTECTION *)v30);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v31 + 2128),
          *(_DWORD *)(v30 + 52),
          *(_DWORD *)(v30 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v39);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this[35]);
  }
  v7 = this + 26;
  if ( *((_DWORD *)this + 57) != *((_DWORD *)this + 56) )
  {
    for ( i = 0; i < *((_DWORD *)this + 56); ++i )
    {
      if ( i >= *((_DWORD *)this + 56) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v34 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v5 = 2LL * i;
      if ( (*(_DWORD *)(*v7 + 16LL * i + 8) & 0xF) == 8 )
      {
        EntryObject = (struct DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((HMGRTABLE *)(this + 26), i);
        v10 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 26), i);
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, EntryObject, v10, 0);
      }
      else if ( (*(_DWORD *)(*v7 + 16LL * i + 8) & 0xF) == 9 )
      {
        HMGRTABLE::GetEntryObject((HMGRTABLE *)(this + 26), i);
        v23 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 26), i);
        DXGKEYEDMUTEX::SignalAbandoned(v24, v23);
        if ( !DXGKEYEDMUTEX::DestroyHandle(v23) )
        {
          v35 = WdLogNewEntry5_WdAssertion(v5);
          *(_QWORD *)(v35 + 24) = 1289LL;
          WdLogEvent5_WdAssertion(v35);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 57) != *((_DWORD *)this + 56) )
  {
    for ( j = 0; j < *((_DWORD *)this + 56); ++j )
    {
      if ( j >= *((_DWORD *)this + 56) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v36 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v36);
      }
      v5 = 2LL * j;
      v13 = *(_DWORD *)(*v7 + 16LL * j + 8) & 0xF;
      if ( v13 == 1 )
      {
        v14 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 26), j);
        DXGADAPTER::DestroyHandle(v14);
      }
      else if ( v13 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v37 + 24) = 1314LL;
        WdLogEvent5_WdAssertion(v37);
      }
    }
  }
  if ( *((_BYTE *)this + 291) )
  {
    v38 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v38, DestroyProcessCallback, this, 2LL);
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX((__int64)this);
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v44);
  *((_DWORD *)this + 8) = 2;
  if ( v45 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v44);
}

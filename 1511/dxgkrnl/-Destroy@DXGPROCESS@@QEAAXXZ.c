/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4
 * Callers:
 *     ??1DXGPROCESS@@QEAA@XZ @ 0x1C0068064 (--1DXGPROCESS@@QEAA@XZ.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00B3C50 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C598 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C5BC (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C001B594 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006AC6C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     VidMmTerminateProcessX @ 0x1C008D824 (VidMmTerminateProcessX.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0094388 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00943FC (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00B98D4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     VidSchTerminateProcessX @ 0x1C00BA1C0 (VidSchTerminateProcessX.c)
 *     OutputDuplProcessTerminate @ 0x1C00BBBD0 (OutputDuplProcessTerminate.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00C6B88 (DxgkDestroyCsrssProcess.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0129740 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C015174C (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(union _LARGE_INTEGER **this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  unsigned int **v4; // rbx
  _QWORD *v5; // r14
  bool v6; // zf
  unsigned int i; // r15d
  struct DXGSYNCOBJECT *EntryObject; // rdi
  unsigned int v9; // ebx
  DXGGLOBAL *Global; // rax
  unsigned int j; // ebx
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned int *v26; // rdi
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ebx
  DXGKEYEDMUTEX *v32; // rcx
  int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE v37[32]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v38[80]; // [rsp+50h] [rbp-19h] BYREF
  char v39; // [rsp+D0h] [rbp+67h] BYREF
  char v40; // [rsp+D1h] [rbp+68h]
  union _LARGE_INTEGER Interval; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( KeGetCurrentIrql() )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 789LL;
    WdLogEvent5_WdAssertion(v22);
  }
  while ( *((_DWORD *)this + 81) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v40 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v39);
  if ( *((_BYTE *)this + 312) )
    DxgkDestroyCsrssProcess();
  v2 = (__int64 *)(this + 31);
  if ( (__int64 *)*v2 != v2 )
  {
    DXGPROCESS::ReleaseVidPnSourceOwners((struct _KTHREAD ***)this);
    while ( (__int64 *)*v2 != v2 )
    {
      v15 = *v2;
      if ( *v2 )
        v15 -= 24LL;
      v16 = *(_QWORD *)(v15 + 16);
      v17 = *(_QWORD *)(v16 + 16);
      if ( *(_QWORD *)(v15 + 2832) )
        OutputDuplProcessTerminate(0LL, *(_QWORD *)(v16 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, v15, 2, v14, 0);
      v18 = *(_QWORD *)(v17 + 1992);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v18 + 24, 0LL);
      *(_QWORD *)(v18 + 32) = KeGetCurrentThread();
      v19 = *(_QWORD *)(v17 + 1992);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v19 + 40, 0LL);
      *(_QWORD *)(v19 + 48) = KeGetCurrentThread();
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v38);
      if ( !*(_QWORD *)(v17 + 1992) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v21 + 24) = 868LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 160LL) == 4 )
      {
        v23 = *(_QWORD **)(v15 + 32);
        v24 = v15 + 24;
        v25 = *(_QWORD *)v24;
        if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 || *v23 != v24 )
          __fastfail(3u);
        *v23 = v25;
        *(_QWORD *)(v25 + 8) = v23;
      }
      else
      {
        if ( *(_DWORD *)(v15 + 352) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v38);
          DXGDEVICE::FlushScheduler(v15, 4LL);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v38);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v17 + 1992), (struct DXGDEVICE *)v15, 0LL);
      }
      *(_QWORD *)(v19 + 48) = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 40, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v18 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v18 + 24, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    }
  }
  OutputDuplProcessTerminate(1LL, 0LL);
  v4 = (unsigned int **)(this + 34);
  if ( *v4 != (unsigned int *)v4 )
  {
    DXGFASTMUTEX::Acquire(this[36]);
    while ( *v4 != (unsigned int *)v4 )
    {
      v26 = *v4;
      if ( *v4 )
        v26 -= 6;
      v27 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v37, (struct DXGADAPTER *const)v27);
      COREACCESS::AcquireShared((COREACCESS *)v37);
      if ( !*(_QWORD *)(v27 + 1984) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v29 + 24) = 922LL;
        WdLogEvent5_WdAssertion(v29);
      }
      if ( *(_DWORD *)(v27 + 160) == 4 )
        DXGPROCESS::RemoveCopyProtection((struct _KTHREAD ***)this, (struct DXGCOPYPROTECTION *)v26);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(*(ADAPTER_DISPLAY **)(v27 + 1984), v26[13], v26[12]);
      COREACCESS::~COREACCESS((COREACCESS *)v37);
    }
    DXGFASTMUTEX::Release((DXGFASTMUTEX *)this[36]);
  }
  v5 = this + 27;
  if ( *((_DWORD *)this + 59) != *((_DWORD *)this + 58) )
  {
    for ( i = 0; i < *((_DWORD *)this + 58); ++i )
    {
      if ( i >= *((_DWORD *)this + 58) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v3);
        *(_QWORD *)(v30 + 24) = 211LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v3 = 2LL * i;
      if ( (*(_DWORD *)(*v5 + 16LL * i + 8) & 0xF) == 8 )
      {
        EntryObject = (struct DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((HMGRTABLE *)(this + 27), i);
        v9 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 27), i);
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, EntryObject, v9);
      }
      else if ( (*(_DWORD *)(*v5 + 16LL * i + 8) & 0xF) == 9 )
      {
        HMGRTABLE::GetEntryObject((HMGRTABLE *)(this + 27), i);
        v31 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 27), i);
        DXGKEYEDMUTEX::SignalAbandoned(v32, v31, v33);
        if ( !DXGKEYEDMUTEX::DestroyHandle(v31) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v3);
          *(_QWORD *)(v34 + 24) = 969LL;
          WdLogEvent5_WdAssertion(v34);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 59) != *((_DWORD *)this + 58) )
  {
    for ( j = 0; j < *((_DWORD *)this + 58); ++j )
    {
      if ( j >= *((_DWORD *)this + 58) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v3);
        *(_QWORD *)(v35 + 24) = 211LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v3 = 2LL * j;
      v12 = *(_DWORD *)(*v5 + 16LL * j + 8) & 0xF;
      if ( v12 == 1 )
      {
        v13 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 27), j);
        DXGADAPTER::DestroyHandle(v13);
      }
      else if ( v12 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v3);
        *(_QWORD *)(v36 + 24) = 994LL;
        WdLogEvent5_WdAssertion(v36);
      }
    }
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v39);
  v6 = v40 == 0;
  *((_DWORD *)this + 10) = 2;
  if ( !v6 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v39);
}

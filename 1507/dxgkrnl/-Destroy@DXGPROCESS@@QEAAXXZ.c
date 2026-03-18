/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C
 * Callers:
 *     ??1DXGPROCESS@@QEAA@XZ @ 0x1C0085220 (--1DXGPROCESS@@QEAA@XZ.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00A8050 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A330 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A354 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C001A590 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0084820 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C0084894 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0084BFC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     VidMmTerminateProcessX @ 0x1C008A878 (VidMmTerminateProcessX.c)
 *     VidSchTerminateProcessX @ 0x1C008A930 (VidSchTerminateProcessX.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C008F6BC (OutputDuplProcessTerminate.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009438C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     DxgkRemoveAllAdapterFromCurrentSession @ 0x1C00BDE40 (DxgkRemoveAllAdapterFromCurrentSession.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0123A78 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C014D408 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGFASTMUTEX **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int **v13; // rbx
  _QWORD *v14; // r14
  bool v15; // zf
  unsigned int i; // r15d
  struct DXGSYNCOBJECT *EntryObject; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGGLOBAL *Global; // rax
  unsigned int j; // ebx
  unsigned int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  unsigned int *v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // ebx
  DXGKEYEDMUTEX *v54; // rcx
  int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE v59[32]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v60[80]; // [rsp+50h] [rbp-19h] BYREF
  char v61; // [rsp+D0h] [rbp+67h] BYREF
  char v62; // [rsp+D1h] [rbp+68h]
  union _LARGE_INTEGER Interval; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( KeGetCurrentIrql() )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v39 + 24) = 789LL;
    WdLogEvent5_WdAssertion(v39);
  }
  while ( *((_DWORD *)this + 81) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v62 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v61);
  if ( *((_BYTE *)this + 312) )
    DxgkRemoveAllAdapterFromCurrentSession();
  v8 = (__int64 *)(this + 31);
  if ( (__int64 *)*v8 != v8 )
  {
    DXGPROCESS::ReleaseVidPnSourceOwners((DXGPROCESS *)this, v5, v6, v7);
    while ( (__int64 *)*v8 != v8 )
    {
      v29 = *v8;
      if ( *v8 )
        v29 -= 24LL;
      v30 = *(_QWORD *)(v29 + 16);
      v31 = *(_QWORD *)(v30 + 16);
      if ( *(_QWORD *)(v29 + 18704) )
        OutputDuplProcessTerminate(0LL, *(_QWORD *)(v30 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, v29, 2, v28, 0);
      v32 = *(_QWORD *)(v31 + 1984);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v32 + 24, 0LL);
      *(_QWORD *)(v32 + 32) = KeGetCurrentThread();
      v33 = *(_QWORD *)(v31 + 1984);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v33 + 40, 0LL);
      *(_QWORD *)(v33 + 48) = KeGetCurrentThread();
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v60);
      if ( !*(_QWORD *)(v31 + 1984) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        *(_QWORD *)(v38 + 24) = 867LL;
        WdLogEvent5_WdAssertion(v38);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 160LL) == 4 )
      {
        v40 = *(_QWORD **)(v29 + 32);
        v41 = v29 + 24;
        v42 = *(_QWORD *)v41;
        if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != v41 || *v40 != v41 )
          __fastfail(3u);
        *v40 = v42;
        *(_QWORD *)(v42 + 8) = v40;
      }
      else
      {
        if ( *(_DWORD *)(v29 + 352) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v60);
          DXGDEVICE::FlushScheduler((_QWORD *)v29, 4);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v60);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v31 + 1984), (struct DXGDEVICE *)v29, 0LL);
      }
      *(_QWORD *)(v33 + 48) = 0LL;
      ExReleasePushLockExclusiveEx(v33 + 40, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v32 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v32 + 24, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
    }
  }
  OutputDuplProcessTerminate(1LL, 0LL);
  v13 = (unsigned int **)(this + 34);
  if ( *v13 != (unsigned int *)v13 )
  {
    DXGFASTMUTEX::Acquire(this[36]);
    while ( *v13 != (unsigned int *)v13 )
    {
      v43 = *v13;
      if ( *v13 )
        v43 -= 6;
      v44 = *(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v59, (struct DXGADAPTER *const)v44);
      COREACCESS::AcquireShared((COREACCESS *)v59);
      if ( !*(_QWORD *)(v44 + 1976) )
      {
        v49 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
        *(_QWORD *)(v49 + 24) = 921LL;
        WdLogEvent5_WdAssertion(v49);
      }
      if ( *(_DWORD *)(v44 + 160) == 4 )
        DXGPROCESS::RemoveCopyProtection((DXGPROCESS *)this, (struct DXGCOPYPROTECTION *)v43);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(*(ADAPTER_DISPLAY **)(v44 + 1976), v43[13], v43[12]);
      COREACCESS::~COREACCESS((COREACCESS *)v59);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this[36]);
  }
  v14 = this + 27;
  if ( *((_DWORD *)this + 59) != *((_DWORD *)this + 58) )
  {
    for ( i = 0; i < *((_DWORD *)this + 58); ++i )
    {
      if ( i >= *((_DWORD *)this + 58) )
      {
        v50 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v50 + 24) = 225LL;
        WdLogEvent5_WdAssertion(v50);
      }
      v10 = 2LL * i;
      v9 = (*(_DWORD *)(*v14 + 16LL * i + 8) & 0xFu) - 8;
      if ( (*(_DWORD *)(*v14 + 16LL * i + 8) & 0xF) == 8 )
      {
        EntryObject = (struct DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((HMGRTABLE *)(this + 27), i, v11, v12);
        v20 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 27), i, v18, v19);
        Global = DXGGLOBAL::GetGlobal(v22, v21, v23, v24);
        DXGGLOBAL::DestroySyncObject(Global, EntryObject, v20);
      }
      else if ( (*(_DWORD *)(*v14 + 16LL * i + 8) & 0xF) == 9 )
      {
        HMGRTABLE::GetEntryObject((HMGRTABLE *)(this + 27), i, v11, v12);
        v53 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 27), i, v51, v52);
        DXGKEYEDMUTEX::SignalAbandoned(v54, v53, v55);
        if ( !DXGKEYEDMUTEX::DestroyHandle(v53) )
        {
          v56 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
          *(_QWORD *)(v56 + 24) = 968LL;
          WdLogEvent5_WdAssertion(v56);
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
        v57 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v57 + 24) = 225LL;
        WdLogEvent5_WdAssertion(v57);
      }
      v10 = 2LL * j;
      v9 = *(_DWORD *)(*v14 + 16LL * j + 8) & 0xF;
      if ( (_DWORD)v9 == 1 )
      {
        v27 = HMGRTABLE::BuildEntryHandle((HMGRTABLE *)(this + 27), j, v11, v12);
        DXGADAPTER::DestroyHandle(v27);
      }
      else if ( (_DWORD)v9 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v58 + 24) = 993LL;
        WdLogEvent5_WdAssertion(v58);
      }
    }
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v61);
  v15 = v62 == 0;
  *((_DWORD *)this + 10) = 2;
  if ( !v15 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v61);
}

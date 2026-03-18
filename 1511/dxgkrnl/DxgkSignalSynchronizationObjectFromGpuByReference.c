/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00989D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FA40 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0150F48 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(__int64 *a1, __int64 a2, unsigned int a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r15
  char *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // ebx
  __int64 v22; // rsi
  __int64 v23; // rbx
  struct _KEVENT *v24; // rbx
  unsigned __int8 v25; // bl
  __int64 v26; // r8
  __int64 v27; // rbx
  volatile signed __int64 *v28; // rcx
  __int64 v29; // rax
  volatile signed __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  struct DXGADAPTER *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  struct DXGADAPTER *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r9
  struct DXGCONTEXT *v58; // [rsp+40h] [rbp-C0h]
  DXGFASTMUTEX *v59; // [rsp+50h] [rbp-B0h] BYREF
  char v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  char v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v64[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v65[8]; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v66; // [rsp+90h] [rbp-70h]
  char v67; // [rsp+98h] [rbp-68h]
  _BYTE v68[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGADAPTER *v69; // [rsp+A8h] [rbp-58h]
  char v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  char v72; // [rsp+C0h] [rbp-40h]
  int v73; // [rsp+D8h] [rbp-28h]
  _BYTE v74[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v75[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v76[8]; // [rsp+100h] [rbp+0h] BYREF
  char *v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+110h] [rbp+10h]
  _BYTE v79[80]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v80; // [rsp+1B8h] [rbp+B8h] BYREF
  int v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h] BYREF

  v80 = a2;
  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  v8 = (char *)Current + 192;
  v77 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v9);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *((_DWORD *)v8 + 4);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v10, &EventBlockThread, v11, v12);
    }
    ExAcquirePushLockSharedEx(v8, 0LL);
  }
  v78 = 1;
  v13 = (a3 >> 6) & 0xFFFFFF;
  if ( v13 >= *((_DWORD *)v7 + 58) )
    goto LABEL_19;
  v14 = *((_QWORD *)v7 + 27);
  v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
  if ( ((a3 >> 26) & 0x30) != (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30)
    || (v15 & 0x1000) != 0
    || (v15 & 0xF) == 0
    || (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) != 7 )
  {
    goto LABEL_19;
  }
  v16 = *(_QWORD *)(v14 + 16LL * v13);
  v58 = (struct DXGCONTEXT *)v16;
  if ( !v16 )
    goto LABEL_20;
  _m_prefetchw((const void *)(v16 + 32));
  v17 = *(_QWORD *)(v16 + 32);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 32), v17 + 1, v17);
      if ( v18 == v17 )
        break;
      if ( !v17 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v58 = 0LL;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
  if ( v58 )
  {
    v73 = 0;
    v22 = *((_QWORD *)v58 + 2);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 16);
      if ( *(_DWORD *)(v22 + 280) == 2 )
        v24 = (struct _KEVENT *)(v23 + 80);
      else
        v24 = (struct _KEVENT *)(v23 + 56);
      if ( !KeReadStateEvent(v24) )
        KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 80LL));
        v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v26, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 80), 1u);
        if ( v25 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v73 = 1;
    }
    v27 = *((_QWORD *)v58 + 2);
    v28 = *(volatile signed __int64 **)(*(_QWORD *)(v27 + 16) + 16LL);
    v66 = (struct DXGADAPTER *)v28;
    v67 = 0;
    if ( v28 && _InterlockedAdd64(v28 + 3, 1uLL) <= 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v29 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v30 = *(volatile signed __int64 **)(*(_QWORD *)(v27 + 16) + 16LL);
    v69 = (struct DXGADAPTER *)v30;
    v70 = 0;
    if ( v30 && _InterlockedAdd64(v30 + 3, 1uLL) <= 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v31 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v71 = v27;
    v72 = 0;
    v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v64);
    if ( v21 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v32);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v61, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v61);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) + 16LL)) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v35 + 24) = 855LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = *a1;
      if ( *(_DWORD *)(*a1 + 152) != 3 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v37 + 24) = 863LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v60 = 0;
      v59 = (DXGFASTMUTEX *)(v36 + 32);
      if ( v36 == -32 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v38 + 24) = 451LL;
        WdLogEvent5_WdAssertion(v38);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)v59 == CurrentThread )
      {
        v40 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v40 + 24) = 458LL;
        WdLogEvent5_WdAssertion(v40);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v59);
      v41 = *((_QWORD *)v58 + 27);
      v63 = v41;
      if ( (*(_DWORD *)(v36 + 156) & 4) != 0 )
        DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                 (DXGSYNCOBJECTCA *)v36,
                                 *(struct ADAPTER_RENDER **)(*((_QWORD *)v58 + 2) + 16LL));
      else
        DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v36 + 240);
      v21 = -1073741811;
      if ( DxgAdapterSyncObject )
      {
        if ( (*(_DWORD *)(v36 + 156) & 4) != 0 )
          v44 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v36,
                              *(struct ADAPTER_RENDER **)(*((_QWORD *)v58 + 2) + 16LL))
                + 4);
        else
          v44 = *(_QWORD *)(v36 + 272);
        v82 = v44;
        if ( v44 )
        {
          v46 = *((_QWORD *)v58 + 2);
          v81 = 0;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 400LL) + 8LL) + 544LL))(
                  1LL,
                  &v63,
                  1LL,
                  &v82,
                  0,
                  &v80);
          if ( v21 < 0 )
          {
            v48 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v48 + 24) = 913LL;
            WdLogEvent5_WdAssertion(v48);
          }
        }
        else
        {
          v45 = WdLogNewEntry5_WdError(v41);
          *(_QWORD *)(v45 + 24) = v36;
          WdLogEvent5_WdError(v45);
        }
      }
      else
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
        v43[3] = v7;
        v43[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) + 16LL);
        v43[5] = -1073741811LL;
        WdLogEvent5_WdError(v43);
      }
      if ( v60 )
      {
        v60 = 0;
        DXGFASTMUTEX::Release(v59);
      }
      if ( v62 )
      {
        v62 = 0;
        ExReleaseResourceLite(*(PERESOURCE *)(v61 + 384));
        KeLeaveCriticalRegion();
      }
    }
    v49 = v69;
    if ( v69 )
    {
      if ( v70 )
      {
        COREACCESS::Release((COREACCESS *)v68);
        v49 = v69;
      }
      v50 = _InterlockedDecrement64((volatile signed __int64 *)v49 + 3);
      if ( v50 )
      {
        if ( v50 < 0 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v49);
          *(_QWORD *)(v51 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v51);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v49 + 2), v49);
      }
    }
    v52 = v66;
    if ( v66 )
    {
      if ( v67 )
      {
        COREACCESS::Release((COREACCESS *)v65);
        v52 = v66;
      }
      v53 = _InterlockedDecrement64((volatile signed __int64 *)v52 + 3);
      if ( v53 )
      {
        if ( v53 < 0 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v52);
          *(_QWORD *)(v54 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v54);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
      }
    }
    if ( v22 && v73 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v22 + 80));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v55 = *((_QWORD *)v58 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v75,
        (struct DXGDEVICE *)v55);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v74,
        *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, v55, 2, v56, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v79);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL) + 160LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v55, v58, (struct COREDEVICEACCESS *)v79);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
      if ( v74[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
      if ( v75[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v55 + 16), (struct DXGDEVICE *)v55);
    }
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21 = -1073741811;
    v20[3] = v7;
    v20[4] = 0LL;
    v20[5] = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  return (unsigned int)v21;
}

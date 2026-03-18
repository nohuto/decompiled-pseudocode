/*
 * XREFs of ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0093020
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C0093010 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00C2CC0 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_pp @ 0x1C001E898 (Template_pp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E8C00 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectInternal(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD **v11; // r8
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r14d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r9
  struct DXGDEVICE *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  struct ADAPTER_RENDER **v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct ADAPTER_RENDER *v42; // r14
  struct _KEVENT *v43; // r14
  __int64 v44; // r8
  unsigned __int8 v45; // r14
  int v46; // r15d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r14d
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rax
  DXGADAPTER *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  ULONG64 v59; // rcx
  int v60; // esi
  _DWORD *p_hSyncObject; // r8
  D3DKMT_HANDLE hSyncObject; // r9d
  _DWORD *p_SharedHandle; // rdx
  _OWORD *p_InitialState; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  struct DXGDEVICE *v69; // [rsp+30h] [rbp-128h] BYREF
  int v70; // [rsp+38h] [rbp-120h]
  struct DXGSYNCOBJECT *v71; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v72[8]; // [rsp+48h] [rbp-110h] BYREF
  _BYTE v73[8]; // [rsp+50h] [rbp-108h] BYREF
  DXGADAPTER *v74; // [rsp+58h] [rbp-100h]
  char v75; // [rsp+60h] [rbp-F8h]
  _BYTE v76[8]; // [rsp+68h] [rbp-F0h] BYREF
  DXGADAPTER *v77; // [rsp+70h] [rbp-E8h]
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v78; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v79[80]; // [rsp+E0h] [rbp-78h] BYREF
  struct DXGDEVICE *v80; // [rsp+170h] [rbp+18h] BYREF
  struct DXGDEVICE *v81; // [rsp+178h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2041);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v67 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v67 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v67);
    goto LABEL_110;
  }
  v11 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_110:
    v68 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v68 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v68);
LABEL_111:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v36, &EventProfilerExit, v37, 2041);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v78 = *v12;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v78.hDevice, 12));
    if ( (v13 & 0x7FFFFF00) != 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v11, v10);
      *(_QWORD *)(v14 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v14);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v15, &EventProfilerExit, v16, 2041);
      return 3221225485LL;
    }
    v18 = (v13 >> 1) & 1;
    if ( ((v13 >> 1) & 1) != 0 && (v13 & 1) == 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
      v19 = WdLogNewEntry5_WdWarning(v18, v7, v11, v10);
      *(_QWORD *)(v19 + 24) = 120LL;
      WdLogEvent5_WdWarning(v19);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v20, &EventProfilerExit, v21, 2041);
      return 3221225485LL;
    }
    Type = v78.Info.Type;
    if ( v78.Info.Type == D3DDDI_MONITORED_FENCE )
    {
      if ( (v13 & 1) != 0 && !(_DWORD)v18 )
      {
        v23 = WdLogNewEntry5_WdWarning(v18, v7, v11, v10);
        *(_QWORD *)(v23 + 24) = 128LL;
        WdLogEvent5_WdWarning(v23);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v24, &EventProfilerExit, v25, 2041);
        return 3221225485LL;
      }
      if ( (v13 & 0x10) != 0 && (v13 & 0x20) != 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v18, v7, v11, v10);
        *(_QWORD *)(v26 + 24) = 134LL;
        WdLogEvent5_WdWarning(v26);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v27, &EventProfilerExit, v28, 2041);
        return 3221225485LL;
      }
    }
    else if ( (v13 & 0x80u) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v18, v7, v11, v10);
      *(_QWORD *)(v29 + 24) = 140LL;
      WdLogEvent5_WdWarning(v29);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v30, &EventProfilerExit, v31, 2041);
      return 3221225485LL;
    }
  }
  else
  {
    v78 = *a1;
    Type = v78.Info.Type;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80, v78.hDevice, v11, &v81);
  v34 = v81;
  if ( !v81 )
  {
    v35 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v35 + 24) = v78.hDevice;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
    goto LABEL_111;
  }
  v69 = v81;
  v70 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, (__int64)v81, 0, v33, 0);
  v38 = (struct ADAPTER_RENDER **)((char *)v34 + 16);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v72,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v34 + 2) + 16LL),
    0LL);
  if ( Type == D3DDDI_MONITORED_FENCE )
  {
    v42 = *v38;
    if ( *((_DWORD *)v34 + 70) == 2 )
      v43 = (struct _KEVENT *)((char *)v42 + 80);
    else
      v43 = (struct _KEVENT *)((char *)v42 + 56);
    if ( !KeReadStateEvent(v43) )
      KeWaitForSingleObject(v43, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v34 + 10), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)*v38 + 2) + 80LL));
      v45 = DXGADAPTER::TryWakeUpFromD3State(*((DXGADAPTER **)*v38 + 2));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v44, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v34 + 10), 1u);
      if ( v45 )
        DXGADAPTER::EnableD3Requests(*((DXGADAPTER **)*v38 + 2));
      ExReleasePushLockSharedEx(*((_QWORD *)*v38 + 2) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v46 = 1;
    v70 = 1;
    v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v79);
    if ( v50 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v51, &EventProfilerExit, v52, 2041);
      return (unsigned int)v50;
    }
    v53 = *((_QWORD *)*v38 + 2);
    if ( *(int *)(v53 + 1656) < 0x2000 && !*(_BYTE *)(v53 + 1940) )
    {
      v54 = WdLogNewEntry5_WdWarning(v53, v47, v48, v49);
      *(_QWORD *)(v54 + 24) = 189LL;
      WdLogEvent5_WdWarning(v54);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
      goto LABEL_111;
    }
    goto LABEL_78;
  }
  if ( v75 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
    v55[3] = 275LL;
    v55[4] = 4LL;
    v55[5] = v73;
    v55[6] = 0LL;
    v55[7] = 0LL;
    WdLogEvent5_WdCriticalError(v55);
  }
  v56 = v74;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v74 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v74 + 32)) )
      KeWaitForSingleObject((char *)v74 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v74);
    v56 = v74;
  }
  v75 = 1;
  if ( *((_DWORD *)v56 + 40) == 1 )
  {
    if ( v74 == v77 || (COREACCESS::AcquireShared((COREACCESS *)v76), *((_DWORD *)v77 + 40) == 1) )
    {
      v34 = v81;
      v46 = v70;
LABEL_78:
      v71 = 0LL;
      v60 = CreateSynchronizationObjectInternal(v34, *v38, &v78, &v71);
      if ( v60 >= 0 )
      {
        if ( a2 )
        {
          p_hSyncObject = &a1->hSyncObject;
          v59 = MmUserProbeAddress;
          if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
            p_hSyncObject = (_DWORD *)MmUserProbeAddress;
          hSyncObject = v78.hSyncObject;
          *p_hSyncObject = v78.hSyncObject;
          if ( (*(_BYTE *)&v78.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v78.Info.Flags.0 & 2) == 0 )
          {
            p_SharedHandle = &a1->Info.SharedHandle;
            if ( (unsigned __int64)&a1->Info.SharedHandle >= MmUserProbeAddress )
              p_SharedHandle = (_DWORD *)MmUserProbeAddress;
            *p_SharedHandle = v78.Info.SharedHandle;
          }
          if ( v78.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            p_InitialState = &a1->Info.SynchronizationMutex.InitialState;
            if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
              p_InitialState = (_OWORD *)MmUserProbeAddress;
            *p_InitialState = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
            p_InitialState[1] = *(_OWORD *)&v78.Info.Reserved.Reserved[2];
          }
        }
        else
        {
          hSyncObject = v78.hSyncObject;
          a1->hSyncObject = v78.hSyncObject;
          if ( (*(_BYTE *)&v78.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v78.Info.Flags.0 & 2) == 0 )
            a1->Info.SharedHandle = v78.Info.SharedHandle;
          if ( v78.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)&a1->Info.Reserved.Reserved[2] = *(_OWORD *)&v78.Info.Reserved.Reserved[2];
          }
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pp(v59, &EventOpenSyncObject, (__int64)p_hSyncObject, v71, hSyncObject);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
      if ( v46 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v34 + 10));
        KeLeaveCriticalRegion();
      }
      if ( v80 )
      {
        v65 = _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v65 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v80 + 2), v80);
      }
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v65, &EventProfilerExit, v66, 2041);
      return (unsigned int)v60;
    }
    COREACCESS::Release((COREACCESS *)v76);
  }
  COREACCESS::Release((COREACCESS *)v73);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v80);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v57, &EventProfilerExit, v58, 2041);
  return 3221226166LL;
}

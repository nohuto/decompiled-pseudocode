/*
 * XREFs of ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C007EBE0
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C007EBD0 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00D8C00 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_pp @ 0x1C00256AC (Template_pp.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E3A78 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectInternal(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 ProcessDxgProcess; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r15d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r9
  struct DXGDEVICE *v37; // rbx
  __int64 v38; // rax
  struct ADAPTER_RENDER **v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct ADAPTER_RENDER *v43; // r15
  struct _KEVENT *v44; // r15
  __int64 v45; // r8
  unsigned __int8 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r15d
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
  D3DKMT_HANDLE hSyncObject; // ebx
  _DWORD *p_SharedHandle; // rdx
  _OWORD *p_InitialState; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  struct DXGDEVICE *v72; // [rsp+30h] [rbp-168h] BYREF
  int v73; // [rsp+38h] [rbp-160h]
  struct DXGSYNCOBJECT *v74; // [rsp+40h] [rbp-158h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v75; // [rsp+50h] [rbp-148h] BYREF
  _BYTE v76[8]; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v77[16]; // [rsp+B8h] [rbp-E0h] BYREF
  DXGADAPTER *v78; // [rsp+C8h] [rbp-D0h]
  char v79; // [rsp+D0h] [rbp-C8h]
  _BYTE v80[16]; // [rsp+D8h] [rbp-C0h] BYREF
  DXGADAPTER *v81; // [rsp+E8h] [rbp-B0h]
  __int64 v82; // [rsp+100h] [rbp-98h]
  _BYTE v83[96]; // [rsp+110h] [rbp-88h] BYREF
  char v84; // [rsp+1B0h] [rbp+18h] BYREF
  struct DXGDEVICE *v85; // [rsp+1B8h] [rbp+20h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2041);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v82 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v14, 2041);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v16 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v16 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v75 = *v16;
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v75.hDevice, 12));
    if ( (v17 & 0x7FFFFF00) != 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9, v10);
      *(_QWORD *)(v18 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v19, &EventProfilerExit, v20, 2041);
      return 3221225485LL;
    }
    v21 = (v17 >> 1) & 1;
    if ( ((v17 >> 1) & 1) != 0 && (v17 & 1) == 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
      v22 = WdLogNewEntry5_WdWarning(v21, v7, v9, v10);
      *(_QWORD *)(v22 + 24) = 120LL;
      WdLogEvent5_WdWarning(v22);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v23, &EventProfilerExit, v24, 2041);
      return 3221225485LL;
    }
    Type = v75.Info.Type;
    if ( v75.Info.Type == D3DDDI_MONITORED_FENCE )
    {
      if ( (v17 & 1) != 0 && !(_DWORD)v21 )
      {
        v26 = WdLogNewEntry5_WdWarning(v21, v7, v9, v10);
        *(_QWORD *)(v26 + 24) = 128LL;
        WdLogEvent5_WdWarning(v26);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v27, &EventProfilerExit, v28, 2041);
        return 3221225485LL;
      }
      if ( (v17 & 0x10) != 0 && (v17 & 0x20) != 0 )
      {
        v29 = WdLogNewEntry5_WdWarning(v21, v7, v9, v10);
        *(_QWORD *)(v29 + 24) = 134LL;
        WdLogEvent5_WdWarning(v29);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v30, &EventProfilerExit, v31, 2041);
        return 3221225485LL;
      }
    }
    else if ( (v17 & 0x80u) != 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v21, v7, v9, v10);
      *(_QWORD *)(v32 + 24) = 140LL;
      WdLogEvent5_WdWarning(v32);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v33, &EventProfilerExit, v34, 2041);
      return 3221225485LL;
    }
  }
  else
  {
    v75 = *a1;
    Type = v75.Info.Type;
  }
  v75.hSyncObject = 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v84,
    v75.hDevice,
    (struct _KTHREAD **)ProcessDxgProcess,
    &v85);
  v37 = v85;
  if ( !v85 )
  {
    v38 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v38 + 24) = v75.hDevice;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v84);
    goto LABEL_6;
  }
  v72 = v85;
  v73 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, (__int64)v85, 0, v36, 0);
  v39 = (struct ADAPTER_RENDER **)((char *)v37 + 16);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v76,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v37 + 2) + 16LL),
    0LL);
  if ( Type == D3DDDI_MONITORED_FENCE )
  {
    v43 = *v39;
    if ( *((_DWORD *)v37 + 76) == 2 )
      v44 = (struct _KEVENT *)((char *)v43 + 80);
    else
      v44 = (struct _KEVENT *)((char *)v43 + 56);
    if ( !KeReadStateEvent(v44) )
      KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v37 + 10), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)*v39 + 2) + 96LL));
      v46 = DXGADAPTER::TryWakeUpFromD3State(*((DXGADAPTER **)*v39 + 2));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v45, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v37 + 10), 1u);
      if ( v46 )
        DXGADAPTER::EnableD3Requests(*((DXGADAPTER **)*v39 + 2));
      ExReleasePushLockSharedEx(*((_QWORD *)*v39 + 2) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v73 = 1;
    v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83);
    if ( v50 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v72);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v84);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v51, &EventProfilerExit, v52, 2041);
      return (unsigned int)v50;
    }
    v53 = *((_QWORD *)*v39 + 2);
    if ( *(int *)(v53 + 1792) < 0x2000 && !*(_BYTE *)(v53 + 2076) )
    {
      v54 = WdLogNewEntry5_WdWarning(v53, v47, v48, v49);
      *(_QWORD *)(v54 + 24) = 195LL;
      WdLogEvent5_WdWarning(v54);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v72);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v84);
      goto LABEL_6;
    }
    goto LABEL_82;
  }
  if ( v79 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40, v42);
    v55[3] = 275LL;
    v55[4] = 4LL;
    v55[5] = v77;
    v55[6] = 0LL;
    v55[7] = 0LL;
    WdLogEvent5_WdCriticalError(v55);
  }
  v56 = v78;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v78 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v78 + 2) )
      KeWaitForSingleObject((char *)v78 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v78);
    v56 = v78;
  }
  v79 = 1;
  if ( *((_DWORD *)v56 + 44) == 1 )
  {
    if ( v78 == v81 || (COREACCESS::AcquireShared((COREACCESS *)v80), *((_DWORD *)v81 + 44) == 1) )
    {
      v37 = v85;
LABEL_82:
      v74 = 0LL;
      v60 = CreateSynchronizationObjectInternal(v37, *v39, &v75, &v74);
      if ( v60 < 0 )
      {
        hSyncObject = v75.hSyncObject;
      }
      else
      {
        if ( a2 )
        {
          p_hSyncObject = &a1->hSyncObject;
          v59 = MmUserProbeAddress;
          if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
            p_hSyncObject = (_DWORD *)MmUserProbeAddress;
          hSyncObject = v75.hSyncObject;
          *p_hSyncObject = v75.hSyncObject;
          if ( (*(_BYTE *)&v75.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v75.Info.Flags.0 & 2) == 0 )
          {
            p_SharedHandle = &a1->Info.SharedHandle;
            if ( (unsigned __int64)&a1->Info.SharedHandle >= MmUserProbeAddress )
              p_SharedHandle = (_DWORD *)MmUserProbeAddress;
            *p_SharedHandle = v75.Info.SharedHandle;
          }
          if ( v75.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            p_InitialState = &a1->Info.SynchronizationMutex.InitialState;
            if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
              p_InitialState = (_OWORD *)MmUserProbeAddress;
            *p_InitialState = *(_OWORD *)&v75.Info.SynchronizationMutex.InitialState;
            p_InitialState[1] = *(_OWORD *)&v75.Info.Reserved.Reserved[2];
          }
        }
        else
        {
          hSyncObject = v75.hSyncObject;
          a1->hSyncObject = v75.hSyncObject;
          if ( (*(_BYTE *)&v75.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v75.Info.Flags.0 & 2) == 0 )
            a1->Info.SharedHandle = v75.Info.SharedHandle;
          if ( v75.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v75.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)&a1->Info.Reserved.Reserved[2] = *(_OWORD *)&v75.Info.Reserved.Reserved[2];
          }
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pp(v59, &EventOpenSyncObject, (__int64)p_hSyncObject, v74, hSyncObject);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
      v65 = (hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v65 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v66 = *(_QWORD *)(ProcessDxgProcess + 208);
        v67 = *(unsigned int *)(v66 + 16 * v65 + 8);
        if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v66 + 16 * v65 + 8) & 0x30) && (v67 & 0xF) != 0 )
        {
          v68 = 2 * ((*(_QWORD *)&v75.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v66 + 16 * ((*(_QWORD *)&v75.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x1000) == 0 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v67);
            *(_QWORD *)(v69 + 24) = 193LL;
            WdLogEvent5_WdAssertion(v69);
          }
          *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v68 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
      ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v72);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v84);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v70, &EventProfilerExit, v71, 2041);
      return (unsigned int)v60;
    }
    COREACCESS::Release((COREACCESS *)v80);
  }
  COREACCESS::Release((COREACCESS *)v77);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v72);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v84);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v57, &EventProfilerExit, v58, 2041);
  return 3221226166LL;
}

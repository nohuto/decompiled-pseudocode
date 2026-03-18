/*
 * XREFs of ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0082940
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C00849C0 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00AE110 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002BEC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_pp @ 0x1C001E834 (Template_pp.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DD9A0 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
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
  __int64 v11; // rsi
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r15d
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
  struct ADAPTER_RENDER **v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r15d
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  DXGADAPTER *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  ULONG64 v54; // rcx
  _DWORD *p_hSyncObject; // r8
  int v56; // r12d
  D3DKMT_HANDLE hSyncObject; // edi
  _DWORD *p_SharedHandle; // rdx
  _OWORD *p_InitialState; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rax
  struct DXGDEVICE *v71; // [rsp+30h] [rbp-138h] BYREF
  int v72; // [rsp+38h] [rbp-130h]
  struct DXGSYNCOBJECT *v73; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v74[8]; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v75[8]; // [rsp+50h] [rbp-118h] BYREF
  DXGADAPTER *v76; // [rsp+58h] [rbp-110h]
  char v77; // [rsp+60h] [rbp-108h]
  _BYTE v78[8]; // [rsp+68h] [rbp-100h] BYREF
  DXGADAPTER *v79; // [rsp+70h] [rbp-F8h]
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v80; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v81; // [rsp+E0h] [rbp-88h]
  _BYTE v82[80]; // [rsp+F0h] [rbp-78h] BYREF
  char v83; // [rsp+180h] [rbp+18h] BYREF
  struct DXGDEVICE *v84; // [rsp+188h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2041);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v69 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v69 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v69);
    goto LABEL_99;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  v81 = v11;
  if ( !v11 )
  {
LABEL_99:
    v70 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v70 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v70);
LABEL_100:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v36, &EventProfilerExit, v37, 2041);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v80 = *v12;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v80.hDevice, 12));
    if ( (v13 & 0x7FFFFF00) != 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9, v10);
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
      v19 = WdLogNewEntry5_WdWarning(v18, v7, v9, v10);
      *(_QWORD *)(v19 + 24) = 120LL;
      WdLogEvent5_WdWarning(v19);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v20, &EventProfilerExit, v21, 2041);
      return 3221225485LL;
    }
    Type = v80.Info.Type;
    if ( v80.Info.Type == D3DDDI_MONITORED_FENCE )
    {
      if ( (v13 & 1) != 0 && !(_DWORD)v18 )
      {
        v23 = WdLogNewEntry5_WdWarning(v18, v7, v9, v10);
        *(_QWORD *)(v23 + 24) = 128LL;
        WdLogEvent5_WdWarning(v23);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v24, &EventProfilerExit, v25, 2041);
        return 3221225485LL;
      }
      if ( (v13 & 0x10) != 0 && (v13 & 0x20) != 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v18, v7, v9, v10);
        *(_QWORD *)(v26 + 24) = 134LL;
        WdLogEvent5_WdWarning(v26);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v27, &EventProfilerExit, v28, 2041);
        return 3221225485LL;
      }
    }
    else if ( (v13 & 0x80u) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v18, v7, v9, v10);
      *(_QWORD *)(v29 + 24) = 140LL;
      WdLogEvent5_WdWarning(v29);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v30, &EventProfilerExit, v31, 2041);
      return 3221225485LL;
    }
  }
  else
  {
    v80 = *a1;
    Type = v80.Info.Type;
  }
  v80.hSyncObject = 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v83, v80.hDevice, (struct _KTHREAD **)v11, &v84);
  v34 = v84;
  if ( !v84 )
  {
    v35 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v35 + 24) = v80.hDevice;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v83);
    goto LABEL_100;
  }
  v71 = v84;
  v72 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v84, 0, v33, 0);
  v38 = (struct ADAPTER_RENDER **)((char *)v34 + 16);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v74,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v34 + 2) + 16LL),
    0LL);
  if ( Type == D3DDDI_MONITORED_FENCE )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
    v42 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v82);
    if ( v42 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v83);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v43, &EventProfilerExit, v44, 2041);
      return (unsigned int)v42;
    }
    if ( !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)*v38 + 2)) )
    {
      v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      *(_QWORD *)(v49 + 24) = 195LL;
      WdLogEvent5_WdWarning(v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v83);
      goto LABEL_100;
    }
    goto LABEL_65;
  }
  if ( v77 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
    v50[3] = 275LL;
    v50[4] = 4LL;
    v50[5] = v75;
    v50[6] = 0LL;
    v50[7] = 0LL;
    WdLogEvent5_WdCriticalError(v50);
  }
  v51 = v76;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v76 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v76 + 32)) )
      KeWaitForSingleObject((char *)v76 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v76);
    v51 = v76;
  }
  v77 = 1;
  if ( *((_DWORD *)v51 + 40) == 1 )
  {
    if ( v76 == v79 || (COREACCESS::AcquireShared((COREACCESS *)v78), *((_DWORD *)v79 + 40) == 1) )
    {
      v34 = v84;
LABEL_65:
      v73 = 0LL;
      v56 = CreateSynchronizationObjectInternal(v34, *v38, &v80, &v73);
      if ( v56 < 0 )
      {
        hSyncObject = v80.hSyncObject;
      }
      else
      {
        if ( a2 )
        {
          p_hSyncObject = &a1->hSyncObject;
          v54 = MmUserProbeAddress;
          if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
            p_hSyncObject = (_DWORD *)MmUserProbeAddress;
          hSyncObject = v80.hSyncObject;
          *p_hSyncObject = v80.hSyncObject;
          if ( (*(_BYTE *)&v80.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v80.Info.Flags.0 & 2) == 0 )
          {
            p_SharedHandle = &a1->Info.SharedHandle;
            if ( (unsigned __int64)&a1->Info.SharedHandle >= MmUserProbeAddress )
              p_SharedHandle = (_DWORD *)MmUserProbeAddress;
            *p_SharedHandle = v80.Info.SharedHandle;
          }
          if ( v80.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            p_InitialState = &a1->Info.SynchronizationMutex.InitialState;
            if ( (unsigned __int64)&a1->Info.Fence >= MmUserProbeAddress )
              p_InitialState = (_OWORD *)MmUserProbeAddress;
            *p_InitialState = *(_OWORD *)&v80.Info.SynchronizationMutex.InitialState;
            p_InitialState[1] = *(_OWORD *)&v80.Info.Reserved.Reserved[2];
          }
        }
        else
        {
          hSyncObject = v80.hSyncObject;
          a1->hSyncObject = v80.hSyncObject;
          if ( (*(_BYTE *)&v80.Info.Flags.0 & 1) != 0 && (*(_BYTE *)&v80.Info.Flags.0 & 2) == 0 )
            a1->Info.SharedHandle = v80.Info.SharedHandle;
          if ( v80.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            *(_OWORD *)&a1->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v80.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)&a1->Info.Reserved.Reserved[2] = *(_OWORD *)&v80.Info.Reserved.Reserved[2];
          }
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pp(v54, &EventOpenSyncObject, (__int64)p_hSyncObject, v73, hSyncObject);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 192));
      v62 = (hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v62 < *(_DWORD *)(v11 + 232) )
      {
        v63 = *(_QWORD *)(v11 + 216);
        v64 = *(unsigned int *)(v63 + 16 * v62 + 8);
        if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v63 + 16 * v62 + 8) & 0x30) && (v64 & 0xF) != 0 )
        {
          v65 = 2 * ((*(_QWORD *)&v80.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v63 + 16 * ((*(_QWORD *)&v80.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x1000) == 0 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v64, v63, v60, v61);
            *(_QWORD *)(v66 + 24) = 194LL;
            WdLogEvent5_WdAssertion(v66);
          }
          *(_DWORD *)(*(_QWORD *)(v11 + 216) + 8 * v65 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(v11 + 200) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 192, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v83);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v67, &EventProfilerExit, v68, 2041);
      return (unsigned int)v56;
    }
    COREACCESS::Release((COREACCESS *)v78);
  }
  COREACCESS::Release((COREACCESS *)v75);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v83);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v52, &EventProfilerExit, v53, 2041);
  return 3221226166LL;
}

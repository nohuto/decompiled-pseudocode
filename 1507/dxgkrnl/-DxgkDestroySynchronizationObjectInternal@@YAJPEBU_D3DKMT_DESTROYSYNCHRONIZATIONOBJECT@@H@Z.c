/*
 * XREFs of ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0084360
 * Callers:
 *     DxgkDestroySynchronizationObject @ 0x1C00849D0 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00ACE20 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00096CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000973C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectInternal(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned int hSyncObject; // ebx
  DXGDEVICESYNCOBJECT *v13; // rdi
  volatile signed __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  DXGGLOBAL *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  _BYTE v50[16]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v51[24]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v53[32]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v54[80]; // [rsp+90h] [rbp-68h] BYREF
  unsigned int v55; // [rsp+110h] [rbp+18h]
  volatile signed __int64 *v56; // [rsp+118h] [rbp+20h] BYREF

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2042);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v48 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v48 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v48);
    goto LABEL_62;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_62:
    v49 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v49 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v49);
LABEL_63:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v29, &EventProfilerExit, v30, 2042);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v55 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v55 = hSyncObject;
  }
  v13 = 0LL;
  v14 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53, (struct DXGPROCESS *)v11);
  v18 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v11 + 232)
    && (v16 = *(_QWORD *)(v11 + 216),
        v15 = *(unsigned int *)(v16 + 16LL * v18 + 8),
        ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v18 + 8) & 0x30))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v18 + 8) & 0xF) == 0xB )
  {
    v19 = *(_QWORD *)(v16 + 16LL * v18);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 68) & 2) == 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v19, v15, v16, v17);
      *(_QWORD *)(v20 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v20);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v21, &EventProfilerExit, v22, 2042);
      return 3221225506LL;
    }
    v14 = *(volatile signed __int64 **)(v19 + 16);
    _InterlockedIncrement64(v14 + 8);
    hSyncObject = v55;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53);
  if ( v14 )
  {
    v56 = v14;
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v50,
      (struct DXGDEVICE *)v14);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v14, 2, v40, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v54);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v52,
      (struct DXGPROCESS *)v11);
    if ( v18 < *(_DWORD *)(v11 + 232) )
    {
      v43 = *(_QWORD *)(v11 + 216);
      v41 = *(unsigned int *)(v43 + 16LL * v18 + 8);
      v42 = (hSyncObject >> 26) & 0x30;
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v43 + 16LL * v18 + 8) & 0x30)
        && (v41 & 0x1000) == 0
        && (v41 & 0xF) != 0 )
      {
        v42 = 2LL * v18;
        if ( (*(_BYTE *)(v43 + 16LL * v18 + 8) & 0xF) == 0xB )
          v13 = *(DXGDEVICESYNCOBJECT **)(v43 + 16LL * v18);
      }
    }
    if ( v13 )
    {
      if ( v18 < *(_DWORD *)(v11 + 232) )
      {
        v46 = *(_QWORD *)(v11 + 216);
        v47 = *(_DWORD *)(v46 + 16LL * v18 + 8);
        if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v46 + 16LL * v18 + 8) & 0x30)
          && (v47 & 0x1000) == 0
          && (v47 & 0xF) != 0 )
        {
          *(_DWORD *)(v46 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
    }
    else
    {
      v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
      *(_QWORD *)(v45 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v45);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v56);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v51,
      (struct DXGPROCESS *)v11);
    if ( v18 < *(_DWORD *)(v11 + 232) )
    {
      v26 = *(_QWORD *)(v11 + 216);
      v24 = *(unsigned int *)(v26 + 16LL * v18 + 8);
      v25 = (hSyncObject >> 26) & 0x30;
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * v18 + 8) & 0x30)
        && (v24 & 0x1000) == 0
        && (v24 & 0xF) != 0 )
      {
        v25 = 2LL * v18;
        if ( (*(_BYTE *)(v26 + 16LL * v18 + 8) & 0xF) == 8 )
          v13 = *(DXGDEVICESYNCOBJECT **)(v26 + 16LL * v18);
      }
    }
    if ( !v13 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v28 + 24) = hSyncObject;
      *(_QWORD *)(v28 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
      goto LABEL_63;
    }
    if ( v18 < *(_DWORD *)(v11 + 232) )
    {
      v31 = *(_QWORD *)(v11 + 216);
      v32 = *(_DWORD *)(v31 + 16LL * v18 + 8);
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v18 + 8) & 0x30)
        && (v32 & 0x1000) == 0
        && (v32 & 0xF) != 0 )
      {
        *(_DWORD *)(v31 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
    v36 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v37 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
      *(_QWORD *)(v37 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v37);
      v36 = DXGGLOBAL::m_pGlobal;
    }
    DXGGLOBAL::DestroySyncObject(v36, v13, hSyncObject);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v38, &EventProfilerExit, v39, 2042);
  return 0LL;
}

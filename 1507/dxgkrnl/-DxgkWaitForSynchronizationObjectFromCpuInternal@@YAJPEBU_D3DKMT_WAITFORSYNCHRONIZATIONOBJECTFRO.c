/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C014C488
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C01322E0 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C014F460 (DxgkWaitForSynchronizationObjectFromCpu.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00098F4 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00176B0 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00A7F90 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00A7FD8 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C014D848 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *v5; // rbx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rcx
  bool v12; // zf
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  size_t v22; // r8
  char *v23; // rdx
  __int64 v24; // rax
  void *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  size_t v28; // r8
  char *v29; // rdx
  __int64 v30; // rcx
  struct DXGDEVICE *v31; // r8
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v34; // r8
  void *v35; // rcx
  char v36; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = a1;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2043;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = PsGetCurrentProcess(v9);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v11 = (void *)qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v11, &EventProfilerExit, v10, 2043);
    return 3221225485LL;
  }
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)&v5->hDevice;
    *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)&v5->FenceValueArray;
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_QWORD *)&v5->Flags.0;
    v14 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    if ( !v14 )
    {
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((PVOID *)(v3 + 120));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v15, &EventProfilerExit, v16, 2043);
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) & 0xFFFFFFFE) != 0 )
    {
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((PVOID *)(v3 + 120));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v17, &EventProfilerExit, v18, 2043);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements((_DWORD *)(v3 + 120), v14);
    v19 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v19;
    if ( !v19 )
    {
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((PVOID *)(v3 + 120));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v20, &EventProfilerExit, v21, 2043);
      return 3221225495LL;
    }
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v19;
    v22 = 4LL * *(unsigned int *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    v23 = *(char **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, v23, v22);
    v24 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v24;
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v24;
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
      (_DWORD *)(v3 + 152),
      *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
    v25 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v25;
    if ( !v25 )
    {
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((PVOID *)(v3 + 120));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v26, &EventProfilerExit, v27, 2043);
      return 3221225495LL;
    }
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v25;
    v28 = 8LL * *(unsigned int *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    v29 = *(char **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( &v29[v28] < v29 || (unsigned __int64)&v29[v28] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v29, v28);
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x98);
    v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)(v3 + 8);
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 8;
  }
  else if ( !v5->ObjectCount || (v5->Flags.Value & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_41;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL),
    v5->hDevice,
    Current,
    (struct DXGDEVICE **)(v3 + 56));
  v31 = *(struct DXGDEVICE **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( !v31 )
  {
    v32 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v32 + 24) = v5->hDevice;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_41:
    NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)(v3 + 152));
    v11 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    if ( v11 != (void *)(v3 + 128) && v11 )
      ExFreePoolWithTag(v11, 0);
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  v33 = WaitForSynchronizationObjectFromCpu(v5, (struct DXGPROCESS *)Current, v31);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)(v3 + 152));
  v35 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  if ( v35 != (void *)(v3 + 128) && v35 )
    ExFreePoolWithTag(v35, 0);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v35, &EventProfilerExit, v34, 2043);
  return v33;
}

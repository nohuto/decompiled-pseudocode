/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C00BA398
 * Callers:
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C00BA380 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C00BA390 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0001850 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001898 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00BA76C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00BA784 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00BA7CC (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
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
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r8
  void *v13; // rcx
  size_t v14; // r8
  char *v15; // rdx
  __int64 v16; // rax
  void *v17; // rcx
  size_t v18; // r8
  char *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // rax
  char v33; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = a1;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2043;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = Current;
  if ( !Current )
  {
    v28 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    v30 = qword_1C00467F0;
    v31 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_44;
  }
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  if ( !a2 )
  {
    if ( !v5->ObjectCount || (v5->Flags.Value & 0xFFFFFFFE) != 0 )
    {
LABEL_43:
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
      v31 = (qword_1C00467F0 & 2) == 0;
LABEL_44:
      if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v30, &EventProfilerExit, v29, 2043);
      return 3221225485LL;
    }
LABEL_6:
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL),
      v5->hDevice,
      Current,
      (struct DXGDEVICE **)(v3 + 56));
    v9 = *(struct DXGDEVICE **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    if ( v9 )
    {
      v10 = WaitForSynchronizationObjectFromCpu(v5, (struct DXGPROCESS *)Current, v9);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL));
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v11, 2043);
      return v10;
    }
    v32 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v32 + 24) = v5->hDevice;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_43;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)&v5->hDevice;
  *(_OWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)&v5->FenceValueArray;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_QWORD *)&v5->Flags.0;
  if ( *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) )
  {
    if ( (*(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) & 0xFFFFFFFE) != 0 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v22, &EventProfilerExit, v23, 2043);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v3 + 120);
      v13 = *(void **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v13;
      if ( v13 )
      {
        *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v13;
        v14 = 4LL * *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
        v15 = *(char **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( &v15[v14] < v15 || (unsigned __int64)&v15[v14] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, v15, v14);
        v16 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
        *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v16;
        *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v16;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
          (_DWORD *)(v3 + 152),
          *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
        v17 = *(void **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
        *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v17;
        if ( v17 )
        {
          *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v17;
          v18 = 8LL * *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
          v19 = *(char **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          if ( &v19[v18] < v19 || (unsigned __int64)&v19[v18] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v17, v19, v18);
          *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x98);
          v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)(v3 + 8);
          *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                               + 8;
          goto LABEL_6;
        }
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v26, &EventProfilerExit, v27, 2043);
        return 3221225495LL;
      }
      else
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v24, &EventProfilerExit, v25, 2043);
        return 3221225495LL;
      }
    }
  }
  else
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v20, &EventProfilerExit, v21, 2043);
    return 3221225485LL;
  }
}

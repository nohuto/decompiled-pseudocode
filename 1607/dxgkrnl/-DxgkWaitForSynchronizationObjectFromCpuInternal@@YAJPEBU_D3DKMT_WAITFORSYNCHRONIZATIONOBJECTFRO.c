/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C00C6868
 * Callers:
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C00C6850 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C00C6860 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C000BD24 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C000BD6C (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00C6C40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00C6C88 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00C84BC (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r14
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // r8
  void *v15; // rcx
  size_t v16; // r8
  char *v17; // rdx
  __int64 v18; // rax
  void *v19; // rcx
  size_t v20; // r8
  char *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  char v36; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = a1;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2043;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v7);
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v30 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v31);
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    v33 = qword_1C0056840;
    v34 = (qword_1C0056840 & 2) == 0;
    goto LABEL_44;
  }
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  if ( !a2 )
  {
    if ( !v5->ObjectCount || (v5->Flags.Value & 0xFFFFFFFE) != 0 )
    {
LABEL_43:
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
      v34 = (qword_1C0056840 & 2) == 0;
LABEL_44:
      if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v33, &EventProfilerExit, v32, 2043);
      return 3221225485LL;
    }
LABEL_6:
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL),
      v5->hDevice,
      ProcessDxgProcess,
      (struct DXGDEVICE **)(v3 + 72));
    v11 = *(struct DXGDEVICE **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    if ( v11 )
    {
      v12 = WaitForSynchronizationObjectFromCpu(v5, (struct DXGPROCESS *)ProcessDxgProcess, v11);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C0056840, &EventProfilerExit, v13, 2043);
      return v12;
    }
    v35 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v35 + 24) = v5->hDevice;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_43;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)&v5->hDevice;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)&v5->FenceValueArray;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_QWORD *)&v5->Flags.0;
  if ( *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) )
  {
    if ( (*(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) & 0xFFFFFFFE) != 0 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v24, &EventProfilerExit, v25, 2043);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v3 + 120);
      v15 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v15;
      if ( v15 )
      {
        *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v15;
        v16 = 4LL * *(unsigned int *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
        v17 = *(char **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( &v17[v16] < v17 || (unsigned __int64)&v17[v16] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v15, v17, v16);
        v18 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
        *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v18;
        *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
          (_DWORD *)(v3 + 152),
          *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
        v19 = *(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
        *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v19;
        if ( v19 )
        {
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v19;
          v20 = 8LL * *(unsigned int *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
          v21 = *(char **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          if ( &v21[v20] < v21 || (unsigned __int64)&v21[v20] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v19, v21, v20);
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x98);
          v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)(v3 + 8);
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = ((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                               + 8;
          goto LABEL_6;
        }
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v28, &EventProfilerExit, v29, 2043);
        return 3221225495LL;
      }
      else
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v26, &EventProfilerExit, v27, 2043);
        return 3221225495LL;
      }
    }
  }
  else
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((PVOID *)(v3 + 152));
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v3 + 120);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v22, &EventProfilerExit, v23, 2043);
    return 3221225485LL;
  }
}

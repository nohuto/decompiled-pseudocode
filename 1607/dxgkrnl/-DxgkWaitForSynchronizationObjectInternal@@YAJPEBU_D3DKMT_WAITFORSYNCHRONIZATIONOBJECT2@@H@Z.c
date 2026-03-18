/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00C6CCC
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00C6CA0 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWaitForSynchronizationObject @ 0x1C00C6CC0 (DxgkWaitForSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C00C7330 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  D3DKMT_HANDLE *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  D3DKMT_HANDLE *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  _BYTE v27[240]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  *(_QWORD *)v3 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( !a2 )
    {
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)&v5->hContext;
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)&v5->ObjectHandleArray[2];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)&v5->ObjectHandleArray[6];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)&v5->ObjectHandleArray[10];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)&v5->ObjectHandleArray[14];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)&v5->ObjectHandleArray[18];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)&v5->ObjectHandleArray[22];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) - 16 + 0x90) = *(_OWORD *)&v5->ObjectHandleArray[26];
      v23 = &v5->ObjectHandleArray[30];
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)v23;
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *((_OWORD *)v23 + 1);
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *((_OWORD *)v23 + 2);
      *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *((_OWORD *)v23 + 3);
      *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *((_QWORD *)v23 + 8);
      goto LABEL_17;
    }
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)&v5->hContext;
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)&v5->ObjectHandleArray[2];
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)&v5->ObjectHandleArray[6];
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)&v5->ObjectHandleArray[10];
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)&v5->ObjectHandleArray[14];
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)&v5->ObjectHandleArray[18];
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)&v5->ObjectHandleArray[22];
    v10 = v3 + 144;
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) - 16 + 0x90) = *(_OWORD *)&v5->ObjectHandleArray[26];
    v11 = &v5->ObjectHandleArray[30];
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)v11;
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *((_OWORD *)v11 + 1);
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *((_OWORD *)v11 + 2);
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *((_OWORD *)v11 + 3);
    *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *((_QWORD *)v11 + 8);
    v12 = *(unsigned int *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    if ( (_DWORD)v12 )
    {
      if ( (unsigned int)v12 <= 0x20 )
      {
LABEL_17:
        v21 = WaitForSynchronizationObjectFromGpu(
                HIDWORD(*(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)),
                (const unsigned int *)(v3 + 24),
                0LL,
                *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98),
                *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                ProcessDxgProcess,
                0,
                0);
        if ( v21 < 0 )
        {
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(qword_1C0056840, &EventProfilerExit, v22, 2043);
          return (unsigned int)v21;
        }
        else
        {
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v20, &EventProfilerExit, v22, 2043);
          return 0LL;
        }
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v17[3] = *(unsigned int *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v17[4] = v12;
      v17[5] = -1073741811LL;
      WdLogEvent5_WdError(v17);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v18, &EventProfilerExit, v19, 2043);
      return 3221225485LL;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v13 + 24) = *(unsigned int *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      *(_QWORD *)(v13 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v13);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v14, &EventProfilerExit, v15, 2043);
      return 3221225485LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = PsGetCurrentProcess(v25);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v26, 2043);
    return 3221225485LL;
  }
}

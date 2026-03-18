/*
 * XREFs of ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00CE718
 * Callers:
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00CE710 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C0177600 (DxgkSignalSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C009FEF0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C00CE904 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *ProcessDxgProcess; // r13
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned int *Elements; // r15
  int v16; // ebx
  __int64 v17; // r8
  void *v18; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  _OWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // [rsp+A0h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) = a2;
  v5 = (ULONG64)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( !a2 )
    {
      v12 = (_OWORD *)(v3 + 16);
      v13 = 3LL;
      do
      {
        *v12 = *(_OWORD *)v5;
        v12[1] = *(_OWORD *)(v5 + 16);
        v12[2] = *(_OWORD *)(v5 + 32);
        v12[3] = *(_OWORD *)(v5 + 48);
        v12[4] = *(_OWORD *)(v5 + 64);
        v12[5] = *(_OWORD *)(v5 + 80);
        v12[6] = *(_OWORD *)(v5 + 96);
        v12 += 8;
        *(v12 - 1) = *(_OWORD *)(v5 + 112);
        v5 += 128LL;
        --v13;
      }
      while ( v13 );
      *v12 = *(_OWORD *)v5;
      v12[1] = *(_OWORD *)(v5 + 16);
      v12[2] = *(_OWORD *)(v5 + 32);
      v12[3] = *(_OWORD *)(v5 + 48);
      v12[4] = *(_OWORD *)(v5 + 64);
      LODWORD(v5) = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
      LODWORD(v14) = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
LABEL_7:
      *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = 0;
      Elements = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(
                                   v3 + 480,
                                   (unsigned int)(v5 + 1));
      if ( Elements )
      {
        *Elements = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( (_DWORD)v5 )
          memmove(Elements + 1, (const void *)(v3 + 160), 4LL * (unsigned int)v5);
        v16 = SignalSynchronizationObjectInternal(
                (unsigned int)v14,
                (const unsigned int *)(v3 + 24),
                *(struct _D3DDDICB_SIGNALFLAGS *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98),
                (int)v5 + 1,
                Elements,
                0LL,
                *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0),
                (void *const *)(v3 + 416),
                ProcessDxgProcess,
                *(_DWORD *)v3 != 0,
                0);
        if ( v16 < 0 )
        {
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 480));
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(qword_1C0056840, &EventProfilerExit, v31, 2044);
          return (unsigned int)v16;
        }
        else
        {
          v18 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0);
          if ( v18 != (void *)(v3 + 488) && v18 )
            ExFreePoolWithTag(v18, 0);
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q((__int64)v18, &EventProfilerExit, v17, 2044);
          return 0LL;
        }
      }
      else
      {
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 480));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v29, &EventProfilerExit, v30, 2044);
        return 3221225495LL;
      }
    }
    if ( v5 >= MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    v26 = (_OWORD *)(v3 + 16);
    v27 = 3LL;
    do
    {
      *v26 = *(_OWORD *)v5;
      v26[1] = *(_OWORD *)(v5 + 16);
      v26[2] = *(_OWORD *)(v5 + 32);
      v26[3] = *(_OWORD *)(v5 + 48);
      v26[4] = *(_OWORD *)(v5 + 64);
      v26[5] = *(_OWORD *)(v5 + 80);
      v26[6] = *(_OWORD *)(v5 + 96);
      v26 += 8;
      *(v26 - 1) = *(_OWORD *)(v5 + 112);
      v5 += 128LL;
      --v27;
    }
    while ( v27 );
    *v26 = *(_OWORD *)v5;
    v26[1] = *(_OWORD *)(v5 + 16);
    v26[2] = *(_OWORD *)(v5 + 32);
    v26[3] = *(_OWORD *)(v5 + 48);
    v26[4] = *(_OWORD *)(v5 + 64);
    v5 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    if ( (unsigned int)v5 > 0x40 )
    {
      v25 = WdLogNewEntry5_WdWarning(128LL, 0LL, v9, v10);
      *(_QWORD *)(v25 + 24) = v5;
      WdLogEvent5_WdWarning(v25);
    }
    else
    {
      v14 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      if ( (unsigned int)v14 <= 0x20 )
        goto LABEL_7;
      v28 = WdLogNewEntry5_WdError(128LL);
      *(_QWORD *)(v28 + 24) = v14;
      WdLogEvent5_WdError(v28);
    }
    v24 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = PsGetCurrentProcess(v21);
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    v23 = qword_1C0056840;
    v24 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v22, 2044);
  return 3221225485LL;
}

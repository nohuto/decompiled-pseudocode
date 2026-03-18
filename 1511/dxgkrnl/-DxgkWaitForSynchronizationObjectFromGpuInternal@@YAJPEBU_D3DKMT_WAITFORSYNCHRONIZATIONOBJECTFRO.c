/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N@Z @ 0x1C0066300
 * Callers:
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C0065FD0 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C00662F0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C0066680 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00BA76C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        char a2,
        __int64 a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v4; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  unsigned int v9; // edi
  _BYTE *PoolWithTag; // rbx
  unsigned int *ObjectHandleArray; // rbx
  size_t v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // r8
  PVOID v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __m128i Src; // [rsp+50h] [rbp-88h]
  unsigned __int64 *v29[2]; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+A0h] [rbp-38h] BYREF
  _BYTE v31[16]; // [rsp+A8h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp-20h]

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v24 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v24 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v24);
LABEL_43:
    v25 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v25 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v26, &EventProfilerExit, v27, 2043);
    return 3221225485LL;
  }
  v8 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v8 )
    goto LABEL_43;
  P = 0LL;
  v32 = 0;
  if ( !a2 )
  {
    Src = *(__m128i *)&v4->hContext;
    *(_OWORD *)v29 = *(_OWORD *)&v4->MonitoredFenceValueArray;
    ObjectHandleArray = (unsigned int *)v4->ObjectHandleArray;
LABEL_27:
    v19 = WaitForSynchronizationObjectFromGpu(
            Src.m128i_u32[1],
            ObjectHandleArray,
            v29[0],
            (unsigned __int64)v29[0],
            Src.m128i_u32[0],
            v8,
            0,
            a2 == 0);
    if ( v19 < 0 )
    {
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v22, &EventProfilerExit, v23, 2043);
      return (unsigned int)v19;
    }
    else
    {
      v21 = P;
      if ( P != v31 && P )
        ExFreePoolWithTag(P, 0);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q((__int64)v21, &EventProfilerExit, v20, 2043);
      return 0LL;
    }
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
  Src = *(__m128i *)&v4->hContext;
  *(_OWORD *)v29 = *(_OWORD *)&v4->MonitoredFenceValueArray;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v4->hContext, 4));
  if ( v9 )
  {
    if ( v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
      {
LABEL_21:
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v17, &EventProfilerExit, v18, 2043);
        return 3221225495LL;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v9, 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v31;
      P = v31;
    }
    v32 = v9;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v9);
      ObjectHandleArray = (unsigned int *)P;
      if ( P )
      {
        v12 = 4LL * v32;
        if ( v12 + Src.m128i_i64[1] < Src.m128i_i64[1] || v12 + Src.m128i_i64[1] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(ObjectHandleArray, (const void *)Src.m128i_i64[1], v12);
        goto LABEL_27;
      }
    }
    goto LABEL_21;
  }
  v13 = WdLogNewEntry5_WdError(MmUserProbeAddress);
  *(_QWORD *)(v13 + 24) = Src.m128i_u32[0];
  *(_QWORD *)(v13 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v13);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 2043);
  return 3221225485LL;
}

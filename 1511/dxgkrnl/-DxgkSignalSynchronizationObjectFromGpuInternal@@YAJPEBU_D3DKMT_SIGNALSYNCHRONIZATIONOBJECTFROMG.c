/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00BA268
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C00BA260 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C0152E70 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00BA76C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00BA784 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2)
{
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rdi
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rax
  PVOID v17; // rcx
  size_t v18; // r8
  const void *v19; // rdx
  __int64 v20; // rax
  unsigned int hContext; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGPROCESS *v22; // [rsp+68h] [rbp-A0h]
  void **v23; // [rsp+70h] [rbp-98h]
  PVOID v24; // [rsp+78h] [rbp-90h]
  void *Src[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v26; // [rsp+90h] [rbp-78h]
  __int128 v27; // [rsp+A0h] [rbp-68h]
  __int128 v28; // [rsp+B0h] [rbp-58h]
  __int128 v29; // [rsp+C0h] [rbp-48h]
  PVOID v30; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h] BYREF
  char v32; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v33; // [rsp+F0h] [rbp-18h]

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v10 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  }
  else
  {
    v13 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v13);
    v10 = 0LL;
  }
  v22 = v10;
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess();
    v15 = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return v15;
  }
  P = 0LL;
  v33 = 0;
  v23 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&a1->hContext;
    v26 = *(_OWORD *)&a1->MonitoredFenceValueArray;
    v27 = *(_OWORD *)&a1->Reserved[2];
    v28 = *(_OWORD *)&a1->Reserved[4];
    v29 = *(_OWORD *)&a1->Reserved[6];
    if ( !HIDWORD(Src[0]) )
    {
      v16 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v16 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P);
    v17 = P;
    v24 = P;
    if ( !P )
    {
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      return 3221225495LL;
    }
    v30 = P;
    v18 = 4LL * v33;
    v19 = Src[1];
    if ( (char *)Src[1] + v18 < Src[1] || (char *)Src[1] + v18 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, v19, v18);
    Src[1] = P;
    a1 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *)Src;
    v23 = Src;
  }
  else if ( !a1->ObjectCount )
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = a1->hContext;
    v15 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_14;
  }
  hContext = a1->hContext;
  v11 = SignalSynchronizationObjectInternal(
          a1->ObjectCount,
          a1->ObjectHandleArray,
          0,
          1u,
          &hContext,
          (unsigned __int64 *)a1->MonitoredFenceValueArray,
          0,
          0LL,
          v10,
          a2 != 0,
          0);
  if ( v11 < 0 )
  {
    v15 = v11;
LABEL_14:
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    return v15;
  }
  if ( P != &v32 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}

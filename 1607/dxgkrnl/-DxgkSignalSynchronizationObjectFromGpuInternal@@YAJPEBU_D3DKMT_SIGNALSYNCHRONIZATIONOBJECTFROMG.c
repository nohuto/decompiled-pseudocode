/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00CE958
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C00CE950 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C0177B20 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C009FEF0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00C6C40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00C6C88 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2)
{
  void **v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rdi
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  PVOID v14; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // [rsp+60h] [rbp-B8h] BYREF
  void **v19; // [rsp+68h] [rbp-B0h]
  struct DXGPROCESS *v20; // [rsp+70h] [rbp-A8h]
  PVOID v21; // [rsp+78h] [rbp-A0h]
  PVOID v22; // [rsp+80h] [rbp-98h]
  void *Src[2]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-78h]
  __int128 v25; // [rsp+B0h] [rbp-68h]
  __int128 v26; // [rsp+C0h] [rbp-58h]
  __int128 v27; // [rsp+D0h] [rbp-48h]
  PVOID P; // [rsp+E0h] [rbp-38h] BYREF
  char v29; // [rsp+E8h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+F8h] [rbp-20h]

  v3 = (void **)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  v20 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = PsGetCurrentProcess(v11);
    v12 = -1073741811;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return v12;
  }
  P = 0LL;
  v30 = 0;
  v19 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (void **)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)v3;
    v24 = *((_OWORD *)v3 + 1);
    v25 = *((_OWORD *)v3 + 2);
    v26 = *((_OWORD *)v3 + 3);
    v27 = *((_OWORD *)v3 + 4);
    if ( !HIDWORD(Src[0]) )
    {
      v13 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v13 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v13 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v13);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, HIDWORD(Src[0]));
    v14 = P;
    v21 = P;
    if ( !P )
    {
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      return 3221225495LL;
    }
    v22 = P;
    v15 = 4LL * v30;
    v16 = Src[1];
    if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, v16, v15);
    Src[1] = P;
    v3 = Src;
    v19 = Src;
  }
  else if ( !*((_DWORD *)v3 + 1) )
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)v3;
    v12 = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_11;
  }
  v18 = *(_DWORD *)v3;
  v8 = SignalSynchronizationObjectInternal(
         *((unsigned int *)v3 + 1),
         (const unsigned int *)v3[1],
         0,
         1u,
         &v18,
         (unsigned __int64 *)v3[2],
         0,
         0LL,
         ProcessDxgProcess,
         a2 != 0,
         0);
  if ( v8 < 0 )
  {
    v12 = v8;
LABEL_11:
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    return v12;
  }
  if ( P != &v29 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}

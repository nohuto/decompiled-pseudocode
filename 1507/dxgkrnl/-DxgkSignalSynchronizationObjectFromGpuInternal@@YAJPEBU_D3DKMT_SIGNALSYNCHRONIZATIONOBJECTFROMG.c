/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C014C184
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C01322D0 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C014F450 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00A7F90 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00A7FD8 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2)
{
  void **v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rax
  PVOID v10; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  __int64 v13; // rax
  int v14; // ebx
  unsigned int v15; // [rsp+60h] [rbp-A8h] BYREF
  void **v16; // [rsp+68h] [rbp-A0h]
  struct DXGPROCESS *v17; // [rsp+70h] [rbp-98h]
  PVOID v18; // [rsp+78h] [rbp-90h]
  void *Src[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  __int128 v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+C0h] [rbp-48h]
  PVOID v24; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v26[16]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+F0h] [rbp-18h]

  v3 = (void **)a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v17 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = PsGetCurrentProcess(v7);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  P = 0LL;
  v27 = 0;
  v16 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (void **)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)v3;
    v20 = *((_OWORD *)v3 + 1);
    v21 = *((_OWORD *)v3 + 2);
    v22 = *((_OWORD *)v3 + 3);
    v23 = *((_OWORD *)v3 + 4);
    if ( !HIDWORD(Src[0]) )
    {
      v9 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v9 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v9 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v9);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, HIDWORD(Src[0]));
    v10 = P;
    v18 = P;
    if ( !P )
    {
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
      return 3221225495LL;
    }
    v24 = P;
    v11 = 4LL * v27;
    v12 = Src[1];
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v10, v12, v11);
    Src[1] = P;
    v3 = Src;
    v16 = Src;
  }
  else if ( !*((_DWORD *)v3 + 1) )
  {
    v13 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)v3;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)v3;
  v14 = SignalSynchronizationObjectInternal(
          *((unsigned int *)v3 + 1),
          (const unsigned int *)v3[1],
          0,
          1u,
          &v15,
          (unsigned __int64 *)v3[2],
          0,
          0LL,
          Current,
          a2 != 0,
          0);
  if ( v14 >= 0 )
  {
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    if ( P != v26 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v14;
  }
}

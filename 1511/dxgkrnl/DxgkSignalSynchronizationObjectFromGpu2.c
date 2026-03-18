/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0077430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00BA76C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r15
  ULONG64 v8; // rcx
  unsigned int v9; // r14d
  _BYTE *PoolWithTag; // rdi
  PVOID v11; // rdi
  size_t v12; // r8
  _BYTE *v13; // rbx
  PVOID v14; // rbx
  size_t v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // r8
  PVOID v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  void *Src[2]; // [rsp+70h] [rbp-F8h]
  struct _D3DDDICB_SIGNALFLAGS v34[4]; // [rsp+80h] [rbp-E8h]
  void *v35[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-C8h]
  __int128 v37; // [rsp+B0h] [rbp-B8h]
  __int128 v38; // [rsp+C0h] [rbp-A8h]
  PVOID v39; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v40[16]; // [rsp+D8h] [rbp-90h] BYREF
  unsigned int v41; // [rsp+E8h] [rbp-80h]
  PVOID P; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v43[64]; // [rsp+F8h] [rbp-70h] BYREF
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // [rsp+138h] [rbp-30h]

  v3 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v29 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v29 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v29);
LABEL_59:
    v30 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v30 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v31, &EventProfilerExit, v32, 2044);
    return 3221225485LL;
  }
  v7 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v7 )
    goto LABEL_59;
  v39 = 0LL;
  v41 = 0;
  P = 0LL;
  Value = 0;
  v8 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v34[0].0 = v3[1];
  *(_OWORD *)v35 = v3[2];
  v36 = v3[3];
  v37 = v3[4];
  v38 = v3[5];
  v9 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( v9 )
  {
    if ( v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
        goto LABEL_24;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v9, 0x4B677844u);
      v39 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v40;
      v39 = v40;
    }
    v41 = v9;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v9);
      v11 = v39;
      if ( v39 )
      {
        v12 = 4LL * v41;
        if ( (char *)Src[1] + v12 < Src[1] || (char *)Src[1] + v12 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, Src[1], v12);
        goto LABEL_14;
      }
    }
LABEL_24:
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v39);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2044);
    return 3221225495LL;
  }
  v11 = Src[1];
LABEL_14:
  if ( v34[1].Value )
  {
    if ( v34[1].Value > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v34[1].Value < 4 )
      {
LABEL_36:
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v39);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v22, &EventProfilerExit, v23, 2044);
        return 3221225495LL;
      }
      v13 = ExAllocatePoolWithTag(PagedPool, 4LL * v34[1].Value, 0x4B677844u);
      P = v13;
    }
    else
    {
      v13 = v43;
      P = v43;
    }
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)v34[1].Value;
    if ( v13 )
    {
      memset(v13, 0, 4LL * v34[1].Value);
      v14 = P;
      if ( P )
      {
        v15 = 4LL * *(unsigned int *)&Value;
        if ( v15 + *(_QWORD *)&v34[2].0 < *(_QWORD *)&v34[2].0 || v15 + *(_QWORD *)&v34[2].0 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, *(const void **)&v34[2].0, v15);
        v24 = SignalSynchronizationObjectInternal(
                v9,
                (const unsigned int *)v11,
                v34[0],
                v34[1].Value,
                (const unsigned int *)v14,
                (const unsigned __int64 *)v35[0],
                (char)v35[0],
                v35,
                v7,
                1,
                0);
        if ( v24 < 0 )
        {
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
          PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v39);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(v27, &EventProfilerExit, v28, 2044);
          return (unsigned int)v24;
        }
        else
        {
          if ( P != v43 && P )
            ExFreePoolWithTag(P, 0);
          v26 = v39;
          if ( v39 != v40 && v39 )
            ExFreePoolWithTag(v39, 0);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q((__int64)v26, &EventProfilerExit, v25, 2044);
          return 0LL;
        }
      }
    }
    goto LABEL_36;
  }
  v19 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v19 + 24) = 731LL;
  WdLogEvent5_WdError(v19);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v39);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 2044);
  return 3221225485LL;
}

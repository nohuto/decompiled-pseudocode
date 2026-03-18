/*
 * XREFs of ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0076080
 * Callers:
 *     DxgkSignalSynchronizationObject @ 0x1C0076070 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00BFCB0 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // r14
  int *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rsi
  _BYTE *PoolWithTag; // rbx
  const unsigned int *v18; // rbx
  int v19; // ebx
  __int64 v20; // r8
  PVOID v21; // rcx
  int *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // [rsp+70h] [rbp-258h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-254h]
  unsigned int v37[33]; // [rsp+78h] [rbp-250h] BYREF
  unsigned int v38; // [rsp+FCh] [rbp-1CCh]
  _BYTE Src[256]; // [rsp+100h] [rbp-1C8h] BYREF
  void *v40; // [rsp+200h] [rbp-C8h] BYREF
  PVOID P; // [rsp+240h] [rbp-88h] BYREF
  _BYTE v42[64]; // [rsp+248h] [rbp-80h] BYREF
  int v43; // [rsp+288h] [rbp-40h]

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v33 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v33 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v33);
    goto LABEL_46;
  }
  v11 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_46:
    v34 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v34 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_48;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v12 = &v35;
    v13 = 3LL;
    do
    {
      *(_OWORD *)v12 = *(_OWORD *)&v4->hContext;
      *((_OWORD *)v12 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
      *((_OWORD *)v12 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
      *((_OWORD *)v12 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
      *((_OWORD *)v12 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
      *((_OWORD *)v12 + 5) = *(_OWORD *)&v4->ObjectHandleArray[18];
      *((_OWORD *)v12 + 6) = *(_OWORD *)&v4->ObjectHandleArray[22];
      v12 += 32;
      *((_OWORD *)v12 - 1) = *(_OWORD *)&v4->ObjectHandleArray[26];
      v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)((char *)v4 + 128);
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v12 = *(_OWORD *)&v4->hContext;
    *((_OWORD *)v12 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
    *((_OWORD *)v12 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
    *((_OWORD *)v12 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
    *((_OWORD *)v12 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
    v14 = v38;
    if ( v38 > 0x40 )
    {
      v25 = WdLogNewEntry5_WdWarning(0LL, v7, v9, v10);
      *(_QWORD *)(v25 + 24) = v14;
      WdLogEvent5_WdWarning(v25);
    }
    else
    {
      v15 = v36;
      if ( v36 <= 0x20 )
        goto LABEL_11;
      v28 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v28 + 24) = v15;
      WdLogEvent5_WdError(v28);
    }
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_48:
    Template_q(v26, &EventProfilerExit, v27, 2044);
    return 3221225485LL;
  }
  v23 = &v35;
  v24 = 3LL;
  do
  {
    *(_OWORD *)v23 = *(_OWORD *)&v4->hContext;
    *((_OWORD *)v23 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
    *((_OWORD *)v23 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
    *((_OWORD *)v23 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
    *((_OWORD *)v23 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
    *((_OWORD *)v23 + 5) = *(_OWORD *)&v4->ObjectHandleArray[18];
    *((_OWORD *)v23 + 6) = *(_OWORD *)&v4->ObjectHandleArray[22];
    v23 += 32;
    *((_OWORD *)v23 - 1) = *(_OWORD *)&v4->ObjectHandleArray[26];
    v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)((char *)v4 + 128);
    --v24;
  }
  while ( v24 );
  *(_OWORD *)v23 = *(_OWORD *)&v4->hContext;
  *((_OWORD *)v23 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
  *((_OWORD *)v23 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
  *((_OWORD *)v23 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
  *((_OWORD *)v23 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
  LODWORD(v14) = v38;
  LODWORD(v15) = v36;
LABEL_11:
  P = 0LL;
  v43 = 0;
  v16 = (unsigned int)(v14 + 1);
  if ( (unsigned int)v16 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v16 < 4 )
      goto LABEL_33;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v16, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v42;
    P = v42;
  }
  v43 = v14 + 1;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 4LL * (unsigned int)v16);
    v18 = (const unsigned int *)P;
    if ( P )
    {
      *(_DWORD *)P = v35;
      if ( (_DWORD)v14 )
        memmove((void *)(v18 + 1), Src, 4LL * (unsigned int)v14);
      v19 = SignalSynchronizationObjectInternal(
              v15,
              v37,
              (struct _D3DDDICB_SIGNALFLAGS)v37[32],
              v16,
              v18,
              0LL,
              (char)v40,
              &v40,
              v11,
              a2 != 0,
              0);
      if ( v19 < 0 )
      {
        PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v31, &EventProfilerExit, v32, 2044);
        return (unsigned int)v19;
      }
      else
      {
        v21 = P;
        if ( P != v42 && P )
          ExFreePoolWithTag(P, 0);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q((__int64)v21, &EventProfilerExit, v20, 2044);
        return 0LL;
      }
    }
  }
LABEL_33:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 2044);
  return 3221225495LL;
}

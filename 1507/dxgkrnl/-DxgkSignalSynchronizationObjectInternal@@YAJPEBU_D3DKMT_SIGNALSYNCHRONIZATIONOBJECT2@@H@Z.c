/*
 * XREFs of ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00879B0
 * Callers:
 *     DxgkSignalSynchronizationObject @ 0x1C0087D10 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0089710 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
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
  _BYTE *PoolWithTag; // rbx
  __int64 v17; // rsi
  int v18; // ebx
  __int64 v19; // r8
  PVOID v20; // rcx
  int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  int v30; // [rsp+70h] [rbp-258h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-254h]
  unsigned int v32[33]; // [rsp+78h] [rbp-250h] BYREF
  unsigned int v33; // [rsp+FCh] [rbp-1CCh]
  _BYTE Src[256]; // [rsp+100h] [rbp-1C8h] BYREF
  void *v35; // [rsp+200h] [rbp-C8h] BYREF
  PVOID v36; // [rsp+240h] [rbp-88h]
  _BYTE P[64]; // [rsp+248h] [rbp-80h] BYREF
  int v38; // [rsp+288h] [rbp-40h]

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v27 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v27 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v27);
    goto LABEL_52;
  }
  v11 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_52:
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess(v29);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_54;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v12 = &v30;
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
    v14 = v33;
    if ( v33 > 0x40 )
    {
      v23 = WdLogNewEntry5_WdWarning(0LL, v7, v9, v10);
      *(_QWORD *)(v23 + 24) = v14;
      WdLogEvent5_WdWarning(v23);
    }
    else
    {
      v15 = v31;
      if ( v31 <= 0x20 )
        goto LABEL_11;
      v26 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v26 + 24) = v15;
      WdLogEvent5_WdError(v26);
    }
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_54:
    Template_q(v24, &EventProfilerExit, v25, 2044);
    return 3221225485LL;
  }
  v22 = &v30;
  v13 = 3LL;
  do
  {
    *(_OWORD *)v22 = *(_OWORD *)&v4->hContext;
    *((_OWORD *)v22 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
    *((_OWORD *)v22 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
    *((_OWORD *)v22 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
    *((_OWORD *)v22 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
    *((_OWORD *)v22 + 5) = *(_OWORD *)&v4->ObjectHandleArray[18];
    *((_OWORD *)v22 + 6) = *(_OWORD *)&v4->ObjectHandleArray[22];
    v22 += 32;
    *((_OWORD *)v22 - 1) = *(_OWORD *)&v4->ObjectHandleArray[26];
    v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)((char *)v4 + 128);
    --v13;
  }
  while ( v13 );
  *(_OWORD *)v22 = *(_OWORD *)&v4->hContext;
  *((_OWORD *)v22 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
  *((_OWORD *)v22 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
  *((_OWORD *)v22 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
  *((_OWORD *)v22 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
  LODWORD(v14) = v33;
  LODWORD(v15) = v31;
LABEL_11:
  PoolWithTag = 0LL;
  v36 = 0LL;
  v38 = 0;
  v17 = (unsigned int)(v14 + 1);
  if ( (unsigned int)v17 > 0x10 )
  {
    v13 = (unsigned int)v17;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 < 4 )
      goto LABEL_33;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v17, 0x4B677844u);
    v36 = PoolWithTag;
  }
  else
  {
    PoolWithTag = P;
    v36 = P;
  }
  v38 = v14 + 1;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 4LL * (unsigned int)v17);
    PoolWithTag = v36;
    if ( v36 )
    {
      *(_DWORD *)v36 = v30;
      if ( (_DWORD)v14 )
        memmove(PoolWithTag + 4, Src, 4LL * (unsigned int)v14);
      v18 = SignalSynchronizationObjectInternal(
              (unsigned int)v15,
              v32,
              (struct _D3DDDICB_SIGNALFLAGS)v32[32],
              v17,
              (unsigned int *)PoolWithTag,
              0LL,
              (char)v35,
              &v35,
              v11,
              a2 != 0,
              0);
      v20 = v36;
      if ( v18 < 0 )
      {
        if ( v36 != P && v36 )
          ExFreePoolWithTag(v36, 0);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q((__int64)v20, &EventProfilerExit, v19, 2044);
        return (unsigned int)v18;
      }
      else
      {
        if ( v36 != P && v36 )
          ExFreePoolWithTag(v36, 0);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q((__int64)v20, &EventProfilerExit, v19, 2044);
        return 0LL;
      }
    }
  }
LABEL_33:
  if ( PoolWithTag != P && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v9, 2044);
  return 3221225495LL;
}

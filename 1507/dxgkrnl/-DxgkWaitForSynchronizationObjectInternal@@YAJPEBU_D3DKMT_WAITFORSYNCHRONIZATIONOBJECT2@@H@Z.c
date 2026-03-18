/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A1B80
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00A1B60 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWaitForSynchronizationObject @ 0x1C00A1B70 (DxgkWaitForSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 CurrentProcess; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int128 v28; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+60h] [rbp-D8h]
  __int128 v30; // [rsp+70h] [rbp-C8h]
  __int128 v31; // [rsp+80h] [rbp-B8h]
  __int128 v32; // [rsp+90h] [rbp-A8h]
  __int128 v33; // [rsp+A0h] [rbp-98h]
  __int128 v34; // [rsp+B0h] [rbp-88h]
  __int128 v35; // [rsp+C0h] [rbp-78h]
  __int128 v36; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-58h]
  __int128 v38; // [rsp+F0h] [rbp-48h]
  __int128 v39; // [rsp+100h] [rbp-38h]
  UINT64 v40; // [rsp+110h] [rbp-28h]

  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v23 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v23 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v23);
LABEL_31:
    v24 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v24 + 24) = PsGetCurrentProcess(v25);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v26, &EventProfilerExit, v27, 2043);
    return 3221225485LL;
  }
  v11 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v11 )
    goto LABEL_31;
  if ( !a2 )
  {
    v28 = *(_OWORD *)&v4->hContext;
    v29 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v30 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v31 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v32 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v33 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v34 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v35 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v36 = *(_OWORD *)&v4->ObjectHandleArray[30];
    v37 = *(_OWORD *)&v4->Reserved[1];
    v38 = *(_OWORD *)&v4->Reserved[3];
    v39 = *(_OWORD *)&v4->Reserved[5];
    v40 = v4->Reserved[7];
    v19 = WaitForSynchronizationObjectFromGpu(
            DWORD1(v28),
            (const unsigned int *)&v28 + 2,
            0LL,
            *((unsigned __int64 *)&v36 + 1),
            v28,
            v11,
            0);
LABEL_18:
    v22 = v19;
    if ( v19 < 0 )
    {
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v20, &EventProfilerExit, v21, 2043);
      return v22;
    }
    else
    {
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v20, &EventProfilerExit, v21, 2043);
      return 0LL;
    }
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
  v28 = *(_OWORD *)&v4->hContext;
  v29 = *(_OWORD *)&v4->ObjectHandleArray[2];
  v30 = *(_OWORD *)&v4->ObjectHandleArray[6];
  v31 = *(_OWORD *)&v4->ObjectHandleArray[10];
  v32 = *(_OWORD *)&v4->ObjectHandleArray[14];
  v33 = *(_OWORD *)&v4->ObjectHandleArray[18];
  v34 = *(_OWORD *)&v4->ObjectHandleArray[22];
  v35 = *(_OWORD *)&v4->ObjectHandleArray[26];
  v36 = *(_OWORD *)&v4->ObjectHandleArray[30];
  v37 = *(_OWORD *)&v4->Reserved[1];
  v38 = *(_OWORD *)&v4->Reserved[3];
  v39 = *(_OWORD *)&v4->Reserved[5];
  v40 = v4->Reserved[7];
  if ( DWORD1(v28) )
  {
    if ( DWORD1(v28) <= 0x20 )
    {
      v19 = WaitForSynchronizationObjectFromGpu(
              DWORD1(v28),
              (const unsigned int *)&v28 + 2,
              0LL,
              *((unsigned __int64 *)&v36 + 1),
              v28,
              v11,
              0);
      goto LABEL_18;
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdError(&v36);
    v16[3] = (unsigned int)v28;
    v16[4] = DWORD1(v28);
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2043);
    return 3221225485LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(&v36);
    *(_QWORD *)(v12 + 24) = (unsigned int)v28;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v13, &EventProfilerExit, v14, 2043);
    return 3221225485LL;
  }
}

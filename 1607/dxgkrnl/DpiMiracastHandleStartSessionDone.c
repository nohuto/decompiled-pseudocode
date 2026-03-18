/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C019766C
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C002B360 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 *     Template_qqqz @ 0x1C002E85C (Template_qqqz.c)
 *     Template_qqz @ 0x1C002E91C (Template_qqz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0031444 (TraceLoggingWriteMiracastSessionStart.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0196B28 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  int v10; // r8d
  struct _KEVENT *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // eax
  _OWORD *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // eax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // eax
  __int128 v43; // xmm0
  int v44; // eax
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  int v48; // [rsp+80h] [rbp+0h] BYREF

  v3 = (_DWORD *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL);
  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 179) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 180) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(P + 724) = *(_OWORD *)(a2 + 772);
  *(_OWORD *)(P + 740) = *(_OWORD *)(a2 + 788);
  *(_OWORD *)(P + 756) = *(_OWORD *)(a2 + 804);
  *(_OWORD *)(P + 772) = *(_OWORD *)(a2 + 820);
  *((_WORD *)P + 394) = 0;
  *((_DWORD *)P + 198) = *(_DWORD *)(a2 + 840);
  *((_DWORD *)P + 199) = *(_DWORD *)(a2 + 8);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v17);
    *((_DWORD *)P + 200) = *(_DWORD *)(a2 + 16);
    DpiMiracastPerfReportGlobalConfiguration((__int64)P, v18, v19);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      Template_qqqz(
        v20,
        &EventMiracastStartMiracastSessionFail,
        v21,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 51),
        *((const wchar_t **)P + 45));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqz(
          v22,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v23,
          *((_DWORD *)P + 112),
          *((_DWORD *)P + 51),
          *((const wchar_t **)P + 45));
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v9 = *((_DWORD *)P + 104) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v9 )
    {
      *((_DWORD *)P + 105) = 1;
      *((_DWORD *)P + 104) = 2;
      *((_DWORD *)P + 106) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v7, v8);
      KeSetEvent(*((PRKEVENT *)P + 59), 0, 0);
      v11 = (struct _KEVENT *)*((_QWORD *)P + 60);
      if ( v11 )
      {
        KeSetEvent(v11, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 60));
        *((_QWORD *)P + 60) = 0LL;
      }
      v12 = MEMORY[0xFFFFF78000000014];
      v13 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 81)) / 10000LL;
      v14 = *((_QWORD *)P + 82);
      *((_DWORD *)P + 166) = v13;
      if ( v14 )
      {
        if ( v12 - v14 > 1200000000 )
          *(_DWORD *)(a2 + 32) &= ~4u;
        else
          *(_DWORD *)(a2 + 32) |= 4u;
      }
      *(_OWORD *)(P + 616) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 632) = *(_OWORD *)(a2 + 48);
      if ( !P[599] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        DpiMiracastPerfReportGlobalConfiguration((__int64)P, v13, v10);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          Template_qqz(
            v15,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v16,
            *((_DWORD *)P + 112),
            *((_DWORD *)P + 51),
            *((const wchar_t **)P + 45));
        P[599] = 1;
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart((__int64)P);
  memset((void *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x380uLL);
  v24 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v25 = 5LL;
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(a2 + 56);
  v26 = *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  *v3 = 24;
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 896;
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int8)v26 ^ (unsigned __int8)(8 * v24)) & 0x38 ^ v26;
  v27 = v3 + 24;
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(a2 + 8);
  v28 = (_OWORD *)(a2 + 64);
  *(_QWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  do
  {
    v29 = v28[1];
    *v27 = *v28;
    v30 = v28[2];
    v27[1] = v29;
    v31 = v28[3];
    v27[2] = v30;
    v32 = v28[4];
    v27[3] = v31;
    v33 = v28[5];
    v27[4] = v32;
    v34 = v28[6];
    v27[5] = v33;
    v35 = v28[7];
    v28 += 8;
    v27[6] = v34;
    v27 += 8;
    *(v27 - 1) = v35;
    --v25;
  }
  while ( v25 );
  v36 = v28[1];
  *v27 = *v28;
  v37 = v28[2];
  v27[1] = v36;
  v38 = v28[3];
  v39 = *((_DWORD *)v28 + 16);
  v27[2] = v37;
  v40 = *(_OWORD *)(a2 + 772);
  v27[3] = v38;
  *((_DWORD *)v27 + 16) = v39;
  v41 = *(_OWORD *)(a2 + 788);
  v42 = *(_DWORD *)(a2 + 840);
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x328) = v40;
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x324) = v42;
  v43 = *(_OWORD *)(a2 + 804);
  v44 = *((_DWORD *)P + 201);
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x338) = v41;
  *(_DWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x36C) = v44;
  v45 = *(_OWORD *)(a2 + 820);
  *(_WORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = 0;
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x348) = v43;
  v46 = *((_OWORD *)P + 7);
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x358) = v45;
  *(_OWORD *)(((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = v46;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((unsigned __int64)&v48 & 0xFFFFFFFFFFFFFFC0uLL));
}

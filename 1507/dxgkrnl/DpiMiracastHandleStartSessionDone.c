/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C01696F0
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DxgkSqmOptedIn @ 0x1C000EA40 (DxgkSqmOptedIn.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C0024370 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     Template_qqqzz @ 0x1C0027D24 (Template_qqqzz.c)
 *     Template_qqzz @ 0x1C0027E3C (Template_qqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029F90 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C002A394 (TraceLoggingWriteMiracastSessionStart.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0168BD0 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbp
  __int64 v6; // rcx
  PVOID PoolWithTag; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  bool v11; // zf
  int v12; // r8d
  struct _KEVENT *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r8
  const wchar_t *v24; // rcx
  __int64 v25; // r8
  const wchar_t *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  _OWORD *v32; // rcx
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // eax
  _OWORD *v45; // rcx
  _OWORD *v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  int v63; // [rsp+80h] [rbp+0h] BYREF

  v3 = (_DWORD *)((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL);
  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 145) = *(_DWORD *)(a2 + 620);
  *((_DWORD *)P + 146) = *(_DWORD *)(a2 + 624);
  *((_QWORD *)P + 74) = *(_QWORD *)(a2 + 632);
  *(_OWORD *)(P + 600) = *(_OWORD *)(a2 + 640);
  *((_DWORD *)P + 154) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 155) = *(_DWORD *)(a2 + 4);
  *((_OWORD *)P + 39) = *(_OWORD *)(a2 + 1364);
  *((_OWORD *)P + 40) = *(_OWORD *)(a2 + 1380);
  *((_OWORD *)P + 41) = *(_OWORD *)(a2 + 1396);
  *((_OWORD *)P + 42) = *(_OWORD *)(a2 + 1412);
  *((_WORD *)P + 344) = 0;
  *((_DWORD *)P + 173) = *(_DWORD *)(a2 + 1432);
  *((_DWORD *)P + 174) = *(_DWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)(v6 - 1) <= 0x112 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 2LL * (unsigned int)(v6 + 1), 0x74727044u);
    *((_QWORD *)P + 32) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, (const void *)(a2 + 68), 2LL * *(unsigned int *)(a2 + 64));
      v6 = *(unsigned int *)(a2 + 64);
      *(_WORD *)(*((_QWORD *)P + 32) + 2 * v6) = 0;
    }
  }
  v8 = 4LL;
  if ( *(int *)(a2 + 4) < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v20[3] = DpiMiracastHandleStartSessionDone;
    v20[4] = 0LL;
    v20[5] = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v20);
    *((_DWORD *)P + 175) = *(_DWORD *)(a2 + 16);
    DpiMiracastPerfReportGlobalConfiguration((__int64)P, v21, v22);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v24 = (const wchar_t *)(a2 + 68);
      if ( !*(_DWORD *)(a2 + 64) )
        v24 = 0LL;
      Template_qqqzz(
        (__int64)v24,
        &EventMiracastStartMiracastSessionFail,
        v23,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 51),
        v24,
        *((const wchar_t **)P + 29));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v26 = (const wchar_t *)(a2 + 68);
        if ( !*(_DWORD *)(a2 + 64) )
          v26 = 0LL;
        Template_qqzz(
          (__int64)v26,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v25,
          *((_DWORD *)P + 78),
          *((_DWORD *)P + 51),
          v26,
          *((const wchar_t **)P + 29));
      }
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v11 = *((_DWORD *)P + 72) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v11 )
    {
      *((_DWORD *)P + 73) = 1;
      *((_DWORD *)P + 72) = 2;
      *((_DWORD *)P + 74) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v9, v10);
      KeSetEvent(*((PRKEVENT *)P + 42), 0, 0);
      v13 = (struct _KEVENT *)*((_QWORD *)P + 43);
      if ( v13 )
      {
        KeSetEvent(v13, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 43));
        *((_QWORD *)P + 43) = 0LL;
      }
      v14 = MEMORY[0xFFFFF78000000014];
      v15 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 64)) / 10000LL;
      v16 = *((_QWORD *)P + 65);
      *((_DWORD *)P + 132) = v15;
      if ( v16 )
      {
        if ( v14 - v16 > 1200000000 )
          *(_DWORD *)(a2 + 32) &= ~4u;
        else
          *(_DWORD *)(a2 + 32) |= 4u;
      }
      *((_OWORD *)P + 30) = *(_OWORD *)(a2 + 32);
      *((_OWORD *)P + 31) = *(_OWORD *)(a2 + 48);
      if ( !P[462] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        DpiMiracastPerfReportGlobalConfiguration((__int64)P, v15, v12);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          Template_qqzz(
            v17,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v18,
            *((_DWORD *)P + 78),
            *((_DWORD *)P + 51),
            *((const wchar_t **)P + 32),
            *((const wchar_t **)P + 29));
        P[462] = 1;
      }
      if ( DxgkSqmOptedIn() )
      {
        DxgkSqmCreateDwordStreamEntry(v3 + 368, *(_QWORD *)(a2 + 40) >> 16);
        DxgkSqmCreateDwordStreamEntry(v3 + 372, *(_QWORD *)(a2 + 48) >> 16);
        DxgkSqmCreateDwordStreamEntry(v3 + 376, *(_QWORD *)(a2 + 56) >> 16);
        DxgkSqmCreateDwordStreamEntry(v3 + 380, *(_DWORD *)(a2 + 32));
        DxgkSqmAddToStream(12121LL, 4LL, (__int64)(v3 + 368), v19);
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart((__int64)P);
  memset((void *)((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x5B8uLL);
  v29 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v30 = 5LL;
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(a2 + 56);
  v31 = *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  *v3 = 20;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1464;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int8)v31 ^ (unsigned __int8)(8 * v29)) & 0x38 ^ v31;
  v32 = v3 + 28;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_DWORD *)(a2 + 620);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(a2 + 624);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(a2 + 632);
  v33 = (_OWORD *)(a2 + 656);
  *(_QWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  do
  {
    v34 = v33[1];
    *v32 = *v33;
    v35 = v33[2];
    v32[1] = v34;
    v36 = v33[3];
    v32[2] = v35;
    v37 = v33[4];
    v32[3] = v36;
    v38 = v33[5];
    v32[4] = v37;
    v39 = v33[6];
    v32[5] = v38;
    v40 = v33[7];
    v33 += 8;
    v32[6] = v39;
    v32 += 8;
    *(v32 - 1) = v40;
    --v30;
  }
  while ( v30 );
  v41 = v33[1];
  *v32 = *v33;
  v42 = v33[2];
  v32[1] = v41;
  v43 = v33[3];
  v44 = *((_DWORD *)v33 + 16);
  v32[2] = v42;
  v32[3] = v43;
  *((_DWORD *)v32 + 16) = v44;
  v45 = v3 + 206;
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x334) = *(_DWORD *)(a2 + 1432);
  *(_DWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A4) = *((_DWORD *)P + 176);
  v46 = (_OWORD *)(a2 + 68);
  do
  {
    v47 = v46[1];
    *v45 = *v46;
    v48 = v46[2];
    v45[1] = v47;
    v49 = v46[3];
    v45[2] = v48;
    v50 = v46[4];
    v45[3] = v49;
    v51 = v46[5];
    v45[4] = v50;
    v52 = v46[6];
    v45[5] = v51;
    v53 = v46[7];
    v46 += 8;
    v45[6] = v52;
    v45 += 8;
    *(v45 - 1) = v53;
    --v8;
  }
  while ( v8 );
  v54 = *v46;
  v55 = v46[1];
  v56 = *((_QWORD *)v46 + 4);
  *v45 = v54;
  v57 = *(_OWORD *)(a2 + 1364);
  v45[1] = v55;
  *((_QWORD *)v45 + 4) = v56;
  v58 = *(_OWORD *)(a2 + 1380);
  *(_WORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x55E) = 0;
  *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) = v57;
  v59 = *(_OWORD *)(a2 + 1396);
  *(_WORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A0) = 0;
  *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x570) = v58;
  v60 = *(_OWORD *)(a2 + 1412);
  *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x580) = v59;
  v61 = *((_OWORD *)P + 7);
  *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x590) = v60;
  *(_OWORD *)(((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A8) = v61;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((unsigned __int64)&v63 & 0xFFFFFFFFFFFFFFC0uLL), 0LL, v27, v28);
}

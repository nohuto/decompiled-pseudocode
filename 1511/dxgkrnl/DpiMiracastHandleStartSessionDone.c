/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C016DE70
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DxgkSqmOptedIn @ 0x1C000BF30 (DxgkSqmOptedIn.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C0023EA0 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     Template_qqqzz @ 0x1C0027918 (Template_qqqzz.c)
 *     Template_qqzz @ 0x1C0027A30 (Template_qqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0029FFC (TraceLoggingWriteMiracastSessionStart.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C016D340 (DpiMiracastBroadcastDeviceStateChange.c)
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
  _QWORD *v19; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r8
  const wchar_t *v23; // rcx
  __int64 v24; // r8
  const wchar_t *v25; // rcx
  int v26; // ecx
  __int64 v27; // rdx
  int v28; // eax
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // eax
  _OWORD *v42; // rcx
  _OWORD *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  int v60; // [rsp+80h] [rbp+0h] BYREF

  v3 = (_DWORD *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL);
  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 147) = *(_DWORD *)(a2 + 620);
  *((_DWORD *)P + 148) = *(_DWORD *)(a2 + 624);
  *((_QWORD *)P + 75) = *(_QWORD *)(a2 + 632);
  *((_OWORD *)P + 38) = *(_OWORD *)(a2 + 640);
  *((_DWORD *)P + 156) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 157) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(P + 632) = *(_OWORD *)(a2 + 1364);
  *(_OWORD *)(P + 648) = *(_OWORD *)(a2 + 1380);
  *(_OWORD *)(P + 664) = *(_OWORD *)(a2 + 1396);
  *(_OWORD *)(P + 680) = *(_OWORD *)(a2 + 1412);
  *((_WORD *)P + 348) = 0;
  *((_DWORD *)P + 175) = *(_DWORD *)(a2 + 1432);
  *((_DWORD *)P + 176) = *(_DWORD *)(a2 + 8);
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
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v19[3] = DpiMiracastHandleStartSessionDone;
    v19[4] = 0LL;
    v19[5] = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v19);
    *((_DWORD *)P + 177) = *(_DWORD *)(a2 + 16);
    DpiMiracastPerfReportGlobalConfiguration((__int64)P, v20, v21);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v23 = (const wchar_t *)(a2 + 68);
      if ( !*(_DWORD *)(a2 + 64) )
        v23 = 0LL;
      Template_qqqzz(
        (__int64)v23,
        &EventMiracastStartMiracastSessionFail,
        v22,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 51),
        v23,
        *((const wchar_t **)P + 29));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v25 = (const wchar_t *)(a2 + 68);
        if ( !*(_DWORD *)(a2 + 64) )
          v25 = 0LL;
        Template_qqzz(
          (__int64)v25,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v24,
          *((_DWORD *)P + 80),
          *((_DWORD *)P + 51),
          v25,
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
      KeSetEvent(*((PRKEVENT *)P + 43), 0, 0);
      v13 = (struct _KEVENT *)*((_QWORD *)P + 44);
      if ( v13 )
      {
        KeSetEvent(v13, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 44));
        *((_QWORD *)P + 44) = 0LL;
      }
      v14 = MEMORY[0xFFFFF78000000014];
      v15 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 65)) / 10000LL;
      v16 = *((_QWORD *)P + 66);
      *((_DWORD *)P + 134) = v15;
      if ( v16 )
      {
        if ( v14 - v16 > 1200000000 )
          *(_DWORD *)(a2 + 32) &= ~4u;
        else
          *(_DWORD *)(a2 + 32) |= 4u;
      }
      *(_OWORD *)(P + 488) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 504) = *(_OWORD *)(a2 + 48);
      if ( !P[471] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        DpiMiracastPerfReportGlobalConfiguration((__int64)P, v15, v12);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          Template_qqzz(
            v17,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v18,
            *((_DWORD *)P + 80),
            *((_DWORD *)P + 51),
            *((const wchar_t **)P + 32),
            *((const wchar_t **)P + 29));
        P[471] = 1;
      }
      if ( DxgkSqmOptedIn() )
      {
        DxgkSqmCreateDwordStreamEntry(v3 + 368, *(_QWORD *)(a2 + 40) >> 16);
        DxgkSqmCreateDwordStreamEntry(v3 + 372, *(_QWORD *)(a2 + 48) >> 16);
        DxgkSqmCreateDwordStreamEntry(v3 + 376, *(_QWORD *)(a2 + 56) >> 16);
        DxgkSqmCreateDwordStreamEntry(v3 + 380, *(_DWORD *)(a2 + 32));
        DxgkSqmAddToStream(12121LL, 4u, (__int64)(v3 + 368));
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart((__int64)P);
  memset((void *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x5B8uLL);
  v26 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v27 = 5LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(a2 + 56);
  v28 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  *v3 = 20;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1464;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int8)v28 ^ (unsigned __int8)(8 * v26)) & 0x38 ^ v28;
  v29 = v3 + 28;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_DWORD *)(a2 + 620);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(a2 + 624);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(a2 + 632);
  v30 = (_OWORD *)(a2 + 656);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  do
  {
    v31 = v30[1];
    *v29 = *v30;
    v32 = v30[2];
    v29[1] = v31;
    v33 = v30[3];
    v29[2] = v32;
    v34 = v30[4];
    v29[3] = v33;
    v35 = v30[5];
    v29[4] = v34;
    v36 = v30[6];
    v29[5] = v35;
    v37 = v30[7];
    v30 += 8;
    v29[6] = v36;
    v29 += 8;
    *(v29 - 1) = v37;
    --v27;
  }
  while ( v27 );
  v38 = v30[1];
  *v29 = *v30;
  v39 = v30[2];
  v29[1] = v38;
  v40 = v30[3];
  v41 = *((_DWORD *)v30 + 16);
  v29[2] = v39;
  v29[3] = v40;
  *((_DWORD *)v29 + 16) = v41;
  v42 = v3 + 206;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x334) = *(_DWORD *)(a2 + 1432);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A4) = *((_DWORD *)P + 178);
  v43 = (_OWORD *)(a2 + 68);
  do
  {
    v44 = v43[1];
    *v42 = *v43;
    v45 = v43[2];
    v42[1] = v44;
    v46 = v43[3];
    v42[2] = v45;
    v47 = v43[4];
    v42[3] = v46;
    v48 = v43[5];
    v42[4] = v47;
    v49 = v43[6];
    v42[5] = v48;
    v50 = v43[7];
    v43 += 8;
    v42[6] = v49;
    v42 += 8;
    *(v42 - 1) = v50;
    --v8;
  }
  while ( v8 );
  v51 = *v43;
  v52 = v43[1];
  v53 = *((_QWORD *)v43 + 4);
  *v42 = v51;
  v54 = *(_OWORD *)(a2 + 1364);
  v42[1] = v52;
  *((_QWORD *)v42 + 4) = v53;
  v55 = *(_OWORD *)(a2 + 1380);
  *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x55E) = 0;
  *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) = v54;
  v56 = *(_OWORD *)(a2 + 1396);
  *(_WORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A0) = 0;
  *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x570) = v55;
  v57 = *(_OWORD *)(a2 + 1412);
  *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x580) = v56;
  v58 = *((_OWORD *)P + 7);
  *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x590) = v57;
  *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A8) = v58;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL));
}

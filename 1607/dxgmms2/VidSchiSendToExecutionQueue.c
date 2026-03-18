/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C00077C0
 * Callers:
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0040CE4 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0006BA0 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiFillSubmitCommandData @ 0x1C001174C (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_piiqq @ 0x1C0022804 (Template_piiqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0027554 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C00425E0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  _BYTE *v8; // rbx
  __int64 v9; // rcx
  const char *ProcessImageFileName; // rax
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // r9d
  LARGE_INTEGER v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  LARGE_INTEGER *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r15
  volatile signed __int64 *v39; // r14
  __int64 v40; // r14
  char v41; // r15
  char v42; // r14
  KIRQL v43; // r12
  int v44; // eax
  int v45; // r15d
  __int64 v46; // rdx
  LARGE_INTEGER v47; // r15
  unsigned int v48; // ebx
  LARGE_INTEGER v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _BOOL8 v58; // r8
  __int64 v59; // r8
  _QWORD *v60; // rax
  KIRQL v61; // [rsp+40h] [rbp-79h]
  char v62; // [rsp+41h] [rbp-78h] BYREF
  char v63; // [rsp+42h] [rbp-77h]
  int v64; // [rsp+44h] [rbp-75h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-71h]
  __int64 v66; // [rsp+58h] [rbp-61h]
  __int64 v67; // [rsp+60h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-51h] BYREF
  __int128 v69; // [rsp+80h] [rbp-39h] BYREF
  __int128 v70; // [rsp+90h] [rbp-29h]
  __int128 v71; // [rsp+A0h] [rbp-19h]
  __int128 v72; // [rsp+B0h] [rbp-9h]
  __int128 v73; // [rsp+C0h] [rbp+7h]
  __int128 v74; // [rsp+D0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v63 = a2;
  v64 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v66 = v5;
  v6 = *(unsigned int *)(v4 + 488);
  v7 = *(_QWORD *)(v4 + 24);
  v8 = (_BYTE *)(v4 + 56 * (v6 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 200LL) )
  {
    v11 = "System";
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v9 + 2648));
      v11 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
        goto LABEL_11;
    }
    else
    {
      v11 = "Unknown";
    }
  }
  v12 = 16LL;
  v13 = v11 - v8;
  while ( v12 != -2147483630 )
  {
    v14 = v8[v13];
    if ( !v14 )
      break;
    *v8++ = v14;
    if ( !--v12 )
    {
      --v8;
      break;
    }
  }
LABEL_11:
  *v8 = 0;
  v15 = 56 * v6 + v4 + 520;
  *(_DWORD *)v15 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v15 + 20) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 488) = ((_BYTE)v6 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v46 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v46 + 72) & 0x4000) != 0 && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v46 + 384) >= 4) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 968));
      VidSchIsVSyncEnabled(v7, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL));
    }
  }
  v61 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1856), &LockHandle);
  v67 = *(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196);
  v17 = v67;
  memset((void *)v67, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2764));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 944));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v19 = PerformanceCounter;
  *(LARGE_INTEGER *)(v17 + 8) = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2760)) == 1 )
  {
    v20 = *(unsigned int *)(v2 + 396);
    v21 = (int)gulPriorityToYieldPriorityBand[v20];
    if ( gulPriorityToYieldPriorityBand[v20] )
    {
      v22 = (LARGE_INTEGER *)(v4 + 1856 + 8 * v21);
      do
      {
        if ( v22[-4].QuadPart )
          *v22 = v19;
        --v22;
        --v21;
      }
      while ( v21 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 788)) == 1 )
  {
    if ( v5 == *(_QWORD *)(v7 + 200) )
      VidSchiUpdateContextStatus(v2, 1LL, 5282LL);
    *(_DWORD *)(v2 + 176) |= 2u;
    v23 = *(unsigned int *)(v2 + 396);
    if ( ++*(_DWORD *)(v4 + 4 * v23 + 1696) == 1 )
      *(_DWORD *)(v4 + 1692) |= 1 << *(_DWORD *)(v2 + 396);
    v64 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2772));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2776));
    if ( *(_DWORD *)(v4 + 1552) != *(_DWORD *)(v4 + 1544) )
    {
      v47 = PerformanceCounter;
      v48 = *(_DWORD *)(v4 + 1552);
      do
      {
        v49 = *(LARGE_INTEGER *)(v4 + 8LL * v48 + 1560);
        PerformanceCounter = v49;
        if ( (*(_DWORD *)(v49.QuadPart + 176) & 8) == 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiUpdateContextStatus)(
            (LARGE_INTEGER)v49.QuadPart,
            2LL,
            5344LL);
          if ( v48 == *(_DWORD *)(v4 + 1552) && !*(_QWORD *)(PerformanceCounter.QuadPart + 504) )
            *(LARGE_INTEGER *)(PerformanceCounter.QuadPart + 504) = v47;
        }
        v48 = ((_BYTE)v48 + 1) & 0xF;
      }
      while ( v48 != *(_DWORD *)(v4 + 1544) );
      v17 = v67;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v50 = *(unsigned __int16 *)(v4 + 4);
    v51 = ++*(_QWORD *)(*(_QWORD *)(v7 + 8 * v50 + 408) + 104LL);
    v52 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 104) = v51;
    v31 = *(_QWORD *)(v52 + 96);
    v32 = *(_QWORD *)(v31 + 24);
    v69 = (unsigned int)v51;
    DWORD1(v69) = *(unsigned __int16 *)(*(_QWORD *)(v32 + 8LL * *(unsigned __int16 *)(v31 + 4) + 408) + 8LL);
    DWORD2(v69) = *(unsigned __int16 *)(*(_QWORD *)(v32 + 8LL * *(unsigned __int16 *)(v31 + 4) + 408) + 6LL);
    LODWORD(v33) = _InterlockedExchange((volatile __int32 *)(v4 + 160), v51);
    v53 = *(_QWORD *)(v7 + 392);
    _bittestandreset64(&v53, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v7 + 392) = v53;
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 56);
    if ( v24 )
    {
      VidSchiProfilePerformanceTick(6, v7, 0, v18, 0LL, v24, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
      if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
      {
        v67 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL);
        PerformanceCounter = *(LARGE_INTEGER *)(v7 + 8 * v67 + 2968);
        if ( ((*(_DWORD *)(PerformanceCounter.QuadPart + 4) - 3) & 0xFFFFFFFD) == 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v54[3] = 281LL;
          v54[4] = 3072LL;
          v54[5] = *(_QWORD *)(a1 + 56);
          v54[6] = v67;
          v54[7] = *(int *)(PerformanceCounter.QuadPart + 4);
          WdLogEvent5_WdCriticalError(v54);
          JUMPOUT(0x1C0017FCBLL);
        }
      }
      v25 = *(_QWORD *)(a1 + 56);
      v26 = *(_QWORD *)(v25 + 88);
      v27 = *(_QWORD *)(v26 + 152);
      if ( v27 && *(_QWORD *)(v25 + 104) <= v27 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v55[3] = 281LL;
        v55[4] = 1792LL;
        v55[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 104LL);
        v55[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 152LL);
        v55[7] = 0LL;
        WdLogEvent5_WdCriticalError(v55);
        JUMPOUT(0x1C001800ELL);
      }
      *(_QWORD *)(v26 + 144) = *(_QWORD *)(v25 + 104);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    }
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, &v69);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiFillSubmitCommandData)(a1, &v69, (LARGE_INTEGER)v19.QuadPart);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v28 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v28[3] = a1;
    v28[4] = *(_QWORD *)(a1 + 104);
    v28[5] = *(_QWORD *)(a1 + 56);
    v28[6] = *(int *)(a1 + 88);
    v29 = *(_QWORD *)(a1 + 56);
    if ( v29 )
      v30 = *(_QWORD *)(v29 + 104);
    else
      v30 = 0LL;
    v28[7] = v30;
    WdLogEvent5_WdEvent(v28);
  }
  v34 = *(unsigned int *)(v4 + 1544);
  v35 = v4 + 8 * v34;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 1560), v2, 0LL) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v35, v31);
    *(_QWORD *)(v56 + 24) = v7;
    *(_QWORD *)(v56 + 32) = a1;
    WdLogEvent5_WdAssertion(v56);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v34 + 1) & 0xF);
  if ( v64 )
  {
    v36 = *(_QWORD *)(v2 + 96);
    v62 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v36 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v36 + 24) + 32LL),
      &v62);
  }
  else if ( bTracingEnabled )
  {
    v33 = *(_QWORD *)(v2 + 56);
    if ( !v33 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v33) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piiqq(v35, v31, v32, v33, *(_QWORD *)(v2 + 464), *(_QWORD *)(v2 + 456), *(_DWORD *)(v2 + 448), 3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 1, 0);
  VidSchiProfilePerformanceTick(7, v7, v4, v33, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v37 = *(unsigned int *)(v4 + 1400);
  v38 = v37;
  v39 = (volatile signed __int64 *)(v4 + 1416 + 8 * v37);
  if ( _InterlockedCompareExchange64(v39, a1, 0LL) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v57[3] = 281LL;
    v57[4] = 2048LL;
    v57[5] = v38;
    v57[6] = v39;
    v57[7] = a1;
    WdLogEvent5_WdCriticalError(v57);
    JUMPOUT(0x1C00180AFLL);
  }
  v40 = v66;
  v41 = 0;
  _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v37 + 1) & 0xF);
  if ( *(_DWORD *)(v7 + 2800)
    || (*(_BYTE *)(v40 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 160), 0, 0))
    && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v61);
    *(_DWORD *)v17 = 7;
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(v4 + 152);
    *(_BYTE *)(v17 + 24) = *(_BYTE *)(v7 + 2828) & 1;
    *(_BYTE *)(v17 + 25) = (unsigned __int8)VidSchIsTDRPending(v7) != 0;
    if ( *(_BYTE *)(v40 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 160), 0, 0) )
      v41 = 1;
    *(_BYTE *)(v17 + 26) = v41;
    v58 = (*(_BYTE *)(v7 + 2828) & 1) == 0 && !(unsigned __int8)VidSchIsTDRPending(v7);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v58);
    return;
  }
  *(_DWORD *)(a1 + 92) |= 0x20u;
  v42 = 1;
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    if ( *(_BYTE *)(v7 + 49) )
    {
      KeLowerIrql(v61);
      v42 = 0;
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
    *(_DWORD *)(v4 + 176) = v69;
    *(_DWORD *)v17 = 3;
    *(_OWORD *)(v17 + 16) = v69;
    v44 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[21])(*(_QWORD *)(v7 + 8), &v69);
    goto LABEL_69;
  }
  *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 92) & 0x2000) == 0 )
  {
    v44 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[20])(*(_QWORD *)(v7 + 8), &v69);
    *(_DWORD *)v17 = 1;
    *(_OWORD *)(v17 + 16) = v69;
    *(_OWORD *)(v17 + 32) = v70;
    *(_OWORD *)(v17 + 48) = v71;
    *(_OWORD *)(v17 + 64) = v72;
    *(_OWORD *)(v17 + 80) = v73;
    *(_OWORD *)(v17 + 96) = v74;
LABEL_69:
    v43 = v61;
    goto LABEL_46;
  }
  v43 = v61;
  KeLowerIrql(v61);
  v42 = 0;
  v44 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[40])(*(_QWORD *)(v7 + 8), &v69);
  *(_DWORD *)v17 = 2;
  *(_OWORD *)(v17 + 16) = v69;
  *(_OWORD *)(v17 + 32) = v70;
  *(_OWORD *)(v17 + 48) = v71;
  *(_OWORD *)(v17 + 64) = v72;
  *(_DWORD *)(v17 + 80) = v44;
LABEL_46:
  v45 = v44;
  if ( v44 )
  {
    if ( !v63 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v60[5] = v45;
      v60[6] = &v69;
      v60[3] = 281LL;
      v60[4] = 2LL;
      v60[7] = a1;
      WdLogEvent5_WdCriticalError(v60);
      JUMPOUT(0x1C00181AELL);
    }
    VidSchiMarkDeviceAsError(v66, 19);
    LOBYTE(v59) = 1;
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v59);
    *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
  }
  ++*(_QWORD *)(v7 + 368);
  if ( v42 )
    KeLowerIrql(v43);
}

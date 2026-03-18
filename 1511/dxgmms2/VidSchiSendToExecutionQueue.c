/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C00086D0
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00392E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C003AA00 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C005F448 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0001498 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0007E00 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandData @ 0x1C0014048 (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     ?VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z @ 0x1C001EE10 (-VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z.c)
 *     Template_piiqq @ 0x1C001F7D0 (Template_piiqq.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C0039080 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r13
  _BYTE *v9; // rbx
  __int64 v10; // rcx
  const char *ProcessImageFileName; // rax
  const char *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  char v16; // al
  int v17; // ecx
  int v18; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  LARGE_INTEGER *v22; // rcx
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
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r13
  volatile signed __int64 *v39; // r14
  char v40; // r14
  KIRQL v41; // r13
  int v42; // eax
  int v43; // ebx
  __int64 v44; // rdx
  unsigned int i; // r13d
  LARGE_INTEGER *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int32 v49; // r9d
  __int64 v50; // rcx
  __int64 v51; // rdx
  bool v52; // zf
  LARGE_INTEGER *v53; // rax
  LARGE_INTEGER v54; // r13
  __int64 v55; // rcx
  unsigned int v56; // r8d
  int v57; // eax
  char v58; // cl
  LONGLONG *v59; // r9
  int v60; // eax
  char v61; // dl
  __int64 v62; // r13
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  _BOOL8 v68; // r8
  __int64 v69; // r8
  _QWORD *v70; // rax
  KIRQL v71; // [rsp+40h] [rbp-89h]
  char v72; // [rsp+41h] [rbp-88h] BYREF
  char v73; // [rsp+42h] [rbp-87h]
  LARGE_INTEGER *v74; // [rsp+48h] [rbp-81h]
  int v75; // [rsp+54h] [rbp-75h]
  int v76; // [rsp+58h] [rbp-71h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-69h]
  int v78; // [rsp+68h] [rbp-61h]
  __int64 v79; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  __int128 v81; // [rsp+90h] [rbp-39h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-29h]
  __int128 v83; // [rsp+B0h] [rbp-19h]
  __int128 v84; // [rsp+C0h] [rbp-9h]
  __int128 v85; // [rsp+D0h] [rbp+7h]
  __int128 v86; // [rsp+E0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v75 = 0;
  v73 = a2;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v6 = *(_QWORD *)(v4 + 24);
  v7 = 56LL * *(unsigned int *)(v4 + 448);
  LODWORD(v74) = *(_DWORD *)(v4 + 448);
  v8 = v4 + v7;
  v9 = (_BYTE *)(v8 + 464);
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 184LL) )
  {
    v12 = "System";
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 40);
    if ( v10 && *(_QWORD *)(v10 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v10 + 2648));
      v12 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
        goto LABEL_11;
    }
    else
    {
      v12 = "Unknown";
    }
  }
  v13 = 16LL;
  v14 = v12 - v9;
  while ( v13 != -2147483630 )
  {
    v15 = v9[v14];
    if ( !v15 )
      break;
    *v9++ = v15;
    if ( !--v13 )
    {
      --v9;
      break;
    }
  }
LABEL_11:
  v16 = (char)v74;
  *v9 = 0;
  *(_OWORD *)(v8 + 480) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(v8 + 496) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v8 + 512) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 448) = (v16 + 1) & 0xF;
  v17 = *(_DWORD *)(a1 + 92);
  if ( (v17 & 4) != 0 )
  {
    v44 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v44 + 72) & 0x4000) != 0 && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v44 + 376) >= 4) )
    {
      *(_DWORD *)(a1 + 92) = v17 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 932));
      VidSchIsVSyncEnabled(v6, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL));
    }
  }
  v71 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1824), &LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2724));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 908));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2720)) == 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v20 = *(unsigned int *)(v2 + 396);
    v21 = gulPriorityToYieldPriorityBand[v20];
    if ( gulPriorityToYieldPriorityBand[v20] )
    {
      v22 = (LARGE_INTEGER *)(v4 + 1816 + 8 * v21);
      do
      {
        if ( v22[-4].QuadPart )
          *v22 = PerformanceCounter;
        --v22;
        --v21;
      }
      while ( v21 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 764)) == 1 )
  {
    if ( v5 == *(_QWORD *)(v6 + 184) )
      VidSchiUpdateContextStatus(v2, 1LL, 4995LL);
    *(_DWORD *)(v2 + 176) |= 2u;
    v23 = *(unsigned int *)(v2 + 396);
    if ( ++*(_DWORD *)(v4 + 4 * v23 + 1656) == 1 )
      *(_DWORD *)(v4 + 1652) |= 1 << *(_DWORD *)(v2 + 396);
    v75 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
  {
    v24 = *(_QWORD *)(a1 + 56);
    if ( !v24 )
    {
LABEL_30:
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        VidSchiFillSubmitCommandDataVirtual(a1, &v81);
      else
        VidSchiFillSubmitCommandData(a1, &v81);
      _InterlockedExchange64((volatile __int64 *)(v4 + 144), *(_QWORD *)(a1 + 104));
      v28 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v28[3] = a1;
      v28[4] = *(_QWORD *)(a1 + 104);
      v28[5] = *(_QWORD *)(a1 + 56);
      v28[6] = *(int *)(a1 + 88);
      v29 = *(_QWORD *)(a1 + 56);
      if ( v29 )
        v30 = *(_QWORD *)(v29 + 96);
      else
        v30 = 0LL;
      v28[7] = v30;
      WdLogEvent5_WdEvent(v28);
      goto LABEL_35;
    }
    VidSchiProfilePerformanceTick(6, v6, 0, v18, 0LL, v24, 0LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
    if ( (*(_DWORD *)(a1 + 92) & 0x10) == 0
      || (v51 = *(_QWORD *)(a1 + 56),
          v52 = *(_DWORD *)(v51 + 376) == 4,
          v53 = (LARGE_INTEGER *)(v6 + 8 * (*(unsigned int *)(v51 + 144) + 324LL)),
          v54 = *v53,
          QuadPart = v53->QuadPart,
          v74 = v53,
          !v52)
      || (*(_BYTE *)(v6 + 2468) & 1) != 0
      || (unsigned __int8)VidSchIsTDRPending(v6) )
    {
LABEL_27:
      v25 = *(_QWORD *)(a1 + 56);
      v26 = *(_QWORD *)(v25 + 80);
      v27 = *(_QWORD *)(v26 + 152);
      if ( v27 && *(_QWORD *)(v25 + 96) <= v27 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v65[3] = 281LL;
        v65[4] = 1792LL;
        v65[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL);
        v65[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL) + 152LL);
        v65[7] = 0LL;
        WdLogEvent5_WdCriticalError(v65);
        JUMPOUT(0x1C001886ALL);
      }
      *(_QWORD *)(v26 + 144) = *(_QWORD *)(v25 + 96);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
      goto LABEL_30;
    }
    ++*(_DWORD *)(v6 + 920);
    ++*(_DWORD *)(v5 + 1132);
    ++*(_DWORD *)(v2 + 768);
    ++*(_DWORD *)(v6 + 924);
    ++*(_DWORD *)(v54.QuadPart + 2332);
    ++*(_DWORD *)(v54.QuadPart + 2328);
    v55 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v55 + 256) & 0x800000) != 0 )
      v56 = (unsigned __int8)*(_DWORD *)(v55 + 616) | *(unsigned __int8 *)(v55 + 617);
    else
      v56 = (1 << *(_DWORD *)(v6 + 124)) - 1;
    v52 = !_BitScanForward((unsigned int *)&v57, v56);
    v78 = v57;
    v58 = -1;
    if ( !v52 )
      v58 = v57;
    if ( v56 )
    {
      v59 = (LONGLONG *)v74;
      do
      {
        ++*(_DWORD *)(280LL * v58 + *v59 + 164);
        v56 &= ~(1 << v58);
        v52 = !_BitScanForward((unsigned int *)&v60, v56);
        v76 = v60;
        v61 = -1;
        if ( !v52 )
          v61 = v60;
        v58 = v61;
      }
      while ( v56 );
    }
    v79 = *(_QWORD *)(v54.QuadPart + 24);
    LODWORD(v74) = *(_DWORD *)(v79 + 32);
    v62 = v79 + 1160LL * (unsigned int)v74;
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v62 + 56));
    *(_QWORD *)(v62 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL);
    *(_DWORD *)(v62 + 1096) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 96LL);
    *(_DWORD *)(v62 + 1100) = 1;
    *(_DWORD *)(v62 + 1104) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 368LL);
    *(_QWORD *)(v62 + 576) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 380LL) != 1 )
    {
      switch ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 380LL) )
      {
        case 2:
          *(_DWORD *)(v62 + 1108) = 1;
          goto LABEL_93;
        case 3:
          *(_DWORD *)(v62 + 1108) = 2;
          goto LABEL_93;
        case 4:
          *(_DWORD *)(v62 + 1108) = 3;
LABEL_93:
          memmove(
            *(void **)(v62 + 1208),
            (const void *)(*(_QWORD *)(a1 + 56) + 616LL),
            *(unsigned int *)(*(_QWORD *)(a1 + 56) + 628LL));
          *(_DWORD *)(v62 + 1116) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 392LL);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidSchiFindAllocationByDriverEngine(
                                                                                      (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v62 + 56),
                                                                                      *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned int *)(v2 + 88) + 376) + 6LL),
                                                                                      0)
                                                                        + 12)
                                                                      + 16LL)
                                                          + 8LL));
          v63 = v79;
          v64 = ((_BYTE)v74 + 1) & 0x3F;
          *(_DWORD *)(v62 + 1128) = 1;
          *(_DWORD *)(v62 + 1124) = 1;
          *(_DWORD *)(v63 + 32) = v64;
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 928));
          _InterlockedIncrement((volatile signed __int32 *)(QuadPart + 2336));
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 2u;
          goto LABEL_27;
      }
    }
    *(_DWORD *)(v62 + 1108) = 0;
    goto LABEL_93;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2732));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2736));
  for ( i = *(_DWORD *)(v4 + 1512); i != *(_DWORD *)(v4 + 1504); i = ((_BYTE)i + 1) & 0xF )
  {
    v46 = *(LARGE_INTEGER **)(v4 + 8LL * i + 1520);
    v74 = v46;
    if ( (v46[22].LowPart & 8) == 0 )
    {
      VidSchiUpdateContextStatus(v46, 2LL, 5057LL);
      if ( i == *(_DWORD *)(v4 + 1512) && !v74[63].QuadPart )
        v74[63] = KeQueryPerformanceCounter(0LL);
    }
  }
  *(_QWORD *)(v4 + 352) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(v4 + 312));
  v47 = *(unsigned __int16 *)(v4 + 4);
  ++*(_QWORD *)(*(_QWORD *)(v6 + 8 * v47 + 376) + 96LL);
  v48 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v47 + 376) + 96LL);
  v49 = *(_DWORD *)(a1 + 104);
  v31 = *(_QWORD *)(v48 + 96);
  v32 = *(_QWORD *)(v31 + 24);
  v81 = v49;
  DWORD1(v81) = *(unsigned __int16 *)(*(_QWORD *)(v32 + 8LL * *(unsigned __int16 *)(v31 + 4) + 376) + 8LL);
  DWORD2(v81) = *(unsigned __int16 *)(*(_QWORD *)(v32 + 8LL * *(unsigned __int16 *)(v31 + 4) + 376) + 6LL);
  v33 = (unsigned int)_InterlockedExchange((volatile __int32 *)(v4 + 152), v49);
  v50 = *(_QWORD *)(v6 + 360);
  _bittestandreset64(&v50, *(unsigned __int16 *)(v4 + 4));
  *(_QWORD *)(v6 + 360) = v50;
LABEL_35:
  v34 = *(unsigned int *)(v4 + 1504);
  v35 = v4 + 8 * v34;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 1520), v2, 0LL) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v35, v31, v32, v33);
    *(_QWORD *)(v66 + 24) = v6;
    *(_QWORD *)(v66 + 32) = a1;
    WdLogEvent5_WdAssertion(v66);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1504), ((_BYTE)v34 + 1) & 0xF);
  if ( v75 )
  {
    v36 = *(_QWORD *)(v2 + 96);
    v72 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v36 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v36 + 24) + 32LL),
      &v72);
  }
  else if ( bTracingEnabled )
  {
    v33 = *(_QWORD *)(v2 + 56);
    if ( !v33 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v33) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_piiqq(v35, v31, v32, v33, *(_QWORD *)(v2 + 464), *(_QWORD *)(v2 + 456), *(_DWORD *)(v2 + 448), 3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 1, 0);
  VidSchiProfilePerformanceTick(7, v6, v4, v33, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v37 = *(unsigned int *)(v4 + 1360);
  v38 = v37;
  v39 = (volatile signed __int64 *)(v4 + 1376 + 8 * v37);
  if ( _InterlockedCompareExchange64(v39, a1, 0LL) )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v67[3] = 281LL;
    v67[4] = 2048LL;
    v67[5] = v38;
    v67[6] = v39;
    v67[7] = a1;
    WdLogEvent5_WdCriticalError(v67);
    JUMPOUT(0x1C001890DLL);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1360), ((_BYTE)v37 + 1) & 0xF);
  if ( *(_DWORD *)(v6 + 2440)
    || (*(_BYTE *)(v5 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 168), 0, 0))
    && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v71);
    v68 = (*(_BYTE *)(v6 + 2468) & 1) == 0 && !(unsigned __int8)VidSchIsTDRPending(v6);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 144), v68);
  }
  else
  {
    *(_DWORD *)(a1 + 92) |= 0x20u;
    v40 = 1;
    if ( *(_DWORD *)(a1 + 88) == 3 )
    {
      v41 = v71;
      if ( *(_BYTE *)(v6 + 49) )
      {
        KeLowerIrql(v71);
        v40 = 0;
      }
      _InterlockedExchange((volatile __int32 *)(v4 + 440), 1);
      *(_DWORD *)(v4 + 168) = v81;
      *(_OWORD *)(v4 + 2848) = v81;
      v42 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[21])(*(_QWORD *)(v6 + 8), &v81);
    }
    else
    {
      *(_QWORD *)(v4 + 160) = *(_QWORD *)(a1 + 104);
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      {
        v41 = v71;
        KeLowerIrql(v71);
        v40 = 0;
        v42 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[40])(*(_QWORD *)(v6 + 8), &v81);
        *(_OWORD *)(v4 + 2752) = v81;
        *(_OWORD *)(v4 + 2768) = v82;
        *(_OWORD *)(v4 + 2784) = v83;
        *(_OWORD *)(v4 + 2800) = v84;
      }
      else
      {
        v42 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[20])(*(_QWORD *)(v6 + 8), &v81);
        v41 = v71;
        *(_OWORD *)(v4 + 2752) = v81;
        *(_OWORD *)(v4 + 2768) = v82;
        *(_OWORD *)(v4 + 2784) = v83;
        *(_OWORD *)(v4 + 2800) = v84;
        *(_OWORD *)(v4 + 2816) = v85;
        *(_OWORD *)(v4 + 2832) = v86;
      }
    }
    v43 = v42;
    if ( v42 )
    {
      if ( !v73 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v70[5] = v43;
        v70[6] = &v81;
        v70[3] = 281LL;
        v70[4] = 2LL;
        v70[7] = a1;
        WdLogEvent5_WdCriticalError(v70);
        JUMPOUT(0x1C00189B2LL);
      }
      VidSchiMarkDeviceAsError(v5, 19LL);
      LOBYTE(v69) = 1;
      VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 144), v69);
    }
    ++*(_QWORD *)(v6 + 336);
    if ( v40 )
      KeLowerIrql(v41);
  }
}

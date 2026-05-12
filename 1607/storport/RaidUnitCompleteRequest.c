/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C0006180
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidDmaPutScatterGatherList @ 0x1C00036BC (RaidDmaPutScatterGatherList.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0003A08 (RaidNormalizeDeviceQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C0006F40 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C0007040 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C0007290 (StorpTelemetryCollectPerfData.c)
 *     RiNormalizeDeviceQueue @ 0x1C0007570 (RiNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C00077A0 (StorSubmitIoGatewayItem.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0007970 (StorpTelemetryCollectErrorData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0009D68 (TranslateResultToScsiRequestBlock.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0009F90 (RaidUnitDisablePendingTimer.c)
 *     RaUnitAsyncError @ 0x1C000C3A0 (RaUnitAsyncError.c)
 *     RaidAdapterRestartQueues @ 0x1C0018684 (RaidAdapterRestartQueues.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0019460 (RaidSrbExGetBidirectionalData.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C002BC38 (StorRemoveEventQueue.c)
 *     Template_pqccqqq @ 0x1C002BFFC (Template_pqccqqq.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C002C7D0 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidLogRequestComplete @ 0x1C0036A20 (RaidLogRequestComplete.c)
 *     Template_qcq @ 0x1C00391D4 (Template_qcq.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C003A300 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C003A620 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  IRP *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  unsigned __int64 v12; // r12
  __int64 Length; // rax
  int *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // r15
  char v17; // al
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 **v20; // rax
  BOOL v21; // r8d
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  int v25; // edx
  int v26; // ecx
  unsigned __int8 *v27; // rax
  unsigned int v28; // r11d
  unsigned int v29; // r10d
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  char v39; // r11
  char v40; // r14
  unsigned int v41; // ebx
  unsigned int v42; // r9d
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r10
  __int64 v46; // r8
  int v47; // ecx
  int v48; // ecx
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // al
  PIRP v51; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v53; // bl
  __int64 v54; // r14
  bool v55; // bl
  __int64 v56; // rax
  int HighestNodeNumber; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rcx
  BOOL v61; // r13d
  bool v62; // zf
  unsigned int v63; // r9d
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // r10
  __int64 v67; // r8
  int v68; // ecx
  int v69; // ecx
  unsigned __int64 v70; // rcx
  _IO_STACK_LOCATION *v71; // rax
  _IO_SECURITY_CONTEXT *v72; // r14
  _SECURITY_QUALITY_OF_SERVICE *v73; // rbx
  __int64 v74; // r15
  _SECURITY_QUALITY_OF_SERVICE *v75; // rdx
  int v76; // edx
  int v77; // ecx
  int v78; // r9d
  __int64 v79; // r12
  __int64 BidirectionalData; // rax
  _BYTE *v81; // rax
  char v82; // r14
  bool v83; // r14
  struct _MDL *v84; // rcx
  __int64 *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  void (__fastcall *v88)(__int64, _QWORD, bool); // rax
  __int64 v89; // rdx
  struct _MDL *v90; // rcx
  struct _MDL *v91; // rcx
  PIO_WORKITEM *Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v94; // al
  IRP *v95; // rbx
  int v96; // ebx
  __int64 v97; // rax
  bool v98; // r14
  __int64 v99; // rbx
  unsigned int v100; // eax
  KSPIN_LOCK *v101; // rbx
  __int64 v102; // rdi
  KIRQL v103; // al
  KIRQL v104; // r15
  int v105; // eax
  int v106; // ecx
  __int64 v107; // r14
  __int64 i; // rdi
  char v109; // [rsp+51h] [rbp-AFh]
  PIRP Irp; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v111; // [rsp+60h] [rbp-A0h]
  unsigned int v112; // [rsp+6Ch] [rbp-94h]
  unsigned int v113; // [rsp+70h] [rbp-90h]
  int v114; // [rsp+74h] [rbp-8Ch]
  unsigned int v115; // [rsp+78h] [rbp-88h]
  __int64 v117; // [rsp+88h] [rbp-78h]
  char v118[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v119; // [rsp+98h] [rbp-68h]
  __int64 v120; // [rsp+A0h] [rbp-60h]
  __int64 v121; // [rsp+A8h] [rbp-58h]
  _BYTE v122[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v124; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v125; // [rsp+100h] [rbp+0h] BYREF
  int v126; // [rsp+118h] [rbp+18h] BYREF
  __int64 v127; // [rsp+11Ch] [rbp+1Ch]
  int v128; // [rsp+124h] [rbp+24h]
  int v129; // [rsp+128h] [rbp+28h] BYREF
  __int64 v130; // [rsp+12Ch] [rbp+2Ch]
  int v131; // [rsp+134h] [rbp+34h]
  int v132; // [rsp+138h] [rbp+38h] BYREF
  __int64 v133; // [rsp+13Ch] [rbp+3Ch]
  int v134; // [rsp+144h] [rbp+44h]

  v5 = *(IRP **)(a1 + 160);
  v120 = a1;
  Irp = v5;
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(_QWORD *)(a1 + 224);
  v109 = (*(_BYTE *)(a1 + 16) >> 2) & 7;
  v8 = *(_BYTE *)(v6 + 2);
  if ( v8 == 40 )
  {
    v9 = *(_DWORD *)(v6 + 20);
    v119 = *(_QWORD *)(v6 + 104);
    v121 = a1 + 784;
    v112 = v9;
    v114 = *(_DWORD *)(v6 + 24);
    v115 = *(_DWORD *)(v6 + 60);
    v113 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v112 = v8;
    v119 = *(_QWORD *)(v6 + 56);
    v121 = *(_QWORD *)(v6 + 32);
    v113 = *(unsigned __int8 *)(v6 + 8);
    v114 = *(_DWORD *)(v6 + 12);
    v115 = *(_DWORD *)(v6 + 16);
  }
  SecurityContext = v5->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  v12 = -1LL;
  if ( (SecurityQos[1].ImpersonationLevel & 2) != 0 )
  {
    Length = SecurityQos[7].Length;
    v14 = *(int **)(v7 + 208);
    v15 = (__int64 *)&SecurityQos[4];
    v16 = (__int64)&v14[14 * Length + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 40), &LockHandle);
    v17 = *((_BYTE *)v15 - 32);
    v18 = *v14;
    if ( (v17 & 2) != 0 )
    {
      *((_BYTE *)v15 - 32) = v17 & 0xFD;
      v19 = (__int64 *)*v15;
      v20 = (__int64 **)v15[1];
      v21 = *(_QWORD *)v16 == (_QWORD)v15;
      if ( *(__int64 **)(*v15 + 8) != v15 || *v20 != v15 )
        __fastfail(3u);
      *v20 = v19;
      v19[1] = (__int64)v20;
      if ( (v15[6] & 1) != 0 )
      {
        v22 = v15 + 2;
        if ( *(__int64 **)(v16 + 32) == v15 + 2 )
          *(_QWORD *)(v16 + 32) = *v22;
        v23 = (__int64 *)*v22;
        v24 = (__int64 **)v15[3];
        if ( *(__int64 **)(*v22 + 8) != v22 || *v24 != v22 )
          __fastfail(3u);
        *v24 = v23;
        v23[1] = (__int64)v24;
        *((_DWORD *)v15 + 12) &= ~1u;
      }
      if ( (v18 & 4) == 0 && v21 )
      {
        if ( *(_QWORD *)v16 == v16 )
          *(_DWORD *)(v16 + 48) = -1;
        else
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(*(_QWORD *)v16 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v126 = 0;
      v127 = 0LL;
      v128 = 0;
      IoGetActivityIdIrp(Irp, &v126);
      if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
        Template_qcq(v26, v25, (unsigned int)&v126, a4, 4);
    }
    if ( *(char *)(v7 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1448)) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v7 + 1456) + 56LL), 0xFFFFFFFF) == 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 32), &v124);
        if ( (*(_BYTE *)(v7 + 153) & 0x20) == 0 && !*(_DWORD *)(*(_QWORD *)(v7 + 1456) + 56LL) )
        {
          KeCancelTimer((PKTIMER)(v7 + 664));
          *(_BYTE *)(v7 + 153) |= 0x20u;
        }
        KeReleaseInStackQueuedSpinLock(&v124);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1448));
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100) != 0 )
      StorEtwIORequestServiceTimeEventData(a1, 0LL, 0LL, a4);
    if ( *(_DWORD *)(v7 + 1524) && (Microsoft_Windows_StorPortEnableBits & 0x2000000) != 0 )
      StorEtwLogoRequestServiceTimeEventData(a1, 0LL, 0LL, a4);
  }
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v27 = (unsigned __int8 *)(v6 + 72);
    goto LABEL_60;
  }
  v27 = 0LL;
  v111 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v28 = *(_DWORD *)(v6 + 56);
    v29 = 0;
    if ( v28 )
    {
      while ( 1 )
      {
        v30 = *(unsigned int *)(v6 + 4LL * v29 + 120);
        if ( (unsigned int)v30 < 0x80 )
          goto LABEL_55;
        v31 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v30 >= (unsigned int)v31 )
          goto LABEL_55;
        a4 = v30 + v6;
        v32 = (unsigned int)v30;
        v33 = *(_DWORD *)(v30 + v6);
        if ( v33 == 64 )
        {
          v35 = v32 + 40;
        }
        else
        {
          v34 = v33 - 65;
          if ( v34 )
          {
            if ( v34 == 1 && v32 + 40 <= v31 )
            {
              if ( *(_DWORD *)(a4 + 12) )
              {
                v27 = (unsigned __int8 *)(a4 + 32);
                goto LABEL_60;
              }
              goto LABEL_56;
            }
            goto LABEL_55;
          }
          v35 = v32 + 56;
        }
        if ( v35 <= v31 )
        {
          if ( !*(_BYTE *)(a4 + 10) )
          {
LABEL_56:
            v27 = 0LL;
            break;
          }
          v27 = (unsigned __int8 *)(a4 + 24);
LABEL_60:
          v111 = v27;
          break;
        }
LABEL_55:
        if ( ++v29 >= v28 )
          goto LABEL_56;
      }
    }
  }
  if ( *(_DWORD *)(v7 + 1844) )
  {
    if ( v27 )
    {
      v36 = *v27;
      if ( !v112 )
      {
        if ( (unsigned __int8)(v36 - 8) <= 0x3Au
          && (v37 = 0x400200500000005LL, _bittest64(&v37, (unsigned __int8)(v36 - 8)))
          || (unsigned __int8)(v36 + 120) <= 0x22u && (v38 = 0x500000205LL, _bittest64(&v38, (unsigned int)(v36 + 120))) )
        {
          StorpTelemetryCollectPerfData(a1, v6, v7, a4, v36);
        }
        v27 = v111;
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v27 )
    goto LABEL_93;
  v39 = 0;
  v40 = *(_BYTE *)(v6 + 3);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v6 + 4);
    goto LABEL_88;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v39 = 0;
    goto LABEL_88;
  }
  v41 = *(_DWORD *)(v6 + 56);
  v42 = 0;
  if ( v41 )
  {
    while ( 1 )
    {
      v43 = *(unsigned int *)(v6 + 4LL * v42 + 120);
      if ( (unsigned int)v43 < 0x80 )
        goto LABEL_82;
      v44 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v43 >= (unsigned int)v44 )
        goto LABEL_82;
      v45 = v43 + v6;
      v46 = (unsigned int)v43;
      v47 = *(_DWORD *)(v43 + v6);
      if ( v47 == 64 )
        goto LABEL_80;
      v48 = v47 - 65;
      if ( v48 )
        break;
      v49 = v46 + 56;
LABEL_81:
      if ( v49 <= v44 )
      {
        v39 = *(_BYTE *)(v45 + 8);
        goto LABEL_88;
      }
LABEL_82:
      if ( ++v42 >= v41 )
        goto LABEL_88;
    }
    if ( v48 != 1 )
      goto LABEL_82;
LABEL_80:
    v49 = v46 + 40;
    goto LABEL_81;
  }
LABEL_88:
  v50 = v40 & 0x3F;
  if ( v40 < 0 || v39 == 2 || v50 > 1u && v50 != 18 )
  {
    v51 = Irp;
    StorpTelemetryCollectErrorData(v7, (int)Irp, a1, v6);
  }
  else
  {
LABEL_93:
    v51 = Irp;
  }
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v7, *(unsigned int *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  CurrentStackLocation = v51->Tail.Overlay.CurrentStackLocation;
  v53 = CurrentStackLocation->Parameters.QueryFile.FileInformationClass & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v54 = *(_QWORD *)(v7 + 24);
  LOBYTE(CurrentStackLocation) = v53;
  v55 = (v53 & 2) != 0;
  if ( ((unsigned __int8)CurrentStackLocation & 1) != 0
    && *(char *)(v7 + 153) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1448)) )
  {
    v56 = *(_QWORD *)(v7 + 1456);
    if ( *(_QWORD *)(v56 + 96) )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v56 + 96));
      PoFxIdleComponent(**(_QWORD **)(v7 + 1456), 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1448));
  }
  if ( v55 && *(_QWORD *)(v54 + 5088) )
    RaidAdapterPoFxIdleComponent(v54, 0LL, 0LL);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v58 = v113 / *(_DWORD *)(v7 + 328);
  v59 = HighestNodeNumber + 1;
  if ( v58 >= v59 )
    v58 = v59 - 1;
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v7 + 256) + ((unsigned __int64)v58 << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v7 + 320) + 16LL * v113));
  v61 = 0;
  if ( (v114 & 0x102) != 0x102 && (v114 & 0x80010) == 0 )
  {
    if ( v112 > 0x20 || (v60 = 0x1000D0000LL, !_bittest64(&v60, v112)) )
      v61 = 1;
  }
  if ( (*(_BYTE *)(v7 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6) )
  {
    v62 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v62 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v63 = 0;
        if ( *(_DWORD *)(v6 + 56) )
        {
          while ( 1 )
          {
            v64 = *(unsigned int *)(v6 + 4LL * v63 + 120);
            if ( (unsigned int)v64 < 0x80 )
              goto LABEL_125;
            v65 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v64 >= (unsigned int)v65 )
              goto LABEL_125;
            v66 = v64 + v6;
            v67 = (unsigned int)v64;
            v68 = *(_DWORD *)(v64 + v6) - 64;
            if ( !v68 )
              goto LABEL_123;
            v69 = v68 - 1;
            if ( v69 )
              break;
            v70 = v67 + 56;
LABEL_124:
            if ( v70 <= v65 )
            {
              *(_BYTE *)(v66 + 8) = 0;
              goto LABEL_130;
            }
LABEL_125:
            if ( ++v63 >= *(_DWORD *)(v6 + 56) )
              goto LABEL_130;
          }
          if ( v69 != 1 )
            goto LABEL_125;
LABEL_123:
          v70 = v67 + 40;
          goto LABEL_124;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_130:
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1792));
  }
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) != 1 )
  {
    v94 = RaUnitAsyncError(v7, a1);
    goto LABEL_192;
  }
  Irp->IoStatus.Information = v115;
  v71 = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  v72 = v71->Parameters.Create.SecurityContext;
  if ( BYTE2(v72->SecurityQos) == 40 )
    v73 = v72[4].SecurityQos;
  else
    v73 = v72[2].SecurityQos;
  v74 = *(_QWORD *)&v73[18].ContextTrackingMode;
  if ( BYTE2(v72->SecurityQos) == 40 )
    v75 = v72[4].SecurityQos;
  else
    v75 = v72[2].SecurityQos;
  if ( (v75[1].ImpersonationLevel & 2) != 0 )
  {
    StorRemoveEventQueue(*(_QWORD *)(v74 + 208), &v75[4]);
    if ( StorEtwLoggingEnabled )
    {
      v129 = 0;
      v130 = 0LL;
      v131 = 0;
      IoGetActivityIdIrp(Irp, &v129);
      if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
        Template_qcq(v77, v76, (unsigned int)&v129, v78, 4);
    }
    if ( RaidUnitCheckAndAcquirePoFx(v74) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v74 + 1456) + 56LL), 0xFFFFFFFF) == 1 )
        RaidUnitDisablePendingTimer(v74);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v74 + 1448));
    }
  }
  StorUnmapSenseInfo(v73, *(_QWORD *)(*(_QWORD *)(v74 + 24) + 8LL));
  if ( BYTE2(v72->SecurityQos) == 40 )
  {
    if ( (v73[1].ImpersonationLevel & 0x40) != 0 )
    {
      TranslateResultToScsiRequestBlock(*(_QWORD *)&v73[62].ContextTrackingMode, v72);
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v73[14].ContextTrackingMode;
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v73[15].ImpersonationLevel;
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)&v73[62].ContextTrackingMode + 40LL) = 0LL;
      Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v73[62].ContextTrackingMode;
      LOBYTE(v73[1].ImpersonationLevel) &= ~0x40u;
      *(_QWORD *)&v73[62].ContextTrackingMode = 0LL;
    }
    else
    {
      v72[4].SecurityQos = 0LL;
      *(_QWORD *)&v72[2].DesiredAccess = *(_QWORD *)&v73[15].ImpersonationLevel;
      v72[4].AccessState = 0LL;
      v79 = *(_QWORD *)&v73[16].Length;
      if ( v79 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v72);
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v79;
      }
      v12 = -1LL;
    }
  }
  else
  {
    v72[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v73[14].ContextTrackingMode;
    v72[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v73[15].ImpersonationLevel;
    v72[2].AccessState = 0LL;
    *(_QWORD *)&v72[1].DesiredAccess = 0LL;
  }
  if ( *(_QWORD *)&v73[9].ImpersonationLevel )
  {
    v81 = *(_BYTE **)&v73[14].Length;
    if ( v81[2] == 40 )
      v82 = v81[24];
    else
      v82 = v81[12];
    v83 = (v82 & 0x40) == 0;
    if ( RaidVerifierEnabled )
    {
      v84 = *(struct _MDL **)&v73[10].Length;
      if ( v84 )
      {
        MmProtectMdlSystemAddress(v84, 4u);
        MmUnlockPages(*(PMDL *)&v73[10].Length);
        IoFreeMdl(*(PMDL *)&v73[10].Length);
        *(_QWORD *)&v73[10].Length = 0LL;
      }
    }
    v85 = (__int64 *)(*(_QWORD *)&v73[18].Length + 696LL);
    if ( *(_QWORD *)&v73[18].Length != -696LL )
    {
      v86 = *v85;
      if ( *v85 )
      {
        v87 = *(_QWORD *)(v86 + 8);
        if ( v87 )
        {
          v88 = *(void (__fastcall **)(__int64, _QWORD, bool))(v87 + 96);
          if ( v88 )
            v88(v86, *(_QWORD *)&v73[9].ImpersonationLevel, v83);
        }
      }
    }
    v89 = *(_QWORD *)&v73[12].ContextTrackingMode;
    *(_QWORD *)&v73[9].ImpersonationLevel = 0LL;
    *(_QWORD *)&v73[12].Length = 0LL;
    if ( v89 )
    {
      RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)&v73[18].Length + 696LL));
      *(_QWORD *)&v73[12].ContextTrackingMode = 0LL;
    }
  }
  v90 = *(struct _MDL **)&v73[8].ContextTrackingMode;
  if ( v90 && (v73[1].ImpersonationLevel & 1) != 0 )
  {
    IoFreeMdl(v90);
    LOBYTE(v73[1].ImpersonationLevel) &= ~1u;
    *(_QWORD *)&v73[8].ContextTrackingMode = 0LL;
  }
  v91 = *(struct _MDL **)&v73[11].ImpersonationLevel;
  if ( v91 )
  {
    MmUnlockPages(v91);
    IoFreeMdl(*(PMDL *)&v73[11].ImpersonationLevel);
    *(_QWORD *)&v73[11].ImpersonationLevel = 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 648), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v74 + 168), 0, 0);
  if ( v111 && *v111 == 59 && (v111[1] & 0x1F) == 0xF )
  {
    Pool = (PIO_WORKITEM *)RaidAllocatePool(NonPagedPoolNx, 0x10uLL, 0x49576152u, *(_QWORD *)(v7 + 8));
    if ( Pool )
    {
      *Pool = 0LL;
      Pool[1] = 0LL;
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v7 + 8));
      *Pool = WorkItem;
      if ( WorkItem )
      {
        Pool[1] = (PIO_WORKITEM)Irp;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 648));
        IoQueueWorkItem(*Pool, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, Pool);
        v94 = 1;
        goto LABEL_192;
      }
      ExFreePoolWithTag(Pool, 0x49576152u);
    }
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v7 + 24) + 32LL), BusRelations);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
  {
    v95 = Irp;
  }
  else
  {
    v95 = Irp;
    if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        v7,
        Irp,
        Irp->IoStatus.Status);
  }
  if ( (qword_1C004F2A0 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v7 + 24), v95, v6);
  RaidCompleteRequestEx(v95);
  v94 = 1;
LABEL_192:
  if ( v109 != 3 && v94 )
  {
    v96 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v7 + 24) + 768LL));
    if ( v117 )
      (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v117 + 64) + 32LL) + 392LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v117 + 64) + 32LL) + 384LL),
        v117 - 120,
        v118);
    if ( v96 )
      RaidAdapterRestartQueues(*(_QWORD *)(v7 + 24));
    v97 = *(_QWORD *)(v7 + 24);
    v98 = 0;
    if ( v97 )
    {
      v99 = *(_QWORD *)(v7 + 208);
      if ( v99 )
      {
        if ( *(_QWORD *)(v97 + 5000) )
        {
          v100 = KeQueryHighestNodeNumber() + 1;
          if ( v100 )
          {
            v101 = (KSPIN_LOCK *)(v99 + 64);
            v102 = v100;
            do
            {
              KeAcquireInStackQueuedSpinLock(v101 + 5, &v125);
              if ( (KSPIN_LOCK *)*v101 != v101 && *(_QWORD *)(*v101 + 40) < v12 )
                v12 = *(_QWORD *)(*v101 + 40);
              KeReleaseInStackQueuedSpinLock(&v125);
              v101 += 7;
              --v102;
            }
            while ( v102 );
            if ( v12 != -1LL && v12 )
              v98 = KeQueryUnbiasedInterruptTime() - v12 > *(_QWORD *)(*(_QWORD *)(v7 + 24) + 5000LL);
          }
        }
      }
    }
    v103 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 472));
    if ( v61 || *(_DWORD *)(v7 + 432) || *(_DWORD *)(v7 + 440) || *(_DWORD *)(v7 + 420) || *(_DWORD *)(v7 + 416) )
    {
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v7 + 472), v103);
      v104 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 472));
      if ( v61 )
        *(_BYTE *)(v7 + 438) = 0;
      --*(_DWORD *)(v7 + 476);
      v105 = *(_DWORD *)(v7 + 432);
      v106 = *(_DWORD *)(v7 + 476);
      if ( v105 )
        *(_DWORD *)(v7 + 432) = v105 - 1;
      if ( !v106 && *(_DWORD *)(v7 + 440) )
        KeSetEvent((PRKEVENT)(v7 + 448), 0, 0);
      v107 = RiNormalizeDeviceQueue(v7 + 400, v98);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 472), v104);
      if ( v107 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v132 = 0;
          v133 = 0LL;
          v134 = 0;
          IoGetActivityIdIrp(v107 - 120, &v132);
          if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
            Template_pqccqqq(
              *(_DWORD *)(v7 + 416) + *(_DWORD *)(v7 + 420),
              ((*(_BYTE *)(v107 + 22) & 6) != 0) + 1,
              (unsigned int)&v132,
              v7 + 400,
              ((*(_BYTE *)(v107 + 22) & 6) != 0) + 1,
              5,
              0,
              *(_BYTE *)(v7 + 416) + *(_BYTE *)(v7 + 420),
              *(_DWORD *)(v7 + 476));
        }
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v7 + 408)) )
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v7 + 392))(*(_QWORD *)(v7 + 384), v107 - 120, v122);
      }
      if ( v61 )
      {
        for ( i = RaidNormalizeDeviceQueue(v7 + 400); i; i = RaidNormalizeDeviceQueue(v7 + 400) )
        {
          if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v7 + 408)) )
            (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v7 + 392))(*(_QWORD *)(v7 + 384), i - 120, v122);
        }
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 476));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v7 + 472), v103);
    }
  }
}

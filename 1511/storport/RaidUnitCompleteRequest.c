/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C00016A0
 * Callers:
 *     <none>
 * Callees:
 *     StorRemoveIoGatewayItem @ 0x1C0002850 (StorRemoveIoGatewayItem.c)
 *     StorUnmapSenseInfo @ 0x1C0002950 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C0002B80 (StorpTelemetryCollectPerfData.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0002DFC (RaidNormalizeDeviceQueue.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0007080 (TranslateResultToScsiRequestBlock.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0007300 (RaidSrbExGetBidirectionalData.c)
 *     RaidUnitDisablePendingTimer @ 0x1C000785C (RaidUnitDisablePendingTimer.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00078B0 (RaidAdapterPoFxIdleComponent.c)
 *     StorSubmitIoGatewayItem @ 0x1C0009F7C (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C0010D24 (RaUnitAsyncError.c)
 *     RaidDmaPutScatterGatherList @ 0x1C001106C (RaidDmaPutScatterGatherList.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterRestartQueues @ 0x1C00131A0 (RaidAdapterRestartQueues.c)
 *     RaAllocateIoResource @ 0x1C0013348 (RaAllocateIoResource.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0026EF8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     StorRemoveEventQueue @ 0x1C00285B8 (StorRemoveEventQueue.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 *     Template_pqccqqq @ 0x1C0028A6C (Template_pqccqqq.c)
 *     RaidQosSupportedCommand @ 0x1C0028D70 (RaidQosSupportedCommand.c)
 *     RaidLogRequestComplete @ 0x1C00337C0 (RaidLogRequestComplete.c)
 *     Template_qcq @ 0x1C0036104 (Template_qcq.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0036568 (RaAttemptHighWaterMarkIncrease.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0037054 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0037374 (StorEtwLogoRequestServiceTimeEventData.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0039D28 (StorpTelemetryCollectErrorData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  IRP *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int8 v8; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rsi
  unsigned __int64 v11; // r12
  __int64 Length; // rax
  int *v13; // rbx
  __int64 *v14; // rsi
  __int64 v15; // r14
  char v16; // al
  int v17; // r9d
  __int64 *v18; // rcx
  __int64 **v19; // rax
  BOOL v20; // r8d
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  __int64 **v23; // rax
  int v24; // edx
  int v25; // ecx
  unsigned __int8 *v26; // rax
  unsigned int v27; // r11d
  __int64 i; // r10
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  char v39; // r11
  char v40; // si
  unsigned int v41; // ebx
  __int64 v42; // r9
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
  __int64 v54; // rsi
  bool v55; // bl
  __int64 v56; // rax
  int HighestNodeNumber; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rcx
  bool v61; // zf
  unsigned int v62; // r9d
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // r10
  __int64 v66; // r8
  int v67; // ecx
  int v68; // ecx
  unsigned __int64 v69; // rcx
  IRP *v70; // r15
  _IO_STACK_LOCATION *v71; // rax
  _IO_SECURITY_CONTEXT *v72; // rsi
  _SECURITY_QUALITY_OF_SERVICE *v73; // rbx
  __int64 v74; // r14
  _SECURITY_QUALITY_OF_SERVICE *v75; // rdx
  int v76; // edx
  int v77; // ecx
  int v78; // r9d
  __int64 v79; // r15
  __int64 BidirectionalData; // rax
  _BYTE *v81; // rax
  char v82; // si
  bool v83; // si
  struct _MDL *v84; // rcx
  __int64 *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  void (__fastcall *v88)(__int64, _QWORD, bool); // rax
  __int64 v89; // rdx
  struct _MDL *v90; // rcx
  struct _MDL *v91; // rcx
  __int64 Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v94; // al
  int v95; // ebx
  __int64 v96; // rax
  bool v97; // si
  __int64 v98; // rbx
  unsigned int v99; // eax
  KSPIN_LOCK *v100; // rbx
  __int64 v101; // rdi
  KIRQL v102; // al
  int v103; // r12d
  KIRQL v104; // r15
  int v105; // eax
  int v106; // ecx
  _QWORD *v107; // rdi
  _QWORD *v108; // rcx
  _QWORD *v109; // rdi
  int v110; // edx
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  char v113; // al
  __int64 v114; // rcx
  _QWORD *v115; // rax
  int v116; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v118; // rdx
  _QWORD *v119; // rcx
  _QWORD *v120; // r15
  __int64 v121; // rsi
  int v122; // ecx
  PSLIST_ENTRY IoResource; // rcx
  __int64 v124; // rax
  int v125; // r12d
  unsigned int v126; // r8d
  unsigned int v127; // r15d
  PSLIST_ENTRY v128; // rax
  _QWORD *v129; // rcx
  _QWORD *v130; // rax
  __int64 v131; // rsi
  _QWORD *v132; // rcx
  PSLIST_ENTRY v133; // rdi
  void *v134; // rax
  unsigned int v135; // edx
  _QWORD *v136; // rcx
  __int64 j; // rdi
  unsigned int v138; // [rsp+54h] [rbp-ACh]
  int v139; // [rsp+54h] [rbp-ACh]
  char v140; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v141; // [rsp+60h] [rbp-A0h]
  PIRP Irp; // [rsp+68h] [rbp-98h]
  int v143; // [rsp+78h] [rbp-88h]
  unsigned int v144; // [rsp+7Ch] [rbp-84h]
  unsigned int v145; // [rsp+80h] [rbp-80h]
  __int64 v146; // [rsp+88h] [rbp-78h]
  char v147[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v148; // [rsp+98h] [rbp-68h]
  __int64 v149; // [rsp+A0h] [rbp-60h]
  __int64 v150; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+B0h] [rbp-50h] BYREF
  char v152[8]; // [rsp+C8h] [rbp-38h] BYREF
  PSLIST_ENTRY v153; // [rsp+D0h] [rbp-30h]
  PSLIST_ENTRY v154; // [rsp+D8h] [rbp-28h]
  PSLIST_ENTRY v155; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v157; // [rsp+100h] [rbp+0h] BYREF
  int v158; // [rsp+118h] [rbp+18h] BYREF
  __int64 v159; // [rsp+11Ch] [rbp+1Ch]
  int v160; // [rsp+124h] [rbp+24h]
  int v161; // [rsp+128h] [rbp+28h] BYREF
  __int64 v162; // [rsp+12Ch] [rbp+2Ch]
  int v163; // [rsp+134h] [rbp+34h]
  int v164; // [rsp+138h] [rbp+38h] BYREF
  __int64 v165; // [rsp+13Ch] [rbp+3Ch]
  int v166; // [rsp+144h] [rbp+44h]

  v5 = *(IRP **)(a1 + 160);
  v149 = a1;
  Irp = v5;
  v6 = *(_QWORD *)(a1 + 168);
  v7 = *(_QWORD *)(a1 + 224);
  v140 = (*(_BYTE *)(a1 + 16) >> 2) & 7;
  v8 = *(_BYTE *)(v6 + 2);
  if ( v8 == 40 )
  {
    v138 = *(_DWORD *)(v6 + 20);
    v148 = *(_QWORD *)(v6 + 104);
    v150 = a1 + 784;
    v143 = *(_DWORD *)(v6 + 24);
    v145 = *(_DWORD *)(v6 + 60);
    v144 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v138 = v8;
    v148 = *(_QWORD *)(v6 + 56);
    v150 = *(_QWORD *)(v6 + 32);
    v144 = *(unsigned __int8 *)(v6 + 8);
    v143 = *(_DWORD *)(v6 + 12);
    v145 = *(_DWORD *)(v6 + 16);
  }
  SecurityContext = v5->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  v11 = -1LL;
  if ( (SecurityQos[1].ImpersonationLevel & 2) != 0 )
  {
    Length = SecurityQos[7].Length;
    v13 = *(int **)(v7 + 200);
    v14 = (__int64 *)&SecurityQos[4];
    v15 = (__int64)&v13[14 * Length + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 40), &LockHandle);
    v16 = *((_BYTE *)v14 - 32);
    v17 = *v13;
    if ( (v16 & 2) != 0 )
    {
      *((_BYTE *)v14 - 32) = v16 & 0xFD;
      v18 = (__int64 *)*v14;
      v19 = (__int64 **)v14[1];
      v20 = *(_QWORD *)v15 == (_QWORD)v14;
      if ( *(__int64 **)(*v14 + 8) != v14 || *v19 != v14 )
        __fastfail(3u);
      *v19 = v18;
      v18[1] = (__int64)v19;
      if ( (v14[6] & 1) != 0 )
      {
        v21 = v14 + 2;
        if ( *(__int64 **)(v15 + 32) == v14 + 2 )
          *(_QWORD *)(v15 + 32) = *v21;
        v22 = (__int64 *)*v21;
        v23 = (__int64 **)v14[3];
        if ( *(__int64 **)(*v21 + 8) != v21 || *v23 != v21 )
          __fastfail(3u);
        *v23 = v22;
        v22[1] = (__int64)v23;
        *((_DWORD *)v14 + 12) &= ~1u;
      }
      if ( (v17 & 4) == 0 && v20 )
      {
        if ( *(_QWORD *)v15 == v15 )
          *(_DWORD *)(v15 + 48) = -1;
        else
          *(_DWORD *)(v15 + 48) = *(_DWORD *)(*(_QWORD *)v15 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v158 = 0;
      v159 = 0LL;
      v160 = 0;
      IoGetActivityIdIrp(Irp, &v158);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v25, v24, (unsigned int)&v158, a4, 4);
    }
    if ( *(char *)(v7 + 145) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1448)) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v7 + 1456) + 56LL), 0xFFFFFFFF) == 1 )
        RaidUnitDisablePendingTimer(v7);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1448));
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
      StorEtwIORequestServiceTimeEventData(a1, 0LL, 0LL);
    if ( *(_DWORD *)(v7 + 1524) && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
      StorEtwLogoRequestServiceTimeEventData(a1, 0LL, 0LL);
  }
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v26 = (unsigned __int8 *)(v6 + 72);
    goto LABEL_57;
  }
  v26 = 0LL;
  v141 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v27 = *(_DWORD *)(v6 + 56);
    for ( i = 0LL; (unsigned int)i < v27; i = (unsigned int)(i + 1) )
    {
      v29 = *(unsigned int *)(v6 + 4 * i + 120);
      if ( (unsigned int)v29 < 0x80 )
        continue;
      v30 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v29 >= (unsigned int)v30 )
        continue;
      a4 = v29 + v6;
      v31 = (unsigned int)v29;
      v32 = *(_DWORD *)(v29 + v6) - 64;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 == 1 && v31 + 40 <= v30 )
          {
            if ( !*(_DWORD *)(a4 + 12) )
              break;
            v26 = (unsigned __int8 *)(a4 + 32);
            goto LABEL_57;
          }
          continue;
        }
        v34 = v31 + 56;
      }
      else
      {
        v34 = v31 + 40;
      }
      if ( v34 <= v30 )
      {
        if ( !*(_BYTE *)(a4 + 10) )
          break;
        v26 = (unsigned __int8 *)(a4 + 24);
LABEL_57:
        v141 = v26;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v7 + 1824) )
  {
    if ( v26 )
    {
      v35 = *v26;
      if ( !v138 )
      {
        if ( (unsigned __int8)(v35 - 8) <= 0x3Au
          && (v36 = 0x400200500000005LL, _bittest64(&v36, (unsigned __int8)(v35 - 8)))
          || (unsigned __int8)(v35 + 120) <= 0x22u && (v37 = 0x500000205LL, _bittest64(&v37, (unsigned int)(v35 + 120))) )
        {
          StorpTelemetryCollectPerfData(a1, v6, v7, a4, v35);
        }
        v26 = v141;
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled )
    goto LABEL_92;
  if ( !v26 )
    goto LABEL_92;
  v38 = *v26;
  if ( v138 || ((v38 - 8) & 0x5D) != 0 )
    goto LABEL_92;
  v39 = 0;
  v40 = *(_BYTE *)(v6 + 3);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v6 + 4);
    goto LABEL_87;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v39 = 0;
    goto LABEL_87;
  }
  v41 = *(_DWORD *)(v6 + 56);
  v42 = 0LL;
  if ( v41 )
  {
    while ( 1 )
    {
      v43 = *(unsigned int *)(v6 + 4 * v42 + 120);
      if ( (unsigned int)v43 < 0x80 )
        goto LABEL_81;
      v44 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v43 >= (unsigned int)v44 )
        goto LABEL_81;
      v45 = v43 + v6;
      v46 = (unsigned int)v43;
      v47 = *(_DWORD *)(v43 + v6) - 64;
      if ( !v47 )
        goto LABEL_79;
      v48 = v47 - 1;
      if ( v48 )
        break;
      v49 = v46 + 56;
LABEL_80:
      if ( v49 <= v44 )
      {
        v39 = *(_BYTE *)(v45 + 8);
        goto LABEL_87;
      }
LABEL_81:
      v42 = (unsigned int)(v42 + 1);
      if ( (unsigned int)v42 >= v41 )
        goto LABEL_87;
    }
    if ( v48 != 1 )
      goto LABEL_81;
LABEL_79:
    v49 = v46 + 40;
    goto LABEL_80;
  }
LABEL_87:
  v50 = v40 & 0x3F;
  if ( v40 >= 0 && v39 != 2 && (v50 <= 1u || v50 == 18) )
  {
LABEL_92:
    v51 = Irp;
  }
  else
  {
    v51 = Irp;
    StorpTelemetryCollectErrorData(v7, (int)Irp, a1, v6);
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
  if ( ((unsigned __int8)CurrentStackLocation & 1) != 0 && (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v7) )
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
  v58 = v144 / *(_DWORD *)(v7 + 328);
  v59 = HighestNodeNumber + 1;
  if ( v58 >= v59 )
    v58 = v59 - 1;
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v7 + 256) + ((unsigned __int64)v58 << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v7 + 320) + 16LL * v144));
  v139 = 0;
  if ( (v143 & 0x102) != 0x102 && (v143 & 0x80010) == 0 )
  {
    if ( v138 > 0x20 || (v60 = 0x1000D0000LL, !_bittest64(&v60, v138)) )
      v139 = 1;
  }
  if ( *(_BYTE *)(v7 + 2528) && (*(_BYTE *)(v7 + 146) & 2) != 0 && (unsigned __int8)RaidQosSupportedCommand(v6) )
  {
    v61 = *(_BYTE *)(v6 + 2) == 40;
    *(_BYTE *)(v6 + 3) = 56;
    if ( v61 )
    {
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v62 = 0;
        if ( *(_DWORD *)(v6 + 56) )
        {
          while ( 1 )
          {
            v63 = *(unsigned int *)(v6 + 4LL * v62 + 120);
            if ( (unsigned int)v63 < 0x80 )
              goto LABEL_124;
            v64 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v63 >= (unsigned int)v64 )
              goto LABEL_124;
            v65 = v63 + v6;
            v66 = (unsigned int)v63;
            v67 = *(_DWORD *)(v63 + v6) - 64;
            if ( !v67 )
              goto LABEL_122;
            v68 = v67 - 1;
            if ( v68 )
              break;
            v69 = v66 + 56;
LABEL_123:
            if ( v69 <= v64 )
            {
              *(_BYTE *)(v65 + 8) = 0;
              goto LABEL_129;
            }
LABEL_124:
            if ( ++v62 >= *(_DWORD *)(v6 + 56) )
              goto LABEL_129;
          }
          if ( v68 != 1 )
            goto LABEL_124;
LABEL_122:
          v69 = v66 + 40;
          goto LABEL_123;
        }
      }
    }
    else
    {
      *(_BYTE *)(v6 + 4) = 0;
    }
LABEL_129:
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1784));
  }
  if ( (*(_BYTE *)(v6 + 3) & 0x3F) != 1 )
  {
    v94 = RaUnitAsyncError(v7, a1);
    goto LABEL_190;
  }
  v70 = Irp;
  Irp->IoStatus.Information = v145;
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
    StorRemoveEventQueue(*(_QWORD *)(v74 + 200), &v75[4]);
    if ( StorEtwLoggingEnabled )
    {
      v164 = 0;
      v165 = 0LL;
      v166 = 0;
      IoGetActivityIdIrp(Irp, &v164);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v77, v76, (unsigned int)&v164, v78, 4);
    }
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v74) )
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
      v70 = Irp;
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
      RaidDmaPutScatterGatherList(*(_QWORD *)&v73[18].Length + 696LL, v89, 0LL);
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
    KeSetEvent((PRKEVENT)(v74 + 160), 0, 0);
  if ( v141 && *v141 == 59 && (v141[1] & 0x1F) == 0xF )
  {
    Pool = RaidAllocatePool(512LL, 16LL, 1230463314LL, *(_QWORD *)(v7 + 8));
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      *(_QWORD *)(Pool + 8) = 0LL;
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v7 + 8));
      *(_QWORD *)Pool = WorkItem;
      if ( WorkItem )
      {
        *(_QWORD *)(Pool + 8) = v70;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 648));
        IoQueueWorkItem(*(PIO_WORKITEM *)Pool, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, (PVOID)Pool);
        v94 = 1;
        goto LABEL_190;
      }
      ExFreePoolWithTag((PVOID)Pool, 0x49576152u);
    }
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v7 + 24) + 32LL), BusRelations);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      24LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      v7,
      v70,
      v70->IoStatus.Status);
  }
  if ( (qword_1C0048010 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v7 + 24), v70, v6);
  RaidCompleteRequestEx(v70);
  v94 = 1;
LABEL_190:
  if ( v140 == 3 || !v94 )
    return;
  v95 = (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(v7 + 24) + 768LL));
  if ( v146 )
    (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v146 + 64) + 32LL) + 392LL))(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 64) + 32LL) + 384LL),
      v146 - 120,
      v147);
  if ( v95 )
    RaidAdapterRestartQueues(*(_QWORD *)(v7 + 24));
  v96 = *(_QWORD *)(v7 + 24);
  v97 = 0;
  if ( v96 )
  {
    v98 = *(_QWORD *)(v7 + 200);
    if ( v98 )
    {
      if ( *(_QWORD *)(v96 + 5000) )
      {
        v99 = KeQueryHighestNodeNumber() + 1;
        if ( v99 )
        {
          v100 = (KSPIN_LOCK *)(v98 + 64);
          v101 = v99;
          do
          {
            KeAcquireInStackQueuedSpinLock(v100 + 5, &v157);
            if ( (KSPIN_LOCK *)*v100 != v100 && *(_QWORD *)(*v100 + 40) < v11 )
              v11 = *(_QWORD *)(*v100 + 40);
            KeReleaseInStackQueuedSpinLock(&v157);
            v100 += 7;
            --v101;
          }
          while ( v101 );
          if ( v11 != -1LL && v11 )
            v97 = KeQueryUnbiasedInterruptTime() - v11 > *(_QWORD *)(*(_QWORD *)(v7 + 24) + 5000LL);
        }
      }
    }
  }
  v102 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 472));
  v103 = v139;
  if ( !v139
    && !*(_DWORD *)(v7 + 432)
    && *(_DWORD *)(v7 + 440) == v139
    && *(_DWORD *)(v7 + 420) == v139
    && *(_DWORD *)(v7 + 416) == v139 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 476));
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v7 + 472), v102);
    return;
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v7 + 472), v102);
  v104 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 472));
  if ( v139 )
    *(_BYTE *)(v7 + 438) = 0;
  --*(_DWORD *)(v7 + 476);
  v105 = *(_DWORD *)(v7 + 432);
  v106 = *(_DWORD *)(v7 + 476);
  if ( v105 )
    *(_DWORD *)(v7 + 432) = v105 - 1;
  if ( !v106 && *(_DWORD *)(v7 + 440) )
    KeSetEvent((PRKEVENT)(v7 + 448), 0, 0);
  v107 = *(_QWORD **)(v7 + 496);
  v108 = (_QWORD *)(v7 + 496);
  if ( v107 == (_QWORD *)(v7 + 496) )
  {
    v109 = (_QWORD *)(v7 + 480);
    if ( (_QWORD *)*v109 == v109 )
    {
LABEL_264:
      v107 = 0LL;
      goto LABEL_265;
    }
    v107 = (_QWORD *)*v109;
  }
  if ( !v107 )
    goto LABEL_265;
  *((_BYTE *)v107 + 22) ^= (*((_BYTE *)v107 + 22) ^ (16 * v97)) & 0x10;
  if ( *(_DWORD *)(v7 + 432) )
    goto LABEL_264;
  v110 = *(_DWORD *)(v7 + 476);
  if ( v110 >= *(_DWORD *)(v7 + 404) || *(_BYTE *)(v7 + 437) && (*((_BYTE *)v107 + 22) & 4) == 0 )
    goto LABEL_264;
  if ( *(_BYTE *)(v7 + 436) && (*((_BYTE *)v107 + 22) & 2) == 0 || *(int *)(v7 + 428) > 0 || *(_BYTE *)(v7 + 438) )
    goto LABEL_264;
  if ( *(_DWORD *)(v7 + 420) || *(_DWORD *)(v7 + 416) )
  {
    v111 = (_QWORD *)*v108;
    if ( (_QWORD *)*v108 == v108 )
    {
      v112 = (_QWORD *)(v7 + 480);
      if ( (_QWORD *)*v112 == v112 )
        v111 = 0LL;
      else
        v111 = (_QWORD *)*v112;
    }
    if ( v107 != v111 && (*((_BYTE *)v111 + 22) & 1) != 0 && (*((_BYTE *)v107 + 22) & 6) == 0 )
      goto LABEL_264;
  }
  v113 = *((_BYTE *)v107 + 22);
  if ( (v113 & 1) != 0 && v110 >= 1 )
    goto LABEL_264;
  if ( *(_BYTE *)(v7 + 439) && (v113 & 8) == 0 || (v113 & 0x10) != 0 )
    goto LABEL_264;
  v114 = *v107;
  v115 = (_QWORD *)v107[1];
  if ( *(_QWORD **)(*v107 + 8LL) != v107 || (_QWORD *)*v115 != v107 )
    __fastfail(3u);
  *v115 = v114;
  *(_QWORD *)(v114 + 8) = v115;
  ++*(_DWORD *)(v7 + 476);
  if ( (*((_BYTE *)v107 + 22) & 6) != 0 )
    --*(_DWORD *)(v7 + 420);
  else
    --*(_DWORD *)(v7 + 416);
  if ( (*((_BYTE *)v107 + 22) & 8) != 0 )
    --*(_DWORD *)(v7 + 424);
  *((_BYTE *)v107 + 20) = 0;
  v116 = *(_DWORD *)(v7 + 476);
  if ( v116 > *(_DWORD *)(v7 + 532) )
    *(_DWORD *)(v7 + 532) = v116;
  if ( (*((_BYTE *)v107 + 22) & 1) != 0 )
    *(_BYTE *)(v7 + 438) = 1;
  if ( (*((_BYTE *)v107 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v107);
    v118 = *QosEntryForDeviceEntry;
    v119 = (_QWORD *)QosEntryForDeviceEntry[1];
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (_QWORD *)*v119 != QosEntryForDeviceEntry )
    {
      __fastfail(3u);
    }
    *v119 = v118;
    *(_QWORD *)(v118 + 8) = v119;
  }
LABEL_265:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 472), v104);
  if ( v107 )
  {
    v120 = v107 - 15;
    if ( StorEtwLoggingEnabled )
    {
      v161 = 0;
      v162 = 0LL;
      v163 = 0;
      IoGetActivityIdIrp(v107 - 15, &v161);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_pqccqqq(
          *(_DWORD *)(v7 + 416) + *(_DWORD *)(v7 + 420),
          ((*((_BYTE *)v107 + 22) & 6) != 0) + 1,
          (unsigned int)&v161,
          v7 + 400,
          ((*((_BYTE *)v107 + 22) & 6) != 0) + 1,
          5,
          0,
          *(_BYTE *)(v7 + 416) + *(_BYTE *)(v7 + 420),
          *(_DWORD *)(v7 + 476));
    }
    v121 = *(_QWORD *)(v7 + 408);
    if ( *(int *)(v121 + 44) > 0 || *(int *)(v121 + 40) > 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(v7 + 408), &v151);
      if ( *(int *)(v121 + 44) > 0 || *(int *)(v121 + 40) > 0 )
      {
        v136 = *(_QWORD **)(v121 + 16);
        *v107 = v121 + 8;
        v107[1] = v136;
        if ( *v136 != v121 + 8 )
          __fastfail(3u);
        *v136 = v107;
        *(_QWORD *)(v121 + 16) = v107;
        ++*(_DWORD *)(v121 + 24);
        if ( (*((_BYTE *)v107 + 22) & 0x20) == 0 )
          goto LABEL_302;
        v130 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v107);
        v131 = v121 + 264;
        v132 = *(_QWORD **)(v131 + 8);
        *v130 = v131;
        v130[1] = v132;
        if ( *v132 != v131 )
          __fastfail(3u);
LABEL_301:
        *v132 = v130;
        *(_QWORD *)(v131 + 8) = v130;
LABEL_302:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
        goto LABEL_303;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
    }
    v122 = *(_DWORD *)(v121 + 128);
    if ( !v122 )
    {
      IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v121 + 64));
      goto LABEL_283;
    }
    v124 = (unsigned int)(v122 * HIDWORD(KeGetPcr()[1].LockArray)) / *(_DWORD *)(v121 + 132);
    v125 = v124;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v121 + 64) + 8 * v124));
    if ( !IoResource )
    {
      v126 = *(_DWORD *)(v121 + 128);
      v127 = 1;
      if ( v126 <= 1 )
      {
LABEL_282:
        v103 = v139;
        v120 = v107 - 15;
LABEL_283:
        if ( IoResource
          || *(_DWORD *)(v121 + 136) < *(_DWORD *)(v121 + 144)
          && (RaAttemptHighWaterMarkIncrease(v121),
              (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v121 + 64))) != 0LL) )
        {
          if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v121 + 192)) >= *(_DWORD *)(v121 + 36) )
            *(_DWORD *)(v121 + 36) = *(_DWORD *)(v121 + 192);
          v133 = IoResource + 1;
          v154 = IoResource + 1;
          v155 = IoResource + 50;
          v153 = IoResource + 66;
          v134 = (void *)*((_QWORD *)&IoResource[48].Next + 1);
          v135 = *((_DWORD *)&IoResource[47].Next + 2);
          LOBYTE(IoResource[2].Next) &= 0x9Cu;
          LODWORD(IoResource[1].Next) = 523124044;
          *((_QWORD *)&IoResource[1].Next + 1) = 0LL;
          WORD1(IoResource[2].Next) = -1;
          BYTE4(IoResource[2].Next) = -1;
          *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
          *((_QWORD *)&IoResource[7].Next + 1) = 0LL;
          IoResource[8].Next = 0LL;
          *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
          *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
          IoResource[10].Next = 0LL;
          IoResource[13].Next = 0LL;
          IoResource[11].Next = 0LL;
          *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
          *((_QWORD *)&IoResource[14].Next + 1) = 0LL;
          IoResource[15].Next = 0LL;
          *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
          *((_QWORD *)&IoResource[44].Next + 1) = 0LL;
          IoResource[45].Next = 0LL;
          *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
          IoResource[46].Next = 0LL;
          *((_DWORD *)&IoResource[47].Next + 2) = v135;
          *((_QWORD *)&IoResource[48].Next + 1) = v134;
          if ( v134 )
            memset(v134, 0, v135);
          LOBYTE(v133[1].Next) &= ~0x80u;
          BYTE1(v133[1].Next) &= 0xF0u;
          v133[48].Next = 0LL;
          *((_DWORD *)&v133[46].Next + 3) = 0;
          LODWORD(v133[2].Next) = 0;
          (*(void (__fastcall **)(_QWORD, _QWORD *, char *))(v7 + 392))(*(_QWORD *)(v7 + 384), v120, v152);
          goto LABEL_303;
        }
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v121, &v151);
        v129 = *(_QWORD **)(v121 + 16);
        *v107 = v121 + 8;
        v107[1] = v129;
        if ( *v129 != v121 + 8 )
          __fastfail(3u);
        *v129 = v107;
        *(_QWORD *)(v121 + 16) = v107;
        ++*(_DWORD *)(v121 + 24);
        *(_DWORD *)(v121 + 40) = 1;
        if ( (*((_BYTE *)v107 + 22) & 0x20) == 0 )
          goto LABEL_302;
        v130 = (_QWORD *)RaidGetQosEntryForDeviceEntry(v107);
        v131 = v121 + 264;
        v132 = *(_QWORD **)(v131 + 8);
        *v130 = v131;
        v130[1] = v132;
        if ( *v132 != v131 )
          __fastfail(3u);
        goto LABEL_301;
      }
      while ( !IoResource )
      {
        v128 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v121 + 64) + 8LL * ((v127 + v125) % v126)));
        v126 = *(_DWORD *)(v121 + 128);
        ++v127;
        IoResource = v128;
        if ( v127 >= v126 )
        {
          if ( !v128 )
            goto LABEL_282;
          break;
        }
      }
    }
    LODWORD(IoResource->Next) = v125;
    goto LABEL_282;
  }
LABEL_303:
  if ( v103 )
  {
    for ( j = RaidNormalizeDeviceQueue(v7 + 400); j; j = RaidNormalizeDeviceQueue(v7 + 400) )
    {
      if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v7 + 408)) )
        (*(void (__fastcall **)(_QWORD, __int64, char *))(v7 + 392))(*(_QWORD *)(v7 + 384), j - 120, v152);
    }
  }
}

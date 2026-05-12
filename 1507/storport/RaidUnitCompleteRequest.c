/*
 * XREFs of RaidUnitCompleteRequest @ 0x1C0002480
 * Callers:
 *     <none>
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0001670 (RaidNormalizeDeviceQueue.c)
 *     StorUnmapSenseInfo @ 0x1C0002D90 (StorUnmapSenseInfo.c)
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     StorpTelemetryCollectPerfData @ 0x1C0002EF0 (StorpTelemetryCollectPerfData.c)
 *     RiGetEnqueueReason @ 0x1C00030BC (RiGetEnqueueReason.c)
 *     StorSubmitIoGatewayItem @ 0x1C000319C (StorSubmitIoGatewayItem.c)
 *     RaUnitAsyncError @ 0x1C000EA18 (RaUnitAsyncError.c)
 *     RaidDmaPutScatterGatherList @ 0x1C000ED50 (RaidDmaPutScatterGatherList.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaFreeIoResource @ 0x1C0010C34 (RaFreeIoResource.c)
 *     RaidAdapterRestartQueues @ 0x1C0010C48 (RaidAdapterRestartQueues.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0024A58 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     StorRemoveEventQueueInternal @ 0x1C0026610 (StorRemoveEventQueueInternal.c)
 *     Template_pqccqqq @ 0x1C0026840 (Template_pqccqqq.c)
 *     RaidUnitDisablePendingTimer @ 0x1C002B7E0 (RaidUnitDisablePendingTimer.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C002E690 (RaidSrbExGetBidirectionalData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C002E7B4 (TranslateResultToScsiRequestBlock.c)
 *     RaidLogRequestComplete @ 0x1C0031F60 (RaidLogRequestComplete.c)
 *     Template_qcq @ 0x1C003458C (Template_qcq.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0034C7C (StorSetIoGatewayNotBusy.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C00352E0 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0035600 (StorEtwLogoRequestServiceTimeEventData.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0037E98 (StorpTelemetryCollectErrorData.c)
 */

void __fastcall RaidUnitCompleteRequest(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r15
  IRP *v6; // r14
  __int64 v7; // r12
  char v8; // al
  unsigned __int8 v9; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rdi
  __int64 Length; // rax
  _SECURITY_QUALITY_OF_SERVICE *v13; // rdi
  __int64 v14; // rbx
  char ImpersonationLevel; // al
  __int64 v16; // rcx
  _SECURITY_QUALITY_OF_SERVICE **v17; // rax
  BOOL v18; // edx
  char *v19; // rdi
  unsigned int v20; // edx
  char v21; // cl
  __int64 v22; // r8
  char v23; // r8
  unsigned __int8 v24; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v26; // bl
  __int64 v27; // r14
  bool v28; // bl
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned int v31; // eax
  IRP *v32; // rbx
  _IO_STACK_LOCATION *v33; // rax
  _IO_SECURITY_CONTEXT *v34; // r14
  _SECURITY_QUALITY_OF_SERVICE *v35; // rsi
  __int64 v36; // r13
  _SECURITY_QUALITY_OF_SERVICE *v37; // rdi
  _BYTE *v38; // rax
  char v39; // bl
  bool v40; // bl
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  void (__fastcall *v44)(__int64, _QWORD, bool); // rax
  __int64 v45; // rdx
  struct _MDL *v46; // rcx
  struct _MDL *v47; // rcx
  char v48; // al
  char v49; // r14
  __int64 v50; // rbx
  char v51; // si
  struct _KEVENT *v52; // rdi
  union _SLIST_HEADER *v53; // rcx
  struct _SLIST_ENTRY *v54; // rdx
  _QWORD *v55; // r15
  __int64 v56; // rax
  bool v57; // si
  KSPIN_LOCK *v58; // rbx
  unsigned int v59; // eax
  __int64 v60; // rdi
  unsigned __int64 v61; // r13
  KIRQL v62; // al
  __int64 v63; // r9
  KIRQL v64; // r15
  int v65; // eax
  int v66; // ecx
  _QWORD *v67; // r14
  _QWORD *v68; // r14
  __int64 v69; // rcx
  _QWORD *v70; // rax
  bool v71; // zf
  __int64 i; // rdi
  __int64 v73; // rcx
  __int64 v74; // r8
  _SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // rdi
  __int64 v76; // rcx
  _SECURITY_IMPERSONATION_LEVEL **v77; // rax
  int v78; // edx
  int v79; // ecx
  unsigned int v80; // r10d
  __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  __int64 v83; // r8
  int v84; // ecx
  int v85; // ecx
  unsigned int v86; // ebx
  unsigned int v87; // r11d
  __int64 v88; // rcx
  unsigned __int64 v89; // r9
  __int64 v90; // r10
  int v91; // ecx
  int v92; // ecx
  __int64 v93; // rax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v95; // rbx
  int v96; // edx
  int v97; // ecx
  int v98; // r9d
  __int64 v99; // rbx
  __int64 BidirectionalData; // rax
  struct _MDL *v101; // rcx
  _QWORD *v102; // rax
  _QWORD *v103; // rcx
  __int64 v104; // rdx
  unsigned int v105; // ecx
  unsigned int v106; // eax
  __int64 v107; // rdx
  unsigned int v108; // [rsp+54h] [rbp-ACh]
  BOOL v109; // [rsp+54h] [rbp-ACh]
  char v110; // [rsp+58h] [rbp-A8h]
  unsigned int v111; // [rsp+5Ch] [rbp-A4h]
  PIRP Irp; // [rsp+60h] [rbp-A0h]
  unsigned int v113; // [rsp+6Ch] [rbp-94h]
  int v114; // [rsp+78h] [rbp-88h]
  _QWORD *v115; // [rsp+80h] [rbp-80h]
  char v116[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v117; // [rsp+90h] [rbp-70h]
  __int64 v118; // [rsp+98h] [rbp-68h]
  __int64 v119; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE v120; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v121[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v123; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v124; // [rsp+110h] [rbp+10h] BYREF
  int v125; // [rsp+128h] [rbp+28h] BYREF
  __int64 v126; // [rsp+12Ch] [rbp+2Ch]
  int v127; // [rsp+134h] [rbp+34h]
  int v128; // [rsp+138h] [rbp+38h] BYREF
  __int64 v129; // [rsp+13Ch] [rbp+3Ch]
  int v130; // [rsp+144h] [rbp+44h]
  int v131; // [rsp+148h] [rbp+48h] BYREF
  __int64 v132; // [rsp+14Ch] [rbp+4Ch]
  int v133; // [rsp+154h] [rbp+54h]

  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(IRP **)(a1 + 152);
  v7 = *(_QWORD *)(a1 + 216);
  v8 = (*(_BYTE *)(a1 + 16) >> 2) & 7;
  v118 = a1;
  v110 = v8;
  v9 = *(_BYTE *)(v5 + 2);
  Irp = v6;
  if ( v9 == 40 )
  {
    v108 = *(_DWORD *)(v5 + 20);
    v117 = *(_QWORD *)(v5 + 104);
    v119 = a1 + 768;
    v111 = *(_DWORD *)(v5 + 32);
    v113 = *(_DWORD *)(v5 + 60);
    v114 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v117 = *(_QWORD *)(v5 + 56);
    v119 = *(_QWORD *)(v5 + 32);
    v108 = v9;
    v111 = *(unsigned __int8 *)(v5 + 8);
    v114 = *(_DWORD *)(v5 + 12);
    v113 = *(_DWORD *)(v5 + 16);
  }
  SecurityContext = v6->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) != 0 )
  {
    Length = SecurityQos[7].Length;
    v13 = SecurityQos + 4;
    v14 = *(_QWORD *)(v7 + 200) + 56 * Length;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 40), &LockHandle);
    ImpersonationLevel = v13[-3].ImpersonationLevel;
    if ( (ImpersonationLevel & 2) != 0 )
    {
      LOBYTE(v13[-3].ImpersonationLevel) = ImpersonationLevel & 0xFD;
      v16 = *(_QWORD *)&v13->Length;
      v17 = *(_SECURITY_QUALITY_OF_SERVICE ***)&v13->ContextTrackingMode;
      v18 = *(_QWORD *)v14 == (_QWORD)v13;
      if ( *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)&v13->Length + 8LL) != v13 || *v17 != v13 )
        __fastfail(3u);
      *v17 = (_SECURITY_QUALITY_OF_SERVICE *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( *(_QWORD *)(v14 + 16) )
      {
        p_ImpersonationLevel = &v13[1].ImpersonationLevel;
        if ( *(_SECURITY_IMPERSONATION_LEVEL **)(v14 + 32) == p_ImpersonationLevel )
          *(_QWORD *)(v14 + 32) = *(_QWORD *)p_ImpersonationLevel;
        v76 = *(_QWORD *)p_ImpersonationLevel;
        v77 = (_SECURITY_IMPERSONATION_LEVEL **)*((_QWORD *)p_ImpersonationLevel + 1);
        if ( *(_SECURITY_IMPERSONATION_LEVEL **)(*(_QWORD *)p_ImpersonationLevel + 8LL) != p_ImpersonationLevel
          || *v77 != p_ImpersonationLevel )
        {
          __fastfail(3u);
        }
        *v77 = (_SECURITY_IMPERSONATION_LEVEL *)v76;
        *(_QWORD *)(v76 + 8) = v77;
      }
      else if ( v18 )
      {
        if ( *(_QWORD *)v14 == v14 )
          *(_DWORD *)(v14 + 48) = -1;
        else
          *(_DWORD *)(v14 + 48) = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v125 = 0;
      v126 = 0LL;
      v127 = 0;
      IoGetActivityIdIrp(v6, &v125);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v79, v78, (unsigned int)&v125, a4, 4);
    }
    if ( *(char *)(v7 + 145) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1432)) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 1440) + 56LL)) )
        RaidUnitDisablePendingTimer(v7);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1432));
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
      StorEtwIORequestServiceTimeEventData(a1, 0LL, 0LL);
    if ( *(_DWORD *)(v7 + 1508) && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
      StorEtwLogoRequestServiceTimeEventData(a1, 0LL, 0LL);
  }
  if ( *(_BYTE *)(v5 + 2) != 40 )
  {
    v19 = (char *)(v5 + 72);
    goto LABEL_18;
  }
  v19 = 0LL;
  if ( *(_DWORD *)(v5 + 20) )
    goto LABEL_18;
  v80 = *(_DWORD *)(v5 + 56);
  a4 = 0;
  if ( !v80 )
    goto LABEL_18;
  while ( 1 )
  {
    v81 = *(unsigned int *)(v5 + 4LL * a4 + 120);
    if ( (unsigned int)v81 < 0x80 )
      goto LABEL_192;
    v82 = *(unsigned int *)(v5 + 16);
    if ( (unsigned int)v81 >= (unsigned int)v82 )
      goto LABEL_192;
    v83 = (unsigned int)v81;
    v84 = *(_DWORD *)(v81 + v5) - 64;
    if ( !v84 )
      break;
    v85 = v84 - 1;
    if ( v85 )
    {
      if ( v85 == 1 && v83 + 40 <= v82 )
      {
        if ( *(_DWORD *)(v83 + v5 + 12) )
          v19 = (char *)(v83 + v5 + 32);
        goto LABEL_18;
      }
    }
    else if ( v83 + 56 <= v82 )
    {
      goto LABEL_189;
    }
LABEL_192:
    if ( ++a4 >= v80 )
      goto LABEL_18;
  }
  if ( v83 + 40 > v82 )
    goto LABEL_192;
LABEL_189:
  if ( *(_BYTE *)(v83 + v5 + 10) )
    v19 = (char *)(v83 + v5 + 24);
LABEL_18:
  v20 = v108;
  if ( *(_DWORD *)(v7 + 1764) )
  {
    if ( v19 )
    {
      v21 = *v19;
      if ( !v108 )
      {
        if ( (unsigned __int8)(v21 - 8) <= 0x3Au
          && (v22 = 0x400200500000005LL, _bittest64(&v22, (unsigned __int8)(v21 - 8)))
          || (unsigned __int8)(v21 + 120) <= 0x22u
          && (v74 = 0x500000205LL, _bittest64(&v74, (unsigned __int8)(v21 + 120))) )
        {
          StorpTelemetryCollectPerfData(a1, v5, v7, a4, v21);
          v20 = v108;
        }
      }
    }
  }
  if ( g_StorpTraceLoggingErrorDataEnabled && v19 && !v20 && ((*v19 - 8) & 0x5D) == 0 )
  {
    v23 = *(_BYTE *)(v5 + 3);
    if ( *(_BYTE *)(v5 + 2) != 40 )
    {
      LOBYTE(v20) = *(_BYTE *)(v5 + 4);
      goto LABEL_30;
    }
    if ( !*(_DWORD *)(v5 + 20) )
    {
      v86 = *(_DWORD *)(v5 + 56);
      v87 = 0;
      if ( !v86 )
        goto LABEL_30;
      while ( 1 )
      {
        v88 = *(unsigned int *)(v5 + 4LL * v87 + 120);
        if ( (unsigned int)v88 >= 0x80 )
        {
          v89 = *(unsigned int *)(v5 + 16);
          if ( (unsigned int)v88 < (unsigned int)v89 )
          {
            v90 = (unsigned int)v88;
            v91 = *(_DWORD *)(v88 + v5) - 64;
            if ( v91 )
            {
              v92 = v91 - 1;
              if ( v92 )
              {
                if ( v92 == 1 && v90 + 40 <= v89 )
                {
LABEL_202:
                  LOBYTE(v20) = *(_BYTE *)(v90 + v5 + 8);
                  goto LABEL_30;
                }
              }
              else if ( v90 + 56 <= v89 )
              {
                goto LABEL_202;
              }
            }
            else if ( v90 + 40 <= v89 )
            {
              goto LABEL_202;
            }
          }
        }
        if ( ++v87 >= v86 )
          goto LABEL_30;
      }
    }
    LOBYTE(v20) = 0;
LABEL_30:
    v24 = v23 & 0x3F;
    if ( v23 < 0 || (_BYTE)v20 == 2 || v24 > 1u && v24 != 18 )
      StorpTelemetryCollectErrorData(v7, a1, v5);
  }
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v7, *(unsigned int *)(a1 + 732));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  v26 = CurrentStackLocation->Parameters.QueryFile.FileInformationClass & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v27 = *(_QWORD *)(v7 + 24);
  LOBYTE(CurrentStackLocation) = v26;
  v28 = (v26 & 2) != 0;
  if ( ((unsigned __int8)CurrentStackLocation & 1) != 0 && (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v7) )
  {
    v93 = *(_QWORD *)(v7 + 1440);
    if ( *(_QWORD *)(v93 + 96) )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v93 + 96));
      PoFxIdleComponent(**(_QWORD **)(v7 + 1440), 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 1432));
  }
  if ( v28 && *(_QWORD *)(v27 + 5088) )
    RaidAdapterPoFxIdleComponent(v27, 0LL, 0LL);
  v29 = KeQueryHighestNodeNumber() + 1;
  if ( *(_DWORD *)(v7 + 328) == 256 )
  {
    v30 = v111;
    v31 = v111 >> 8;
  }
  else
  {
    v31 = v111 / *(_DWORD *)(v7 + 328);
    v30 = v111;
  }
  if ( v31 >= v29 )
    v31 = v29 - 1;
  ExpInterlockedPushEntrySList(
    (PSLIST_HEADER)(*(_QWORD *)(v7 + 256) + ((unsigned __int64)v31 << 6)),
    (PSLIST_ENTRY)(*(_QWORD *)(v7 + 320) + 16 * v30));
  v109 = 0;
  if ( (v114 & 0x102) != 0x102 && (v114 & 0x80010) == 0 )
  {
    if ( v108 > 0x20 || (v73 = 0x1000D0000LL, !_bittest64(&v73, v108)) )
      v109 = 1;
  }
  if ( (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
  {
    if ( v19 && *v19 == 59 && (v19[1] & 0x1F) == 0xF )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v7 + 8));
      if ( WorkItem )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 624));
        IoQueueWorkItem(WorkItem, RaidUnitIdentityUpdateWorkRoutine, CriticalWorkQueue, WorkItem);
      }
      else
      {
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v7 + 24) + 32LL), BusRelations);
      }
    }
    v32 = Irp;
    Irp->IoStatus.Information = v113;
    v33 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = 0;
    v34 = v33->Parameters.Create.SecurityContext;
    if ( BYTE2(v34->SecurityQos) == 40 )
      v35 = v34[4].SecurityQos;
    else
      v35 = v34[2].SecurityQos;
    v36 = *(_QWORD *)&v35[18].Length;
    if ( BYTE2(v34->SecurityQos) == 40 )
      v37 = v34[4].SecurityQos;
    else
      v37 = v34[2].SecurityQos;
    if ( (v37[1].ImpersonationLevel & 2) != 0 )
    {
      v95 = *(_QWORD *)(v36 + 200) + 56LL * v37[7].Length;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v95 + 40), &v124);
      StorRemoveEventQueueInternal(v95, &v37[4]);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v124);
      v32 = Irp;
      if ( StorEtwLoggingEnabled )
      {
        v131 = 0;
        v132 = 0LL;
        v133 = 0;
        IoGetActivityIdIrp(Irp, &v131);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
          Template_qcq(v97, v96, (unsigned int)&v131, v98, 4);
      }
      if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v36) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v36 + 1440) + 56LL), 0xFFFFFFFF) == 1 )
          RaidUnitDisablePendingTimer(v36);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v36 + 1432));
      }
    }
    StorUnmapSenseInfo(v35, *(_QWORD *)(*(_QWORD *)(v36 + 24) + 8LL));
    if ( BYTE2(v34->SecurityQos) == 40 )
    {
      if ( (v35[1].ImpersonationLevel & 0x40) != 0 )
      {
        TranslateResultToScsiRequestBlock(*(_QWORD *)&v35[61].ImpersonationLevel, v34);
        *(_QWORD *)(*(_QWORD *)&v35[61].ImpersonationLevel + 48LL) = *(_QWORD *)&v35[14].Length;
        *(_QWORD *)(*(_QWORD *)&v35[61].ImpersonationLevel + 24LL) = *(_QWORD *)&v35[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v35[61].ImpersonationLevel + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v35[61].ImpersonationLevel + 40LL) = 0LL;
        v32->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v35[61].ImpersonationLevel;
        LOBYTE(v35[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v35[61].ImpersonationLevel = 0LL;
      }
      else
      {
        v34[4].SecurityQos = 0LL;
        *(_QWORD *)&v34[2].DesiredAccess = *(_QWORD *)&v35[14].ContextTrackingMode;
        v34[4].AccessState = 0LL;
        v99 = *(_QWORD *)&v35[15].ImpersonationLevel;
        if ( v99 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v34);
          if ( BidirectionalData )
            *(_QWORD *)(BidirectionalData + 16) = v99;
        }
        v32 = Irp;
      }
    }
    else
    {
      v34[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v35[14].Length;
      v34[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)&v35[14].ContextTrackingMode;
      v34[2].AccessState = 0LL;
      *(_QWORD *)&v34[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v35[8].ContextTrackingMode )
    {
      v38 = *(_BYTE **)&v35[13].ImpersonationLevel;
      if ( v38[2] == 40 )
        v39 = v38[24];
      else
        v39 = v38[12];
      v40 = (v39 & 0x40) == 0;
      if ( RaidVerifierEnabled )
      {
        v101 = *(struct _MDL **)&v35[9].ImpersonationLevel;
        if ( v101 )
        {
          MmProtectMdlSystemAddress(v101, 4u);
          MmUnlockPages(*(PMDL *)&v35[9].ImpersonationLevel);
          IoFreeMdl(*(PMDL *)&v35[9].ImpersonationLevel);
          *(_QWORD *)&v35[9].ImpersonationLevel = 0LL;
        }
      }
      v41 = (__int64 *)(*(_QWORD *)&v35[17].ImpersonationLevel + 696LL);
      if ( *(_QWORD *)&v35[17].ImpersonationLevel != -696LL )
      {
        v42 = *v41;
        if ( *v41 )
        {
          v43 = *(_QWORD *)(v42 + 8);
          if ( v43 )
          {
            v44 = *(void (__fastcall **)(__int64, _QWORD, bool))(v43 + 96);
            if ( v44 )
              v44(v42, *(_QWORD *)&v35[8].ContextTrackingMode, v40);
          }
        }
      }
      v45 = *(_QWORD *)&v35[12].Length;
      *(_QWORD *)&v35[8].ContextTrackingMode = 0LL;
      *(_QWORD *)&v35[11].ImpersonationLevel = 0LL;
      if ( v45 )
      {
        RaidDmaPutScatterGatherList(*(_QWORD *)&v35[17].ImpersonationLevel + 696LL, v45, 0LL);
        *(_QWORD *)&v35[12].Length = 0LL;
      }
      v32 = Irp;
    }
    v46 = *(struct _MDL **)&v35[8].Length;
    if ( v46 && (v35[1].ImpersonationLevel & 1) != 0 )
    {
      IoFreeMdl(v46);
      LOBYTE(v35[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v35[8].Length = 0LL;
    }
    v47 = *(struct _MDL **)&v35[10].ContextTrackingMode;
    if ( v47 )
    {
      MmUnlockPages(v47);
      IoFreeMdl(*(PMDL *)&v35[10].ContextTrackingMode);
      *(_QWORD *)&v35[10].ContextTrackingMode = 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 624), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v36 + 160), 0, 0);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
        v7,
        v32,
        v32->IoStatus.Status);
    }
    if ( (qword_1C0044010 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(v7 + 24), v32, v5);
    RaidCompleteRequestEx(v32);
    v48 = 1;
  }
  else
  {
    v48 = RaUnitAsyncError(v7, a1);
  }
  if ( v110 != 3 && v48 )
  {
    v49 = 0;
    v50 = *(_QWORD *)(v7 + 24) + 768LL;
    v115 = 0LL;
    v51 = 0;
    v52 = 0LL;
    if ( (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 24) + 960LL)) <= *(_DWORD *)(v50 + 32)
      && *(int *)(v50 + 40) > 0 )
    {
      StorSetIoGatewayNotBusy(v50);
      v49 = 1;
    }
    if ( !*(_DWORD *)(v50 + 192) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v50, &v120);
      if ( (*(_QWORD *)(v50 + 200) || *(_BYTE *)(v50 + 208)) && !*(_DWORD *)(v50 + 192) )
      {
        v51 = *(_BYTE *)(v50 + 208);
        v52 = *(struct _KEVENT **)(v50 + 200);
        *(_BYTE *)(v50 + 208) = 0;
        *(_QWORD *)(v50 + 200) = 0LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v120);
    }
    if ( *(_DWORD *)(v50 + 24) && *(int *)(v50 + 40) <= 0 && *(int *)(v50 + 44) <= 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v50, &v120);
      if ( *(int *)(v50 + 40) <= 0 && *(int *)(v50 + 44) <= 0 && *(_DWORD *)(v50 + 24) )
      {
        v102 = *(_QWORD **)(v50 + 8);
        v103 = (_QWORD *)(v50 + 8);
        v104 = *v102;
        if ( v102[1] != v50 + 8 || *(_QWORD **)(v104 + 8) != v102 )
          __fastfail(3u);
        *v103 = v104;
        *(_QWORD *)(v104 + 8) = v103;
        v115 = v102;
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 192));
        v105 = *(_DWORD *)(v50 + 192);
        v106 = *(_DWORD *)(v50 + 36);
        if ( v105 > v106 )
          v106 = *(_DWORD *)(v50 + 192);
        *(_DWORD *)(v50 + 36) = v106;
        if ( v105 == *(_DWORD *)(v50 + 28) )
        {
          *(_DWORD *)(v50 + 40) = 1;
          v49 = 0;
        }
        --*(_DWORD *)(v50 + 24);
      }
      else
      {
        RaFreeIoResource(v50 + 64, v118 - 16);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v120);
      v55 = v115;
      if ( v115 )
        RaidZeroXrb(v118, v107, *(unsigned int *)(v118 + 728), *(_QWORD *)(v118 + 744));
    }
    else
    {
      v53 = (union _SLIST_HEADER *)(v50 + 64);
      v54 = (struct _SLIST_ENTRY *)(v118 - 16);
      if ( *(_DWORD *)(v50 + 128) )
        v53 = *(union _SLIST_HEADER **)(v53->Alignment + 8LL * LODWORD(v54->Next));
      ExpInterlockedPushEntrySList(v53, v54);
      v55 = 0LL;
    }
    if ( v52 )
      KeSetEvent(v52, 0, 0);
    if ( v51 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v50 + 240))(
        *(_QWORD *)(v50 + 232),
        *(_QWORD *)(v50 + 216),
        *(_QWORD *)(v50 + 224));
    if ( v55 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)(v55[8] + 32LL) + 392LL))(
        *(_QWORD *)(*(_QWORD *)(v55[8] + 32LL) + 384LL),
        v55 - 15,
        v116);
    if ( v49 )
      RaidAdapterRestartQueues(*(_QWORD *)(v7 + 24));
    v56 = *(_QWORD *)(v7 + 24);
    v57 = 0;
    if ( v56 )
    {
      v58 = *(KSPIN_LOCK **)(v7 + 200);
      if ( v58 )
      {
        if ( *(_QWORD *)(v56 + 5000) )
        {
          v59 = KeQueryHighestNodeNumber() + 1;
          if ( v59 )
          {
            v60 = v59;
            v61 = -1LL;
            do
            {
              KeAcquireInStackQueuedSpinLock(v58 + 5, &v123);
              if ( (KSPIN_LOCK *)*v58 != v58 && *(_QWORD *)(*v58 + 40) < v61 )
                v61 = *(_QWORD *)(*v58 + 40);
              KeReleaseInStackQueuedSpinLock(&v123);
              v58 += 7;
              --v60;
            }
            while ( v60 );
            if ( v61 != -1LL && v61 )
              v57 = KeQueryUnbiasedInterruptTime() - v61 > *(_QWORD *)(*(_QWORD *)(v7 + 24) + 5000LL);
          }
        }
      }
    }
    v62 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 472));
    if ( !v109 && !*(_DWORD *)(v7 + 432) && !*(_DWORD *)(v7 + 440) && !*(_DWORD *)(v7 + 420) && !*(_DWORD *)(v7 + 416) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 476));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v7 + 472), v62);
      return;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v7 + 472), v62);
    v64 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 472));
    if ( v109 )
      *(_BYTE *)(v7 + 438) = 0;
    --*(_DWORD *)(v7 + 476);
    v65 = *(_DWORD *)(v7 + 432);
    v66 = *(_DWORD *)(v7 + 476);
    if ( v65 )
      *(_DWORD *)(v7 + 432) = v65 - 1;
    if ( !v66 && *(_DWORD *)(v7 + 440) )
      KeSetEvent((PRKEVENT)(v7 + 448), 0, 0);
    v67 = *(_QWORD **)(v7 + 496);
    if ( v67 == (_QWORD *)(v7 + 496) )
    {
      v68 = (_QWORD *)(v7 + 480);
      if ( (_QWORD *)*v68 != v68 )
      {
        v67 = (_QWORD *)*v68;
        goto LABEL_127;
      }
LABEL_155:
      v67 = 0LL;
    }
    else
    {
LABEL_127:
      if ( v67 )
      {
        *((_BYTE *)v67 + 22) ^= (*((_BYTE *)v67 + 22) ^ (16 * v57)) & 0x10;
        if ( (unsigned int)RiGetEnqueueReason(v7 + 400, v67, 0LL, v63) )
          goto LABEL_155;
        v69 = *v67;
        v70 = (_QWORD *)v67[1];
        if ( *(_QWORD **)(*v67 + 8LL) != v67 || (_QWORD *)*v70 != v67 )
          __fastfail(3u);
        *v70 = v69;
        *(_QWORD *)(v69 + 8) = v70;
        ++*(_DWORD *)(v7 + 476);
        if ( (*((_BYTE *)v67 + 22) & 6) != 0 )
          --*(_DWORD *)(v7 + 420);
        else
          --*(_DWORD *)(v7 + 416);
        if ( (*((_BYTE *)v67 + 22) & 8) != 0 )
          --*(_DWORD *)(v7 + 424);
        v71 = (*((_BYTE *)v67 + 22) & 1) == 0;
        *((_BYTE *)v67 + 20) = 0;
        if ( !v71 )
          *(_BYTE *)(v7 + 438) = 1;
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 472), v64);
    if ( v67 )
    {
      if ( StorEtwLoggingEnabled )
      {
        v128 = 0;
        v129 = 0LL;
        v130 = 0;
        IoGetActivityIdIrp(v67 - 15, &v128);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
          Template_pqccqqq(
            *(_DWORD *)(v7 + 416) + *(_DWORD *)(v7 + 420),
            ((*((_BYTE *)v67 + 22) & 6) != 0) + 1,
            (unsigned int)&v128,
            v7 + 400,
            ((*((_BYTE *)v67 + 22) & 6) != 0) + 1,
            5,
            0,
            *(_BYTE *)(v7 + 416) + *(_BYTE *)(v7 + 420),
            *(_DWORD *)(v7 + 476));
      }
      if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v7 + 408)) )
        (*(void (__fastcall **)(_QWORD, _QWORD *, _BYTE *))(v7 + 392))(*(_QWORD *)(v7 + 384), v67 - 15, v121);
    }
    if ( v109 )
    {
      for ( i = RaidNormalizeDeviceQueue(v7 + 400); i; i = RaidNormalizeDeviceQueue(v7 + 400) )
      {
        if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(v7 + 408)) )
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v7 + 392))(*(_QWORD *)(v7 + 384), i - 120, v121);
      }
    }
  }
}

/*
 * XREFs of WmiQueryTraceInformation @ 0x140504D90
 * Callers:
 *     WdipSemGetLoggerDroppedEventCount @ 0x140504D40 (WdipSemGetLoggerDroppedEventCount.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406A10C4 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140505BCC (EtwQueryTraceHandleByLoggerName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r14
  __int32 v8; // ecx
  unsigned int *v9; // rax
  unsigned int v10; // esi
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 *v16; // rax
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int32 v23; // ecx
  int v24; // ecx
  __int64 SiloDriverState; // r12
  unsigned int v26; // r15d
  unsigned int j; // esi
  unsigned int *v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // ecx
  NTSTATUS result; // eax
  __int64 v32; // r14
  unsigned int *v33; // rax
  __int64 v34; // r15
  unsigned int v35; // eax
  __int16 v36; // cx
  ULONG64 v37; // rcx
  ULONG64 v38; // rdx
  unsigned int *v39; // r12
  ULONG i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v42; // rax
  NTSTATUS v43; // [rsp+24h] [rbp-44h]
  unsigned int v44; // [rsp+28h] [rbp-40h]
  unsigned int v45; // [rsp+28h] [rbp-40h]
  __int64 v46; // [rsp+38h] [rbp-30h] BYREF
  __int64 v47; // [rsp+40h] [rbp-28h]

  v6 = TraceInformationLength;
  v43 = 0;
  if ( RequiredLength )
    *RequiredLength = 0;
  if ( TraceInformationClass > TraceHandleByNameClass )
  {
    v8 = TraceInformationClass - 8;
    if ( !v8 )
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v9 = EtwpAcquireLoggerContextByLoggerId(0LL, *(_DWORD *)Buffer, 0);
      if ( !v9 )
        return -1073741275;
      v10 = v9[64];
      EtwpReleaseLoggerContext(0LL, v9, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v10;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v43;
    }
    v11 = v8 - 1;
    if ( !v11 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *RequiredLength = 32;
      if ( TraceInformationLength < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v46 = *(_QWORD *)Buffer;
      v45 = (unsigned __int16)v46;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v42 = EtwpAcquireLoggerContextByLoggerId(0LL, v45, 0);
      if ( v42 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v42[1];
        *((_DWORD *)TraceInformation + 2) = v42[60];
        *((_DWORD *)TraceInformation + 3) = v42[63];
        *((_DWORD *)TraceInformation + 4) = v42[3];
        *((_DWORD *)TraceInformation + 5) = v42[56];
        *((_DWORD *)TraceInformation + 7) = v42[54];
        *((_DWORD *)TraceInformation + 6) = v42[57];
        EtwpReleaseLoggerContext(0LL, v42, 0);
      }
      else
      {
        v43 = -1073741162;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v43;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v16 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_23;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        if ( RequiredLength )
          *RequiredLength = 120;
        if ( TraceInformationLength != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
        *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_1406A4480;
        *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_1406A4490;
        *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_1406A44A0;
        *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_1406A44B0;
        *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_1406A44C0;
        *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_1406A44D0;
        *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
        return 0;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v16 = (__int64 *)&EtwpFltIoNotifyRoutines;
        goto LABEL_23;
      }
      if ( v15 == 2 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v16 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_23:
        *(_QWORD *)TraceInformation = v16;
        return 0;
      }
      return -1073741821;
    }
    v34 = 0LL;
    v47 = 0LL;
    if ( TraceInformationLength != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v44 = *(_DWORD *)Buffer;
    v39 = EtwpAcquireLoggerContextByLoggerId(0LL, *(_DWORD *)Buffer, 0);
    if ( !v39 )
      return -1073741275;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v34 += *(_QWORD *)(*(_QWORD *)(KeGetPrcb(i) + 24536) + 8LL * v44 + 576);
      v47 = v34;
    }
    EtwpReleaseLoggerContext(0LL, v39, 0);
LABEL_79:
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v34;
LABEL_81:
    if ( RequiredLength )
      *RequiredLength = 8;
    return v43;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass )
    {
      v17 = TraceInformationClass - 1;
      if ( !v17 )
      {
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v35 = *(_DWORD *)Buffer;
        if ( *(_DWORD *)Buffer >= 0x40u )
          return -1073741816;
        v46 = 0LL;
        v36 = v35;
        if ( !v35 )
          v36 = -1;
        LOWORD(v46) = v36;
        if ( TraceInformation )
          *(_QWORD *)TraceInformation = v46;
        if ( RequiredLength )
          *RequiredLength = 8;
        return v43;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v23 = v19 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( !v24 )
              return -1073741821;
            if ( v24 == 1 )
            {
              if ( TraceInformationLength < 8 || !TraceInformation )
                return -1073741820;
              SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
              v26 = 0;
              for ( j = 1; j < 0x40; ++j )
              {
                v28 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, j, 0);
                if ( v28 )
                {
                  if ( 8 * (unsigned __int64)(v26 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v26) = j;
                  EtwpReleaseLoggerContext(SiloDriverState, v28, 0);
                  ++v26;
                }
              }
              PsDereferenceMonitorContextServerSilo(SiloDriverState);
              v29 = 8LL * v26;
              v30 = 0;
              if ( v29 > v6 )
                v30 = 261;
              v43 = v30;
              if ( RequiredLength )
                *RequiredLength = v29;
              return v43;
            }
            return -1073741821;
          }
          if ( TraceInformationLength != 8 )
            return -1073741820;
          v32 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
          v33 = EtwpAcquireLoggerContextByLoggerId(v32, 1u, 0);
          if ( !v33 )
          {
            PsDereferenceMonitorContextServerSilo(v32);
            return -1073741275;
          }
          v34 = *v33;
          v46 = v34;
          EtwpReleaseLoggerContext(v32, v33, 0);
          PsDereferenceMonitorContextServerSilo(v32);
          goto LABEL_79;
        }
        if ( TraceInformationLength < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v20 = *((_QWORD *)Buffer + 1);
        v46 = v20;
        if ( !v20 || v20 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = BYTE2(v20);
LABEL_36:
        if ( RequiredLength )
          *RequiredLength = 4;
        return v43;
      }
      if ( TraceInformationLength < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v21 = *((_QWORD *)Buffer + 1);
      v46 = v21;
      if ( !v21 || v21 == 0xFFFFFFFF )
        return -1073741816;
      v22 = HIDWORD(v21);
    }
    else
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v22 = *((_QWORD *)Buffer + 1);
      v46 = v22;
      if ( !v22 || v22 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v22) = (unsigned __int16)v22;
      if ( (unsigned __int16)v22 >= 0x40u )
        return -1073741816;
    }
    if ( TraceInformation )
      *(_DWORD *)TraceInformation = v22;
    goto LABEL_36;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer )
  {
    v37 = *((_QWORD *)Buffer + 1);
    if ( (v37 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v38 = v37 + *(unsigned __int16 *)Buffer;
    if ( v38 > MmUserProbeAddress || v38 < v37 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( TraceInformationLength != 8 )
    return -1073741820;
  v46 = 0LL;
  result = EtwQueryTraceHandleByLoggerName(Buffer, &v46);
  v43 = result;
  if ( result >= 0 )
  {
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v46;
    goto LABEL_81;
  }
  return result;
}

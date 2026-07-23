/*
 * XREFs of WmiQueryTraceInformation @ 0x1404C71EC
 * Callers:
 *     WdipSemGetLoggerDroppedEventCount @ 0x1404C719C (WdipSemGetLoggerDroppedEventCount.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406E8624 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1404C6DC8 (EtwQueryTraceHandleByLoggerName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v10; // edx
  unsigned int *v11; // rax
  unsigned int v12; // esi
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int64 v16; // rax
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int32 v25; // ecx
  int v26; // ecx
  __int64 v27; // r13
  unsigned int v28; // r15d
  unsigned int j; // esi
  unsigned int *v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // ecx
  NTSTATUS result; // eax
  _QWORD *v34; // rax
  unsigned int *v35; // rax
  __int64 v36; // r14
  unsigned int v37; // eax
  __int16 v38; // cx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r15
  _QWORD *v42; // rax
  unsigned int v43; // edx
  unsigned int *v44; // r12
  ULONG i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v47; // rax
  unsigned int *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // r8
  NTSTATUS v52; // [rsp+24h] [rbp-44h]
  unsigned int v53; // [rsp+28h] [rbp-40h]
  unsigned int v54; // [rsp+28h] [rbp-40h]
  __int64 v55; // [rsp+38h] [rbp-30h] BYREF
  __int64 v56; // [rsp+40h] [rbp-28h]

  v6 = TraceInformationLength;
  v52 = 0;
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
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      v11 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[106], v10, 0);
      if ( !v11 )
        return -1073741275;
      v12 = v11[60];
      EtwpReleaseLoggerContext(v11, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v12;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v52;
    }
    v17 = v8 - 1;
    if ( !v17 )
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
      v55 = *(_QWORD *)Buffer;
      v54 = (unsigned __int16)v55;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v47 = PsGetCurrentServerSiloGlobals();
      v48 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v47[106], v54, 0);
      v51 = (__int64)v48;
      if ( v48 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v48[1];
        *((_DWORD *)TraceInformation + 2) = v48[56];
        *((_DWORD *)TraceInformation + 3) = v48[59];
        *((_DWORD *)TraceInformation + 4) = v48[3];
        *((_DWORD *)TraceInformation + 5) = v48[52];
        *((_DWORD *)TraceInformation + 7) = v48[50];
        *((_DWORD *)TraceInformation + 6) = v48[53];
        EtwpReleaseLoggerContext(v48, 0);
      }
      else
      {
        v52 = -1073741162;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v49, v51, v50);
      return v52;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v22 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_36;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( RequiredLength )
          *RequiredLength = 120;
        if ( TraceInformationLength != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
        *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_1406EC6F0;
        *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_1406EC700;
        *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_1406EC710;
        *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_1406EC720;
        *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_1406EC730;
        *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_1406EC740;
        *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
        return 0;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v22 = (__int64 *)&EtwpFltIoNotifyRoutines;
        goto LABEL_36;
      }
      if ( v21 == 2 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v22 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_36:
        *(_QWORD *)TraceInformation = v22;
        return 0;
      }
      return -1073741821;
    }
    v41 = 0LL;
    v56 = 0LL;
    if ( TraceInformationLength != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v53 = *(_DWORD *)Buffer;
    v42 = PsGetCurrentServerSiloGlobals();
    v44 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v42[106], v43, 0);
    if ( !v44 )
      return -1073741275;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v41 += *(_QWORD *)(*(_QWORD *)(KeGetPrcb(i) + 24536) + 8LL * v53 + 576);
      v56 = v41;
    }
    EtwpReleaseLoggerContext(v44, 0);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v41;
    goto LABEL_79;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass )
    {
      v13 = TraceInformationClass - 1;
      if ( !v13 )
      {
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v37 = *(_DWORD *)Buffer;
        if ( *(_DWORD *)Buffer >= 0x40u )
          return -1073741816;
        v55 = 0LL;
        v38 = v37;
        if ( !v37 )
          v38 = -1;
        LOWORD(v55) = v38;
        if ( TraceInformation )
          *(_QWORD *)TraceInformation = v55;
        if ( RequiredLength )
          *RequiredLength = 8;
        return v52;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v25 = v15 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
              return -1073741821;
            if ( v26 == 1 )
            {
              if ( TraceInformationLength < 8 || !TraceInformation )
                return -1073741820;
              v27 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
              v28 = 0;
              for ( j = 1; j < 0x40; ++j )
              {
                v30 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v27, j, 0);
                if ( v30 )
                {
                  if ( 8 * (unsigned __int64)(v28 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v28) = j;
                  EtwpReleaseLoggerContext(v30, 0);
                  ++v28;
                }
              }
              v31 = 8LL * v28;
              v32 = 0;
              if ( v31 > v6 )
                v32 = 261;
              v52 = v32;
              if ( RequiredLength )
                *RequiredLength = v31;
              return v52;
            }
            return -1073741821;
          }
          if ( TraceInformationLength != 8 )
            return -1073741820;
          v34 = PsGetCurrentServerSiloGlobals();
          v35 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v34[106], 1u, 0);
          if ( !v35 )
            return -1073741275;
          v36 = *v35;
          v55 = v36;
          EtwpReleaseLoggerContext(v35, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v36;
LABEL_79:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v52;
        }
        if ( TraceInformationLength < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v16 = *((_QWORD *)Buffer + 1);
        v55 = v16;
        if ( !v16 || v16 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = BYTE2(v16);
LABEL_24:
        if ( RequiredLength )
          *RequiredLength = 4;
        return v52;
      }
      if ( TraceInformationLength < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v23 = *((_QWORD *)Buffer + 1);
      v55 = v23;
      if ( !v23 || v23 == 0xFFFFFFFF )
        return -1073741816;
      v24 = HIDWORD(v23);
    }
    else
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v24 = *((_QWORD *)Buffer + 1);
      v55 = v24;
      if ( !v24 || v24 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v24) = (unsigned __int16)v24;
      if ( (unsigned __int16)v24 >= 0x40u )
        return -1073741816;
    }
    if ( TraceInformation )
      *(_DWORD *)TraceInformation = v24;
    goto LABEL_24;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer )
  {
    v39 = *((_QWORD *)Buffer + 1);
    if ( (v39 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v40 = v39 + *(unsigned __int16 *)Buffer;
    if ( v40 > 0x7FFFFFFF0000LL || v40 < v39 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TraceInformationLength != 8 )
    return -1073741820;
  v55 = 0LL;
  result = EtwQueryTraceHandleByLoggerName((__int64)Buffer, &v55);
  v52 = result;
  if ( result >= 0 )
  {
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v55;
    goto LABEL_79;
  }
  return result;
}

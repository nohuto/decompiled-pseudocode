/*
 * XREFs of WmiQueryTraceInformation @ 0x1405526DC
 * Callers:
 *     WdipSemGetLoggerDroppedEventCount @ 0x14055268C (WdipSemGetLoggerDroppedEventCount.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140721358 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405522A8 (EtwQueryTraceHandleByLoggerName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  unsigned int v8; // r13d
  __int32 v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rsi
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 *v17; // rax
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int32 v24; // ecx
  int v25; // ecx
  unsigned int j; // esi
  unsigned int *v27; // rax
  unsigned __int64 v28; // rdx
  int v29; // ecx
  NTSTATUS result; // eax
  unsigned int *v31; // rax
  __int64 v32; // r14
  __int64 v33; // r12
  char v34; // r14
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rax
  char v38; // r14
  __int64 v39; // rcx
  ULONG64 v40; // rcx
  ULONG64 v41; // rdx
  __int64 v42; // r12
  unsigned int *v43; // r8
  unsigned int i; // edx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v46; // rax
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  NTSTATUS v49; // [rsp+24h] [rbp-44h]
  unsigned int v50; // [rsp+28h] [rbp-40h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-30h] BYREF
  __int64 v53; // [rsp+40h] [rbp-28h]

  v6 = TraceInformationLength;
  v8 = 0;
  v49 = 0;
  if ( RequiredLength )
    *RequiredLength = 0;
  if ( TraceInformationClass > TraceHandleByNameClass )
  {
    v9 = TraceInformationClass - 8;
    if ( !v9 )
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v10 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(*(_DWORD *)Buffer, 0);
      if ( !v10 )
        return -1073741275;
      LODWORD(v11) = v10[64];
      EtwpReleaseLoggerContext(v10, 0);
      goto LABEL_9;
    }
    v12 = v9 - 1;
    if ( !v12 )
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
      v52 = *(_QWORD *)Buffer;
      v51 = (unsigned __int16)v52;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v46 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(v51, 0);
      if ( v46 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v46[1];
        *((_DWORD *)TraceInformation + 2) = v46[60];
        *((_DWORD *)TraceInformation + 3) = v46[63];
        *((_DWORD *)TraceInformation + 4) = v46[3];
        *((_DWORD *)TraceInformation + 5) = v46[56];
        *((_DWORD *)TraceInformation + 7) = v46[54];
        *((_DWORD *)TraceInformation + 6) = v46[57];
        EtwpReleaseLoggerContext(v46, 0);
      }
      else
      {
        v49 = -1073741162;
      }
      v47 = KeGetCurrentThread();
      v48 = v47->KernelApcDisable + 1;
      v47->KernelApcDisable = v48;
      if ( !v48
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
        && !v47->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v49;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v17 = &EtwpDiskIoNotifyRoutines;
        goto LABEL_24;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        if ( RequiredLength )
          *RequiredLength = 120;
        if ( TraceInformationLength != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)TraceInformation = *(_OWORD *)EtwpAllNotifyRoutines;
        *((_OWORD *)TraceInformation + 1) = *(_OWORD *)off_140724680;
        *((_OWORD *)TraceInformation + 2) = *(_OWORD *)&off_140724690;
        *((_OWORD *)TraceInformation + 3) = *(_OWORD *)&off_1407246A0;
        *((_OWORD *)TraceInformation + 4) = *(_OWORD *)off_1407246B0;
        *((_OWORD *)TraceInformation + 5) = *(_OWORD *)&off_1407246C0;
        *((_OWORD *)TraceInformation + 6) = *(_OWORD *)off_1407246D0;
        *((_QWORD *)TraceInformation + 14) = EtwpTraceRedirectedIo;
        return 0;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v17 = (__int64 *)&EtwpFltIoNotifyRoutines;
        goto LABEL_24;
      }
      if ( v16 == 2 )
      {
        if ( RequiredLength )
          *RequiredLength = 8;
        if ( TraceInformationLength != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v17 = (__int64 *)&EtwpWdfNotifyRoutines;
LABEL_24:
        *(_QWORD *)TraceInformation = v17;
        return 0;
      }
      return -1073741821;
    }
    v42 = 0LL;
    v53 = 0LL;
    if ( TraceInformationLength != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v50 = *(_DWORD *)Buffer;
    v43 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(*(_DWORD *)Buffer, 0);
    if ( !v43 )
      return -1073741275;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      v42 += *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[i] + 24536) + 8LL * v50 + 576);
      v53 = v42;
    }
    EtwpReleaseLoggerContext(v43, 0);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v42;
    goto LABEL_103;
  }
  if ( TraceInformationClass != TraceHandleByNameClass )
  {
    if ( TraceInformationClass == TraceIdClass )
    {
      if ( TraceInformationLength != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v37 = *((_QWORD *)Buffer + 1);
      v52 = v37;
      if ( !v37 || v37 == 0xFFFFFFFFLL )
        return -1073741816;
      v11 = (unsigned __int16)v37;
      if ( (unsigned __int16)v37 >= 0x40u )
        return -1073741816;
      v38 = 1;
      ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[(unsigned __int16)v37], 1u);
      v39 = WmipLoggerContext[v11];
      if ( (v39 & 1) != 0 || !PsEqualCurrentServerSilo(*(_QWORD *)(v39 + 912)) )
      {
        ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v11], 1u);
        v38 = 0;
      }
      else
      {
        ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v11], 1u);
      }
      if ( !v38 )
        return -1073741816;
LABEL_9:
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v11;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v49;
    }
    v18 = TraceInformationClass - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v24 = v20 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
              return -1073741821;
            if ( v25 == 1 )
            {
              if ( TraceInformationLength < 8 || !TraceInformation )
                return -1073741820;
              for ( j = 1; j < 0x40; ++j )
              {
                v27 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(j, 0);
                if ( v27 )
                {
                  if ( 8 * (unsigned __int64)(v8 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v8) = j;
                  EtwpReleaseLoggerContext(v27, 0);
                  ++v8;
                }
              }
              v28 = 8LL * v8;
              v29 = 0;
              if ( v28 > v6 )
                v29 = 261;
              v49 = v29;
              if ( RequiredLength )
                *RequiredLength = v28;
              return v49;
            }
            return -1073741821;
          }
          if ( TraceInformationLength != 8 )
            return -1073741820;
          v31 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(1u, 0);
          if ( !v31 )
            return -1073741275;
          v32 = *v31;
          v52 = v32;
          EtwpReleaseLoggerContext(v31, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v32;
LABEL_103:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v49;
        }
        if ( TraceInformationLength < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v21 = *((_QWORD *)Buffer + 1);
        v52 = v21;
        if ( !v21 || v21 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = BYTE2(v21);
      }
      else
      {
        if ( TraceInformationLength < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v22 = *((_QWORD *)Buffer + 1);
        v52 = v22;
        if ( !v22 || v22 == 0xFFFFFFFF )
          return -1073741816;
        v23 = HIDWORD(v22);
        if ( TraceInformation )
          *(_DWORD *)TraceInformation = v23;
      }
      if ( RequiredLength )
        *RequiredLength = 4;
      return v49;
    }
    if ( TraceInformationLength != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v33 = *(unsigned int *)Buffer;
    if ( (unsigned int)v33 >= 0x40 )
      return -1073741816;
    v34 = 1;
    ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v33], 1u);
    v35 = WmipLoggerContext[v33];
    if ( (v35 & 1) != 0 || !PsEqualCurrentServerSilo(*(_QWORD *)(v35 + 912)) )
    {
      ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v33], 1u);
      v34 = 0;
    }
    else
    {
      ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v33], 1u);
    }
    if ( !v34 )
      return -1073741816;
    v52 = 0LL;
    v36 = v33;
    if ( !(_DWORD)v33 )
      v36 = -1;
    LOWORD(v52) = v36;
LABEL_101:
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v52;
    goto LABEL_103;
  }
  if ( KeGetCurrentThread()->PreviousMode && *(_WORD *)Buffer )
  {
    v40 = *((_QWORD *)Buffer + 1);
    if ( (v40 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v41 = v40 + *(unsigned __int16 *)Buffer;
    if ( v41 > MmUserProbeAddress || v41 < v40 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( TraceInformationLength != 8 )
    return -1073741820;
  v52 = 0LL;
  result = EtwQueryTraceHandleByLoggerName((const UNICODE_STRING *)Buffer, &v52);
  v49 = result;
  if ( result >= 0 )
    goto LABEL_101;
  return result;
}

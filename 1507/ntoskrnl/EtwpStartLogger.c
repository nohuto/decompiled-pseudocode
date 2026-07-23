/*
 * XREFs of EtwpStartLogger @ 0x1404D66D0
 * Callers:
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     EtwpStartTrace @ 0x140559FF0 (EtwpStartTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404ACCCC (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404D2714 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404D3424 (EtwpFreeSecurityDescriptor.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 *     EtwpLookupLoggerIdByName @ 0x1404D630C (EtwpLookupLoggerIdByName.c)
 *     ExUuidCreate @ 0x1404EBB90 (ExUuidCreate.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140524604 (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14052489C (EtwpFreeSystemLoggerIndex.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14054A368 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14054B128 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14054B188 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x14054B1C0 (EtwpGetFlagExtension.c)
 *     EtwpInitializeTimeStamp @ 0x140559E58 (EtwpInitializeTimeStamp.c)
 *     EtwpValidateFlagExtension @ 0x14055A8BC (EtwpValidateFlagExtension.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     EtwpAllocateTimeStampIndex @ 0x14055C52C (EtwpAllocateTimeStampIndex.c)
 *     EtwpUpdatePerProcessTracing @ 0x1406E28A8 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406E6870 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // r15d
  unsigned int v4; // esi
  int FileName; // ebx
  ACCESS_MASK v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // r13
  char *StartContext; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _WORD *v22; // r15
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  int v42; // ebx
  BOOLEAN v43; // al
  bool v44; // zf
  unsigned __int8 TimeStampIndex; // al
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  signed __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // eax
  void *v53; // rcx
  void *v54; // rcx
  int v55; // ecx
  int v56; // r8d
  __int64 v57; // r8
  unsigned int v58; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v59; // [rsp+4Ch] [rbp-75h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-71h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-61h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+68h] [rbp-59h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-51h] BYREF
  __int64 v64; // [rsp+80h] [rbp-41h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+88h] [rbp-39h] BYREF
  __int64 v66; // [rsp+98h] [rbp-29h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-19h] BYREF
  UUID Uuid; // [rsp+D8h] [rbp+17h] BYREF

  v59 = 8;
  SecurityDescriptor = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v2 = *(_DWORD *)(a1 + 64);
  v3 = 4;
  v4 = v2 & 0x99ECE5FF;
  if ( (*(_BYTE *)(a1 + 64) & 3) == 0 && ((v2 & 8) != 0 || (v2 & 4) != 0) )
    v4 = *(_DWORD *)(a1 + 64) & 0x99ECE5FE | 1;
  if ( (v4 & 0x40000) != 0 )
    v4 |= 0x80u;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x1000000) != 0 )
    v4 &= ~0x1000000u;
  if ( (v4 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a1 + 136) || (v4 & 0x4000F) != 0 )
      goto LABEL_152;
    if ( (v4 & 0x100) != 0 )
      v4 &= ~0x100u;
    if ( *(_DWORD *)(a1 + 68) )
      *(_DWORD *)(a1 + 68) = 0;
    if ( *(_DWORD *)(a1 + 76) )
      *(_DWORD *)(a1 + 76) = 0;
  }
  if ( (v4 & 3) == 3
    || (v4 & 0xC000) == 0xC000
    || (v4 & 0x700) == 0 && !*(_QWORD *)(a1 + 136)
    || (v4 & 6) == 6
    || (v4 & 2) != 0 && !*(_DWORD *)(a1 + 60)
    || (v4 & 0x20) != 0 && (!*(_DWORD *)(a1 + 60) || (v2 & 0xC) != 0)
    || (v4 & 0x40) != 0
    && ((*(_DWORD *)(a1 + 112) & 2) == 0
     || (v4 & 0x402) == 0 && ((v4 & 0x100) == 0 || *(_QWORD *)(a1 + 136) || (v4 & 0x200) != 0))
    || (v4 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_152;
  }
  if ( (v4 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 136)
      || (v4 & 2) != 0
      || !*(_DWORD *)(a1 + 60)
      || (*(_DWORD *)(a1 + 112) & 2) != 0
      || (v2 & 0x2000000) != 0 )
    {
      goto LABEL_152;
    }
    v39 = *(_QWORD *)(a1 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v39 )
      v39 = *(_QWORD *)(a1 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v39 )
      goto LABEL_152;
    v40 = *(_QWORD *)(a1 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v40 )
      v40 = *(_QWORD *)(a1 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v40 || (v4 & 4) != 0 )
      goto LABEL_152;
  }
  if ( (v2 & 0x3000000) == 0x3000000 || (v2 & 0x4000000) != 0 || (v2 & 0x10000) != 0 )
    goto LABEL_152;
  FileName = EtwpValidateFlagExtension(a1);
  if ( FileName < 0 )
    goto LABEL_240;
  v6 = 128;
  if ( (v4 & 0x100) != 0 )
    v6 = 160;
  DesiredAccess = v6;
  if ( *(_WORD *)(a1 + 128) )
    DesiredAccess = v6 | 0x40;
  if ( !*(_WORD *)(a1 + 144) || !*(_QWORD *)(a1 + 152) )
    goto LABEL_152;
  FileName = EtwpCaptureString((unsigned __int16 *)(a1 + 144), &DestinationString);
  if ( FileName )
  {
LABEL_240:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v55,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v56,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v4);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(&DestinationString, &v58) )
  {
LABEL_193:
    FileName = -1073741771;
    goto LABEL_240;
  }
  v7 = *(_QWORD *)(a1 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v7 )
  {
    Uuid = *(UUID *)(a1 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Uuid);
    if ( FileName < 0 )
      goto LABEL_240;
  }
  if ( (v4 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode && (unsigned int)MmGetSessionId(KeGetCurrentThread()->ApcState.Process) )
      v4 |= 0x400000u;
    else
      v4 |= 0x800000u;
  }
  v8 = *(_QWORD *)&Uuid.Data1;
  v9 = *(_QWORD *)Uuid.Data4;
  v10 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v10 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v10 )
    goto LABEL_155;
  v11 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v11 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v11 )
  {
LABEL_155:
    RtlFreeAnsiString(&DestinationString);
    v41 = v8 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v41 )
      v41 = v9 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v41 )
    {
      v42 = 2;
      v58 = 2;
      v59 = 1;
      v43 = RtlCreateUnicodeString(&DestinationString, L"Circular Kernel Context Logger");
    }
    else
    {
      v42 = 0;
      v59 = 0;
      v58 = 0;
      v43 = RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger");
    }
    if ( !v43 )
      goto LABEL_215;
    v4 |= 0x80u;
    if ( (v4 & 0x1000000) == 0 )
    {
      v44 = _InterlockedCompareExchange64(&WmipLoggerContext[v42], (signed __int64)WmipLoggerContext + 1, 1LL) == 1;
      goto LABEL_162;
    }
    goto LABEL_152;
  }
  v12 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v12 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v12 )
  {
    v58 = 1;
    if ( !EtwpGetFlagExtension(a1, 1LL) )
    {
LABEL_198:
      v44 = _InterlockedCompareExchange64(&qword_140327868, (signed __int64)WmipLoggerContext + 1, 1LL) == 1;
LABEL_162:
      if ( v44 )
      {
        v3 = v58;
        goto LABEL_58;
      }
      goto LABEL_193;
    }
    if ( (v4 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_215;
      v59 = 0;
      goto LABEL_198;
    }
LABEL_152:
    FileName = -1073741811;
    goto LABEL_240;
  }
  v13 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v13 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v13 )
  {
    if ( (v4 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v4 |= 0x80u;
        if ( PsIsCurrentThreadInServerSilo() )
        {
          PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v64, v47);
          v48 = v64;
          if ( *(_DWORD *)(v64 + 392) == 64 )
          {
            v58 = 4;
            do
            {
              v50 = _InterlockedCompareExchange64(&WmipLoggerContext[v3], (signed __int64)WmipLoggerContext + 1, 1LL);
              v3 = v58;
              if ( v50 == 1 )
                break;
              v3 = v58 + 1;
              v58 = v3;
            }
            while ( v3 < 0x40 );
            v49 = v64;
            if ( v3 != 64 )
            {
              *(_DWORD *)(v48 + 392) = v3;
              *(_WORD *)(v49 + 126) = v3;
              PsDereferenceMonitorContextServerSilo(v49);
              goto LABEL_58;
            }
            FileName = -1073741670;
          }
          else
          {
            FileName = -1073741771;
            v49 = v64;
          }
          PsDereferenceMonitorContextServerSilo(v49);
          goto LABEL_240;
        }
        v58 = 3;
        v44 = _InterlockedCompareExchange64(qword_140327878, (signed __int64)WmipLoggerContext + 1, 1LL) == 1;
        goto LABEL_162;
      }
LABEL_215:
      FileName = -1073741801;
      goto LABEL_240;
    }
    goto LABEL_152;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v51 = v8 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v8 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v51 = v9 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v51 )
      goto LABEL_193;
  }
  v14 = 4;
  while ( 1 )
  {
    v15 = EtwpAcquireLoggerContextByLoggerId(v14, 0);
    if ( v15 )
      break;
LABEL_52:
    if ( ++v14 >= 0x40 )
      goto LABEL_53;
  }
  v38 = *(_QWORD *)(v15 + 292) - v8;
  if ( !v38 )
    v38 = *(_QWORD *)(v15 + 300) - v9;
  if ( v38 )
  {
    EtwpReleaseLoggerContext((unsigned int *)v15, 0);
    goto LABEL_52;
  }
  EtwpReleaseLoggerContext((unsigned int *)v15, 0);
LABEL_53:
  if ( v14 < 0x40 )
    goto LABEL_193;
  v58 = 4;
  do
  {
    v16 = _InterlockedCompareExchange64(&WmipLoggerContext[v3], (signed __int64)WmipLoggerContext + 1, 1LL);
    v3 = v58;
    if ( v16 == 1 )
      break;
    v3 = v58 + 1;
    v58 = v3;
  }
  while ( v3 < 0x40 );
  if ( v3 >= 0x40 )
  {
    FileName = -1073741670;
    goto LABEL_240;
  }
LABEL_58:
  v17 = v3;
  ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v3], 1u);
  EtwpGetSecurityDescriptorByGuid(&Uuid.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  if ( FileName < 0 )
    goto LABEL_239;
  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 && v59 == 8 )
  {
    FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
    if ( FileName < 0 )
      goto LABEL_239;
    v52 = 2;
    v59 = 2;
    do
    {
      if ( !_bittest(&EtwpActiveSystemLoggers, v52) )
        break;
      ++v52;
    }
    while ( v52 < 8 );
    v59 = v52;
    if ( v52 == 8 )
    {
      FileName = -1073741670;
      goto LABEL_239;
    }
  }
  StartContext = EtwpInitLoggerContext((const void **)&DestinationString, v4);
  RtlFreeAnsiString(&DestinationString);
  if ( !StartContext )
  {
    FileName = -1073741801;
LABEL_239:
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v17], 1u);
    WmipLoggerContext[v17] = 1LL;
    goto LABEL_240;
  }
  *(UUID *)(StartContext + 292) = Uuid;
  *((_DWORD *)StartContext + 77) = *(_DWORD *)(a1 + 60);
  if ( *(_DWORD *)(a1 + 80) )
    *((_DWORD *)StartContext + 208) |= 0x10u;
  *((_DWORD *)StartContext + 54) = *(_DWORD *)(a1 + 40);
  v19 = *(_DWORD *)(a1 + 68);
  if ( v19 )
  {
    *((_DWORD *)StartContext + 56) = v19;
  }
  else if ( (v4 & 0x100) != 0 )
  {
    *((_DWORD *)StartContext + 56) = (v4 & 0x10) != 0 ? 1000 : 1;
  }
  v20 = *(_DWORD *)(a1 + 76);
  if ( v20 && (*((_DWORD *)StartContext + 56) || v20 < 0) )
    *(_DWORD *)(a1 + 76) = 0;
  v21 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)StartContext = v3;
  *((_DWORD *)StartContext + 57) = v21;
  if ( *(_WORD *)(a1 + 128) )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      FileName = EtwpCaptureString((unsigned __int16 *)(a1 + 128), &UnicodeString);
      if ( FileName < 0 )
        goto LABEL_228;
    }
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
  {
    *((_DWORD *)StartContext + 78) = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 96) = 0;
  }
  if ( (*((_DWORD *)StartContext + 3) & 8) == 0 )
  {
    v22 = StartContext + 168;
    *(UNICODE_STRING *)(StartContext + 168) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    goto LABEL_74;
  }
  *(UNICODE_STRING *)(StartContext + 184) = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v22 = StartContext + 168;
  FileName = EtwpGenerateFileName(StartContext + 184, StartContext + 312, StartContext + 168);
  if ( FileName < 0 )
    goto LABEL_228;
LABEL_74:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(
               KeGetCurrentThread(),
               &ClientSecurityQos,
               0,
               (PSECURITY_CLIENT_CONTEXT)StartContext + 10);
  if ( FileName < 0 )
    goto LABEL_228;
  if ( (*((_DWORD *)StartContext + 3) & 0x100) != 0 )
    *((_DWORD *)StartContext + 208) |= 8u;
  else
    *((_DWORD *)StartContext + 208) &= ~8u;
  if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    *((_DWORD *)StartContext + 208) |= 2u;
  if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
    *((_DWORD *)StartContext + 208) |= 1u;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000) != 0 )
    *((_DWORD *)StartContext + 208) |= 0x4000u;
  EtwpInitializeTimeStamp(StartContext);
  v23 = v59;
  if ( v59 < 8 )
  {
    TimeStampIndex = EtwpAllocateTimeStampIndex(*((unsigned int *)StartContext + 54));
    if ( TimeStampIndex == 2 )
    {
      FileName = -1073741670;
      goto LABEL_228;
    }
    *((_DWORD *)StartContext + 3) |= 0x2000000u;
    StartContext[834] = v23;
    if ( (unsigned int)v23 <= 1 )
      *((_DWORD *)StartContext + 208) |= 0x20u;
    EtwpSystemLogger[2 * v23] = v58;
    word_140327822[2 * v23] = TimeStampIndex;
    _interlockedbittestandset(&EtwpActiveSystemLoggers, v23);
  }
  FileName = EtwpCheckForStackTracingExtension(a1, StartContext);
  if ( FileName < 0 )
    goto LABEL_228;
  v24 = *(_DWORD *)(a1 + 52);
  if ( v24 )
    *((_DWORD *)StartContext + 60) = v24;
  v25 = *(_DWORD *)(a1 + 56);
  if ( v25 )
    *((_DWORD *)StartContext + 63) = v25;
  v26 = *(_DWORD *)(a1 + 48);
  if ( v26 )
  {
    if ( v26 > 0x4000 )
      *(_DWORD *)(a1 + 48) = 0x4000;
    *((_DWORD *)StartContext + 1) = *(_DWORD *)(a1 + 48) << 10;
  }
  if ( *v22 )
  {
    _InterlockedOr((volatile signed __int32 *)StartContext + 209, 1u);
    *((_QWORD *)StartContext + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile((__int64)StartContext, 0);
    if ( FileName < 0 )
    {
LABEL_228:
      if ( (*((_DWORD *)StartContext + 3) & 0x2000000) != 0 )
        EtwpFreeSystemLoggerIndex(v59);
      if ( (*((_DWORD *)StartContext + 208) & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)StartContext + 106), 0);
      if ( (*((_DWORD *)StartContext + 208) & 0x2000) != 0 )
        _InterlockedDecrement(&dword_1403565B0);
      RtlFreeAnsiString((PUNICODE_STRING)(StartContext + 168));
      RtlFreeAnsiString((PUNICODE_STRING)(StartContext + 184));
      v53 = (void *)*((_QWORD *)StartContext + 102);
      if ( v53 )
        ZwClose(v53);
      v54 = (void *)*((_QWORD *)StartContext + 114);
      if ( v54 )
        PspDereferenceSiloObject(v54);
      ExFreePoolWithTag(StartContext, 0);
      goto LABEL_239;
    }
  }
  v27 = *((unsigned int *)StartContext + 1);
  if ( (unsigned int)v27 < 0x1000 && (*v22 || (*((_DWORD *)StartContext + 3) & 0x400) != 0) )
    *((_DWORD *)StartContext + 208) |= 0x1000u;
  v28 = 0xFFFF;
  if ( (unsigned __int64)(v27 - 72) < 0xFFFF )
    v28 = v27 - 72;
  *((_DWORD *)StartContext + 2) = v28 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool();
  if ( FileName < 0 )
    goto LABEL_243;
  v29 = *((_DWORD *)StartContext + 77);
  if ( !v29 || (*((_DWORD *)StartContext + 3) & 0x2000) != 0 )
    v30 = 10485760LL;
  else
    v30 = (unsigned __int64)v29 << 20;
  v31 = (unsigned int)(2 * *((_DWORD *)StartContext + 1) * *((_DWORD *)StartContext + 63));
  if ( v30 > v31 )
    v31 = v30;
  *((_QWORD *)StartContext + 54) = v31;
  FileName = ObLogSecurityDescriptor(SecurityDescriptor, &v66, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v66 )
      *((_QWORD *)StartContext + 100) = v66 + 15;
    else
      *((_QWORD *)StartContext + 100) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_243:
    EtwpFreeTraceBufferPool(StartContext);
    goto LABEL_228;
  }
  _InterlockedAdd(&dword_14032780C, 1u);
  ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v17], 1u);
  if ( (*((_DWORD *)StartContext + 3) & 0x400) != 0 )
  {
LABEL_111:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
      EtwpEventWriteTemplateSession(v32, &ETW_EVENT_START_TRACE, StartContext);
    KeWaitForSingleObject(StartContext + 648, Executive, 0, 0, 0LL);
    WmipLoggerContext[v17] = (__int64)StartContext;
    EtwpSendSessionNotification((__int64)StartContext, 5u, 0);
    if ( (*((_DWORD *)StartContext + 3) & 0x2000000) != 0 )
    {
      LOBYTE(v33) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(StartContext, a1, v33);
      if ( FileName < 0
        || (v46 = 5LL * v59,
            EtwpObjectTypeFilter[2 * v46] = 1,
            dword_1403271C4[v46] = 42,
            FileName = EtwpUpdateLoggerGroupMasks(StartContext, a1),
            FileName < 0) )
      {
        *((_DWORD *)StartContext + 14) = FileName;
        EtwpStopLoggerInstance((unsigned __int64)StartContext);
        if ( (*((_DWORD *)StartContext + 3) & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a1, (__int64)StartContext, v33, v34);
          EtwpReleaseLoggerContext((unsigned int *)StartContext, 1);
          goto LABEL_246;
        }
      }
    }
    v35 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)(StartContext + 292);
    if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)(StartContext + 292) )
      v35 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(StartContext + 300);
    if ( v35 )
    {
      v36 = *(_QWORD *)&CritSecGuid.Data1 - *(_QWORD *)(StartContext + 292);
      if ( *(_QWORD *)&CritSecGuid.Data1 == *(_QWORD *)(StartContext + 292) )
        v36 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(StartContext + 300);
      if ( v36 )
        goto LABEL_120;
      v57 = 1LL;
    }
    else
    {
      v57 = 0LL;
    }
    FileName = EtwpUpdatePerProcessTracing(a1, *(unsigned int *)StartContext, v57);
LABEL_120:
    EtwpGetLoggerInfoFromContext(a1, (__int64)StartContext, v33, v34);
    EtwpReleaseLoggerContext((unsigned int *)StartContext, 1);
    return (unsigned int)FileName;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  FileName = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)EtwpLogger,
               StartContext);
  if ( FileName >= 0 )
  {
    ZwClose(ThreadHandle);
    FileName = KeWaitForSingleObject(StartContext + 472, Executive, 0, 0, 0LL);
    goto LABEL_111;
  }
  ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v17], 1u);
LABEL_246:
  EtwpFreeLoggerContext(StartContext);
  return (unsigned int)FileName;
}

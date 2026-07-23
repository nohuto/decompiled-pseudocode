/*
 * XREFs of EtwpStartLogger @ 0x1404CB420
 * Callers:
 *     EtwpStartTrace @ 0x1404CA194 (EtwpStartTrace.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 * Callees:
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpAllocateWorkerContext @ 0x1400F47E4 (EtwpAllocateWorkerContext.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeSecurityDescriptor @ 0x14046D564 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14046E010 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExUuidCreate @ 0x140487608 (ExUuidCreate.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x14049D7EC (EtwpFreeTraceBufferPool.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     EtwpValidateFlagExtension @ 0x1404CA6D8 (EtwpValidateFlagExtension.c)
 *     EtwpLookupLoggerIdByName @ 0x1404CA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1404CAAAC (EtwpInitializeTimeStamp.c)
 *     EtwpCheckForStackTracingExtension @ 0x1404CAB7C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x1404CABB4 (EtwpGetFlagExtension.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404CABF0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpCaptureString @ 0x1404CC270 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpSendSessionNotification @ 0x1404CC658 (EtwpSendSessionNotification.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1405001FC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14050C618 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpAllocateTimeStampIndex @ 0x14050C6D8 (EtwpAllocateTimeStampIndex.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14050CFA8 (EtwpFreeSystemLoggerIndex.c)
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140663790 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // r12d
  unsigned int v6; // esi
  int FileName; // ebx
  ACCESS_MASK v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned int *v18; // rax
  signed __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r15
  unsigned int *inited; // rdi
  unsigned int v23; // eax
  int v24; // eax
  _WORD *v25; // r15
  __int64 v26; // r12
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r15
  _QWORD *CurrentServerSilo; // rsi
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned int v46; // ebx
  BOOLEAN v47; // al
  bool v48; // zf
  unsigned __int8 TimeStampIndex; // al
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // eax
  void *v53; // rcx
  int v54; // ecx
  int v55; // r8d
  __int64 v56; // r8
  unsigned int v57; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v58; // [rsp+44h] [rbp-85h]
  __int64 v59; // [rsp+48h] [rbp-81h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-79h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+60h] [rbp-69h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-49h] BYREF
  PVOID StartContext; // [rsp+90h] [rbp-39h] BYREF
  __int64 v66; // [rsp+98h] [rbp-31h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-21h] BYREF
  UUID Uuid; // [rsp+D8h] [rbp+Fh] BYREF

  v59 = a1;
  v58 = 8;
  SecurityDescriptor = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = 4;
  v6 = v4 & 0x99ECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v6 = *(_DWORD *)(a2 + 64) & 0x99ECE5FE | 1;
  if ( (v6 & 0x40000) != 0 )
    v6 |= 0x80u;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x1000000) != 0 )
    v6 &= ~0x1000000u;
  if ( (v6 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0x4000F) != 0 )
      goto LABEL_147;
    if ( (v6 & 0x100) != 0 )
      v6 &= ~0x100u;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v6 & 3) == 3
    || (v6 & 0xC000) == 0xC000
    || (v6 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v6 & 6) == 6
    || (v6 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v6 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v4 & 0xC) != 0)
    || (v6 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0
     || (v6 & 0x402) == 0 && ((v6 & 0x100) == 0 || *(_QWORD *)(a2 + 136) || (v6 & 0x200) != 0))
    || (v6 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_147;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_147;
    }
    v43 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v43 )
      v43 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v43 )
      goto LABEL_147;
    v44 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v44 )
      v44 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v44 || (v6 & 4) != 0 )
      goto LABEL_147;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 || (v4 & 0x10000) != 0 )
    goto LABEL_147;
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
    goto LABEL_238;
  v8 = 128;
  if ( (v6 & 0x100) != 0 )
    v8 = 160;
  DesiredAccess = v8;
  if ( *(_WORD *)(a2 + 128) )
    DesiredAccess = v8 | 0x40;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_147;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_238:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v54,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v55,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v6);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(&DestinationString, &v57) )
  {
LABEL_198:
    FileName = -1073741771;
    goto LABEL_238;
  }
  v9 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v9 )
  {
    Uuid = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Uuid);
    if ( FileName < 0 )
      goto LABEL_238;
  }
  if ( (v6 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode && (unsigned int)MmGetSessionId(KeGetCurrentThread()->ApcState.Process) )
      v6 |= 0x400000u;
    else
      v6 |= 0x800000u;
  }
  v10 = *(_QWORD *)&Uuid.Data1;
  v11 = a1 + 912;
  v12 = *(_QWORD *)Uuid.Data4;
  v13 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v13 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v13 )
    goto LABEL_161;
  v14 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v14 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v14 )
  {
LABEL_161:
    RtlFreeAnsiString(&DestinationString);
    v45 = v10 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v45 )
      v45 = v12 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v45 )
    {
      v46 = 2;
      v57 = 2;
      v58 = 1;
      v47 = RtlCreateUnicodeString(&DestinationString, L"Circular Kernel Context Logger");
    }
    else
    {
      v46 = 0;
      v58 = 0;
      v57 = 0;
      v47 = RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger");
    }
    if ( !v47 )
      goto LABEL_212;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 && !PsIsCurrentThreadInServerSilo() )
    {
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v46), v11 | 1, 1LL) == 1;
      goto LABEL_169;
    }
    goto LABEL_147;
  }
  v15 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v15 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v15 )
  {
    v57 = 1;
    if ( !EtwpGetFlagExtension(a2, 1) )
      goto LABEL_204;
    if ( (v6 & 0x1000000) == 0 && !PsIsCurrentThreadInServerSilo() )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_212;
      v58 = 0;
LABEL_204:
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v11 | 1, 1LL) == 1;
LABEL_169:
      if ( v48 )
      {
        v5 = v57;
        goto LABEL_58;
      }
      goto LABEL_198;
    }
LABEL_147:
    FileName = -1073741811;
    goto LABEL_238;
  }
  v16 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v16 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v16 )
  {
    v57 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1;
        goto LABEL_169;
      }
LABEL_212:
      FileName = -1073741801;
      goto LABEL_238;
    }
    goto LABEL_147;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v51 = v10 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v10 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v51 = v12 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v51 )
      goto LABEL_198;
  }
  v17 = 4;
  while ( 1 )
  {
    v18 = EtwpAcquireLoggerContextByLoggerId(v59, v17, 0);
    if ( v18 )
      break;
LABEL_52:
    if ( ++v17 >= 0x40 )
      goto LABEL_53;
  }
  v42 = *(_QWORD *)(v18 + 73) - v10;
  if ( !v42 )
    v42 = *(_QWORD *)(v18 + 75) - v12;
  if ( v42 )
  {
    EtwpReleaseLoggerContext(v59, v18, 0);
    goto LABEL_52;
  }
  EtwpReleaseLoggerContext(v59, v18, 0);
LABEL_53:
  if ( v17 < 0x40 )
    goto LABEL_198;
  v57 = 4;
  do
  {
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v5), v11 | 1, 1LL);
    v5 = v57;
    if ( v19 == 1 )
      break;
    v5 = v57 + 1;
    v57 = v5;
  }
  while ( v5 < 0x40 );
  if ( v5 >= 0x40 )
  {
    FileName = -1073741670;
    goto LABEL_238;
  }
LABEL_58:
  v20 = v5;
  v21 = v59;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v59 + 8LL * v5 + 400), 1u);
  EtwpGetSecurityDescriptorByGuid(&Uuid.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  if ( FileName < 0 )
    goto LABEL_237;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 || v58 != 8 )
    goto LABEL_60;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    FileName = -1073741727;
    goto LABEL_237;
  }
  FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid, 128LL, 0LL);
  if ( FileName < 0 )
    goto LABEL_237;
  v52 = 2;
  v58 = 2;
  do
  {
    if ( !_bittest(&EtwpActiveSystemLoggers, v52) )
      break;
    ++v52;
  }
  while ( v52 < 8 );
  v58 = v52;
  if ( v52 == 8 )
  {
    FileName = -1073741670;
    goto LABEL_237;
  }
LABEL_60:
  if ( PsIsCurrentThreadInServerSilo() )
    v6 |= 0x10000000u;
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v6);
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_237:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v21 + 8 * v20 + 400), 1u);
    *(_QWORD *)(v21 + 8 * v20 + 912) = 1LL;
    goto LABEL_238;
  }
  *(UUID *)(inited + 73) = Uuid;
  inited[77] = *(_DWORD *)(a2 + 60);
  if ( *(_DWORD *)(a2 + 80) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x10u);
    v5 = v57;
  }
  inited[54] = *(_DWORD *)(a2 + 40);
  v23 = *(_DWORD *)(a2 + 68);
  if ( v23 )
  {
    inited[56] = v23;
  }
  else if ( (v6 & 0x100) != 0 )
  {
    inited[56] = (v6 & 0x10) != 0 ? 1000 : 1;
  }
  v24 = *(_DWORD *)(a2 + 76);
  if ( v24 && (inited[56] || v24 < 0) )
    *(_DWORD *)(a2 + 76) = 0;
  inited[57] = *(_DWORD *)(a2 + 76);
  *inited = v5;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
      if ( FileName < 0 )
      {
        LODWORD(v26) = v58;
        goto LABEL_228;
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[78] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  if ( (inited[3] & 8) == 0 )
  {
    v25 = inited + 42;
    *(UNICODE_STRING *)(inited + 42) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    goto LABEL_76;
  }
  *(UNICODE_STRING *)(inited + 46) = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v25 = inited + 42;
  FileName = EtwpGenerateFileName(
               (unsigned __int16 *)inited + 92,
               (volatile signed __int32 *)inited + 78,
               (UNICODE_STRING *)(inited + 42));
  if ( FileName < 0 )
  {
LABEL_252:
    LODWORD(v26) = v58;
    goto LABEL_227;
  }
LABEL_76:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)inited + 10);
  if ( FileName < 0 )
    goto LABEL_252;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 208, 0xFFFFFFF7);
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
  if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited);
  v26 = v58;
  if ( v58 < 8 )
  {
    TimeStampIndex = EtwpAllocateTimeStampIndex(inited[54]);
    if ( TimeStampIndex == 2 )
    {
      FileName = -1073741670;
      goto LABEL_227;
    }
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v26;
    if ( (unsigned int)v26 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    EtwpSystemLogger[2 * v26] = v57;
    word_1402D84E2[2 * v26] = TimeStampIndex;
    _interlockedbittestandset(&EtwpActiveSystemLoggers, v26);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_227;
  v27 = *(_DWORD *)(a2 + 52);
  if ( v27 )
    inited[60] = v27;
  v28 = *(_DWORD *)(a2 + 56);
  if ( v28 )
    inited[63] = v28;
  v29 = *(_DWORD *)(a2 + 48);
  if ( v29 )
  {
    if ( v29 > 0x4000 )
      *(_DWORD *)(a2 + 48) = 0x4000;
    inited[1] = *(_DWORD *)(a2 + 48) << 10;
  }
  if ( *v25 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 209, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile((__int64)inited, 0);
    if ( FileName < 0 )
    {
LABEL_227:
      v21 = v59;
LABEL_228:
      if ( (inited[3] & 0x2000000) != 0 )
        EtwpFreeSystemLoggerIndex((unsigned int)v26);
      if ( (inited[208] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 106), 0);
      if ( (inited[208] & 0x2000) != 0 )
        _InterlockedDecrement(&dword_1403062B0);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
      v53 = (void *)*((_QWORD *)inited + 102);
      if ( v53 )
        ZwClose(v53);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_237;
    }
  }
  if ( inited[1] < 0x1000 && (*v25 || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
  v30 = inited[1];
  v31 = 0xFFFF;
  if ( (unsigned __int64)(v30 - 72) < 0xFFFF )
    v31 = v30 - 72;
  inited[2] = v31 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool((__int64)inited);
  if ( FileName < 0 )
    goto LABEL_241;
  v32 = inited[77];
  if ( !v32 || (inited[3] & 0x2000) != 0 )
    v33 = 10485760LL;
  else
    v33 = (unsigned __int64)v32 << 20;
  v34 = 2 * inited[1] * inited[63];
  if ( v33 > v34 )
    v34 = v33;
  *((_QWORD *)inited + 54) = v34;
  FileName = ObLogSecurityDescriptor((char *)SecurityDescriptor, &v66, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v66 )
      *((_QWORD *)inited + 100) = v66 + 15;
    else
      *((_QWORD *)inited + 100) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_241:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_227;
  }
  _InterlockedAdd(&dword_1402D84DC, 1u);
  v35 = v59;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v59 + 8 * v20 + 400), 1u);
  if ( (inited[3] & 0x400) != 0 )
  {
LABEL_114:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
      EtwpEventWriteTemplateSession(v37, &ETW_EVENT_START_TRACE, inited);
    KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
    *(_QWORD *)(v35 + 8 * v20 + 912) = inited;
    EtwpSendSessionNotification(inited, 5LL, 0LL);
    if ( (inited[3] & 0x2000000) != 0 )
    {
      LOBYTE(v38) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v38);
      if ( FileName < 0
        || (v50 = 5 * v26,
            EtwpObjectTypeFilter[2 * v50] = 1,
            dword_1402D7E64[v50] = 42,
            FileName = EtwpUpdateLoggerGroupMasks(inited, a2),
            FileName < 0) )
      {
        inited[14] = FileName;
        EtwpStopLoggerInstance((unsigned __int64)inited);
        if ( (inited[3] & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a2, inited);
          EtwpReleaseLoggerContext(v35, inited, 1);
          goto LABEL_246;
        }
      }
    }
    v39 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)(inited + 73);
    if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)(inited + 73) )
      v39 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(inited + 75);
    if ( v39 )
    {
      v40 = *(_QWORD *)&CritSecGuid.Data1 - *(_QWORD *)(inited + 73);
      if ( *(_QWORD *)&CritSecGuid.Data1 == *(_QWORD *)(inited + 73) )
        v40 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(inited + 75);
      if ( v40 )
        goto LABEL_123;
      v56 = 1LL;
    }
    else
    {
      v56 = 0LL;
    }
    FileName = EtwpUpdatePerProcessTracing(a2, *inited, v56);
LABEL_123:
    EtwpGetLoggerInfoFromContext(a2, inited);
    EtwpReleaseLoggerContext(v35, inited, 1);
    return (unsigned int)FileName;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  CurrentServerSilo = PsGetCurrentServerSilo();
  FileName = EtwpAllocateWorkerContext(&StartContext, (__int64)CurrentServerSilo, (__int64)inited);
  if ( FileName < 0 )
  {
    if ( CurrentServerSilo )
      ObfDereferenceObject(CurrentServerSilo);
  }
  else
  {
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
      FileName = KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
      goto LABEL_114;
    }
  }
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v35 + 8 * v20 + 400), 1u);
LABEL_246:
  EtwpFreeLoggerContext((char *)inited);
  return (unsigned int)FileName;
}

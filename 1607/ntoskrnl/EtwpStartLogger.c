/*
 * XREFs of EtwpStartLogger @ 0x14048F924
 * Callers:
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     EtwpStartTrace @ 0x1404D0FB8 (EtwpStartTrace.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140406CC8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140406F58 (EtwpFreeSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x1404904F8 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwpAllocateTraceBufferPool @ 0x140493B04 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     EtwpSendSessionNotification @ 0x140494084 (EtwpSendSessionNotification.c)
 *     EtwpFreeTraceBufferPool @ 0x14049413C (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 *     EtwpFreeSystemLoggerIndex @ 0x140495AAC (EtwpFreeSystemLoggerIndex.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14049601C (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14049607C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x1404960B4 (EtwpGetFlagExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140496220 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpInitializeTimeStamp @ 0x1404BEEFC (EtwpInitializeTimeStamp.c)
 *     EtwpValidateFlagExtension @ 0x1404D083C (EtwpValidateFlagExtension.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     EtwpAllocateTimeStampIndex @ 0x1404D2ED8 (EtwpAllocateTimeStampIndex.c)
 *     ExUuidCreate @ 0x14051A810 (ExUuidCreate.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FFEC (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406A42F0 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A4518 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // r12d
  unsigned int v6; // esi
  int FileName; // ebx
  ACCESS_MASK v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rax
  signed __int64 v19; // r11
  __int64 v20; // rdi
  signed __int64 v21; // rdx
  signed __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int8 v28; // r13
  unsigned int *inited; // rdi
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  _WORD *v34; // r15
  __int64 v35; // r12
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  int LogFile; // eax
  __int64 v41; // rdx
  int v42; // ecx
  unsigned int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned int v57; // ebx
  const WCHAR *v58; // rdx
  bool v59; // zf
  unsigned __int8 TimeStampIndex; // al
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rdx
  void *v65; // rcx
  int v66; // ecx
  int v67; // r8d
  int v68; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v69; // [rsp+44h] [rbp-95h]
  __int64 v70; // [rsp+48h] [rbp-91h]
  __int64 v71; // [rsp+50h] [rbp-89h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-81h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-69h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-59h] BYREF
  __int64 v76; // [rsp+90h] [rbp-49h] BYREF
  HANDLE ThreadHandle; // [rsp+98h] [rbp-41h] BYREF
  _QWORD StartContext[2]; // [rsp+A0h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-29h] BYREF
  UUID Uuid; // [rsp+E0h] [rbp+7h] BYREF

  v70 = a1;
  v69 = 8;
  SecurityDescriptor = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = 4;
  v6 = v4 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v6 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  if ( (v6 & 0x40000) != 0 )
    v6 |= 0x80u;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x1000000) != 0 )
    v6 &= ~0x1000000u;
  if ( (v6 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0x4000F) != 0 )
      goto LABEL_133;
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
    goto LABEL_133;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_133;
    }
    v54 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v54 )
      v54 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v54 )
      goto LABEL_133;
    v55 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v55 )
      v55 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v55 || (v6 & 4) != 0 )
      goto LABEL_133;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000400) == 0x4000000 || (v4 & 0x10000) != 0 )
    goto LABEL_133;
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
    goto LABEL_252;
  v8 = 128;
  if ( (v6 & 0x100) != 0 )
    v8 = 160;
  if ( *(_WORD *)(a2 + 128) )
    v8 |= 0x40u;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_133;
  FileName = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &DestinationString);
  if ( FileName )
  {
LABEL_252:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v66,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v67,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v6);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v68) )
  {
LABEL_198:
    FileName = -1073741771;
    goto LABEL_252;
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
      goto LABEL_252;
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
    goto LABEL_154;
  v14 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v14 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v14 )
  {
LABEL_154:
    RtlFreeAnsiString(&DestinationString);
    v56 = v10 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v56 )
      v56 = v12 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v56 )
    {
      v57 = 2;
      v69 = 1;
      v68 = 2;
      v58 = L"Circular Kernel Context Logger";
    }
    else
    {
      v57 = 0;
      v68 = 0;
      v69 = 0;
      v58 = L"NT Kernel Logger";
    }
    if ( !RtlCreateUnicodeString(&DestinationString, v58) )
      goto LABEL_212;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 && v70 == EtwpHostSiloState )
    {
      LODWORD(v19) = 1;
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v57), v11 | 1, 1LL) == 1;
      goto LABEL_162;
    }
    goto LABEL_133;
  }
  v15 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v15 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v15 )
  {
    v68 = 1;
    if ( !EtwpGetFlagExtension(a2, 1LL) )
      goto LABEL_204;
    if ( (v6 & 0x1000000) == 0 && v70 == EtwpHostSiloState )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_212;
      v69 = 0;
      v19 = 1LL;
LABEL_204:
      v59 = v19 == _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v19 | v11, v19);
LABEL_162:
      if ( v59 )
      {
        v5 = v68;
        goto LABEL_59;
      }
      goto LABEL_198;
    }
LABEL_133:
    FileName = -1073741811;
    goto LABEL_252;
  }
  v16 = *(_QWORD *)&Uuid.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Uuid.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v16 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v16 )
  {
    v68 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        LODWORD(v19) = 1;
        v6 |= 0x80u;
        v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1;
        goto LABEL_162;
      }
LABEL_212:
      FileName = -1073741801;
      goto LABEL_252;
    }
    goto LABEL_133;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v62 = v10 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v10 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v62 = v12 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v62 )
      goto LABEL_198;
  }
  v17 = 4;
  while ( 1 )
  {
    v18 = EtwpAcquireLoggerContextByLoggerId(v70, v17, 0LL);
    if ( v18 )
      break;
LABEL_53:
    LODWORD(v19) = 1;
    if ( ++v17 >= 0x40 )
      goto LABEL_54;
  }
  v53 = *(_QWORD *)(v18 + 276) - v10;
  if ( !v53 )
    v53 = *(_QWORD *)(v18 + 284) - v12;
  if ( v53 )
  {
    EtwpReleaseLoggerContext(v18, 0LL);
    goto LABEL_53;
  }
  EtwpReleaseLoggerContext(v18, 0LL);
  LODWORD(v19) = 1;
LABEL_54:
  if ( v17 < 0x40 )
    goto LABEL_198;
  v20 = v70;
  v68 = 4;
  v21 = (v70 + 912) | 1;
  do
  {
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8LL * v5 + 912), v21, 1LL);
    v5 = v68;
    if ( v22 == 1 )
      break;
    v5 = v68 + 1;
    v68 = v5;
  }
  while ( v5 < 0x40 );
  if ( v5 >= 0x40 )
  {
    FileName = -1073741670;
    goto LABEL_252;
  }
LABEL_59:
  v23 = v70;
  v24 = v5;
  v71 = v5;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v70 + 8LL * v5 + 400), v19);
  EtwpGetSecurityDescriptorByGuid(&Uuid.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, v8, 0LL);
  if ( FileName < 0 )
    goto LABEL_251;
  v25 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Uuid.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Uuid.Data1 )
    v25 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Uuid.Data4;
  v26 = EtwpHostSiloState;
  if ( !v25 )
  {
    v28 = 0;
LABEL_215:
    if ( v23 == EtwpHostSiloState )
      goto LABEL_67;
    FileName = -1073741811;
    goto LABEL_251;
  }
  v27 = *(_QWORD *)&CritSecGuid.Data1 - *(_QWORD *)&Uuid.Data1;
  if ( *(_QWORD *)&CritSecGuid.Data1 == *(_QWORD *)&Uuid.Data1 )
    v27 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)Uuid.Data4;
  if ( !v27 )
  {
    v28 = 1;
    goto LABEL_215;
  }
  v28 = 9;
LABEL_67:
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 || v69 != 8 )
    goto LABEL_68;
  if ( v23 != EtwpHostSiloState )
  {
    FileName = -1073741790;
    goto LABEL_251;
  }
  FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid, 128LL, 0LL);
  if ( FileName < 0 )
    goto LABEL_251;
  v63 = 2;
  v69 = 2;
  do
  {
    if ( !_bittest(&EtwpActiveSystemLoggers, v63) )
      break;
    ++v63;
  }
  while ( v63 < 8 );
  v69 = v63;
  if ( v63 == 8 )
  {
    FileName = -1073741670;
    goto LABEL_251;
  }
  v26 = EtwpHostSiloState;
LABEL_68:
  if ( v23 != v26 )
    v6 |= 0x10000000u;
  inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v6);
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_250:
    v23 = v70;
LABEL_251:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v23 + 8 * v24 + 400), 1u);
    *(_QWORD *)(v23 + 8 * v24 + 912) = 1LL;
    goto LABEL_252;
  }
  *(UUID *)(inited + 69) = Uuid;
  inited[73] = *(_DWORD *)(a2 + 60);
  if ( *(_DWORD *)(a2 + 80) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x10u);
    v5 = v68;
  }
  inited[50] = *(_DWORD *)(a2 + 40);
  v30 = *(_DWORD *)(a2 + 68);
  if ( v30 )
  {
    inited[52] = v30;
  }
  else if ( (v6 & 0x100) != 0 )
  {
    inited[52] = (v6 & 0x10) != 0 ? 1000 : 1;
  }
  v31 = *(_DWORD *)(a2 + 76);
  if ( v31 && (inited[52] || v31 < 0) )
    *(_DWORD *)(a2 + 76) = 0;
  inited[53] = *(_DWORD *)(a2 + 76);
  *((_QWORD *)inited + 113) = v70;
  *inited = v5;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      v32 = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
      v33 = 0LL;
      FileName = v32;
      if ( v32 < 0 )
      {
LABEL_240:
        LODWORD(v35) = v69;
        goto LABEL_241;
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  if ( (inited[3] & 8) == 0 )
  {
    v34 = inited + 38;
    *(UNICODE_STRING *)(inited + 38) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    goto LABEL_84;
  }
  *(UNICODE_STRING *)(inited + 42) = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v34 = inited + 38;
  FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
  if ( FileName < 0 )
  {
LABEL_239:
    v24 = v71;
    goto LABEL_240;
  }
LABEL_84:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(
               KeGetCurrentThread(),
               &ClientSecurityQos,
               0,
               (PSECURITY_CLIENT_CONTEXT)(inited + 176));
  if ( FileName < 0 )
    goto LABEL_239;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 204, 0xFFFFFFF7);
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 2u);
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 1u);
  if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x4000u);
  EtwpInitializeTimeStamp(inited);
  v35 = v69;
  if ( v69 < 8 )
  {
    TimeStampIndex = EtwpAllocateTimeStampIndex(inited[50]);
    LOBYTE(v33) = TimeStampIndex;
    if ( TimeStampIndex != 2 )
    {
      inited[3] |= 0x2000000u;
      *((_BYTE *)inited + 818) = v35;
      if ( (unsigned int)v35 <= 1 )
        _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
      EtwpSystemLogger[2 * v35] = v68;
      word_1402FD342[2 * v35] = TimeStampIndex;
      _interlockedbittestandset(&EtwpActiveSystemLoggers, v35);
      goto LABEL_94;
    }
    FileName = -1073741670;
    goto LABEL_233;
  }
LABEL_94:
  v36 = EtwpCheckForStackTracingExtension(a2, inited);
  v33 = 0LL;
  FileName = v36;
  if ( v36 < 0 )
    goto LABEL_233;
  v37 = *(_DWORD *)(a2 + 52);
  if ( v37 )
    inited[56] = v37;
  v38 = *(_DWORD *)(a2 + 56);
  if ( v38 )
    inited[59] = v38;
  v39 = *(_DWORD *)(a2 + 48);
  if ( v39 )
  {
    if ( v39 > 0x4000 )
      *(_DWORD *)(a2 + 48) = 0x4000;
    inited[1] = *(_DWORD *)(a2 + 48) << 10;
  }
  if ( *v34 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 205, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    LogFile = EtwpCreateLogFile(inited, 0LL);
    v33 = 0LL;
    FileName = LogFile;
    if ( LogFile < 0 )
    {
LABEL_233:
      v24 = v71;
LABEL_241:
      if ( (inited[3] & 0x2000000) != 0 )
        EtwpFreeSystemLoggerIndex((unsigned int)v35, v33);
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 104), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140329310);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 38));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      v65 = (void *)*((_QWORD *)inited + 100);
      if ( v65 )
        ZwClose(v65);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_250;
    }
  }
  if ( inited[1] < 0x1000 && (*v34 || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v41 = inited[1];
  v42 = 0xFFFF;
  if ( (unsigned __int64)(v41 - 72) < 0xFFFF )
    v42 = v41 - 72;
  inited[2] = v42 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_232;
  v43 = inited[73];
  if ( !v43 || (inited[3] & 0x2000) != 0 )
    v44 = 10485760LL;
  else
    v44 = (unsigned __int64)v43 << 20;
  v45 = 2 * inited[1] * inited[59];
  if ( v44 > v45 )
    v45 = v44;
  *((_QWORD *)inited + 52) = v45;
  FileName = ObLogSecurityDescriptor(SecurityDescriptor, &v76, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v76 )
      *((_QWORD *)inited + 98) = v76 + 15;
    else
      *((_QWORD *)inited + 98) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_232:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_233;
  }
  _InterlockedAdd(&dword_1402FD81C, 1u);
  v46 = v71;
  v47 = v70;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v70 + 8 * v71 + 400), 1u);
  if ( (inited[3] & 0x400) != 0 )
    goto LABEL_121;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  StartContext[0] = PsGetCurrentServerSilo();
  StartContext[1] = inited;
  FileName = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, EtwpLogger, StartContext);
  if ( FileName < 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v47 + 8 * v46 + 400), 1u);
    goto LABEL_236;
  }
  ZwClose(ThreadHandle);
  KeWaitForSingleObject(inited + 114, Executive, 0, 0, 0LL);
LABEL_121:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v48, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  *(_QWORD *)(v47 + 8 * v46 + 912) = inited;
  EtwpSendSessionNotification(inited, 5LL);
  if ( (inited[3] & 0x2000000) == 0 )
    goto LABEL_124;
  LOBYTE(v50) = 1;
  FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v50);
  if ( FileName >= 0 )
  {
    v61 = 5 * v35;
    EtwpObjectTypeFilter[2 * v61] = 1;
    dword_1402FD284[v61] = 42;
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
      goto LABEL_124;
  }
  inited[14] = FileName;
  EtwpStopLoggerInstance(inited);
  if ( (inited[3] & 0x400) != 0 )
  {
    EtwpGetLoggerInfoFromContext(a2, (__int64)inited);
    LOBYTE(v64) = 1;
    EtwpReleaseLoggerContext(inited, v64);
LABEL_236:
    EtwpFreeLoggerContext(inited);
    return (unsigned int)FileName;
  }
  else
  {
LABEL_124:
    if ( v28 != 9 )
      EtwpUpdatePerProcessTracing(a2, v49, *inited, v28);
    EtwpGetLoggerInfoFromContext(a2, (__int64)inited);
    LOBYTE(v51) = 1;
    EtwpReleaseLoggerContext(inited, v51);
    return 0LL;
  }
}

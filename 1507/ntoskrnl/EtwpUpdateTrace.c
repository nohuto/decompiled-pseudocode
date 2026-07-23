/*
 * XREFs of EtwpUpdateTrace @ 0x1405C48A0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpAcquireLoggerContext @ 0x14040EDC0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14040EE8C (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404ACDE0 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404D2714 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404D3424 (EtwpFreeSecurityDescriptor.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14054A368 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14054B128 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14054B188 (EtwpCheckForStackTracingExtension.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateFlagExtension @ 0x14055A8BC (EtwpValidateFlagExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405C4B58 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x1406E28A8 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x1406E7CE8 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406EA9E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  unsigned int *v6; // rdi
  int v7; // r15d
  unsigned int *v8; // r13
  unsigned int v9; // r14d
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  ACCESS_MASK v12; // ecx
  unsigned int *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r10d
  unsigned int v20; // eax
  __int64 v21; // rcx
  void *v22; // rcx
  UNICODE_STRING v23; // xmm0
  __int64 v24; // r8
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v31; // [rsp+88h] [rbp+48h] BYREF
  void *v32; // [rsp+90h] [rbp+50h] BYREF

  v31 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a1);
  if ( (int)result < 0 )
    return result;
  result = EtwpValidateFlagExtension(v3);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (__int64 *)&v31);
  if ( LoggerInfoFromContext >= 0 )
  {
    v6 = v31;
    v7 = *(_DWORD *)(a1 + 64);
    v8 = v31 + 3;
    v9 = v31[3];
    if ( (v9 & 0x40) != 0
      || (v7 & 3) == 3
      || (*(_DWORD *)(a1 + 64) & 0xC000) == 0xC000
      || (v7 & 2) != 0 && (v9 & 2) == 0
      || (v7 & 6) == 6 )
    {
      goto LABEL_6;
    }
    v12 = 128;
    if ( ((v9 | v7) & 0x100) != 0 )
      v12 = 160;
    if ( *(_QWORD *)(a1 + 136) && *(_WORD *)(a1 + 128) )
      v12 |= 0x40u;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v12, (__int64)v31);
    if ( LoggerInfoFromContext < 0 )
      goto LABEL_7;
    if ( *(_QWORD *)(a1 + 136) && *(_WORD *)(a1 + 128) )
    {
      if ( (v9 & 8) != 0 || (v7 & 8) != 0 || (v9 & 0x400) != 0 )
        goto LABEL_6;
      LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a1 + 128), &UnicodeString);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      v22 = (void *)*((_QWORD *)v6 + 92);
      if ( v22 )
      {
        ObfDereferenceObject(v22);
        *((_QWORD *)v6 + 92) = 0LL;
      }
      v6 = v31;
      ClientSecurityQos.Length = 12;
      ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
      *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
      LoggerInfoFromContext = SeCreateClientSecurity(
                                KeGetCurrentThread(),
                                &ClientSecurityQos,
                                0,
                                (PSECURITY_CLIENT_CONTEXT)v31 + 10);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      v23 = UnicodeString;
      UnicodeString.Buffer = 0LL;
      *(UNICODE_STRING *)(v6 + 50) = v23;
      EtwpSynchronizeWithLogger((__int64)v6, 4u);
      LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)v6, 2u);
      if ( LoggerInfoFromContext < 0 || !v6[84] )
        goto LABEL_7;
    }
    if ( (v9 & 0x400) != 0 )
      goto LABEL_21;
    if ( (v7 & 0x100) != 0 )
    {
      v9 |= 0x100u;
      if ( !v6[56] )
        v6[56] = (v9 & 0x10) != 0 ? 1000 : 1;
LABEL_21:
      v13 = v6 + 73;
      v14 = *(_QWORD *)(v6 + 73);
      v15 = *(_QWORD *)&HeapGuid.Data1 - v14;
      if ( *(_QWORD *)&HeapGuid.Data1 == v14 )
        v15 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v6 + 75);
      if ( v15 )
      {
        v16 = *(_QWORD *)&CritSecGuid.Data1 - v14;
        if ( *(_QWORD *)&CritSecGuid.Data1 == v14 )
          v16 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v6 + 75);
        if ( v16 )
        {
LABEL_27:
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a1, (__int64)v6);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v8 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(v6, 128LL), LoggerInfoFromContext >= 0)
                && (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension((__int64)v6, a1, 0),
                    LoggerInfoFromContext >= 0)
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks((__int64)v6, a1), LoggerInfoFromContext >= 0) )
              {
                v19 = *(_DWORD *)(a1 + 56);
                if ( v19 )
                {
                  if ( v6[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v6);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v19 > SystemMaximumBufferCount )
                    *(_DWORD *)(a1 + 56) = SystemMaximumBufferCount;
                  v26 = *(_DWORD *)(a1 + 56);
                  if ( v26 > v6[63] )
                    v6[63] = v26;
                }
                if ( (v9 & 0x400) == 0 )
                {
                  v20 = *(_DWORD *)(a1 + 68);
                  if ( v20 )
                  {
                    if ( v20 != v6[56] )
                    {
                      v6[56] = v20;
                      EtwpSynchronizeWithLogger((__int64)v6, 4u);
                    }
                  }
                }
                if ( (v7 & 0x80000) == 0 )
                {
                  if ( (v9 & 0x80000) != 0 )
                    v9 &= ~0x80000u;
                  goto LABEL_39;
                }
                if ( v6[79] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)v6 + 209, 0x800u);
                  v9 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    v6 = v31;
                  }
                  else
                  {
                    v6 = v31;
                    EtwpSendDbgId(v31);
                  }
LABEL_39:
                  if ( (v7 & 0x80u) == 0
                    || (EtwpGetSecurityDescriptorByGuid(v13, &v32),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(v6, v32),
                        EtwpFreeSecurityDescriptor(&v32),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v8 = v9;
                    if ( *(_DWORD *)(a1 + 76) )
                    {
                      if ( v6[56] || (v9 & 0x400) != 0 )
                        goto LABEL_92;
                      if ( (v9 & 0x10000000) != 0 )
                      {
                        v27 = 1;
                      }
                      else
                      {
                        v27 = KeNumberProcessors_0;
                        v6 = v31;
                      }
                      v28 = v6[63] - v27 - 1;
                      if ( *(_DWORD *)(a1 + 76) > v28 )
                        *(_DWORD *)(a1 + 76) = v28;
                      if ( *(int *)(a1 + 76) < 0 )
LABEL_92:
                        *(_DWORD *)(a1 + 76) = 0;
                    }
                    v6[57] = *(_DWORD *)(a1 + 76);
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, (__int64)v6, v17, v18);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v21, &ETW_EVENT_UPDATE_TRACE, v6);
                  }
                  goto LABEL_7;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
          }
LABEL_7:
          RtlFreeAnsiString(&UnicodeString);
          EtwpReleaseLoggerContext(v6, 1);
          goto LABEL_8;
        }
        v24 = 1LL;
      }
      else
      {
        v24 = 0LL;
      }
      LoggerInfoFromContext = EtwpUpdatePerProcessTracing(a1, *v6, v24);
      goto LABEL_27;
    }
    if ( (v9 & 0x100) == 0 )
      goto LABEL_21;
    if ( *((_QWORD *)v6 + 102) )
    {
      v9 &= ~0x100u;
      EtwpSynchronizeWithLogger((__int64)v6, 8u);
      goto LABEL_21;
    }
LABEL_6:
    LoggerInfoFromContext = -1073741811;
    goto LABEL_7;
  }
LABEL_8:
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)LoggerInfoFromContext;
}

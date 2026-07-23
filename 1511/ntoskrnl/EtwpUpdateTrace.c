/*
 * XREFs of EtwpUpdateTrace @ 0x140545148
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeSecurityDescriptor @ 0x14046D564 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14046E010 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateFlagExtension @ 0x1404CA6D8 (EtwpValidateFlagExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x1404CAB7C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404CB394 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1404CC16C (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x1404CC270 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1405001FC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14050C618 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405453E4 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140667728 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  unsigned int *p_Length; // rdi
  int v7; // r15d
  unsigned int *v8; // r13
  unsigned int v9; // r14d
  ACCESS_MASK v10; // ecx
  unsigned int *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r10d
  unsigned int v16; // eax
  __int64 v17; // rcx
  void *v18; // rcx
  UNICODE_STRING v19; // xmm0
  __int64 v20; // r8
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v22; // eax
  int v23; // ecx
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  struct _SECURITY_CLIENT_CONTEXT *v26; // [rsp+88h] [rbp+48h] BYREF
  void *v27; // [rsp+90h] [rbp+50h] BYREF

  v26 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a1);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v3);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (unsigned int **)&v26);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return (unsigned int)LoggerInfoFromContext;
      }
      p_Length = &v26->SecurityQos.Length;
      v7 = *(_DWORD *)(a1 + 64);
      v8 = (unsigned int *)(&v26->SecurityQos + 1);
      v9 = *((_DWORD *)&v26->SecurityQos + 3);
      if ( (v9 & 0x40) != 0
        || (v7 & 3) == 3
        || (*(_DWORD *)(a1 + 64) & 0xC000) == 0xC000
        || (v7 & 2) != 0 && (v9 & 2) == 0
        || (v7 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v10 = 128;
      if ( ((v9 | v7) & 0x100) != 0 )
        v10 = 160;
      if ( *(_QWORD *)(a1 + 136) && *(_WORD *)(a1 + 128) )
        v10 |= 0x40u;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10, (__int64)v26);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a1 + 136) && *(_WORD *)(a1 + 128) )
      {
        if ( (v9 & 8) != 0 || (v7 & 8) != 0 || (v9 & 0x400) != 0 )
          goto LABEL_6;
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a1 + 128), &UnicodeString);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v18 = (void *)*((_QWORD *)p_Length + 92);
        if ( v18 )
        {
          ObfDereferenceObject(v18);
          *((_QWORD *)p_Length + 92) = 0LL;
        }
        p_Length = &v26->SecurityQos.Length;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, v26 + 10);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v19 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(p_Length + 50) = v19;
        EtwpSynchronizeWithLogger((__int64)p_Length, 4u);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)p_Length, 2u);
        if ( LoggerInfoFromContext < 0 || !p_Length[84] )
          goto LABEL_7;
      }
      if ( (v9 & 0x400) != 0 )
        goto LABEL_20;
      if ( (v7 & 0x100) != 0 )
      {
        v9 |= 0x100u;
        if ( !p_Length[56] )
          p_Length[56] = (v9 & 0x10) != 0 ? 1000 : 1;
LABEL_20:
        v11 = p_Length + 73;
        v12 = *(_QWORD *)(p_Length + 73);
        v13 = *(_QWORD *)&HeapGuid.Data1 - v12;
        if ( *(_QWORD *)&HeapGuid.Data1 == v12 )
          v13 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(p_Length + 75);
        if ( v13 )
        {
          v14 = *(_QWORD *)&CritSecGuid.Data1 - v12;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v12 )
            v14 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(p_Length + 75);
          if ( v14 )
          {
LABEL_26:
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a1, (__int64)p_Length);
              if ( LoggerInfoFromContext >= 0 )
              {
                if ( (*v8 & 0x2000000) == 0
                  || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(p_Length, 128LL), LoggerInfoFromContext >= 0)
                  && (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension((__int64)p_Length, a1, 0),
                      LoggerInfoFromContext >= 0)
                  && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks((__int64)p_Length, a1),
                      LoggerInfoFromContext >= 0) )
                {
                  v15 = *(_DWORD *)(a1 + 56);
                  if ( v15 )
                  {
                    if ( p_Length[1] )
                      SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(p_Length);
                    else
                      SystemMaximumBufferCount = 0;
                    if ( v15 > SystemMaximumBufferCount )
                      *(_DWORD *)(a1 + 56) = SystemMaximumBufferCount;
                    v22 = *(_DWORD *)(a1 + 56);
                    if ( v22 > p_Length[63] )
                      p_Length[63] = v22;
                  }
                  if ( (v9 & 0x400) == 0 )
                  {
                    v16 = *(_DWORD *)(a1 + 68);
                    if ( v16 )
                    {
                      if ( v16 != p_Length[56] )
                      {
                        p_Length[56] = v16;
                        EtwpSynchronizeWithLogger((__int64)p_Length, 4u);
                      }
                    }
                  }
                  if ( (v7 & 0x80000) == 0 )
                  {
                    if ( (v9 & 0x80000) != 0 )
                      v9 &= ~0x80000u;
                    goto LABEL_38;
                  }
                  if ( p_Length[79] != 1 )
                  {
                    _InterlockedOr((volatile signed __int32 *)p_Length + 209, 0x800u);
                    v9 |= 0x80000u;
                    if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                    {
                      p_Length = &v26->SecurityQos.Length;
                    }
                    else
                    {
                      p_Length = &v26->SecurityQos.Length;
                      EtwpSendDbgId(v26);
                    }
LABEL_38:
                    if ( (v7 & 0x80u) == 0
                      || (EtwpGetSecurityDescriptorByGuid(v11, &v27),
                          LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(p_Length, v27),
                          EtwpFreeSecurityDescriptor(&v27),
                          LoggerInfoFromContext >= 0) )
                    {
                      *v8 = v9;
                      if ( *(_DWORD *)(a1 + 76) )
                      {
                        if ( p_Length[56] || (v9 & 0x400) != 0 )
                          goto LABEL_87;
                        v23 = p_Length[63] - EtwpQueryUsedProcessorCount((__int64)p_Length) - 1;
                        if ( *(_DWORD *)(a1 + 76) > v23 )
                          *(_DWORD *)(a1 + 76) = v23;
                        if ( *(int *)(a1 + 76) < 0 )
LABEL_87:
                          *(_DWORD *)(a1 + 76) = 0;
                      }
                      p_Length[57] = *(_DWORD *)(a1 + 76);
                      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, (__int64)p_Length);
                      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                        EtwpEventWriteTemplateSession(v17, &ETW_EVENT_UPDATE_TRACE, p_Length);
                    }
                    goto LABEL_7;
                  }
                  LoggerInfoFromContext = -1073741637;
                }
              }
            }
LABEL_7:
            RtlFreeAnsiString(&UnicodeString);
            EtwpReleaseLoggerContext(0LL, p_Length, 1);
            goto LABEL_8;
          }
          v20 = 1LL;
        }
        else
        {
          v20 = 0LL;
        }
        LoggerInfoFromContext = EtwpUpdatePerProcessTracing(a1, *p_Length, v20);
        goto LABEL_26;
      }
      if ( (v9 & 0x100) == 0 )
        goto LABEL_20;
      if ( *((_QWORD *)p_Length + 102) )
      {
        v9 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)p_Length, 8u);
        goto LABEL_20;
      }
LABEL_6:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}

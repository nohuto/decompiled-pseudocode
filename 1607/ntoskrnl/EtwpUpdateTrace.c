/*
 * XREFs of EtwpUpdateTrace @ 0x14053F6F8
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1406A5180 (EtwWmitraceWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140406CC8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140406F58 (EtwpFreeSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContext @ 0x14048E8C0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14048E998 (EtwpValidateLoggerInfo.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140493BB0 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14049601C (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14049607C (EtwpCheckForStackTracingExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140496220 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpValidateFlagExtension @ 0x1404D083C (EtwpValidateFlagExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x140581100 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FFEC (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A4518 (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x1406A5588 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406A8284 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int updated; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rdi
  int v12; // r15d
  unsigned int v13; // r14d
  ACCESS_MASK v14; // ecx
  __int64 v15; // rdx
  unsigned int *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  void *v25; // rcx
  UNICODE_STRING v26; // xmm0
  __int64 v27; // r9
  int v28; // ecx
  unsigned int *v29; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp+50h] BYREF
  void *v33; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v32 = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v5);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, (__int64 *)&v32);
      if ( updated < 0 )
      {
LABEL_8:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v9, v10);
        return (unsigned int)updated;
      }
      v11 = v32;
      v12 = *(_DWORD *)(a2 + 64);
      v13 = v32[3];
      v29 = v32 + 3;
      if ( (v13 & 0x40) != 0
        || (v12 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v12 & 2) != 0 && (v13 & 2) == 0
        || (v12 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v14 = 128;
      if ( (((unsigned __int16)v13 | (unsigned __int16)v12) & 0x100) != 0 )
        v14 = 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v14 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v14, (__int64)v32);
      if ( updated < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v13 & 8) != 0 || (v12 & 8) != 0 || (v13 & 0x400) != 0 )
          goto LABEL_6;
        updated = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( updated < 0 )
          goto LABEL_7;
        v25 = (void *)*((_QWORD *)v11 + 90);
        if ( v25 )
        {
          ObfDereferenceObject(v25);
          *((_QWORD *)v11 + 90) = 0LL;
        }
        v11 = v32;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        updated = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    &ClientSecurityQos,
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v32 + 176));
        if ( updated < 0 )
          goto LABEL_7;
        v26 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v11 + 46) = v26;
        EtwpSynchronizeWithLogger((__int64)v11, 4u);
        updated = EtwpSynchronizeWithLogger((__int64)v11, 2u);
        if ( updated < 0 || !v11[80] )
          goto LABEL_7;
      }
      if ( (v13 & 0x400) == 0 )
      {
        if ( (v12 & 0x100) != 0 )
        {
          v13 |= 0x100u;
          if ( !v11[52] )
            v11[52] = (v13 & 0x10) != 0 ? 1000 : 1;
        }
        else if ( (v13 & 0x100) != 0 )
        {
          if ( !*((_QWORD *)v11 + 100) )
            goto LABEL_6;
          v13 &= ~0x100u;
          EtwpSynchronizeWithLogger((__int64)v11, 8u);
        }
      }
      v16 = v11 + 69;
      v17 = *(_QWORD *)(v11 + 69);
      v18 = *(_QWORD *)&HeapGuid.Data1 - v17;
      if ( *(_QWORD *)&HeapGuid.Data1 == v17 )
        v18 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v11 + 71);
      if ( v18 )
      {
        v19 = *(_QWORD *)&CritSecGuid.Data1 - v17;
        if ( *(_QWORD *)&CritSecGuid.Data1 == v17 )
          v19 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v11 + 71);
        if ( v19 )
          goto LABEL_28;
        if ( a1 == EtwpHostSiloState )
        {
          v27 = 1LL;
          goto LABEL_72;
        }
      }
      else if ( a1 == EtwpHostSiloState )
      {
        v27 = 0LL;
LABEL_72:
        EtwpUpdatePerProcessTracing(a2, v15, *v11, v27);
LABEL_28:
        updated = EtwpCheckForStackTracingExtension(a2, (__int64)v11);
        if ( updated < 0 )
          goto LABEL_7;
        if ( (*v29 & 0x2000000) != 0 )
        {
          updated = EtwpCheckSystemTraceAccess(v11, 128LL);
          if ( updated < 0 )
            goto LABEL_7;
          updated = EtwpCheckForPoolTagFilterExtension((__int64)v11, a2, 0);
          if ( updated < 0 )
            goto LABEL_7;
          updated = EtwpUpdateLoggerGroupMasks((__int64)v11, a2);
          if ( updated < 0 )
            goto LABEL_7;
        }
        v20 = *(_DWORD *)(a2 + 56);
        if ( v20 )
        {
          if ( v11[1] )
            SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v11);
          else
            SystemMaximumBufferCount = 0;
          if ( v20 > SystemMaximumBufferCount )
            *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
          v22 = *(_DWORD *)(a2 + 56);
          if ( v22 > v11[59] )
            v11[59] = v22;
        }
        if ( (v13 & 0x400) == 0 )
        {
          v23 = *(_DWORD *)(a2 + 68);
          if ( v23 )
          {
            if ( v23 != v11[52] )
            {
              v11[52] = v23;
              EtwpSynchronizeWithLogger((__int64)v11, 4u);
            }
          }
        }
        if ( (v12 & 0x80000) == 0 )
        {
          if ( (v13 & 0x80000) != 0 )
            v13 &= ~0x80000u;
          goto LABEL_42;
        }
        if ( v11[75] != 1 )
        {
          _InterlockedOr((volatile signed __int32 *)v11 + 205, 0x800u);
          v13 |= 0x80000u;
          if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
          {
            v11 = v32;
          }
          else
          {
            v11 = v32;
            EtwpSendDbgId(v32);
          }
LABEL_42:
          if ( (v12 & 0x80u) == 0
            || (EtwpGetSecurityDescriptorByGuid(v16, &v33),
                updated = EtwpUpdateLoggerSecurityDescriptor(v11, v33),
                EtwpFreeSecurityDescriptor(&v33),
                updated >= 0) )
          {
            *v29 = v13;
            if ( *(_DWORD *)(a2 + 76) )
            {
              if ( v11[52] || (v13 & 0x400) != 0 )
                goto LABEL_90;
              v28 = v11[59] - EtwpQueryUsedProcessorCount((__int64)v11) - 1;
              if ( *(_DWORD *)(a2 + 76) > v28 )
                *(_DWORD *)(a2 + 76) = v28;
              if ( *(int *)(a2 + 76) < 0 )
LABEL_90:
                *(_DWORD *)(a2 + 76) = 0;
            }
            v11[53] = *(_DWORD *)(a2 + 76);
            updated = EtwpGetLoggerInfoFromContext(a2, (__int64)v11);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
              EtwpEventWriteTemplateSession(v24, &ETW_EVENT_UPDATE_TRACE, v11);
          }
          goto LABEL_7;
        }
        updated = -1073741637;
LABEL_7:
        RtlFreeAnsiString(&UnicodeString);
        EtwpReleaseLoggerContext(v11, 1);
        goto LABEL_8;
      }
LABEL_6:
      updated = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}

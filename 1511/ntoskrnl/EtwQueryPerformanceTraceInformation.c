/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x1406627B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     RtlFindSetBits @ 0x1400A04CC (RtlFindSetBits.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     PsGetProcessId @ 0x1400F4C44 (PsGetProcessId.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140421240 (SeQuerySecurityDescriptorInfo.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14046D378 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14046D3B0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     EtwpMapEnableFlags @ 0x1404CFC18 (EtwpMapEnableFlags.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405453E4 (EtwpCheckSystemTraceAccess.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 *     EtwpUMGLEnabled @ 0x14065FED4 (EtwpUMGLEnabled.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        unsigned int *a4)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // esi
  unsigned int v11; // edi
  __int64 v12; // r13
  struct _KTHREAD *v13; // rax
  unsigned int *v14; // rax
  unsigned int *v15; // rsi
  void *v16; // rbx
  __int64 v17; // rcx
  ULONG j; // esi
  unsigned int v19; // r12d
  __int64 v20; // r15
  struct _KTHREAD *v21; // rcx
  unsigned int *v22; // rax
  unsigned int *v23; // rsi
  __int64 v24; // rax
  void *v25; // r13
  unsigned int v26; // edi
  __int64 v27; // r14
  struct _KTHREAD *v28; // rcx
  unsigned int *v29; // rax
  unsigned int *v30; // rsi
  __int64 v31; // r9
  unsigned int v32; // eax
  ULONG v33; // r13d
  struct _KPROCESS *i; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v36; // r15
  unsigned int ProcessId; // eax
  ULONG v38; // r13d
  unsigned int v39; // edi
  __int64 SiloDriverState; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v42; // rax
  unsigned int *v43; // r14
  unsigned int v44; // ecx
  ULONG v45; // esi
  __int64 v46; // r15
  DWORD SecurityInformation; // [rsp+30h] [rbp-88h] BYREF
  __int64 v48; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+40h] [rbp-78h] BYREF
  struct _MDL *v50; // [rsp+48h] [rbp-70h] BYREF
  ULONG v51; // [rsp+50h] [rbp-68h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+58h] [rbp-60h] BYREF
  __int64 v53; // [rsp+60h] [rbp-58h]
  int v54; // [rsp+68h] [rbp-50h]
  __int64 v55; // [rsp+70h] [rbp-48h]
  __int64 v56; // [rsp+78h] [rbp-40h]
  __int64 v57; // [rsp+80h] [rbp-38h]
  __int64 v58; // [rsp+88h] [rbp-30h]
  ULONG Length; // [rsp+C8h] [rbp+10h] BYREF

  v7 = 0LL;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v54 = *(_DWORD *)a1;
  v10 = v54;
  if ( v54 > 5 )
  {
    if ( v54 == 6 )
    {
      v38 = 0;
      v51 = 0;
      v53 = a1 + 16;
      if ( a2 >= 0x10 )
      {
        v58 = *(_QWORD *)(a1 + 8);
        v39 = (unsigned __int16)v58;
        if ( (unsigned __int16)v58 == 0xFFFF )
          v39 = (unsigned __int16)EtwpSystemLogger[0];
        SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
        v48 = SiloDriverState;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v42 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v39, 1);
        v43 = v42;
        v50 = (struct _MDL *)v42;
        if ( !v42 )
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return 3221226134LL;
        }
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v42);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v43[208] & 0x80u) != 0 )
          {
            v38 = RtlNumberOfSetBits((PRTL_BITMAP)(v43 + 210));
            v51 = v38;
          }
          v44 = 4 * v38 + 16;
          *a4 = v44;
          if ( v44 > a2 )
          {
            v8 = -1073741789;
          }
          else
          {
            v45 = 0;
            Length = 0;
            v46 = v53;
            while ( v45 < v38 )
            {
              LODWORD(v7) = RtlFindSetBits((PRTL_BITMAP)(v43 + 210), 1u, v7 + 1);
              SecurityInformation = v7;
              *(_DWORD *)(v46 + 4LL * v45++) = v7;
              Length = v45;
            }
          }
        }
        EtwpReleaseLoggerContext(v48, v43, 1);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v17 = v48;
        goto LABEL_84;
      }
      return 3221225476LL;
    }
    if ( v54 != 7 )
    {
      if ( v54 <= 9 )
      {
        v33 = 0;
        if ( a2 >= 8 )
        {
          Length = (a2 - 4) >> 2;
          for ( i = 0LL; ; i = v36 )
          {
            NextProcess = (struct _KPROCESS *)PsGetNextProcess(i);
            v36 = NextProcess;
            Object = NextProcess;
            if ( !NextProcess )
              break;
            if ( !PsIsSystemProcess(NextProcess) && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)v36)) )
            {
              ProcessId = (unsigned int)PsGetProcessId(v36);
              if ( v33 < Length )
                *(_DWORD *)(a1 + 4LL * v33 + 4) = ProcessId;
              ++v33;
            }
          }
          *a4 = 4 * v33 + 4;
          if ( v33 > Length )
            return (unsigned int)-1073741789;
          return v8;
        }
        return 3221225476LL;
      }
      if ( v54 == 10 )
      {
        v25 = (void *)(a1 + 16);
        if ( a2 >= 0x10 )
        {
          v56 = *(_QWORD *)(a1 + 8);
          v26 = (unsigned __int16)v56;
          if ( (unsigned __int16)v56 == 0xFFFF )
            v26 = (unsigned __int16)EtwpSystemLogger[0];
          v27 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
          v48 = v27;
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          v29 = EtwpAcquireLoggerContextByLoggerId(v27, v26, 1);
          v30 = v29;
          v50 = (struct _MDL *)v29;
          if ( v29 )
          {
            if ( (v29[3] & 0x2000000) != 0 )
            {
              v8 = EtwpCheckSystemTraceAccess((__int64)v29, 1u);
              if ( (v8 & 0x80000000) == 0 )
              {
                v31 = 5LL * *((unsigned __int8 *)v30 + 834);
                v32 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v30 + 834)] + 16;
                *a4 = v32;
                if ( v32 > a2 )
                  v8 = -1073741789;
                else
                  memmove(v25, (char *)&unk_1402D7DC4 + 4 * v31, 4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v31]);
              }
              EtwpReleaseLoggerContext(v27, v30, 1);
            }
            else
            {
              EtwpReleaseLoggerContext(v27, v29, 1);
              v8 = -1073741811;
            }
          }
          else
          {
            v8 = -1073741162;
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v17 = v27;
          goto LABEL_84;
        }
        return 3221225476LL;
      }
      if ( v54 == 13 )
      {
        if ( a2 >= 0x28 )
        {
          result = ExLockUserBuffer(a1 + 8, a2 - 8, a3, IoWriteAccess, &Object, &v50);
          if ( (int)result < 0 )
            return result;
          v8 = off_1402D29C8();
          if ( Object )
            ExUnlockUserBuffer(v50);
          return v8;
        }
        return 3221225476LL;
      }
      return (unsigned int)-1073741822;
    }
    *a4 = 16;
    if ( a2 != 16 )
      return 3221225476LL;
    *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
    *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
    *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
  }
  else
  {
    if ( v54 == 5 )
    {
      *a4 = 20;
      if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
      {
        *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
        *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
        if ( a2 == 20 )
          *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
        return v8;
      }
      return 3221225476LL;
    }
    if ( v54 )
    {
      if ( v54 == 1 )
      {
        *a4 = 48;
        if ( a2 == 48 )
        {
          v57 = *(_QWORD *)(a1 + 8);
          v19 = (unsigned __int16)v57;
          if ( (unsigned __int16)v57 == 0xFFFF )
            v19 = (unsigned __int16)EtwpSystemLogger[0];
          v20 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
          v48 = v20;
          v21 = KeGetCurrentThread();
          --v21->KernelApcDisable;
          v22 = EtwpAcquireLoggerContextByLoggerId(v20, v19, 1);
          v23 = v22;
          ObjectsSecurityDescriptor = v22;
          if ( v22 )
          {
            if ( (v22[3] & 0x2000000) == 0 )
            {
              EtwpReleaseLoggerContext(v20, v22, 1);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              PsDereferenceMonitorContextServerSilo(v20);
              return 3221225485LL;
            }
            v24 = 32LL * *((unsigned __int8 *)v22 + 834);
            *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&EtwpGroupMasks + v24);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)((char *)&unk_1402D83B0 + v24);
            EtwpMapEnableFlags(a1 + 16, 0);
            EtwpReleaseLoggerContext(v20, v23, 1);
          }
          else
          {
            v8 = -1073741162;
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v17 = v20;
          goto LABEL_84;
        }
        return 3221225476LL;
      }
      if ( v54 == 2 )
      {
        *a4 = 16;
        if ( a2 == 16 )
        {
          for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
            v7 += *(_QWORD *)(*(_QWORD *)(KeGetPrcb(j) + 24536) + 2832LL);
          *(_QWORD *)(a1 + 8) = v7;
          return v8;
        }
        return 3221225476LL;
      }
      if ( v54 != 3 )
      {
        if ( v54 == 4 )
        {
          *a4 = 24;
          if ( a2 >= 0x18 )
          {
            v55 = *(_QWORD *)(a1 + 8);
            SecurityInformation = *(_DWORD *)(a1 + 4);
            v11 = (unsigned __int16)v55;
            if ( (unsigned __int16)v55 == 0xFFFF )
              v11 = (unsigned __int16)EtwpSystemLogger[0];
            v12 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
            v13 = KeGetCurrentThread();
            --v13->KernelApcDisable;
            v14 = EtwpAcquireLoggerContextByLoggerId(v12, v11, 0);
            v15 = v14;
            if ( v14 )
            {
              v16 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v14);
              ObjectsSecurityDescriptor = v16;
              Length = a2 - 16;
              v8 = SeQuerySecurityDescriptorInfo(
                     &SecurityInformation,
                     (PSECURITY_DESCRIPTOR)(a1 + 16),
                     &Length,
                     &ObjectsSecurityDescriptor);
              *a4 = Length + 16;
              EtwpDereferenceLoggerSecurityDescriptor((__int64)v15, (__int64)v16);
              EtwpReleaseLoggerContext(v12, v15, 0);
            }
            else
            {
              v8 = -1073741162;
            }
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v17 = v12;
LABEL_84:
            PsDereferenceMonitorContextServerSilo(v17);
            return v8;
          }
          return 3221225476LL;
        }
        return (unsigned int)-1073741822;
      }
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
    }
    else
    {
      *a4 = 8;
      if ( a2 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 60;
    }
  }
  return v8;
}

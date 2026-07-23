/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1406A3A4C
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateTagFilter @ 0x140495FF4 (EtwpUpdateTagFilter.c)
 *     EtwpUpdateGroupMasks @ 0x1404962BC (EtwpUpdateGroupMasks.c)
 *     NtSetIntervalProfile @ 0x14052A858 (NtSetIntervalProfile.c)
 *     EtwpCheckSystemTraceAccess @ 0x140581100 (EtwpCheckSystemTraceAccess.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2BB0 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdatePmcCounters @ 0x1406A46A4 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1406A47B8 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateStackTracing @ 0x1406A8484 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1406A9B1C (EtwpEnableStackCaching.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  int v16; // r15d
  unsigned int v17; // r12d
  int v18; // r13d
  int v19; // r14d
  ULONG v20; // edi
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  unsigned int *v29; // rcx
  int updated; // eax
  unsigned int v31; // esi
  __int64 v32; // rbx
  unsigned int v33; // edx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v40; // esi
  __int64 v41; // rcx
  struct _KTHREAD *v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rax
  __int16 *v45; // r8
  __int64 v46; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v48; // edx
  __int64 v49; // rax
  unsigned int v50; // esi
  __int64 v51; // r14
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned int v56; // esi
  char v57; // [rsp+30h] [rbp-C8h]
  int v58; // [rsp+34h] [rbp-C4h]
  unsigned int v59; // [rsp+3Ch] [rbp-BCh]
  unsigned int v60; // [rsp+40h] [rbp-B8h]
  int v61; // [rsp+4Ch] [rbp-ACh]
  _OWORD v62[2]; // [rsp+88h] [rbp-70h] BYREF
  _DWORD v63[4]; // [rsp+A8h] [rbp-50h] BYREF
  _DWORD v64[4]; // [rsp+B8h] [rbp-40h] BYREF

  if ( a2 < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)a1;
  v58 = v7;
  if ( v7 > 11 )
  {
    if ( v7 == 12 )
    {
      if ( a2 < 0x10 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
      if ( (int)result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
        return 3221225569LL;
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v56 = (a2 - 16) >> 2;
      if ( v56 > 4 )
        return 3221225485LL;
      memmove(v64, (const void *)(a1 + 16), 4LL * v56);
      return (unsigned int)EtwpSetPmcProfileSource(v64, v56);
    }
    else
    {
      if ( v7 <= 13 )
        return (unsigned int)-1073741822;
      if ( v7 <= 15 )
        goto LABEL_82;
      if ( v7 == 16 )
      {
        if ( a2 != 32 )
          return 3221225476LL;
        v60 = *(_DWORD *)(a1 + 20);
        v59 = *(_DWORD *)(a1 + 24);
        if ( *(_BYTE *)(a1 + 16) )
        {
          v46 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v49 = EtwpAcquireLoggerContextByLoggerId(v46, v48, 1);
          v28 = v49;
          if ( !v49 )
            goto LABEL_34;
          v13 = EtwpCheckLoggerControlAccess(0x80u, v49);
          if ( v13 < 0 )
            goto LABEL_92;
          updated = EtwpEnableStackCaching(v28, v60, v59);
          goto LABEL_91;
        }
        return 3221225659LL;
      }
      if ( v7 == 17 )
        goto LABEL_67;
      if ( v7 != 18 )
        return (unsigned int)-1073741822;
      return (unsigned int)EtwpSetSoftRestartInformation(a1);
    }
  }
  if ( v7 != 11 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( !v9 )
      {
        if ( a2 != 8 )
          return 3221225476LL;
        v20 = *(_DWORD *)(a1 + 4);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        v13 = NtSetIntervalProfile(v20, ProfileTime);
        if ( v13 >= 0 )
          EtwpProfileInterval = v20;
        goto LABEL_30;
      }
      v10 = v9 - 2;
      if ( !v10 )
      {
        if ( ((a2 - 16) & 0xFFFFFFFB) != 0 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        v16 = *(_DWORD *)(a1 + 4);
        if ( !v16 )
          return 3221225485LL;
        v17 = *(_DWORD *)(a1 + 8);
        if ( v17 < 0x3E8 )
          return 3221225485LL;
        v18 = *(_DWORD *)(a1 + 12);
        if ( !v18 )
          return 3221225485LL;
        v19 = EtwpSpinLockHoldThreshold;
        if ( a2 == 20 )
        {
          v19 = *(_DWORD *)(a1 + 16);
          if ( (unsigned int)(v19 - 1) <= 0xF423E )
            return 3221225485LL;
        }
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpSpinLockHoldThreshold = v19;
        EtwpSpinLockSpinThreshold = v16;
        EtwpSpinLockAcquireSampleRate = v17;
        EtwpSpinLockContentionSampleRate = v18;
        goto LABEL_30;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 3 )
          {
LABEL_67:
            if ( a2 >= 0x10 )
            {
              if ( (((_BYTE)a2 - 16) & 3) == 0 )
              {
                v40 = (a2 - 16) >> 2;
                if ( (unsigned __int16)v40 <= 4u )
                {
                  memmove(v63, (const void *)(a1 + 16), 4LL * (unsigned __int16)v40);
                  v41 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
                  v42 = KeGetCurrentThread();
                  --v42->KernelApcDisable;
                  v44 = EtwpAcquireLoggerContextByLoggerId(v41, v43, 1);
                  v28 = v44;
                  if ( v44 )
                  {
                    v29 = (unsigned int *)v44;
                    if ( (*(_DWORD *)(v44 + 12) & 0x2000000) != 0 )
                    {
                      v13 = EtwpCheckSystemTraceAccess(v44, 0x80u);
                      if ( v13 >= 0 )
                      {
                        v45 = EtwpPoolTagFilter;
                        if ( v58 != 10 )
                          v45 = EtwpObjectTypeFilter;
                        EtwpUpdateTagFilter(v63, v40, (__int64)&v45[10 * *(unsigned __int8 *)(v28 + 818)]);
                      }
                      goto LABEL_92;
                    }
                    goto LABEL_36;
                  }
LABEL_34:
                  v13 = -1073741162;
LABEL_37:
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
                  return (unsigned int)v13;
                }
              }
              return 3221225485LL;
            }
            return 3221225476LL;
          }
          return (unsigned int)-1073741822;
        }
        if ( a2 != 16 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        v14 = *(_DWORD *)(a1 + 4);
        v15 = *(_DWORD *)(a1 + 8);
        v61 = *(_DWORD *)(a1 + 12);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpExecutiveResourceReleaseSampleRate = v14;
        EtwpExecutiveResourceContentionSampleRate = v15;
        EtwpExecutiveResourceTimeout = v61;
LABEL_30:
        KeReleaseMutex(&EtwpGroupMaskMutex, 0);
        return (unsigned int)v13;
      }
LABEL_82:
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( (((_BYTE)a2 - 16) & 3) != 0 )
        return 3221225485LL;
      v50 = (a2 - 16) >> 2;
      v51 = a1 + 16;
      v52 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
      v53 = KeGetCurrentThread();
      --v53->KernelApcDisable;
      v55 = EtwpAcquireLoggerContextByLoggerId(v52, v54, 1);
      v28 = v55;
      if ( !v55 )
        goto LABEL_34;
      v13 = EtwpCheckLoggerControlAccess(0x80u, v55);
      if ( v13 >= 0 )
      {
        if ( v58 == 6 )
        {
          updated = EtwpUpdateStackTracing(v28, v51, v50);
        }
        else if ( v58 == 15 )
        {
          updated = EtwpUpdatePmcCounters(v28, v51, v50);
        }
        else
        {
          updated = EtwpUpdatePmcEvents(v28, v51, v50);
        }
        goto LABEL_91;
      }
LABEL_92:
      EtwpReleaseLoggerContext((unsigned int *)v28, 1);
      goto LABEL_37;
    }
    if ( a2 != 48 )
      return 3221225476LL;
    v62[0] = *(_OWORD *)(a1 + 16);
    v62[1] = *(_OWORD *)(a1 + 32);
    v21 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v24 = EtwpAcquireLoggerContextByLoggerId(v21, v23, 1);
    v28 = v24;
    if ( !v24 )
      goto LABEL_34;
    v29 = (unsigned int *)v24;
    if ( (*(_DWORD *)(v24 + 12) & 0x2000000) == 0 )
    {
LABEL_36:
      EtwpReleaseLoggerContext(v29, 1);
      v13 = -1073741811;
      goto LABEL_37;
    }
    v13 = EtwpCheckSystemTraceAccess(v24, 0x80u);
    if ( v13 < 0 )
      goto LABEL_92;
    updated = EtwpUpdateGroupMasks((unsigned __int64 *)v28, (__int64)v62);
LABEL_91:
    v13 = updated;
    goto LABEL_92;
  }
  v57 = 0;
  if ( a2 < 0x10 )
    return 3221225476LL;
  if ( (((_BYTE)a2 - 16) & 3) != 0 )
    return 3221225485LL;
  v31 = (a2 - 16) >> 2;
  if ( v31 > 1 )
    return 3221225485LL;
  v32 = *(_QWORD *)(a1 + 8);
  if ( v31 )
  {
    if ( *(_DWORD *)(a1 + 16) != 1316 )
      return 3221225485LL;
    v57 = 1;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  v33 = (unsigned __int16)v32;
  if ( (unsigned __int16)v32 == 0xFFFF )
    v33 = (unsigned __int16)EtwpSystemLogger[0];
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  v35 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v33, 1);
  v28 = v35;
  if ( v35 )
  {
    v13 = EtwpCheckLoggerControlAccess(0x80u, v35);
    if ( v13 >= 0 )
    {
      if ( v57 )
        _InterlockedOr((volatile signed __int32 *)(v28 + 816), 0x400u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v28 + 816), 0xFFFFFBFF);
    }
    goto LABEL_92;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
  return 3221226134LL;
}

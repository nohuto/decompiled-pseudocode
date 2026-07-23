/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140662F28
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 *     NtSetIntervalProfile @ 0x1404E34AC (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x140500298 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x14050C678 (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405453E4 (EtwpCheckSystemTraceAccess.c)
 *     EtwpSetPmcProfileSource @ 0x140662118 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdatePmcCounters @ 0x140663D54 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x140663E68 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateStackTracing @ 0x1406667D0 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140667B28 (EtwpEnableStackCaching.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // r14d
  int v15; // r15d
  unsigned int v16; // r12d
  int v17; // r13d
  int v18; // r14d
  ULONG v19; // edi
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 SiloDriverState; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v24; // rax
  unsigned int *v25; // rdi
  __int64 v26; // rcx
  int updated; // eax
  unsigned int v28; // esi
  __int64 v29; // rbx
  unsigned int v30; // edi
  __int64 v31; // r14
  struct _KTHREAD *v32; // rcx
  unsigned int *v33; // rax
  unsigned int *v34; // rdi
  __int16 *v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // edi
  struct _KTHREAD *v38; // rcx
  unsigned int *v39; // rax
  unsigned int v40; // esi
  __int64 v41; // r14
  unsigned int v42; // edi
  __int64 v43; // r15
  struct _KTHREAD *v44; // rcx
  unsigned int *v45; // rax
  unsigned int *v46; // rdi
  int v47; // eax
  unsigned int v48; // esi
  unsigned int v49; // esi
  __int64 v50; // rbx
  unsigned int v51; // edi
  struct _KTHREAD *v52; // rcx
  unsigned int *v53; // rax
  char v54; // [rsp+30h] [rbp-D8h]
  int v55; // [rsp+34h] [rbp-D4h]
  unsigned int v56; // [rsp+40h] [rbp-C8h]
  unsigned int v57; // [rsp+44h] [rbp-C4h]
  int v58; // [rsp+54h] [rbp-B4h]
  _OWORD v59[2]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v60[4]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v61[4]; // [rsp+C0h] [rbp-48h] BYREF

  if ( a2 < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)a1;
  v55 = v7;
  if ( v7 <= 10 )
  {
    if ( v7 != 10 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( !v9 )
        {
          if ( a2 == 8 )
          {
            v19 = *(_DWORD *)(a1 + 4);
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            v12 = NtSetIntervalProfile(v19, ProfileTime);
            if ( v12 >= 0 )
              EtwpProfileInterval = v19;
LABEL_28:
            KeReleaseMutex(&EtwpGroupMaskMutex, 0);
            return (unsigned int)v12;
          }
          return 3221225476LL;
        }
        v10 = v9 - 2;
        if ( !v10 )
        {
          if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
          {
            result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
            v12 = result;
            if ( (int)result < 0 )
              return result;
            v15 = *(_DWORD *)(a1 + 4);
            if ( !v15 )
              return 3221225485LL;
            v16 = *(_DWORD *)(a1 + 8);
            if ( v16 < 0x3E8 )
              return 3221225485LL;
            v17 = *(_DWORD *)(a1 + 12);
            if ( !v17 )
              return 3221225485LL;
            v18 = EtwpSpinLockHoldThreshold;
            if ( a2 == 20 )
            {
              v18 = *(_DWORD *)(a1 + 16);
              if ( (unsigned int)(v18 - 1) <= 0xF423E )
                return 3221225485LL;
            }
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpSpinLockHoldThreshold = v18;
            EtwpSpinLockSpinThreshold = v15;
            EtwpSpinLockAcquireSampleRate = v16;
            EtwpSpinLockContentionSampleRate = v17;
            goto LABEL_28;
          }
          return 3221225476LL;
        }
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            if ( a2 == 16 )
            {
              result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
              v12 = result;
              if ( (int)result < 0 )
                return result;
              v13 = *(_DWORD *)(a1 + 4);
              v14 = *(_DWORD *)(a1 + 8);
              v58 = *(_DWORD *)(a1 + 12);
              KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
              EtwpExecutiveResourceReleaseSampleRate = v13;
              EtwpExecutiveResourceContentionSampleRate = v14;
              EtwpExecutiveResourceTimeout = v58;
              goto LABEL_28;
            }
            return 3221225476LL;
          }
          return (unsigned int)-1073741822;
        }
        goto LABEL_73;
      }
      if ( a2 != 48 )
        return 3221225476LL;
      v20 = *(_QWORD *)(a1 + 8);
      v59[0] = *(_OWORD *)(a1 + 16);
      v59[1] = *(_OWORD *)(a1 + 32);
      v21 = (unsigned __int16)v20;
      if ( (unsigned __int16)v20 == 0xFFFF )
        v21 = (unsigned __int16)EtwpSystemLogger[0];
      SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v24 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v21, 1);
      v25 = v24;
      if ( !v24 )
        goto LABEL_34;
      if ( (v24[3] & 0x2000000) == 0 )
      {
        EtwpReleaseLoggerContext(SiloDriverState, v24, 1);
        v12 = -1073741811;
        goto LABEL_37;
      }
      v12 = EtwpCheckSystemTraceAccess((__int64)v24, 0x80u);
      if ( v12 >= 0 )
      {
        updated = EtwpUpdateGroupMasks((unsigned __int64 *)v25, (__int64)v59);
LABEL_71:
        v12 = updated;
        goto LABEL_72;
      }
      goto LABEL_72;
    }
    goto LABEL_48;
  }
  if ( v7 == 11 )
  {
    v54 = 0;
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( (((_BYTE)a2 - 16) & 3) != 0 )
      return 3221225485LL;
    v49 = (a2 - 16) >> 2;
    if ( v49 > 1 )
      return 3221225485LL;
    v50 = *(_QWORD *)(a1 + 8);
    if ( v49 )
    {
      if ( *(_DWORD *)(a1 + 16) != 1316 )
        return 3221225485LL;
      v54 = 1;
    }
    if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
    {
      v51 = (unsigned __int16)v50;
      if ( (unsigned __int16)v50 == 0xFFFF )
        v51 = (unsigned __int16)EtwpSystemLogger[0];
      SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
      v52 = KeGetCurrentThread();
      --v52->KernelApcDisable;
      v53 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v51, 1);
      v25 = v53;
      if ( v53 )
      {
        v12 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v53);
        if ( v12 >= 0 )
        {
          if ( v54 )
            _InterlockedOr((volatile signed __int32 *)v25 + 208, 0x400u);
          else
            _InterlockedAnd((volatile signed __int32 *)v25 + 208, 0xFFFFFBFF);
        }
        goto LABEL_72;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PsDereferenceMonitorContextServerSilo(SiloDriverState);
      return 3221226134LL;
    }
    return 3221225569LL;
  }
  if ( v7 == 12 )
  {
    if ( a2 < 0x10 )
      return 3221225476LL;
    result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
    if ( (int)result < 0 )
      return result;
    if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
    {
      v48 = (a2 - 16) >> 2;
      if ( v48 <= 4 )
      {
        memmove(v61, (const void *)(a1 + 16), 4LL * v48);
        return (unsigned int)EtwpSetPmcProfileSource(v61, v48);
      }
      return 3221225485LL;
    }
    return 3221225569LL;
  }
  if ( v7 <= 13 )
    return (unsigned int)-1073741822;
  if ( v7 <= 15 )
  {
LABEL_73:
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( (((_BYTE)a2 - 16) & 3) == 0 )
    {
      v40 = (a2 - 16) >> 2;
      v41 = a1 + 16;
      v42 = (unsigned __int16)*(_QWORD *)(a1 + 8);
      if ( v42 == 0xFFFF )
        v42 = (unsigned __int16)EtwpSystemLogger[0];
      v43 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
      v44 = KeGetCurrentThread();
      --v44->KernelApcDisable;
      v45 = EtwpAcquireLoggerContextByLoggerId(v43, v42, 1);
      v46 = v45;
      if ( v45 )
      {
        v12 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v45);
        if ( v12 >= 0 )
        {
          if ( v55 == 6 )
          {
            v47 = EtwpUpdateStackTracing(v46, v41, v40);
          }
          else if ( v55 == 15 )
          {
            v47 = EtwpUpdatePmcCounters(v46, v41, v40);
          }
          else
          {
            v47 = EtwpUpdatePmcEvents(v46, v41, v40);
          }
          v12 = v47;
        }
        EtwpReleaseLoggerContext(v43, v46, 1);
      }
      else
      {
        v12 = -1073741162;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v26 = v43;
      goto LABEL_38;
    }
    return 3221225485LL;
  }
  if ( v7 != 16 )
  {
    if ( v7 != 17 )
      return (unsigned int)-1073741822;
LABEL_48:
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( (((_BYTE)a2 - 16) & 3) != 0 )
      return 3221225485LL;
    v28 = (a2 - 16) >> 2;
    if ( (unsigned __int16)v28 > 4u )
      return 3221225485LL;
    v29 = *(_QWORD *)(a1 + 8);
    memmove(v60, (const void *)(a1 + 16), 4LL * (unsigned __int16)v28);
    v30 = (unsigned __int16)v29;
    if ( (unsigned __int16)v29 == 0xFFFF )
      v30 = (unsigned __int16)EtwpSystemLogger[0];
    v31 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = EtwpAcquireLoggerContextByLoggerId(v31, v30, 1);
    v34 = v33;
    if ( v33 )
    {
      if ( (v33[3] & 0x2000000) != 0 )
      {
        v12 = EtwpCheckSystemTraceAccess((__int64)v33, 0x80u);
        if ( v12 >= 0 )
        {
          v35 = EtwpPoolTagFilter;
          if ( v55 != 10 )
            v35 = EtwpObjectTypeFilter;
          EtwpUpdateTagFilter(v60, v28, (__int64)&v35[10 * *((unsigned __int8 *)v34 + 834)]);
        }
        EtwpReleaseLoggerContext(v31, v34, 1);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v26 = v31;
        goto LABEL_38;
      }
      EtwpReleaseLoggerContext(v31, v33, 1);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PsDereferenceMonitorContextServerSilo(v31);
      return 3221225485LL;
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221226134LL;
  }
  if ( a2 != 32 )
    return 3221225476LL;
  v36 = *(_QWORD *)(a1 + 8);
  v57 = *(_DWORD *)(a1 + 20);
  v56 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 16) )
  {
    v37 = (unsigned __int16)v36;
    if ( (unsigned __int16)v36 == 0xFFFF )
      v37 = (unsigned __int16)EtwpSystemLogger[0];
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    v39 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, v37, 1);
    v25 = v39;
    if ( !v39 )
    {
LABEL_34:
      v12 = -1073741162;
LABEL_37:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v26 = SiloDriverState;
LABEL_38:
      PsDereferenceMonitorContextServerSilo(v26);
      return (unsigned int)v12;
    }
    v12 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v39);
    if ( v12 >= 0 )
    {
      updated = EtwpEnableStackCaching(v25, v57, v56);
      goto LABEL_71;
    }
LABEL_72:
    EtwpReleaseLoggerContext(SiloDriverState, v25, 1);
    goto LABEL_37;
  }
  return 3221225659LL;
}

/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1406E6024
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x14054B1FC (EtwpUpdateTagFilter.c)
 *     NtSetIntervalProfile @ 0x14056062C (NtSetIntervalProfile.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405C4B58 (EtwpCheckSystemTraceAccess.c)
 *     EtwpSetPmcProfileSource @ 0x1406E51EC (EtwpSetPmcProfileSource.c)
 *     EtwpUpdatePmcCounters @ 0x1406E6E30 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1406E6F40 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateStackTracing @ 0x1406E99B8 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1406EAE54 (EtwpEnableStackCaching.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // edi
  int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  unsigned int v16; // r13d
  int v17; // r15d
  ULONG v18; // esi
  __int64 v19; // rax
  unsigned int v20; // ecx
  struct _KTHREAD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  unsigned int *v26; // rcx
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  int updated; // eax
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  unsigned int v32; // r14d
  __int64 v33; // rbx
  unsigned int v34; // ecx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  __int16 *v37; // r8
  __int64 v38; // rcx
  struct _KTHREAD *v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r14d
  __int64 v42; // r15
  unsigned int v43; // ecx
  struct _KTHREAD *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r14d
  unsigned int v47; // r14d
  __int64 v48; // rdi
  unsigned int v49; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v51; // rax
  unsigned int *v52; // rsi
  __int16 v53; // ax
  char v54; // [rsp+30h] [rbp-D8h]
  int v55; // [rsp+34h] [rbp-D4h]
  unsigned int v56; // [rsp+3Ch] [rbp-CCh]
  unsigned int v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+48h] [rbp-C0h]
  int v59; // [rsp+5Ch] [rbp-ACh]
  _OWORD v60[2]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v61[4]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v62[4]; // [rsp+C0h] [rbp-48h] BYREF

  if ( a2 < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)a1;
  v55 = v7;
  if ( v7 > 10 )
  {
    if ( v7 == 11 )
    {
      v54 = 0;
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( (((_BYTE)a2 - 16) & 3) != 0 )
        return 3221225485LL;
      v47 = (a2 - 16) >> 2;
      if ( v47 > 1 )
        return 3221225485LL;
      v48 = *(_QWORD *)(a1 + 8);
      if ( v47 )
      {
        if ( *(_DWORD *)(a1 + 16) != 1316 )
          return 3221225485LL;
        v54 = 1;
      }
      if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
      {
        v49 = (unsigned __int16)v48;
        if ( (unsigned __int16)v48 == 0xFFFF )
          v49 = (unsigned __int16)EtwpSystemLogger[0];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v51 = EtwpAcquireLoggerContextByLoggerId(v49, 1);
        v52 = (unsigned int *)v51;
        if ( v51 )
        {
          v12 = EtwpCheckLoggerControlAccess(0x80u, v51);
          if ( v12 >= 0 )
          {
            if ( v54 )
              v52[208] |= 0x400u;
            else
              v52[208] &= ~0x400u;
          }
          EtwpReleaseLoggerContext(v52, 1);
          v30 = KeGetCurrentThread();
          v53 = v30->KernelApcDisable + 1;
          v30->KernelApcDisable = v53;
          if ( v53 )
            return (unsigned int)v12;
          goto LABEL_110;
        }
        goto LABEL_34;
      }
    }
    else
    {
      if ( v7 != 12 )
      {
        if ( v7 <= 13 )
          return (unsigned int)-1073741822;
        if ( v7 <= 15 )
        {
LABEL_76:
          if ( a2 < 0x10 )
            return 3221225476LL;
          if ( (((_BYTE)a2 - 16) & 3) == 0 )
          {
            v41 = (a2 - 16) >> 2;
            v42 = a1 + 16;
            v43 = (unsigned __int16)*(_QWORD *)(a1 + 8);
            if ( v43 == 0xFFFF )
              v43 = (unsigned __int16)EtwpSystemLogger[0];
            v44 = KeGetCurrentThread();
            --v44->KernelApcDisable;
            v45 = EtwpAcquireLoggerContextByLoggerId(v43, 1);
            v23 = v45;
            if ( v45 )
            {
              v12 = EtwpCheckLoggerControlAccess(0x80u, v45);
              if ( v12 < 0 )
                goto LABEL_47;
              if ( v55 == 6 )
              {
                updated = EtwpUpdateStackTracing(v23, v42, v41);
              }
              else if ( v55 == 15 )
              {
                updated = EtwpUpdatePmcCounters(v23, v42, v41);
              }
              else
              {
                updated = EtwpUpdatePmcEvents(v23, v42, v41);
              }
              goto LABEL_46;
            }
LABEL_75:
            v12 = -1073741162;
LABEL_48:
            v30 = KeGetCurrentThread();
            v31 = v30->KernelApcDisable + 1;
            v30->KernelApcDisable = v31;
            if ( v31 )
              return (unsigned int)v12;
LABEL_110:
            if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
              && !v30->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            return (unsigned int)v12;
          }
          return 3221225485LL;
        }
        if ( v7 == 16 )
        {
          if ( a2 != 32 )
            return 3221225476LL;
          v38 = *(_QWORD *)(a1 + 8);
          v57 = *(_DWORD *)(a1 + 20);
          v56 = *(_DWORD *)(a1 + 24);
          if ( !*(_BYTE *)(a1 + 16) )
            return 3221225659LL;
          LODWORD(v38) = (unsigned __int16)v38;
          if ( (unsigned __int16)v38 == 0xFFFF )
            LODWORD(v38) = (unsigned __int16)EtwpSystemLogger[0];
          v39 = KeGetCurrentThread();
          --v39->KernelApcDisable;
          v40 = EtwpAcquireLoggerContextByLoggerId(v38, 1);
          v23 = v40;
          if ( v40 )
          {
            v12 = EtwpCheckLoggerControlAccess(0x80u, v40);
            if ( v12 < 0 )
              goto LABEL_47;
            updated = EtwpEnableStackCaching(v23, v57, v56);
            goto LABEL_46;
          }
          goto LABEL_75;
        }
        if ( v7 != 17 )
          return (unsigned int)-1073741822;
        goto LABEL_56;
      }
      if ( a2 < 0x10 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
      if ( (int)result < 0 )
        return result;
      if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
      {
        v46 = (a2 - 16) >> 2;
        if ( v46 <= 4 )
        {
          memmove(v62, (const void *)(a1 + 16), 4LL * v46);
          return (unsigned int)EtwpSetPmcProfileSource(v62, v46);
        }
        return 3221225485LL;
      }
    }
    return 3221225569LL;
  }
  if ( v7 == 10 )
  {
LABEL_56:
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( (((_BYTE)a2 - 16) & 3) != 0 )
      return 3221225485LL;
    v32 = (a2 - 16) >> 2;
    if ( (unsigned __int16)v32 > 4u )
      return 3221225485LL;
    v33 = *(_QWORD *)(a1 + 8);
    memmove(v61, (const void *)(a1 + 16), 4LL * (unsigned __int16)v32);
    v34 = (unsigned __int16)v33;
    if ( (unsigned __int16)v33 == 0xFFFF )
      v34 = (unsigned __int16)EtwpSystemLogger[0];
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    v36 = EtwpAcquireLoggerContextByLoggerId(v34, 1);
    v23 = v36;
    if ( !v36 )
      goto LABEL_34;
    v26 = (unsigned int *)v36;
    if ( (*(_DWORD *)(v36 + 12) & 0x2000000) != 0 )
    {
      v12 = EtwpCheckSystemTraceAccess(v36, 0x80u);
      if ( v12 >= 0 )
      {
        v37 = EtwpPoolTagFilter;
        if ( v55 != 10 )
          v37 = EtwpObjectTypeFilter;
        EtwpUpdateTagFilter(v61, v32, (__int64)&v37[10 * *(unsigned __int8 *)(v23 + 834)]);
      }
      goto LABEL_47;
    }
LABEL_40:
    EtwpReleaseLoggerContext(v26, 1);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225485LL;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( !v9 )
    {
      if ( a2 == 8 )
      {
        v18 = *(_DWORD *)(a1 + 4);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        v12 = NtSetIntervalProfile(v18, ProfileTime);
        if ( v12 >= 0 )
          EtwpProfileInterval = v18;
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
        v58 = *(_DWORD *)(a1 + 12);
        if ( !v58 )
          return 3221225485LL;
        v17 = EtwpSpinLockHoldThreshold;
        if ( a2 == 20 )
        {
          v17 = *(_DWORD *)(a1 + 16);
          if ( (unsigned int)(v17 - 1) <= 0xF423E )
            return 3221225485LL;
        }
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpSpinLockHoldThreshold = v17;
        EtwpSpinLockSpinThreshold = v15;
        EtwpSpinLockAcquireSampleRate = v16;
        EtwpSpinLockContentionSampleRate = v58;
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
          v59 = *(_DWORD *)(a1 + 12);
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpExecutiveResourceReleaseSampleRate = v13;
          EtwpExecutiveResourceContentionSampleRate = v14;
          EtwpExecutiveResourceTimeout = v59;
          goto LABEL_28;
        }
        return 3221225476LL;
      }
      return (unsigned int)-1073741822;
    }
    goto LABEL_76;
  }
  if ( a2 != 48 )
    return 3221225476LL;
  v19 = *(_QWORD *)(a1 + 8);
  v60[0] = *(_OWORD *)(a1 + 16);
  v60[1] = *(_OWORD *)(a1 + 32);
  v20 = (unsigned __int16)v19;
  if ( (unsigned __int16)v19 == 0xFFFF )
    v20 = (unsigned __int16)EtwpSystemLogger[0];
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v22 = EtwpAcquireLoggerContextByLoggerId(v20, 1);
  v23 = v22;
  if ( v22 )
  {
    v26 = (unsigned int *)v22;
    if ( (*(_DWORD *)(v22 + 12) & 0x2000000) != 0 )
    {
      v12 = EtwpCheckSystemTraceAccess(v22, 0x80u);
      if ( v12 < 0 )
      {
LABEL_47:
        EtwpReleaseLoggerContext((unsigned int *)v23, 1);
        goto LABEL_48;
      }
      updated = EtwpUpdateGroupMasks((unsigned __int64 *)v23, (__int64)v60);
LABEL_46:
      v12 = updated;
      goto LABEL_47;
    }
    goto LABEL_40;
  }
LABEL_34:
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221226134LL;
}

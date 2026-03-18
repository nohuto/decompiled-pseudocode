/*
 * XREFs of PopBatteryWorker @ 0x14056B280
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14014FB80 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x140181910 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEstimatesSpoiled @ 0x1406B665C (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x1406B6898 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406B6A2C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406B6AAC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406B6C28 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406B6F28 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x1406B7074 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x1406B70DC (PopEstimateChargeTime.c)
 */

void __fastcall PopBatteryWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // esi
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rbx
  int WnfStateData; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  char v17; // r13
  char v18; // r12
  __int32 v19; // r15d
  __int64 *v20; // rdi
  bool v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rdi
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // r8
  unsigned int v27; // r10d
  __int64 v28; // r9
  unsigned int v29; // r14d
  char v30; // di
  __int64 *k; // rbx
  signed __int64 v32; // rcx
  ULONG_PTR v33; // rtt
  __int64 v34; // rdx
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  signed __int64 v37; // rcx
  ULONG_PTR v38; // rtt
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  __int64 *i; // rbx
  __int64 *v42; // rbx
  bool v43; // zf
  __int64 *v44; // rax
  __int64 **v45; // rcx
  __int64 *v46; // rbx
  int EstimatedTime; // eax
  __int64 j; // rdx
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // eax
  int v52; // eax
  int v53; // edi
  __int64 v54; // rcx
  unsigned int v55; // edi
  __int64 *v56; // rbx
  int v57; // eax
  signed __int32 v58[8]; // [rsp+8h] [rbp-C9h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-A9h]
  int *v60; // [rsp+30h] [rbp-A1h]
  __int64 v61; // [rsp+38h] [rbp-99h]
  __int64 v62; // [rsp+40h] [rbp-91h]
  __int64 v63; // [rsp+48h] [rbp-89h]
  char v64; // [rsp+58h] [rbp-79h]
  int v65; // [rsp+5Ch] [rbp-75h]
  int v66; // [rsp+60h] [rbp-71h] BYREF
  int v67; // [rsp+64h] [rbp-6Dh]
  int v68; // [rsp+68h] [rbp-69h]
  unsigned int v69; // [rsp+6Ch] [rbp-65h]
  int v70; // [rsp+70h] [rbp-61h] BYREF
  __int32 v71; // [rsp+78h] [rbp-59h]
  __int64 v72; // [rsp+80h] [rbp-51h] BYREF
  __int64 v73; // [rsp+88h] [rbp-49h] BYREF
  __int64 v74; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int64 v75; // [rsp+98h] [rbp-39h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-29h]
  _OWORD v78[2]; // [rsp+C0h] [rbp-11h] BYREF
  int v79; // [rsp+E0h] [rbp+Fh]
  __int128 v80; // [rsp+E4h] [rbp+13h]
  int v81; // [rsp+F4h] [rbp+23h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v5, (ULONG_PTR)&PopPolicyDeviceLock, v6);
  v7 = 1;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&PopCB, 0LL, 0LL, v6);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&PopCB, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&PopCB, v9, (ULONG_PTR)&PopCB, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_14032E988 = (__int64)KeGetCurrentThread();
  v70 = 8;
  v60 = &v70;
  Timeout = (PLARGE_INTEGER)&v76;
  WnfStateData = ZwQueryWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL);
  if ( WnfStateData == -1073741670 || WnfStateData == -1073741431 )
  {
    v7 = 0;
  }
  else if ( !WnfStateData && v70 == 8 )
  {
    v7 = (v76 != 0) + 2;
  }
  v16 = (__int64 *)qword_14032E9B0;
  v65 = v7;
  if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
  {
    do
    {
      IoCancelIrp((PIRP)*(v16 - 1));
      v16 = (__int64 *)*v16;
    }
    while ( v16 != &qword_14032E9B0 );
    for ( i = (__int64 *)qword_14032E9B0; i != &qword_14032E9B0; i = (__int64 *)*i )
      KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  }
  v17 = 0;
  v64 = 0;
  v18 = 0;
  do
  {
    v19 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v20 = (__int64 *)qword_14032E9B0;
    v71 = v19;
    v21 = (v19 & 2) != 0;
    while ( v20 != &qword_14032E9B0 )
    {
      v42 = v20 - 8;
      v43 = *((_DWORD *)v20 + 10) == 2;
      v44 = v20;
      v20 = (__int64 *)*v20;
      if ( v43 )
      {
        v45 = (__int64 **)v44[1];
        if ( (__int64 *)v20[1] != v44 || *v45 != v44 )
          __fastfail(3u);
        *v45 = v20;
        v20[1] = (__int64)v45;
        *v44 = 0LL;
        --dword_14032E994;
        ++dword_14032E9F8;
        byte_14032E998 = 1;
        if ( (int)PopBatteryReadTag(v42) < 0 )
          PopBatteryWaitTag(v42);
        v21 = 1;
      }
    }
    v22 = qword_14032E9A0;
    if ( (__int64 *)qword_14032E9A0 != &qword_14032E9A0 )
    {
      do
      {
        if ( *(_DWORD *)(v22 + 104) == 1 )
        {
          KeWaitForSingleObject((PVOID)(v22 + 80), Executive, 0, 0, 0LL);
          if ( (int)PopBatteryInitialize(v22) < 0 )
            PopBatteryWaitTag(v22);
          else
            v21 = 1;
        }
        v22 = *(_QWORD *)v22;
      }
      while ( (__int64 *)v22 != &qword_14032E9A0 );
      LOBYTE(v19) = v71;
    }
    v23 = (__int64 *)qword_14032E9B0;
    if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
    {
      do
      {
        v46 = v23 - 8;
        LOBYTE(v14) = 1;
        v77 = *(_OWORD *)((char *)v23 + 84);
        if ( (int)PopBatteryQueryStatus(v23 - 8, v14) >= 0 )
        {
          if ( (((unsigned __int8)v77 ^ *((_BYTE *)v46 + 148)) & 7) != 0 )
          {
            v18 = 1;
          }
          else if ( DWORD1(v77) != *((_DWORD *)v46 + 38) || HIDWORD(v77) != *((_DWORD *)v46 + 40) )
          {
            v17 = 1;
          }
          EstimatedTime = -1;
          if ( (*((_DWORD *)v46 + 37) & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v23 - 8, 0LL);
          *((_DWORD *)v46 + 41) = EstimatedTime;
          if ( EstimatedTime == -1 )
            EstimatedTime = 0;
          LODWORD(v63) = EstimatedTime;
          LODWORD(v62) = *((_DWORD *)v46 + 40);
          LODWORD(v61) = *((_DWORD *)v46 + 39);
          LODWORD(v60) = *((_DWORD *)v46 + 38);
          LODWORD(Timeout) = *((_DWORD *)v46 + 37);
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v23 - 8,
            Timeout,
            v60,
            v61,
            v62,
            v63);
        }
        else
        {
          *((_DWORD *)v46 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v23 = (__int64 *)*v23;
      }
      while ( v23 != &qword_14032E9B0 );
      v7 = v65;
      LOBYTE(v19) = v71;
      v64 = v17;
    }
    if ( v21 )
    {
      PopBatteryUpdateCompositeInformation(v15, v14);
      v18 = 1;
      PopMaxChargeRate = 0LL;
    }
    if ( (v19 & 4) != 0 || v18 )
    {
      if ( PopEstimateSpoilerMask )
        PopEstimateSpoiledUntilTime = -1LL;
      else
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
    }
    v72 = -1LL;
    v24 = 0xFFFFFFFFLL;
    v25 = 0;
    v26 = 0x80000000LL;
    v66 = 0;
    v69 = 0x80000000;
    v27 = -1;
    v68 = -1;
    v28 = 0xFFFFFFFFLL;
    v67 = -1;
    v29 = -1;
    if ( dword_14032E994 )
    {
      for ( j = qword_14032E9B0; (__int64 *)j != &qword_14032E9B0; j = *(_QWORD *)j )
      {
        v49 = *(_DWORD *)(j + 84) & 0xA;
        v25 |= *(_DWORD *)(j + 84) & 7;
        v66 = v25;
        if ( (_BYTE)v49 == 10 )
        {
          v25 |= 8u;
          v66 = v25;
        }
        v50 = *(_DWORD *)(j + 88);
        if ( v50 != -1 )
        {
          if ( (_DWORD)v28 == -1 )
            LODWORD(v28) = 0;
          v28 = (unsigned int)(v50 + v28);
          v67 = v28;
        }
        v51 = *(_DWORD *)(j + 92);
        if ( v51 != -1 )
        {
          if ( v27 == -1 )
            v27 = 0;
          if ( v51 > v27 )
            v27 = *(_DWORD *)(j + 92);
          v68 = v27;
        }
        v52 = *(_DWORD *)(j + 96);
        v24 = 0x80000000LL;
        if ( v52 != 0x80000000 )
        {
          if ( (_DWORD)v26 == 0x80000000 )
            LODWORD(v26) = 0;
          v26 = (unsigned int)(v52 + v26);
          v69 = v26;
        }
      }
      if ( PopBatteryChargingInProgress )
      {
        v53 = v25 & 4;
        if ( (v25 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v53 = v25 & 4;
        if ( (v25 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v53 != 0;
      if ( (v25 & 2) != 0 )
      {
        v25 &= ~4u;
        v66 = v25;
      }
      if ( (v25 & 1) != 0 )
      {
        if ( (v25 & 4) != 0 )
          v72 = PopEstimateChargeTime(v24, j, v26, v28, Timeout, v60);
      }
      else
      {
        v54 = qword_14032E9B0;
        v55 = 0;
        if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
        {
          do
          {
            v26 = *(unsigned int *)(v54 + 100);
            if ( (unsigned int)(v26 - 1) <= 0xFFFFFFFD )
              v55 -= 3600 * *(_DWORD *)(v54 + 88) / (unsigned int)v26;
            v54 = *(_QWORD *)v54;
          }
          while ( (__int64 *)v54 != &qword_14032E9B0 );
          if ( v55 )
          {
            v56 = (__int64 *)qword_14032E9B0;
            if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
            {
              do
              {
                v57 = PopBatteryQueryEstimatedTime(v56 - 8, v55);
                if ( v57 != -1 )
                {
                  if ( v29 == -1 )
                    v29 = 0;
                  v29 += v57;
                }
                v56 = (__int64 *)*v56;
              }
              while ( v56 != &qword_14032E9B0 );
              v17 = v64;
            }
          }
        }
      }
    }
    else
    {
      v66 = 1;
      if ( v7 == 3 && MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= 0x11E1A300uLL )
      {
        v7 = 1;
        v65 = 1;
      }
    }
    v30 = v66 & 1;
    if ( v7 == 2 && !v30 || v7 == 3 && v30 )
    {
      v7 = 1;
      v65 = 1;
    }
    PopBatteryApplyCompositeState(&v66, v29, v26, v28);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_14032EB18 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v58, 0);
  if ( qword_14032EB20 )
    ExfUnblockPushLock(&qword_14032EB20, 0LL);
  for ( k = (__int64 *)qword_14032E9B0; k != &qword_14032E9B0; k = (__int64 *)*k )
    PopBatteryQueryStatus(k - 8, 0LL);
  if ( (unsigned __int8)v17 | (unsigned __int8)v18 )
  {
    v79 = dword_14032E9F4;
    v78[0] = xmmword_14032E9D4;
    LODWORD(v61) = 0;
    LODWORD(v60) = 0;
    v78[1] = xmmword_14032E9E4;
    v81 = dword_14032E994;
    v80 = xmmword_14032E9C0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_COMPOSITE_BATTERY, (__int64)v78, 56LL);
    if ( v7 == 1 )
    {
      if ( v30 )
        v74 = 0LL;
      else
        v74 = MEMORY[0xFFFFF78000000014];
      LODWORD(v61) = 0;
      LODWORD(v60) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, (__int64)&v74, 8LL);
    }
    LODWORD(v61) = 0;
    LODWORD(v60) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_CHARGE_ESTIMATE, (__int64)&v72, 8LL);
    if ( !PopUserBatteryDischargeEstimator )
    {
      if ( v29 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
        v73 = -1LL;
      else
        v73 = v29;
      LODWORD(v61) = 0;
      LODWORD(v60) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_ESTIMATE, (__int64)&v73, 8LL);
    }
    if ( v18 )
    {
      LODWORD(v61) = 0;
      v75 = 0xFFFFFFFF00000000uLL;
      LODWORD(v60) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_STATE_CHANGE, (__int64)&v75, 8LL);
    }
  }
  if ( qword_14032E988 )
    qword_14032E988 = 0LL;
  _m_prefetchw(&PopCB);
  v32 = PopCB - 16;
  if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v32 = 0LL;
  if ( (PopCB & 2) != 0
    || (v33 = PopCB, v33 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v32, PopCB)) )
  {
    ExfReleasePushLock(&PopCB, v14);
  }
  KeAbPostRelease((ULONG_PTR)&PopCB);
  v35 = KeGetCurrentThread();
  v36 = v35->KernelApcDisable + 1;
  v35->KernelApcDisable = v36;
  if ( !v36
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
    && !v35->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v37 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v37 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v38 = PopPolicyDeviceLock,
        v38 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v37, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v34);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v39 = KeGetCurrentThread();
  v40 = v39->KernelApcDisable + 1;
  v39->KernelApcDisable = v40;
  if ( !v40
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
    && !v39->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

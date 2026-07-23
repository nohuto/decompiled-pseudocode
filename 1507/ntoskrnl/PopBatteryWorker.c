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
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 *v15; // rbx
  char v16; // r13
  char v17; // r12
  __int32 v18; // r15d
  __int64 *v19; // rdi
  bool v20; // r14
  __int64 v21; // rbx
  __int64 *v22; // rdi
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r8
  unsigned int v26; // r10d
  __int64 v27; // r9
  unsigned int v28; // r14d
  char v29; // di
  __int64 *k; // rbx
  signed __int64 v31; // rcx
  ULONG_PTR v32; // rtt
  __int64 v33; // rdx
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  signed __int64 v36; // rcx
  ULONG_PTR v37; // rtt
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  __int64 *i; // rbx
  __int64 *v41; // rbx
  bool v42; // zf
  __int64 *v43; // rax
  __int64 **v44; // rcx
  __int64 *v45; // rbx
  int EstimatedTime; // eax
  __int64 j; // rdx
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // eax
  int v51; // eax
  int v52; // edi
  __int64 v53; // rcx
  unsigned int v54; // edi
  __int64 *v55; // rbx
  int v56; // eax
  signed __int32 v57[8]; // [rsp+8h] [rbp-C9h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-A9h]
  PULONG BufferSize; // [rsp+30h] [rbp-A1h]
  __int64 CheckStamp; // [rsp+38h] [rbp-99h]
  __int64 v61; // [rsp+40h] [rbp-91h]
  __int64 v62; // [rsp+48h] [rbp-89h]
  char v63; // [rsp+58h] [rbp-79h]
  int v64; // [rsp+5Ch] [rbp-75h]
  int v65; // [rsp+60h] [rbp-71h] BYREF
  int v66; // [rsp+64h] [rbp-6Dh]
  int v67; // [rsp+68h] [rbp-69h]
  unsigned int v68; // [rsp+6Ch] [rbp-65h]
  ULONG v69; // [rsp+70h] [rbp-61h] BYREF
  __int32 v70; // [rsp+78h] [rbp-59h]
  __int64 v71; // [rsp+80h] [rbp-51h] BYREF
  __int64 v72; // [rsp+88h] [rbp-49h] BYREF
  __int64 v73; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int64 v74; // [rsp+98h] [rbp-39h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-29h]
  ULONG ChangeStamp; // [rsp+B8h] [rbp-19h] BYREF
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
  v69 = 8;
  v13 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v75, &v69);
  if ( v13 == -1073741670 || v13 == -1073741431 )
  {
    v7 = 0;
  }
  else if ( !v13 && v69 == 8 )
  {
    v7 = (v75 != 0) + 2;
  }
  v15 = (__int64 *)qword_14032E9B0;
  v64 = v7;
  if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
  {
    do
    {
      IoCancelIrp((PIRP)*(v15 - 1));
      v15 = (__int64 *)*v15;
    }
    while ( v15 != &qword_14032E9B0 );
    for ( i = (__int64 *)qword_14032E9B0; i != &qword_14032E9B0; i = (__int64 *)*i )
      KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  }
  v16 = 0;
  v63 = 0;
  v17 = 0;
  do
  {
    v18 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v19 = (__int64 *)qword_14032E9B0;
    v70 = v18;
    v20 = (v18 & 2) != 0;
    while ( v19 != &qword_14032E9B0 )
    {
      v41 = v19 - 8;
      v42 = *((_DWORD *)v19 + 10) == 2;
      v43 = v19;
      v19 = (__int64 *)*v19;
      if ( v42 )
      {
        v44 = (__int64 **)v43[1];
        if ( (__int64 *)v19[1] != v43 || *v44 != v43 )
          __fastfail(3u);
        *v44 = v19;
        v19[1] = (__int64)v44;
        *v43 = 0LL;
        --dword_14032E994;
        ++dword_14032E9F8;
        byte_14032E998 = 1;
        if ( (int)PopBatteryReadTag(v41) < 0 )
          PopBatteryWaitTag(v41);
        v20 = 1;
      }
    }
    v21 = qword_14032E9A0;
    if ( (__int64 *)qword_14032E9A0 != &qword_14032E9A0 )
    {
      do
      {
        if ( *(_DWORD *)(v21 + 104) == 1 )
        {
          KeWaitForSingleObject((PVOID)(v21 + 80), Executive, 0, 0, 0LL);
          if ( (int)PopBatteryInitialize(v21) < 0 )
            PopBatteryWaitTag(v21);
          else
            v20 = 1;
        }
        v21 = *(_QWORD *)v21;
      }
      while ( (__int64 *)v21 != &qword_14032E9A0 );
      LOBYTE(v18) = v70;
    }
    v22 = (__int64 *)qword_14032E9B0;
    if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
    {
      do
      {
        v45 = v22 - 8;
        LOBYTE(v14) = 1;
        v76 = *(_OWORD *)((char *)v22 + 84);
        if ( (int)PopBatteryQueryStatus(v22 - 8, v14) >= 0 )
        {
          if ( (((unsigned __int8)v76 ^ *((_BYTE *)v45 + 148)) & 7) != 0 )
          {
            v17 = 1;
          }
          else if ( DWORD1(v76) != *((_DWORD *)v45 + 38) || HIDWORD(v76) != *((_DWORD *)v45 + 40) )
          {
            v16 = 1;
          }
          EstimatedTime = -1;
          if ( (*((_DWORD *)v45 + 37) & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v22 - 8, 0LL);
          *((_DWORD *)v45 + 41) = EstimatedTime;
          if ( EstimatedTime == -1 )
            EstimatedTime = 0;
          LODWORD(v62) = EstimatedTime;
          LODWORD(v61) = *((_DWORD *)v45 + 40);
          LODWORD(CheckStamp) = *((_DWORD *)v45 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v45 + 38);
          LODWORD(Buffer) = *((_DWORD *)v45 + 37);
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
            v22 - 8,
            Buffer,
            BufferSize,
            CheckStamp,
            v61,
            v62);
        }
        else
        {
          *((_DWORD *)v45 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v22 = (__int64 *)*v22;
      }
      while ( v22 != &qword_14032E9B0 );
      v7 = v64;
      LOBYTE(v18) = v70;
      v63 = v16;
    }
    if ( v20 )
    {
      PopBatteryUpdateCompositeInformation();
      v17 = 1;
      PopMaxChargeRate = 0LL;
    }
    if ( (v18 & 4) != 0 || v17 )
    {
      if ( PopEstimateSpoilerMask )
        PopEstimateSpoiledUntilTime = -1LL;
      else
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
    }
    v71 = -1LL;
    v23 = 0xFFFFFFFFLL;
    v24 = 0;
    v25 = 0x80000000LL;
    v65 = 0;
    v68 = 0x80000000;
    v26 = -1;
    v67 = -1;
    v27 = 0xFFFFFFFFLL;
    v66 = -1;
    v28 = -1;
    if ( dword_14032E994 )
    {
      for ( j = qword_14032E9B0; (__int64 *)j != &qword_14032E9B0; j = *(_QWORD *)j )
      {
        v48 = *(_DWORD *)(j + 84) & 0xA;
        v24 |= *(_DWORD *)(j + 84) & 7;
        v65 = v24;
        if ( (_BYTE)v48 == 10 )
        {
          v24 |= 8u;
          v65 = v24;
        }
        v49 = *(_DWORD *)(j + 88);
        if ( v49 != -1 )
        {
          if ( (_DWORD)v27 == -1 )
            LODWORD(v27) = 0;
          v27 = (unsigned int)(v49 + v27);
          v66 = v27;
        }
        v50 = *(_DWORD *)(j + 92);
        if ( v50 != -1 )
        {
          if ( v26 == -1 )
            v26 = 0;
          if ( v50 > v26 )
            v26 = *(_DWORD *)(j + 92);
          v67 = v26;
        }
        v51 = *(_DWORD *)(j + 96);
        v23 = 0x80000000LL;
        if ( v51 != 0x80000000 )
        {
          if ( (_DWORD)v25 == 0x80000000 )
            LODWORD(v25) = 0;
          v25 = (unsigned int)(v51 + v25);
          v68 = v25;
        }
      }
      if ( PopBatteryChargingInProgress )
      {
        v52 = v24 & 4;
        if ( (v24 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v52 = v24 & 4;
        if ( (v24 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v52 != 0;
      if ( (v24 & 2) != 0 )
      {
        v24 &= ~4u;
        v65 = v24;
      }
      if ( (v24 & 1) != 0 )
      {
        if ( (v24 & 4) != 0 )
          v71 = PopEstimateChargeTime(v23, j, v25, v27);
      }
      else
      {
        v53 = qword_14032E9B0;
        v54 = 0;
        if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
        {
          do
          {
            v25 = *(unsigned int *)(v53 + 100);
            if ( (unsigned int)(v25 - 1) <= 0xFFFFFFFD )
              v54 -= 3600 * *(_DWORD *)(v53 + 88) / (unsigned int)v25;
            v53 = *(_QWORD *)v53;
          }
          while ( (__int64 *)v53 != &qword_14032E9B0 );
          if ( v54 )
          {
            v55 = (__int64 *)qword_14032E9B0;
            if ( (__int64 *)qword_14032E9B0 != &qword_14032E9B0 )
            {
              do
              {
                v56 = PopBatteryQueryEstimatedTime(v55 - 8, v54);
                if ( v56 != -1 )
                {
                  if ( v28 == -1 )
                    v28 = 0;
                  v28 += v56;
                }
                v55 = (__int64 *)*v55;
              }
              while ( v55 != &qword_14032E9B0 );
              v16 = v63;
            }
          }
        }
      }
    }
    else
    {
      v65 = 1;
      if ( v7 == 3 && MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= 0x11E1A300uLL )
      {
        v7 = 1;
        v64 = 1;
      }
    }
    v29 = v65 & 1;
    if ( v7 == 2 && !v29 || v7 == 3 && v29 )
    {
      v7 = 1;
      v64 = 1;
    }
    PopBatteryApplyCompositeState(&v65, v28, v25, v27);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_14032EB18 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v57, 0);
  if ( qword_14032EB20 )
    ExfUnblockPushLock(&qword_14032EB20, 0LL);
  for ( k = (__int64 *)qword_14032E9B0; k != &qword_14032E9B0; k = (__int64 *)*k )
    PopBatteryQueryStatus(k - 8, 0LL);
  if ( (unsigned __int8)v16 | (unsigned __int8)v17 )
  {
    v79 = dword_14032E9F4;
    v78[0] = xmmword_14032E9D4;
    v78[1] = xmmword_14032E9E4;
    v81 = dword_14032E994;
    v80 = xmmword_14032E9C0;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v78, 0x38u, 0LL, 0LL, 0, 0);
    if ( v7 == 1 )
    {
      if ( v29 )
        v73 = 0LL;
      else
        v73 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v73, 8u, 0LL, 0LL, 0, 0);
    }
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v71, 8u, 0LL, 0LL, 0, 0);
    if ( !PopUserBatteryDischargeEstimator )
    {
      if ( v28 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
        v72 = -1LL;
      else
        v72 = v28;
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v72, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v17 )
    {
      v74 = 0xFFFFFFFF00000000uLL;
      ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v74, 8u, 0LL, 0LL, 0, 0);
    }
  }
  if ( qword_14032E988 )
    qword_14032E988 = 0LL;
  _m_prefetchw(&PopCB);
  v31 = PopCB - 16;
  if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v31 = 0LL;
  if ( (PopCB & 2) != 0
    || (v32 = PopCB, v32 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v31, PopCB)) )
  {
    ExfReleasePushLock(&PopCB, v14);
  }
  KeAbPostRelease((ULONG_PTR)&PopCB);
  v34 = KeGetCurrentThread();
  v35 = v34->KernelApcDisable + 1;
  v34->KernelApcDisable = v35;
  if ( !v35
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
    && !v34->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v36 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v36 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v37 = PopPolicyDeviceLock,
        v37 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v36, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v33);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v38 = KeGetCurrentThread();
  v39 = v38->KernelApcDisable + 1;
  v38->KernelApcDisable = v39;
  if ( !v39
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
    && !v38->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

/*
 * XREFs of PopBatteryWorker @ 0x140543B90
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     IoCancelIrp @ 0x1400A2054 (IoCancelIrp.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140131898 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x14015C680 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEstimatesSpoiled @ 0x14066EE80 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x14066EF08 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14066F09C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14066F124 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14066F2A0 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14066F4EC (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x14066F638 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x14066F6A0 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  int WnfStateData; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // r14d
  __int64 *v4; // rdi
  char v5; // r13
  __int32 v6; // r12d
  __int64 *v7; // rsi
  bool v8; // r15
  __int64 j; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // r9
  unsigned int v15; // r15d
  char v16; // si
  __int64 *m; // rdi
  __int64 *i; // rdi
  __int64 *v19; // rdi
  bool v20; // zf
  __int64 *v21; // rax
  __int64 **v22; // rcx
  __int64 *v23; // rdi
  int v24; // ecx
  int EstimatedTime; // eax
  __int64 v26; // rdx
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // esi
  __int64 v33; // rcx
  unsigned int v34; // esi
  __int64 *k; // rdi
  int v36; // eax
  signed __int32 v37[8]; // [rsp+8h] [rbp-B9h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-99h]
  int *v39; // [rsp+30h] [rbp-91h]
  __int64 v40; // [rsp+38h] [rbp-89h]
  __int64 v41; // [rsp+40h] [rbp-81h]
  __int64 v42; // [rsp+48h] [rbp-79h]
  char v43; // [rsp+58h] [rbp-69h]
  unsigned __int64 v44; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-59h]
  int v46; // [rsp+70h] [rbp-51h] BYREF
  __int32 v47; // [rsp+74h] [rbp-4Dh]
  __int64 v48; // [rsp+78h] [rbp-49h] BYREF
  __int64 v49; // [rsp+80h] [rbp-41h] BYREF
  __int64 v50; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-31h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-19h]
  _OWORD v54[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v55; // [rsp+D8h] [rbp+17h]
  __int128 v56; // [rsp+DCh] [rbp+1Bh]
  int v57; // [rsp+ECh] [rbp+2Bh]

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v46 = 8;
  v39 = &v46;
  Timeout = (PLARGE_INTEGER)&v52;
  WnfStateData = ZwQueryWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL);
  v2 = 1LL;
  if ( WnfStateData == -1073741670 || WnfStateData == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !WnfStateData && v46 == 8 )
  {
    v3 = (v52 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  v4 = (__int64 *)qword_140303690;
  if ( (__int64 *)qword_140303690 != &qword_140303690 )
  {
    do
    {
      IoCancelIrp((PIRP)*(v4 - 1));
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &qword_140303690 );
    for ( i = (__int64 *)qword_140303690; i != &qword_140303690; i = (__int64 *)*i )
      KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  }
  v43 = 0;
  v5 = 0;
  do
  {
    v6 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v7 = (__int64 *)qword_140303690;
    v47 = v6;
    v8 = (v6 & 2) != 0;
    while ( v7 != &qword_140303690 )
    {
      v19 = v7 - 8;
      v20 = *((_DWORD *)v7 + 10) == 2;
      v21 = v7;
      v7 = (__int64 *)*v7;
      if ( v20 )
      {
        v22 = (__int64 **)v21[1];
        if ( (__int64 *)v7[1] != v21 || *v22 != v21 )
          __fastfail(3u);
        *v22 = v7;
        v7[1] = (__int64)v22;
        *v21 = 0LL;
        --dword_140303674;
        ++dword_1403036D8;
        byte_140303678 = 1;
        if ( (int)PopBatteryReadTag(v19) < 0 )
          PopBatteryWaitTag(v19);
        v8 = 1;
      }
    }
    for ( j = qword_140303680; (__int64 *)j != &qword_140303680; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(j + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(j) < 0 )
          PopBatteryWaitTag(j);
        else
          v8 = 1;
      }
    }
    v10 = (__int64 *)qword_140303690;
    if ( (__int64 *)qword_140303690 != &qword_140303690 )
    {
      do
      {
        v23 = v10 - 8;
        LOBYTE(v1) = 1;
        v53 = *(_OWORD *)((char *)v10 + 84);
        if ( (int)PopBatteryQueryStatus(v10 - 8, v1) >= 0 )
        {
          v24 = *((_DWORD *)v23 + 37);
          if ( (((unsigned __int8)v53 ^ *((_BYTE *)v23 + 148)) & 7) != 0 )
          {
            v5 = 1;
          }
          else if ( DWORD1(v53) != *((_DWORD *)v23 + 38) || HIDWORD(v53) != *((_DWORD *)v23 + 40) )
          {
            v43 = 1;
          }
          EstimatedTime = -1;
          if ( (v24 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v10 - 8, 0LL);
          *((_DWORD *)v23 + 41) = EstimatedTime;
          if ( EstimatedTime == -1 )
            EstimatedTime = 0;
          LODWORD(v42) = EstimatedTime;
          LODWORD(v41) = *((_DWORD *)v23 + 40);
          LODWORD(v40) = *((_DWORD *)v23 + 39);
          LODWORD(v39) = *((_DWORD *)v23 + 38);
          LODWORD(Timeout) = *((_DWORD *)v23 + 37);
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
            v10 - 8,
            Timeout,
            v39,
            v40,
            v41,
            v42);
        }
        else
        {
          *((_DWORD *)v23 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != &qword_140303690 );
      LOBYTE(v6) = v47;
    }
    if ( v8 )
    {
      PopBatteryUpdateCompositeInformation(v2);
      PopMaxChargeRate = 0LL;
      v5 = 1;
    }
    if ( (v6 & 4) != 0 || v5 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140303120);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140303120, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v48 = -1LL;
    v11 = 0xFFFFFFFFLL;
    v12 = 0x80000000LL;
    v13 = -1;
    v14 = 0xFFFFFFFFLL;
    v44 = 0xFFFFFFFF00000000uLL;
    v15 = -1;
    v45 = 0x80000000FFFFFFFFuLL;
    if ( dword_140303674 )
    {
      v26 = qword_140303690;
      v27 = v44;
      while ( (__int64 *)v26 != &qword_140303690 )
      {
        v28 = *(_DWORD *)(v26 + 84) & 0xA;
        v27 |= *(_DWORD *)(v26 + 84) & 7;
        LODWORD(v44) = v27;
        if ( (_BYTE)v28 == 10 )
        {
          v27 |= 8u;
          LODWORD(v44) = v27;
        }
        v29 = *(_DWORD *)(v26 + 88);
        if ( v29 != -1 )
        {
          if ( (_DWORD)v14 == -1 )
            LODWORD(v14) = 0;
          v14 = (unsigned int)(v29 + v14);
          HIDWORD(v44) = v14;
        }
        v30 = *(_DWORD *)(v26 + 92);
        if ( v30 != -1 )
        {
          if ( v13 == -1 )
            v13 = 0;
          if ( v30 > v13 )
            v13 = *(_DWORD *)(v26 + 92);
          LODWORD(v45) = v13;
        }
        v31 = *(_DWORD *)(v26 + 96);
        v11 = 0x80000000LL;
        if ( v31 != 0x80000000 )
        {
          if ( (_DWORD)v12 == 0x80000000 )
            LODWORD(v12) = 0;
          v12 = (unsigned int)(v31 + v12);
          HIDWORD(v45) = v12;
        }
        v26 = *(_QWORD *)v26;
      }
      if ( PopBatteryChargingInProgress )
      {
        v32 = v27 & 4;
        if ( (v27 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v32 = v27 & 4;
        if ( (v27 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v32 != 0;
      if ( (v27 & 2) != 0 )
      {
        v27 &= ~4u;
        LODWORD(v44) = v27;
      }
      if ( (v27 & 1) != 0 )
      {
        if ( (v27 & 4) != 0 )
          v48 = PopEstimateChargeTime(v11, v26, v12, v14, Timeout, v39);
      }
      else
      {
        v33 = qword_140303690;
        v34 = 0;
        if ( (__int64 *)qword_140303690 != &qword_140303690 )
        {
          do
          {
            v12 = *(unsigned int *)(v33 + 100);
            if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD )
              v34 -= 3600 * *(_DWORD *)(v33 + 88) / (unsigned int)v12;
            v33 = *(_QWORD *)v33;
          }
          while ( (__int64 *)v33 != &qword_140303690 );
          if ( v34 )
          {
            for ( k = (__int64 *)qword_140303690; k != &qword_140303690; k = (__int64 *)*k )
            {
              v36 = PopBatteryQueryEstimatedTime(k - 8, v34);
              if ( v36 != -1 )
              {
                if ( v15 == -1 )
                  v15 = 0;
                v15 += v36;
              }
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v44) = 1;
      if ( v3 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v3 = 1;
    }
    v16 = v44 & 1;
    if ( v3 == 2 && !v16 || v3 == 3 && v16 )
      v3 = 1;
    PopBatteryApplyCompositeState(&v44, v15, v12, v14);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_1403037F8 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v37, 0);
  if ( qword_140303800 )
    ExfUnblockPushLock(&qword_140303800, 0LL);
  for ( m = (__int64 *)qword_140303690; m != &qword_140303690; m = (__int64 *)*m )
    PopBatteryQueryStatus(m - 8, 0LL);
  LODWORD(v40) = 0;
  LODWORD(v39) = 0;
  Timeout = 0LL;
  ZwUpdateWnfStateData((__int64)&WNF_PO_CHARGE_ESTIMATE, (__int64)&v48, 8LL);
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v15 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
      v49 = -1LL;
    else
      v49 = v15;
    LODWORD(v40) = 0;
    LODWORD(v39) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_ESTIMATE, (__int64)&v49, 8LL);
  }
  if ( (unsigned __int8)v43 | (unsigned __int8)v5 )
  {
    v55 = dword_1403036D4;
    v54[0] = xmmword_1403036B4;
    LODWORD(v40) = 0;
    LODWORD(v39) = 0;
    v54[1] = xmmword_1403036C4;
    v57 = dword_140303674;
    v56 = xmmword_1403036A0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_COMPOSITE_BATTERY, (__int64)v54, 56LL);
    if ( v3 == 1 )
    {
      if ( v16 )
        v50 = 0LL;
      else
        v50 = MEMORY[0xFFFFF78000000014];
      LODWORD(v40) = 0;
      LODWORD(v39) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, (__int64)&v50, 8LL);
    }
    if ( v5 )
    {
      LODWORD(v40) = 0;
      v51 = 0xFFFFFFFF00000000uLL;
      LODWORD(v39) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_STATE_CHANGE, (__int64)&v51, 8LL);
    }
  }
  PopReleaseRwLock(&PopCB);
  PopReleaseRwLock(&PopPolicyDeviceLock);
}

/*
 * XREFs of PopBatteryWorker @ 0x1404F9510
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14011B90C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x140152FA0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEstimatesSpoiled @ 0x140636AA4 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x140636B2C (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140636CC0 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140636D40 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140636EBC (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406370C8 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x140637214 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x14063727C (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  NTSTATUS v0; // eax
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
  int v13; // edi
  unsigned int v14; // r10d
  __int64 v15; // r9
  unsigned int v16; // r15d
  char v17; // si
  __int64 *n; // rdi
  __int64 *i; // rdi
  __int64 *v20; // rdi
  bool v21; // zf
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 *v24; // rdi
  int v25; // ecx
  int EstimatedTime; // eax
  __int64 k; // rdx
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // esi
  __int64 v33; // rcx
  unsigned int v34; // esi
  __int64 *m; // rdi
  int v36; // eax
  signed __int32 v37[8]; // [rsp+8h] [rbp-B9h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-99h]
  PULONG BufferSize; // [rsp+30h] [rbp-91h]
  __int64 CheckStamp; // [rsp+38h] [rbp-89h]
  __int64 v41; // [rsp+40h] [rbp-81h]
  __int64 v42; // [rsp+48h] [rbp-79h]
  char v43; // [rsp+58h] [rbp-69h]
  int v44; // [rsp+60h] [rbp-61h] BYREF
  int v45; // [rsp+64h] [rbp-5Dh]
  int v46; // [rsp+68h] [rbp-59h]
  unsigned int v47; // [rsp+6Ch] [rbp-55h]
  ULONG v48; // [rsp+70h] [rbp-51h] BYREF
  __int32 v49; // [rsp+74h] [rbp-4Dh]
  __int64 v50; // [rsp+78h] [rbp-49h] BYREF
  __int64 v51; // [rsp+80h] [rbp-41h] BYREF
  __int64 v52; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v53; // [rsp+90h] [rbp-31h] BYREF
  __int64 v54; // [rsp+98h] [rbp-29h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-21h]
  ULONG ChangeStamp; // [rsp+B0h] [rbp-11h] BYREF
  _OWORD v57[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v58; // [rsp+D8h] [rbp+17h]
  __int128 v59; // [rsp+DCh] [rbp+1Bh]
  int v60; // [rsp+ECh] [rbp+2Bh]

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  PopAcquireRwLockExclusive((__int64)&PopCB);
  v48 = 8;
  v0 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v54, &v48);
  v2 = 1LL;
  if ( v0 == -1073741670 || v0 == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !v0 && v48 == 8 )
  {
    v3 = (v54 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  v4 = (__int64 *)qword_1402DE3F0;
  if ( (__int64 *)qword_1402DE3F0 != &qword_1402DE3F0 )
  {
    do
    {
      IoCancelIrp((PIRP)*(v4 - 1));
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &qword_1402DE3F0 );
    for ( i = (__int64 *)qword_1402DE3F0; i != &qword_1402DE3F0; i = (__int64 *)*i )
      KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  }
  v43 = 0;
  v5 = 0;
  do
  {
    v6 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v7 = (__int64 *)qword_1402DE3F0;
    v49 = v6;
    v8 = (v6 & 2) != 0;
    while ( v7 != &qword_1402DE3F0 )
    {
      v20 = v7 - 8;
      v21 = *((_DWORD *)v7 + 10) == 2;
      v22 = v7;
      v7 = (__int64 *)*v7;
      if ( v21 )
      {
        v23 = (__int64 **)v22[1];
        if ( (__int64 *)v7[1] != v22 || *v23 != v22 )
          __fastfail(3u);
        *v23 = v7;
        v7[1] = (__int64)v23;
        *v22 = 0LL;
        --dword_1402DE3D4;
        ++dword_1402DE438;
        byte_1402DE3D8 = 1;
        if ( (int)PopBatteryReadTag(v20) < 0 )
          PopBatteryWaitTag(v20);
        v8 = 1;
      }
    }
    for ( j = qword_1402DE3E0; (__int64 *)j != &qword_1402DE3E0; j = *(_QWORD *)j )
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
    v10 = (__int64 *)qword_1402DE3F0;
    if ( (__int64 *)qword_1402DE3F0 != &qword_1402DE3F0 )
    {
      do
      {
        v24 = v10 - 8;
        LOBYTE(v1) = 1;
        v55 = *(_OWORD *)((char *)v10 + 84);
        if ( (int)PopBatteryQueryStatus(v10 - 8, v1) >= 0 )
        {
          v25 = *((_DWORD *)v24 + 37);
          if ( (((unsigned __int8)v55 ^ *((_BYTE *)v24 + 148)) & 7) != 0 )
          {
            v5 = 1;
          }
          else if ( DWORD1(v55) != *((_DWORD *)v24 + 38) || HIDWORD(v55) != *((_DWORD *)v24 + 40) )
          {
            v43 = 1;
          }
          EstimatedTime = -1;
          if ( (v25 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v10 - 8, 0LL);
          *((_DWORD *)v24 + 41) = EstimatedTime;
          if ( EstimatedTime == -1 )
            EstimatedTime = 0;
          LODWORD(v42) = EstimatedTime;
          LODWORD(v41) = *((_DWORD *)v24 + 40);
          LODWORD(CheckStamp) = *((_DWORD *)v24 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v24 + 38);
          LODWORD(Buffer) = *((_DWORD *)v24 + 37);
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
            Buffer,
            BufferSize,
            CheckStamp,
            v41,
            v42);
        }
        else
        {
          *((_DWORD *)v24 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != &qword_1402DE3F0 );
      LOBYTE(v6) = v49;
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
        KeCancelTimer(&stru_1402DDBC0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KeSetTimer(&stru_1402DDBC0, (LARGE_INTEGER)-300000000LL, &PopPostSpoilingRefresh);
      }
    }
    v52 = -1LL;
    v11 = 0xFFFFFFFFLL;
    v12 = 0x80000000LL;
    v13 = 0;
    v44 = 0;
    v47 = 0x80000000;
    v14 = -1;
    v46 = -1;
    v15 = 0xFFFFFFFFLL;
    v45 = -1;
    v16 = -1;
    if ( dword_1402DE3D4 )
    {
      for ( k = qword_1402DE3F0; (__int64 *)k != &qword_1402DE3F0; k = *(_QWORD *)k )
      {
        v28 = *(_DWORD *)(k + 84) & 0xA;
        v13 |= *(_DWORD *)(k + 84) & 7;
        v44 = v13;
        if ( (_BYTE)v28 == 10 )
        {
          v13 |= 8u;
          v44 = v13;
        }
        v29 = *(_DWORD *)(k + 88);
        if ( v29 != -1 )
        {
          if ( (_DWORD)v15 == -1 )
            LODWORD(v15) = 0;
          v15 = (unsigned int)(v29 + v15);
          v45 = v15;
        }
        v30 = *(_DWORD *)(k + 92);
        if ( v30 != -1 )
        {
          if ( v14 == -1 )
            v14 = 0;
          if ( v30 > v14 )
            v14 = *(_DWORD *)(k + 92);
          v46 = v14;
        }
        v31 = *(_DWORD *)(k + 96);
        v11 = 0x80000000LL;
        if ( v31 != 0x80000000 )
        {
          if ( (_DWORD)v12 == 0x80000000 )
            LODWORD(v12) = 0;
          v12 = (unsigned int)(v31 + v12);
          v47 = v12;
        }
      }
      if ( PopBatteryChargingInProgress )
      {
        v32 = v13 & 4;
        if ( (v13 & 4) == 0 )
          KeCancelTimer2((__int64)PopBatteryWakeTimer);
      }
      else
      {
        v32 = v13 & 4;
        if ( (v13 & 4) != 0 )
          KeSetTimer2(PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v32 != 0;
      if ( (v13 & 2) != 0 )
      {
        v13 &= ~4u;
        v44 = v13;
      }
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 4) != 0 )
          v52 = PopEstimateChargeTime(v11, k, v12, v15);
      }
      else
      {
        v33 = qword_1402DE3F0;
        v34 = 0;
        if ( (__int64 *)qword_1402DE3F0 != &qword_1402DE3F0 )
        {
          do
          {
            v12 = *(unsigned int *)(v33 + 100);
            if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD )
              v34 -= 3600 * *(_DWORD *)(v33 + 88) / (unsigned int)v12;
            v33 = *(_QWORD *)v33;
          }
          while ( (__int64 *)v33 != &qword_1402DE3F0 );
          if ( v34 )
          {
            for ( m = (__int64 *)qword_1402DE3F0; m != &qword_1402DE3F0; m = (__int64 *)*m )
            {
              v36 = PopBatteryQueryEstimatedTime(m - 8, v34);
              if ( v36 != -1 )
              {
                if ( v16 == -1 )
                  v16 = 0;
                v16 += v36;
              }
            }
          }
        }
      }
    }
    else
    {
      v44 = 1;
      if ( v3 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v3 = 1;
    }
    v17 = v44 & 1;
    if ( v3 == 2 && !v17 || v3 == 3 && v17 )
      v3 = 1;
    PopBatteryApplyCompositeState(&v44, v16, v12, v15);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_1402DE558 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v37, 0);
  if ( qword_1402DE560 )
    ExfUnblockPushLock(&qword_1402DE560, 0LL);
  for ( n = (__int64 *)qword_1402DE3F0; n != &qword_1402DE3F0; n = (__int64 *)*n )
    PopBatteryQueryStatus(n - 8, 0LL);
  ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v52, 8u, 0LL, 0LL, 0, 0);
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v16 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
      v50 = -1LL;
    else
      v50 = v16;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v50, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned __int8)v43 | (unsigned __int8)v5 )
  {
    v58 = dword_1402DE434;
    v57[0] = xmmword_1402DE414;
    v57[1] = xmmword_1402DE424;
    v60 = dword_1402DE3D4;
    v59 = xmmword_1402DE400;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v57, 0x38u, 0LL, 0LL, 0, 0);
    if ( v3 == 1 )
    {
      if ( v17 )
        v51 = 0LL;
      else
        v51 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v51, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v5 )
    {
      v53 = 0xFFFFFFFF00000000uLL;
      ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v53, 8u, 0LL, 0LL, 0, 0);
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}

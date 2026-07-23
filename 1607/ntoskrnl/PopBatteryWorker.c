/*
 * XREFs of PopBatteryWorker @ 0x1405440D0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140131E08 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x14015CBF0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEstimatesSpoiled @ 0x14066EF64 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x14066EFEC (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14066F180 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14066F208 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14066F384 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14066F5D0 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x14066F71C (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x14066F784 (PopEstimateChargeTime.c)
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
  PVOID Buffer; // [rsp+28h] [rbp-99h]
  PULONG BufferSize; // [rsp+30h] [rbp-91h]
  __int64 CheckStamp; // [rsp+38h] [rbp-89h]
  __int64 v41; // [rsp+40h] [rbp-81h]
  __int64 v42; // [rsp+48h] [rbp-79h]
  char v43; // [rsp+58h] [rbp-69h]
  unsigned __int64 v44; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-59h]
  ULONG v46; // [rsp+70h] [rbp-51h] BYREF
  __int32 v47; // [rsp+74h] [rbp-4Dh]
  __int64 v48; // [rsp+78h] [rbp-49h] BYREF
  __int64 v49; // [rsp+80h] [rbp-41h] BYREF
  __int64 v50; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-31h] BYREF
  ULONG ChangeStamp; // [rsp+98h] [rbp-29h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-19h]
  _OWORD v55[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v56; // [rsp+D8h] [rbp+17h]
  __int128 v57; // [rsp+DCh] [rbp+1Bh]
  int v58; // [rsp+ECh] [rbp+2Bh]

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v46 = 8;
  v0 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v53, &v46);
  v2 = 1LL;
  if ( v0 == -1073741670 || v0 == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !v0 && v46 == 8 )
  {
    v3 = (v53 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  v4 = (__int64 *)qword_1403035D0;
  if ( (__int64 *)qword_1403035D0 != &qword_1403035D0 )
  {
    do
    {
      IoCancelIrp((PIRP)*(v4 - 1));
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &qword_1403035D0 );
    for ( i = (__int64 *)qword_1403035D0; i != &qword_1403035D0; i = (__int64 *)*i )
      KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  }
  v43 = 0;
  v5 = 0;
  do
  {
    v6 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v7 = (__int64 *)qword_1403035D0;
    v47 = v6;
    v8 = (v6 & 2) != 0;
    while ( v7 != &qword_1403035D0 )
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
        --dword_1403035B4;
        ++dword_140303618;
        byte_1403035B8 = 1;
        if ( (int)PopBatteryReadTag(v19) < 0 )
          PopBatteryWaitTag(v19);
        v8 = 1;
      }
    }
    for ( j = qword_1403035C0; (__int64 *)j != &qword_1403035C0; j = *(_QWORD *)j )
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
    v10 = (__int64 *)qword_1403035D0;
    if ( (__int64 *)qword_1403035D0 != &qword_1403035D0 )
    {
      do
      {
        v23 = v10 - 8;
        LOBYTE(v1) = 1;
        v54 = *(_OWORD *)((char *)v10 + 84);
        if ( (int)PopBatteryQueryStatus(v10 - 8, v1) >= 0 )
        {
          v24 = *((_DWORD *)v23 + 37);
          if ( (((unsigned __int8)v54 ^ *((_BYTE *)v23 + 148)) & 7) != 0 )
          {
            v5 = 1;
          }
          else if ( DWORD1(v54) != *((_DWORD *)v23 + 38) || HIDWORD(v54) != *((_DWORD *)v23 + 40) )
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
          LODWORD(CheckStamp) = *((_DWORD *)v23 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v23 + 38);
          LODWORD(Buffer) = *((_DWORD *)v23 + 37);
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
          *((_DWORD *)v23 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != &qword_1403035D0 );
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
        KeCancelTimer(&stru_140303180);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140303180, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
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
    if ( dword_1403035B4 )
    {
      v26 = qword_1403035D0;
      v27 = v44;
      while ( (__int64 *)v26 != &qword_1403035D0 )
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
          v48 = PopEstimateChargeTime(v11, v26, v12, v14);
      }
      else
      {
        v33 = qword_1403035D0;
        v34 = 0;
        if ( (__int64 *)qword_1403035D0 != &qword_1403035D0 )
        {
          do
          {
            v12 = *(unsigned int *)(v33 + 100);
            if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD )
              v34 -= 3600 * *(_DWORD *)(v33 + 88) / (unsigned int)v12;
            v33 = *(_QWORD *)v33;
          }
          while ( (__int64 *)v33 != &qword_1403035D0 );
          if ( v34 )
          {
            for ( k = (__int64 *)qword_1403035D0; k != &qword_1403035D0; k = (__int64 *)*k )
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
  qword_140303738 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v37, 0);
  if ( qword_140303740 )
    ExfUnblockPushLock(&qword_140303740, 0LL);
  for ( m = (__int64 *)qword_1403035D0; m != &qword_1403035D0; m = (__int64 *)*m )
    PopBatteryQueryStatus(m - 8, 0LL);
  ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v48, 8u, 0LL, 0LL, 0, 0);
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v15 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
      v49 = -1LL;
    else
      v49 = v15;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v49, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned __int8)v43 | (unsigned __int8)v5 )
  {
    v56 = dword_140303614;
    v55[0] = xmmword_1403035F4;
    v55[1] = xmmword_140303604;
    v58 = dword_1403035B4;
    v57 = xmmword_1403035E0;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v55, 0x38u, 0LL, 0LL, 0, 0);
    if ( v3 == 1 )
    {
      if ( v16 )
        v50 = 0LL;
      else
        v50 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v50, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v5 )
    {
      v51 = 0xFFFFFFFF00000000uLL;
      ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v51, 8u, 0LL, 0LL, 0, 0);
    }
  }
  PopReleaseRwLock(&PopCB);
  PopReleaseRwLock(&PopPolicyDeviceLock);
}

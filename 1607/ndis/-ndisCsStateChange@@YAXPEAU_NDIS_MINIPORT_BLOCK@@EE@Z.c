/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C004FC70 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C006D8E0 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C006D9CC (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006EC2C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     Template_cjjp @ 0x1C006F068 (Template_cjjp.c)
 *     Template_cjqzr2jx @ 0x1C006F104 (Template_cjqzr2jx.c)
 *     Template_qxxq @ 0x1C006F1C4 (Template_qxxq.c)
 *     Template_xqx @ 0x1C006F4CC (Template_xqx.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@3@Z @ 0x1C007244C (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00DCC3C (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@@Z @ 0x1C00DCD94 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00DCDFC (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned __int8 v3; // r15
  unsigned __int8 v4; // r13
  unsigned int CsSurpriseWakes; // esi
  unsigned int CsSpuriousWakes; // r14d
  int v7; // edx
  int v8; // r9d
  bool v9; // zf
  unsigned __int64 *p_CurrentRefStartTime; // rcx
  __int64 v11; // r15
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  __int64 v13; // r8
  unsigned __int64 CurrentActiveStartTime; // rax
  int v15; // ecx
  _GUID InterfaceGuid; // xmm1
  unsigned int i; // esi
  unsigned __int64 TotalRefTime; // rcx
  wchar_t *v19; // rdx
  int v20; // r8d
  unsigned __int64 TotalCsResiliencyTime; // rax
  int v22; // [rsp+28h] [rbp-E0h]
  KIRQL NewIrql; // [rsp+58h] [rbp-B0h]
  unsigned __int8 NewIrql_1; // [rsp+59h] [rbp-AFh]
  int v25; // [rsp+5Ch] [rbp-ACh]
  unsigned int v26; // [rsp+60h] [rbp-A8h]
  wchar_t *v27; // [rsp+68h] [rbp-A0h]
  struct _GUID v28; // [rsp+70h] [rbp-98h] BYREF
  GUID v29; // [rsp+80h] [rbp-88h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS CsSpuriousWakeStats; // [rsp+90h] [rbp-78h] BYREF
  _BYTE hProvider[96]; // [rsp+C0h] [rbp-48h] BYREF

  AoAc = a1->AoAc;
  v3 = ndisConnectedStandby;
  v4 = ndisLastCsScenarioInstanceId;
  NewIrql_1 = ndisConnectedStandby;
  memset(hProvider, 0, sizeof(hProvider));
  v28.Data1 = 0;
  *(_QWORD *)&v28.Data2 = 0LL;
  CsSurpriseWakes = 0;
  *(_DWORD *)&v28.Data4[4] = 0;
  CsSpuriousWakes = 0;
  memset(&CsSpuriousWakeStats, 0, sizeof(CsSpuriousWakeStats));
  NewIrql = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ndisAoAcWriteRefcountRundown(a1, AoAc);
  v9 = v3 == 0;
  p_CurrentRefStartTime = &AoAc->CsRefTimes[0].CurrentRefStartTime;
  v11 = 15LL;
  if ( v9 )
  {
    v13 = 15LL;
    do
    {
      if ( *p_CurrentRefStartTime )
        ndisCloseTimeInterval(p_CurrentRefStartTime, p_CurrentRefStartTime - 1);
      p_CurrentRefStartTime += 2;
      --v13;
    }
    while ( v13 );
    if ( ndisCsResiliency )
    {
      CurrentActiveStartTime = AoAc->CurrentActiveStartTime;
      if ( CurrentActiveStartTime )
        AoAc->TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime - CurrentActiveStartTime + MEMORY[0xFFFFF78000000008];
    }
    if ( AoAc->CurrentActiveStartTime )
      ndisCloseTimeInterval(&AoAc->CurrentActiveStartTime, &AoAc->TotalCsActiveTime);
    v15 = -444972355;
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_qxxq(
        -444972355,
        AoAc->TotalCsActiveTime / 0x989680,
        (_DWORD)a1 + 4064,
        a1->IfIndex,
        a1->NetLuid.Value,
        AoAc->TotalCsActiveTime / 0x989680,
        AoAc->CsPowerTransitions);
    *(_OWORD *)&hProvider[48] = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInUnicastPackets;
    *(_OWORD *)&hProvider[64] = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInMulticastPackets;
    *(_OWORD *)&hProvider[80] = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInBroadcastPackets;
    *(_OWORD *)hProvider = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInUnicastPackets;
    *(_OWORD *)&hProvider[16] = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInMulticastPackets;
    InterfaceGuid = a1->InterfaceGuid;
    *(_OWORD *)&hProvider[32] = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInBroadcastPackets;
    v28 = InterfaceGuid;
    CsSurpriseWakes = AoAc->CsSurpriseWakes;
    CsSpuriousWakes = AoAc->CsSpuriousWakes;
    v26 = CsSurpriseWakes;
    CsSpuriousWakeStats = AoAc->CsSpuriousWakeStats;
    if ( AoAc->TotalCsResiliencyTime )
    {
      v29 = (GUID)0LL;
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000000000LL) != 0 )
      {
        LOBYTE(v8) = v4;
        Template_cjjp(v15, v7, (_DWORD)a1 + 4064, v8, v22, (__int64)&a1->InterfaceGuid, (char)a1->PhysicalDeviceObject);
      }
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v8) = v4;
        Template_cjqzr2jx(
          a1->pAdapterInstanceName,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (_DWORD)a1 + 4064,
          v8,
          (__int64)&GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          AoAc->TotalCsResiliencyTime);
      }
      for ( i = 0; i < 0xF; ++i )
      {
        TotalRefTime = AoAc->CsRefTimes[i].TotalRefTime;
        if ( TotalRefTime )
        {
          v29 = GUID_CS_BLOCKER_GEN;
          v29.Data4[0] = i;
          v19 = (&off_1C0076E30)[2 * (int)i];
          v20 = *((_DWORD *)&off_1C0076E30 + 4 * (int)i + 2);
          v29.Data3 = a1->IfIndex;
          TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime;
          v27 = v19;
          v25 = v20;
          if ( TotalRefTime > TotalCsResiliencyTime )
            AoAc->CsRefTimes[i].TotalRefTime = TotalCsResiliencyTime;
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              TotalRefTime,
              AoAc->CsRefTimes[i].TotalRefTime / 0x989680,
              (_DWORD)a1 + 4064,
              a1->NetLuid.Value,
              i,
              AoAc->CsRefTimes[i].TotalRefTime / 0x989680);
            v19 = v27;
            v20 = v25;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v8) = v4;
            Template_cjqzr2jx(
              TotalRefTime,
              (_DWORD)v19,
              (_DWORD)a1 + 4064,
              v8,
              (__int64)&a1->InterfaceGuid,
              v20,
              (__int64)v19,
              (__int64)&v29,
              AoAc->CsRefTimes[i].TotalRefTime);
          }
        }
      }
      CsSurpriseWakes = v26;
    }
    NdisTraceLoggingCsStateChange(
      a1,
      AoAc,
      v4,
      &CsSpuriousWakeStats,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&hProvider[48],
      (TraceLoggingHProvider)hProvider);
  }
  else
  {
    do
    {
      *(p_CurrentRefStartTime - 1) = 0LL;
      *p_CurrentRefStartTime = 0LL;
      p_CurrentRefStartTime += 2;
      --v11;
    }
    while ( v11 );
    AoAc->TotalCsActiveTime = 0LL;
    AoAc->CsPowerTransitions = 0;
    *(_QWORD *)&AoAc->CsSurpriseWakes = 0LL;
    AoAc->TotalCsResiliencyTime = 0LL;
    memset(&AoAc->CsTrafficStats[1], 0, 0x8CuLL);
    ActiveState = AoAc->ActiveState;
    if ( (ActiveState & 0xFFFFFFFC) == 0 && ActiveState != NdisNicQuiet )
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
  }
  KeReleaseSpinLock(&AoAc->Lock, NewIrql);
  if ( NewIrql_1 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficLatest);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v4, &v28, L"Surprise Wakes", CsSurpriseWakes);
    ndisPublishSleepStudyCustomData(v4, &v28, L"Spurious Wakes", CsSpuriousWakes);
    ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(v4, &v28, &CsSpuriousWakeStats);
    ndisPublishSleepStudyCustomDataCsTraffic(
      v4,
      &v28,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&hProvider[48],
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)hProvider);
  }
}

/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0069040
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C004B250 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0068E80 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C0068F6C (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006A09C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     Template_cjqzr2jx @ 0x1C006A4F8 (Template_cjqzr2jx.c)
 *     Template_qxxq @ 0x1C006A5B8 (Template_qxxq.c)
 *     Template_xqx @ 0x1C006A8C0 (Template_xqx.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00D6CFC (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00D6E48 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned __int8 v2; // r15
  unsigned __int8 v4; // r13
  unsigned int CsSurpriseWakes; // edi
  unsigned int CsSpuriousWakes; // r14d
  int v7; // r9d
  bool v8; // zf
  unsigned __int64 *p_CurrentRefStartTime; // rcx
  __int64 v10; // r15
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  __int64 v12; // r8
  unsigned __int64 CurrentActiveStartTime; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  struct _GUID InterfaceGuid; // xmm1
  __int128 v19; // xmm0
  unsigned __int64 TotalCsResiliencyTime; // rdx
  unsigned int i; // edi
  unsigned __int64 TotalRefTime; // rcx
  wchar_t *v23; // rdx
  int v24; // r8d
  unsigned __int64 v25; // rax
  KIRQL NewIrql; // [rsp+58h] [rbp-69h]
  unsigned __int8 v27; // [rsp+59h] [rbp-68h]
  unsigned int v28; // [rsp+60h] [rbp-61h]
  int v29; // [rsp+64h] [rbp-5Dh]
  wchar_t *v30; // [rsp+68h] [rbp-59h]
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v31; // [rsp+70h] [rbp-51h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v32; // [rsp+A0h] [rbp-21h] BYREF
  GUID v33; // [rsp+D0h] [rbp+Fh] BYREF
  struct _GUID v34; // [rsp+E0h] [rbp+1Fh] BYREF

  AoAc = a1->AoAc;
  v2 = ndisConnectedStandby;
  v4 = ndisLastCsScenarioInstanceId;
  v27 = ndisConnectedStandby;
  memset(&v31, 0, sizeof(v31));
  memset(&v32, 0, sizeof(v32));
  v34.Data1 = 0;
  *(_QWORD *)&v34.Data2 = 0LL;
  *(_DWORD *)&v34.Data4[4] = 0;
  CsSurpriseWakes = 0;
  CsSpuriousWakes = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ndisAoAcWriteRefcountRundown(a1, AoAc);
  v8 = v2 == 0;
  p_CurrentRefStartTime = &AoAc->CsRefTimes[0].CurrentRefStartTime;
  v10 = 15LL;
  if ( v8 )
  {
    v12 = 15LL;
    do
    {
      if ( *p_CurrentRefStartTime )
        ndisCloseTimeInterval(p_CurrentRefStartTime, p_CurrentRefStartTime - 1);
      p_CurrentRefStartTime += 2;
      --v12;
    }
    while ( v12 );
    if ( ndisCsResiliency )
    {
      CurrentActiveStartTime = AoAc->CurrentActiveStartTime;
      if ( CurrentActiveStartTime )
        AoAc->TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime - CurrentActiveStartTime + MEMORY[0xFFFFF78000000008];
    }
    if ( AoAc->CurrentActiveStartTime )
      ndisCloseTimeInterval(&AoAc->CurrentActiveStartTime, &AoAc->TotalCsActiveTime);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_qxxq(
        -444972355,
        AoAc->TotalCsActiveTime / 0x989680,
        (_DWORD)a1 + 4064,
        a1->IfIndex,
        a1->NetLuid.Value,
        AoAc->TotalCsActiveTime / 0x989680,
        AoAc->CsPowerTransitions);
    v14 = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInMulticastPackets;
    *(_OWORD *)&v31.IfInUnicastPackets = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInUnicastPackets;
    v15 = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInBroadcastPackets;
    *(_OWORD *)&v31.IfInMulticastPackets = v14;
    v16 = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInMulticastPackets;
    *(_OWORD *)&v31.IfInBroadcastPackets = v15;
    v17 = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInUnicastPackets;
    *(_OWORD *)&v32.IfInMulticastPackets = v16;
    InterfaceGuid = a1->InterfaceGuid;
    *(_OWORD *)&v32.IfInUnicastPackets = v17;
    v19 = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInBroadcastPackets;
    v34 = InterfaceGuid;
    TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime;
    CsSurpriseWakes = AoAc->CsSurpriseWakes;
    CsSpuriousWakes = AoAc->CsSpuriousWakes;
    v28 = CsSurpriseWakes;
    *(_OWORD *)&v32.IfInBroadcastPackets = v19;
    if ( TotalCsResiliencyTime )
    {
      v33 = (GUID)0LL;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v7) = v4;
        Template_cjqzr2jx(
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          TotalCsResiliencyTime,
          (_DWORD)a1 + 4064,
          v7,
          (__int64)&GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          TotalCsResiliencyTime);
      }
      for ( i = 0; i < 0xF; ++i )
      {
        TotalRefTime = AoAc->CsRefTimes[i].TotalRefTime;
        if ( TotalRefTime )
        {
          v33 = GUID_CS_BLOCKER_GEN;
          v33.Data4[0] = i;
          v23 = (&off_1C0075B60)[2 * (int)i];
          v24 = *((_DWORD *)&off_1C0075B60 + 4 * (int)i + 2);
          v33.Data3 = a1->IfIndex;
          v25 = AoAc->TotalCsResiliencyTime;
          v30 = v23;
          v29 = v24;
          if ( TotalRefTime > v25 )
            AoAc->CsRefTimes[i].TotalRefTime = v25;
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              TotalRefTime,
              AoAc->CsRefTimes[i].TotalRefTime / 0x989680,
              (_DWORD)a1 + 4064,
              a1->NetLuid.Value,
              i,
              AoAc->CsRefTimes[i].TotalRefTime / 0x989680);
            v23 = v30;
            v24 = v29;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v7) = v4;
            Template_cjqzr2jx(
              TotalRefTime,
              (_DWORD)v23,
              (_DWORD)a1 + 4064,
              v7,
              (__int64)&a1->InterfaceGuid,
              v24,
              (__int64)v23,
              (__int64)&v33,
              AoAc->CsRefTimes[i].TotalRefTime);
          }
        }
      }
      CsSurpriseWakes = v28;
    }
  }
  else
  {
    do
    {
      *(p_CurrentRefStartTime - 1) = 0LL;
      *p_CurrentRefStartTime = 0LL;
      p_CurrentRefStartTime += 2;
      --v10;
    }
    while ( v10 );
    AoAc->TotalCsActiveTime = 0LL;
    AoAc->CsPowerTransitions = 0;
    *(_QWORD *)&AoAc->CsSurpriseWakes = 0LL;
    AoAc->TotalCsResiliencyTime = 0LL;
    memset(&AoAc->CsTrafficStats[1], 0, sizeof(AoAc->CsTrafficStats[1]));
    memset(&AoAc->CsTrafficStats[2], 0, sizeof(AoAc->CsTrafficStats[2]));
    ActiveState = AoAc->ActiveState;
    if ( ActiveState == NdisNicActive || ActiveState == NdisNicResuming )
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
  }
  KeReleaseSpinLock(&AoAc->Lock, NewIrql);
  if ( v27 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficLatest);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v4, &v34, L"Surprise Wakes", CsSurpriseWakes);
    ndisPublishSleepStudyCustomData(v4, &v34, L"Spurious Wakes", CsSpuriousWakes);
    ndisPublishSleepStudyCustomDataCsTraffic(v4, &v34, &v31, &v32);
  }
}

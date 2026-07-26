/*
 * XREFs of ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@3@Z @ 0x1C007244C
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

void __fastcall NdisTraceLoggingCsStateChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_AOAC *a2,
        unsigned __int8 a3,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a4,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a5,
        TraceLoggingHProvider hProvider)
{
  struct _TlgProvider_t *v10; // rcx
  _NDIS_AOAC_COMPONENT_REF_TIME *CsRefTimes; // rdx
  __int64 v12; // r8
  unsigned __int64 TotalRefTime; // rax
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v16; // r10
  _UNICODE_STRING *pAdapterInstanceName; // rax
  int Length; // ecx
  _NDIS_NIC_ACTIVE_STATE ActiveState; // [rsp+38h] [rbp-D0h] BYREF
  int CsPowerTransitions; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int CsSurpriseWakes; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int CsSpuriousWakes; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 Value; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  unsigned int *p_IfIndex; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  _NET_LUID_LH *p_NetLuid; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  _NDIS_NIC_ACTIVE_STATE *p_ActiveState; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 *p_Value; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *p_TotalCsActiveTime; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  int *p_CsPowerTransitions; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  unsigned __int64 *p_TotalCsResiliencyTime; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  unsigned int *p_CsSurpriseWakes; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  unsigned int *p_CsSpuriousWakes; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  __int64 *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  _DWORD *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  wchar_t *Buffer; // [rsp+158h] [rbp+50h]
  _DWORD v54[2]; // [rsp+160h] [rbp+58h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  unsigned __int64 *p_IfOutUnicastPackets; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  unsigned __int64 *p_IfInMulticastPackets; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  unsigned __int64 *p_IfOutMulticastPackets; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *p_IfInBroadcastPackets; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 *p_IfOutBroadcastPackets; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  TraceLoggingHProvider v67; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1D8h] [rbp+D0h]
  __int64 v70; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *p_KeywordAny; // [rsp+1E8h] [rbp+E0h]
  __int64 v72; // [rsp+1F0h] [rbp+E8h]
  unsigned __int64 *p_KeywordAll; // [rsp+1F8h] [rbp+F0h]
  __int64 v74; // [rsp+200h] [rbp+F8h]
  unsigned __int64 *p_RegHandle; // [rsp+208h] [rbp+100h]
  __int64 v76; // [rsp+210h] [rbp+108h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+218h] [rbp+110h]
  __int64 v78; // [rsp+220h] [rbp+118h]
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *v79; // [rsp+228h] [rbp+120h]
  __int64 v80; // [rsp+230h] [rbp+128h]
  int *ComponentRefCounts; // [rsp+238h] [rbp+130h]
  __int64 v82; // [rsp+240h] [rbp+138h]
  _BYTE *v83; // [rsp+248h] [rbp+140h]
  __int64 v84; // [rsp+250h] [rbp+148h]
  _BYTE v85[128]; // [rsp+258h] [rbp+150h] BYREF

  memset(v85, 0, 0x78uLL);
  v24 = (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x2710;
  if ( v24 >= 0x927C0 )
  {
    v10 = (struct _TlgProvider_t *)v85;
    CsRefTimes = a2->CsRefTimes;
    v12 = 15LL;
    do
    {
      TotalRefTime = CsRefTimes->TotalRefTime;
      ++CsRefTimes;
      *(_QWORD *)&v10->LevelPlus1 = TotalRefTime;
      v10 = (struct _TlgProvider_t *)((char *)v10 + 8);
      --v12;
    }
    while ( v12 );
    if ( (unsigned int)dword_1C0088010 > 5 )
    {
      if ( TlgKeywordOn(v10, 0x400000000000uLL) )
      {
        v28 = 16LL;
        p_InterfaceGuid = &a1->InterfaceGuid;
        v51 = v54;
        p_IfIndex = &a1->IfIndex;
        p_NetLuid = &a1->NetLuid;
        ActiveState = a2->ActiveState;
        p_ActiveState = &ActiveState;
        Value = a2->StopFlags.Value;
        p_Value = &Value;
        v37 = &v24;
        p_TotalCsActiveTime = &a2->TotalCsActiveTime;
        CsPowerTransitions = a2->CsPowerTransitions;
        p_CsPowerTransitions = &CsPowerTransitions;
        p_TotalCsResiliencyTime = &a2->TotalCsResiliencyTime;
        CsSurpriseWakes = a2->CsSurpriseWakes;
        p_CsSurpriseWakes = &CsSurpriseWakes;
        CsSpuriousWakes = a2->CsSpuriousWakes;
        p_CsSpuriousWakes = &CsSpuriousWakes;
        LODWORD(v23) = a3;
        v49 = &v23;
        pAdapterInstanceName = a1->pAdapterInstanceName;
        v30 = 4LL;
        v32 = v16;
        v34 = 4LL;
        v36 = v16;
        v38 = v16;
        v40 = v16;
        v42 = 4LL;
        v44 = v16;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 2LL;
        Length = pAdapterInstanceName->Length;
        Buffer = pAdapterInstanceName->Buffer;
        v54[0] = Length;
        v55 = a5;
        v54[1] = (_DWORD)v15;
        v56 = v16;
        v58 = v16;
        p_IfOutUnicastPackets = &a5->IfOutUnicastPackets;
        p_IfInMulticastPackets = &a5->IfInMulticastPackets;
        p_IfOutMulticastPackets = &a5->IfOutMulticastPackets;
        p_IfInBroadcastPackets = &a5->IfInBroadcastPackets;
        p_IfOutBroadcastPackets = &a5->IfOutBroadcastPackets;
        v60 = v16;
        v62 = v16;
        v64 = v16;
        p_ProviderMetadataPtr = &hProvider->ProviderMetadataPtr;
        v66 = v16;
        v67 = hProvider;
        v68 = v16;
        v70 = v16;
        v72 = v16;
        p_KeywordAny = &hProvider->KeywordAny;
        p_KeywordAll = &hProvider->KeywordAll;
        p_RegHandle = &hProvider->RegHandle;
        p_EnableCallback = &hProvider->EnableCallback;
        ComponentRefCounts = a2->ComponentRefCounts;
        v83 = v85;
        v74 = v16;
        v76 = v16;
        v78 = v16;
        v79 = a4;
        v80 = 44LL;
        v82 = 60LL;
        v84 = 120LL;
        TlgWrite(hProvider, &unk_1C00789A3, v14, v15, 0x1Fu, &pData);
      }
    }
  }
}

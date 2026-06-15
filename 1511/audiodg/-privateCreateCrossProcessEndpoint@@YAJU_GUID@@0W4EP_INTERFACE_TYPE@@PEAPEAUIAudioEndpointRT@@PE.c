/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015D80
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A810 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140009340 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14000940C (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015570 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140015620 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035420 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400354E4 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400355A8 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  void *v8; // rax
  CCrossProcessServerInputEndpoint *v9; // rax
  CCrossProcessServerInputEndpoint *v10; // rsi
  __int64 (__fastcall *v11)(__int64); // rbx
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v13 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
    if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
      v13 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
    if ( v13 )
    {
      v16 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
      if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
        v16 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
      if ( v16 )
      {
        v19 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
        if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
          v19 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
        if ( v19 )
          return (unsigned int)-2147024846;
        v20 = (void *)AERTGetDLLRTHeap();
        v21 = AERTAllocate(0x208uLL, v20);
        if ( v21 )
          v10 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v21);
        else
          v10 = 0LL;
      }
      else
      {
        v17 = (void *)AERTGetDLLRTHeap();
        v18 = AERTAllocate(0x200uLL, v17);
        if ( v18 )
          v10 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v18);
        else
          v10 = 0LL;
      }
    }
    else
    {
      v14 = (void *)AERTGetDLLRTHeap();
      v15 = AERTAllocate(0x238uLL, v14);
      if ( v15 )
        v10 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v15);
      else
        v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL);
      goto LABEL_33;
    }
    return (unsigned int)-2147024882;
  }
  v8 = (void *)AERTGetDLLRTHeap();
  v9 = (CCrossProcessServerInputEndpoint *)AERTAllocate(0x210uLL, v8);
  if ( v9 )
    v10 = ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v9);
  else
    v10 = 0LL;
  if ( !v10 )
    return (unsigned int)-2147024882;
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL);
  if ( v11 != ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
  {
LABEL_33:
    v11((__int64)v10);
    goto LABEL_9;
  }
  ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef((__int64)v10);
LABEL_9:
  *(_OWORD *)((char *)v10 + 184) = *a2;
  *a4 = (char *)v10 + 8;
  return v7;
}

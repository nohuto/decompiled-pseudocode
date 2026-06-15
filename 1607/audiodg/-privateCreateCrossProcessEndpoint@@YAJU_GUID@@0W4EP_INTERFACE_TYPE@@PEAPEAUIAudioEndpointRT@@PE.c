/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400150B4
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140004DF0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140011540 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140011660 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012A20 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140034770 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140034818 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400348C0 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rax
  CCrossProcessServerInputEndpoint *v9; // rax
  volatile int *v10; // rdx
  CCrossProcessServerInputEndpoint *v11; // rdi
  unsigned int (__fastcall *v12)(__int64, volatile int *); // rax
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( !v6 )
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v9 = (CCrossProcessServerInputEndpoint *)AERTAllocate(0x210uLL, v8);
    if ( v9 )
      v11 = ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v9);
    else
      v11 = 0LL;
    if ( v11 )
    {
      v12 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 8LL);
      if ( v12 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
        ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef((__int64)v11, v10);
      else
        ((void (__fastcall *)(CCrossProcessServerInputEndpoint *))v12)(v11);
      goto LABEL_9;
    }
    return (unsigned int)-2147024882;
  }
  v14 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
  if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
    v14 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
  if ( v14 )
  {
    v17 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
    if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
      v17 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
    if ( v17 )
    {
      v20 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
      if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
        v20 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
      if ( v20 )
        return (unsigned int)-2147024846;
      v21 = (void *)AERTGetDLLRTHeap();
      v22 = AERTAllocate(0x210uLL, v21);
      if ( v22 )
        v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v22);
      else
        v11 = 0LL;
    }
    else
    {
      v18 = (void *)AERTGetDLLRTHeap();
      v19 = AERTAllocate(0x208uLL, v18);
      if ( v19 )
        v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v19);
      else
        v11 = 0LL;
    }
  }
  else
  {
    v15 = (void *)AERTGetDLLRTHeap();
    v16 = AERTAllocate(0x238uLL, v15);
    if ( v16 )
      v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v16);
    else
      v11 = 0LL;
  }
  if ( !v11 )
    return (unsigned int)-2147024882;
  (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_9:
  *(_OWORD *)((char *)v11 + 184) = *a2;
  *a4 = (char *)v11 + 8;
  return v7;
}

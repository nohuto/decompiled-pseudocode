/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015420
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003FB0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140013EC0 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400157A0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400162C0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001633C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035250 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035314 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400353D8 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  void *v7; // rax
  _DWORD *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  unsigned int (__fastcall *v11)(__int64, volatile int *); // rdi
  __int64 v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  void *v21; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  if ( !v6 )
  {
    v7 = AERTGetDLLRTHeap();
    v8 = AERTAllocate(0x210uLL, v7);
    v10 = (__int64)v8;
    if ( v8 )
    {
      v8[116] = 0;
      memset_0(v8 + 118, 0, 0x28uLL);
      *(_BYTE *)(v10 + 512) = 0;
      CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint((CCrossProcessBaseEndpoint *)v10);
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      *(_QWORD *)(v10 + 400) = 0LL;
      *(_DWORD *)(v10 + 408) = 0;
      *(_QWORD *)(v10 + 416) = 0LL;
      *(_QWORD *)(v10 + 424) = 0LL;
      *(_DWORD *)(v10 + 432) = 0;
      *(_QWORD *)(v10 + 448) = v10;
      *(_QWORD *)(v10 + 456) = 3LL;
      *(_DWORD *)(v10 + 520) = 0;
      *(_QWORD *)v10 = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
      *(_QWORD *)(v10 + 8) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
      *(_QWORD *)(v10 + 376) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
      *(_QWORD *)(v10 + 440) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v10 + 8LL);
      if ( v11 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
      {
        ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(v10, v9);
LABEL_9:
        *(_OWORD *)(v10 + 184) = *a2;
        *a4 = v10 + 8;
        return 0LL;
      }
LABEL_36:
      ((void (__fastcall *)(__int64))v11)(v10);
      goto LABEL_9;
    }
    return 2147942414LL;
  }
  v13 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
  if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
    v13 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
  if ( !v13 )
  {
    v14 = AERTGetDLLRTHeap();
    v15 = AERTAllocate(0x238uLL, v14);
    if ( v15 )
      v10 = ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v15);
    else
      v10 = 0LL;
    if ( v10 )
    {
LABEL_35:
      v11 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v10 + 8LL);
      goto LABEL_36;
    }
    return 2147942414LL;
  }
  v16 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
  if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
    v16 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
  if ( !v16 )
  {
    v17 = AERTGetDLLRTHeap();
    v18 = AERTAllocate(0x200uLL, v17);
    if ( v18 )
      v10 = ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v18);
    else
      v10 = 0LL;
    if ( v10 )
      goto LABEL_35;
    return 2147942414LL;
  }
  v19 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
  if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
    v19 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
  if ( !v19 )
  {
    v20 = AERTGetDLLRTHeap();
    v21 = AERTAllocate(0x208uLL, v20);
    if ( v21 )
      v10 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v21);
    else
      v10 = 0LL;
    if ( v10 )
      goto LABEL_35;
    return 2147942414LL;
  }
  return 2147942450LL;
}

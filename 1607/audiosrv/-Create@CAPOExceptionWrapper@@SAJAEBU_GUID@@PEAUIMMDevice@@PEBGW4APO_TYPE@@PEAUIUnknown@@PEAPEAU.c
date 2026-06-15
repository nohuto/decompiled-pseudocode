/*
 * XREFs of ?Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C1C0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x18008B210 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObjec.c)
 * Callees:
 *     ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C508 (-Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x18008D544 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x18008D820 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

__int64 __fastcall CAPOExceptionWrapper::Create(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v8; // rax
  unsigned __int64 v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // rcx

  v8 = AERTGetDLLRTHeap();
  v10 = AERTAllocate(v9, v8);
  v11 = v10;
  if ( v10 )
  {
    v10[10] = 1;
    *(_QWORD *)v10 = &CAPOExceptionWrapper::`vftable'{for `INDUnknown'};
    *((_QWORD *)v10 + 1) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObject'};
    *((_QWORD *)v10 + 2) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
    *((_QWORD *)v10 + 3) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObjectRT'};
    *((_QWORD *)v10 + 4) = &CAPOExceptionWrapper::`vftable'{for `IAudioSystemEffects2'};
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 9) = 0LL;
    *((_QWORD *)v10 + 12) = 0LL;
    *((_QWORD *)v10 + 13) = 0LL;
    *((_QWORD *)v10 + 14) = 0LL;
    *((_QWORD *)v10 + 15) = 0LL;
    *((_QWORD *)v10 + 16) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
    return CAPOExceptionWrapper::Init(v11, a1, a2, a3, a4);
  else
    return 2147942414LL;
}

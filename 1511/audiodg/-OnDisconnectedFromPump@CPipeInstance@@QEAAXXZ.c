/*
 * XREFs of ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x14000C110
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140008190 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054@.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?OnDisconnectedFromPump@CCrossProcessBaseServerEndpoint@@UEAAJXZ @ 0x140017A90 (-OnDisconnectedFromPump@CCrossProcessBaseServerEndpoint@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromPump(CPipeInstance *this)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  _QWORD *v3; // rax
  CCrossProcessBaseServerEndpoint *v4; // rbx
  __int64 (__fastcall *v5)(CCrossProcessBaseServerEndpoint *__hidden); // rsi
  __int64 (__fastcall *v6)(volatile signed __int32 *); // rsi
  CCrossProcessBaseServerEndpoint *v7; // [rsp+50h] [rbp+8h] BYREF
  void *v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 3 )
    {
      v3 = *(_QWORD **)(v2 + 32);
      v8 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, void **))*v3)(*v3, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v8) >= 0 )
      {
        ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>(
          &v7,
          (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))v8);
        v4 = v7;
        if ( v7 )
        {
          v5 = *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden))(*(_QWORD *)v7 + 40LL);
          if ( v5 == CCrossProcessBaseServerEndpoint::OnDisconnectedFromPump )
            CCrossProcessBaseServerEndpoint::OnDisconnectedFromPump(v7);
          else
            v5(v7);
          v4 = v7;
        }
        if ( v4 )
          (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( v8 )
      {
        v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
        if ( v6 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
          ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((volatile signed __int32 *)v8);
        else
          v6((volatile signed __int32 *)v8);
      }
    }
  }
}

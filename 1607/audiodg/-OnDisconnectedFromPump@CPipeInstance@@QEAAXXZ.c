/*
 * XREFs of ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140007AD0
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140011D70 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@.c)
 *     ?OnDisconnectedFromPump@CCrossProcessBaseServerEndpoint@@UEAAJXZ @ 0x1400170A0 (-OnDisconnectedFromPump@CCrossProcessBaseServerEndpoint@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromPump(CPipeInstance *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rax
  CCrossProcessBaseServerEndpoint *v4; // rcx
  __int64 (__fastcall *v5)(CCrossProcessBaseServerEndpoint *__hidden); // rax
  __int64 (__fastcall *v6)(void *); // rax
  CCrossProcessBaseServerEndpoint *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

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
        ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc>(
          &v7,
          v8);
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
        v6 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL);
        if ( v6 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
          ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v8);
        else
          v6(v8);
      }
    }
  }
}

/*
 * XREFs of ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x140007BD0
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140011D70 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@.c)
 *     ?OnConnectedToPump@CCrossProcessBaseServerEndpoint@@UEAAJ_J0@Z @ 0x1400170E0 (-OnConnectedToPump@CCrossProcessBaseServerEndpoint@@UEAAJ_J0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnConnectedToPump(CPipeInstance *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  CCrossProcessBaseServerEndpoint *v8; // rcx
  __int64 (__fastcall *v9)(CCrossProcessBaseServerEndpoint *__hidden, __int64, __int64); // rax
  __int64 (__fastcall *v10)(void *); // rax
  CCrossProcessBaseServerEndpoint *v11; // [rsp+50h] [rbp+8h] BYREF
  void *v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 3);
  while ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( *(_DWORD *)(v6 + 40) == 3 )
    {
      v7 = *(_QWORD **)(v6 + 32);
      v12 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, void **))*v7)(*v7, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v12) >= 0 )
      {
        ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc>(
          &v11,
          v12);
        v8 = v11;
        if ( v11 )
        {
          v9 = *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden, __int64, __int64))(*(_QWORD *)v11 + 32LL);
          if ( v9 == CCrossProcessBaseServerEndpoint::OnConnectedToPump )
            CCrossProcessBaseServerEndpoint::OnConnectedToPump(v11, a2, a3);
          else
            v9(v11, a2, a3);
          v8 = v11;
        }
        if ( v8 )
          (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v12 )
      {
        v10 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL);
        if ( v10 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
          ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v12);
        else
          v10(v12);
      }
    }
  }
}

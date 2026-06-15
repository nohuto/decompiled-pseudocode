/*
 * XREFs of ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140008190
 * Callers:
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x14000C110 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x14000C240 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140009320 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall *v3)(_QWORD, GUID *, _QWORD *); // rsi

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = **a2;
    if ( (char *)v3 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface(
        a2,
        &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054,
        a1);
    else
      v3(a2, &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054, a1);
  }
  return a1;
}

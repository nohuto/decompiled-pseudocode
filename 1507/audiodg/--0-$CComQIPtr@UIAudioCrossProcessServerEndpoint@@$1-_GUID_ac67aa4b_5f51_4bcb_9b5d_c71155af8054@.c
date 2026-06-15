/*
 * XREFs of ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400269F8
 * Callers:
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140030984 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054, a1);
  return a1;
}

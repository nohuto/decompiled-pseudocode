/*
 * XREFs of ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_ed899cbb_5613_4541_a78f_66302f0ce211@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180067AF8
 * Callers:
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x1800663C8 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_ed899cbb_5613_4541_a78f_66302f0ce211>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_ed899cbb_5613_4541_a78f_66302f0ce211>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, a1);
  return a1;
}

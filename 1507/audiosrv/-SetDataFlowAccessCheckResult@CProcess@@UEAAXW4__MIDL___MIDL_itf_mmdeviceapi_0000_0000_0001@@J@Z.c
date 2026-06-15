/*
 * XREFs of ?SetDataFlowAccessCheckResult@CProcess@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@J@Z @ 0x180011C40
 * Callers:
 *     ?RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAudioProcess@@@Z @ 0x18002F880 (-RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAu.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetDataFlowAccessCheckResult(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3)
{
  *((_DWORD *)this + a2 + 50) = a3;
}

/*
 * XREFs of ?GetDataFlowAccessCheckResult@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x180011C10
 * Callers:
 *     ?RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAudioProcess@@@Z @ 0x18002F880 (-RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetDataFlowAccessCheckResult(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int *a3)
{
  *a3 = *((_DWORD *)this + a2 + 50) == 0;
  return *((unsigned int *)this + a2 + 50);
}

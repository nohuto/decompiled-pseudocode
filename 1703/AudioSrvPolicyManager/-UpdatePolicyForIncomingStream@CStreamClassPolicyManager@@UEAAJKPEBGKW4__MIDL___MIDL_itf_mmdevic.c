/*
 * XREFs of ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x180017D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamClassPolicyManager::UpdatePolicyForIncomingStream(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int *a6)
{
  return TsSessionIdUpdateStreamClassPolicyGains(a2, a3, a4, 0, a6);
}

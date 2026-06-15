/*
 * XREFs of _lambda_ea783823a3a088a32542d9fbc7fb427f_::operator() @ 0x180051328
 * Callers:
 *     ??$FindFirstMatchingPreferredFormat@V_lambda_353b87aafb6929f0b8cf31fbc22c501a_@@@CEndpointCharacteristics@@AEAAJPEAUWAVEFORMATEXTENSIBLE@@V_lambda_353b87aafb6929f0b8cf31fbc22c501a_@@@Z @ 0x1800852FC (--$FindFirstMatchingPreferredFormat@V_lambda_353b87aafb6929f0b8cf31fbc22c501a_@@@CEndpointCharac.c)
 *     ??$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800863C8 (--$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristic.c)
 *     ??$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086C40 (--$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

bool __fastcall lambda_ea783823a3a088a32542d9fbc7fb427f_::operator()(__int64 a1, const struct tWAVEFORMATEX *a2)
{
  __int128 v2; // xmm0
  int v4; // edx
  __int64 v5; // rcx
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_OWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v7 = v2;
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v4, a2, &v7, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}

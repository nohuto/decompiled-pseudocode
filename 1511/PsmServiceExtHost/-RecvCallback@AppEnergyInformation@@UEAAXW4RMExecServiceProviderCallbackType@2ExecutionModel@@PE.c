/*
 * XREFs of ?RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180052760
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x180051F8C (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 */

void __fastcall AppEnergyInformation::RecvCallback(__int64 a1, __int64 a2, __int64 a3)
{
  AppEnergyInformation::OnEnergyConsumedInternal((AppEnergyInformation *)(a1 - 8), *(_DWORD *)a3, *(_DWORD *)(a3 + 4));
  tlx::_delete<AppEnergyInformation::AppEnergyInformationWorkItem>((void *)a3);
}

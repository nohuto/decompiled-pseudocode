/*
 * XREFs of ?RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18004B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x18004B1F8 (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 */

void __fastcall AppEnergyInformation::RecvCallback(__int64 a1, __int64 a2, __int64 a3)
{
  AppEnergyInformation::OnEnergyConsumedInternal((AppEnergyInformation *)(a1 - 8), *(_DWORD *)a3, *(_DWORD *)(a3 + 4));
  tlx::_delete<AppEnergyInformation::AppEnergyInformationWorkItem>((void *)a3);
}

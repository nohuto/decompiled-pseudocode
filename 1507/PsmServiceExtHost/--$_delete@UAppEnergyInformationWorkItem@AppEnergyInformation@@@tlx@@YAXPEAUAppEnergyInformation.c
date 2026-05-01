/*
 * XREFs of ??$_delete@UAppEnergyInformationWorkItem@AppEnergyInformation@@@tlx@@YAXPEAUAppEnergyInformationWorkItem@AppEnergyInformation@@@Z @ 0x1800487BC
 * Callers:
 *     ?OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z @ 0x18004B120 (-OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z.c)
 *     ?RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18004B9D0 (-RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

void __fastcall tlx::_delete<AppEnergyInformation::AppEnergyInformationWorkItem>(void *a1)
{
  if ( a1 )
    operator delete(a1);
}

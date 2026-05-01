/*
 * XREFs of ??$_delete@UAppEnergyInformationWorkItem@AppEnergyInformation@@@tlx@@YAXPEAUAppEnergyInformationWorkItem@AppEnergyInformation@@@Z @ 0x18004F848
 * Callers:
 *     ?OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z @ 0x18002A950 (-OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z.c)
 *     ?RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180052760 (-RecvCallback@AppEnergyInformation@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

void __fastcall tlx::_delete<AppEnergyInformation::AppEnergyInformationWorkItem>(void *a1)
{
  if ( a1 )
    operator delete(a1);
}

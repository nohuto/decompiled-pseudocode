/*
 * XREFs of ?SetAutoRelease@ResourceSetImpl@ExecutionModel@@UEAAX_N@Z @ 0x180014B40
 * Callers:
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x180015E80 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceSetImpl::SetAutoRelease(ExecutionModel::ResourceSetImpl *this, char a2)
{
  *((_DWORD *)this + 7) &= ~0x10000u;
  *((_DWORD *)this + 7) |= (a2 & 1) << 16;
}

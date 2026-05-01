/*
 * XREFs of ?SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z @ 0x180012310
 * Callers:
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800172E4 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceSet::SetAutoRelease(ExecutionModel::ResourceSet *this, char a2)
{
  *((_DWORD *)this + 11) &= ~4u;
  *((_DWORD *)this + 11) |= 4 * (a2 & 1);
}

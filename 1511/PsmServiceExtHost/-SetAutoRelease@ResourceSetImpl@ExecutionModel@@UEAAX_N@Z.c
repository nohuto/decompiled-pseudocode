/*
 * XREFs of ?SetAutoRelease@ResourceSetImpl@ExecutionModel@@UEAAX_N@Z @ 0x180013A00
 * Callers:
 *     ?ResourceSet_SetAutoRelease@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@_N@Z @ 0x1800194E8 (-ResourceSet_SetAutoRelease@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceSetImpl::SetAutoRelease(ExecutionModel::ResourceSetImpl *this, char a2)
{
  *((_DWORD *)this + 7) &= ~0x10000u;
  *((_DWORD *)this + 7) |= (a2 & 1) << 16;
}

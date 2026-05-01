/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000CDA0
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 * Callees:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E860 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceSet *this)
{
  __int64 (__fastcall *v1)(ExecutionModel::ResourceSet *__hidden, unsigned int); // rdi

  v1 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
  if ( v1 == ExecutionModel::ResourceSet::Apply )
    return ExecutionModel::ResourceSet::Apply(this, 0);
  else
    return v1(this, 0);
}

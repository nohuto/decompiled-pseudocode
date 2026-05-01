/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000F790
 * Callers:
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180015270 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
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

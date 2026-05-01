/*
 * XREFs of ??1?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F1C0
 * Callers:
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ATL::CComPtr<ExecutionModel::ResourceSet>::~CComPtr<ExecutionModel::ResourceSet>(
        ExecutionModel::ResourceSet **a1)
{
  __int64 (__fastcall *v1)(ExecutionModel::ResourceSet *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ExecutionModel::ResourceSet::Release )
      return ExecutionModel::ResourceSet::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}

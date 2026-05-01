/*
 * XREFs of ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F21C
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180033F7C (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(
        ExecutionModel::ResourceSet **a1)
{
  __int64 (__fastcall *v1)(ExecutionModel::BaseResourceSet *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ExecutionModel::ResourceSet::Release )
    {
      return ExecutionModel::ResourceSet::Release(*a1);
    }
    else if ( v1 == ExecutionModel::BaseResourceSet::Release )
    {
      return ExecutionModel::BaseResourceSet::Release(*a1);
    }
    else
    {
      return v1(*a1);
    }
  }
  return result;
}

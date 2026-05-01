/*
 * XREFs of ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800368D8
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18003B0F8 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

unsigned int __fastcall ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(
        ExecutionModel::ResourceSet **a1)
{
  __int64 (__fastcall *v1)(ExecutionModel::BaseResourceSet *); // rdi
  unsigned int result; // eax

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
    else if ( (char *)v1 == (char *)ExecutionModel::ExternalResourceSet::Release )
    {
      return ExecutionModel::ExternalResourceSet::Release(*a1);
    }
    else
    {
      return v1(*a1);
    }
  }
  return result;
}

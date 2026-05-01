/*
 * XREFs of ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x18002E6E8
 * Callers:
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18003EFE0 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x18003F11C (--1ExternalResourceSet@ExecutionModel@@EEAA@XZ.c)
 * Callees:
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180010E60 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::~BaseResourceSet(void **this)
{
  ExecutionModel::ResourceSet ***v2; // rbx
  ExecutionModel::ResourceSet **v3; // rdx
  ExecutionModel::ResourceSet **v4; // r8
  ExecutionModel::ResourceSet *v5; // rax

  *this = &ExecutionModel::BaseResourceSet::`vftable';
  v2 = (ExecutionModel::ResourceSet ***)(this + 20);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (ExecutionModel::ResourceSet **)v2 )
      break;
    v4 = (ExecutionModel::ResourceSet **)v3[1];
    v5 = *v3;
    *v4 = *v3;
    *((_QWORD *)v5 + 1) = v4;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
      (__int64)this,
      v3);
  }
  v2[2] = 0LL;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(this + 4);
}

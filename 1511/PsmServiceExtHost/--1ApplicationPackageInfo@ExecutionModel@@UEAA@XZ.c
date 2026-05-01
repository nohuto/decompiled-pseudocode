/*
 * XREFs of ??1ApplicationPackageInfo@ExecutionModel@@UEAA@XZ @ 0x18001B9F4
 * Callers:
 *     ??_GApplicationPackageInfo@ExecutionModel@@UEAAPEAXI@Z @ 0x18001BA50 (--_GApplicationPackageInfo@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@1@@Z @ 0x1800062D4 (--$_DeleteNode@U-$_DlistNode@V-$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::ApplicationPackageInfo::~ApplicationPackageInfo(
        ExecutionModel::ApplicationPackageInfo *this)
{
  void *v2; // rcx
  char **v3; // rdi
  char *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)this = &ExecutionModel::ApplicationPackageInfo::`vftable';
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (char **)((char *)this + 64);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (char *)v3 )
      break;
    v5 = (_QWORD *)*((_QWORD *)v4 + 1);
    v6 = *(_QWORD *)v4;
    *v5 = *(_QWORD *)v4;
    *(_QWORD *)(v6 + 8) = v5;
    utl::_ContainerBase<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>,utl::allocator<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>(
      (__int64)v5,
      v4);
  }
  *((_QWORD *)this + 10) = 0LL;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)this + 2);
}

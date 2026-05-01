/*
 * XREFs of ?Attach@?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000B90C
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x1800010F0 (-CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<ExecutionModel::IResourceSet>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = a2;
  return result;
}

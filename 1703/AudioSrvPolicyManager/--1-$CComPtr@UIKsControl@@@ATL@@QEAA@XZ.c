/*
 * XREFs of ??1?$CComPtr@UIKsControl@@@ATL@@QEAA@XZ @ 0x18001FFE4
 * Callers:
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x180022C36 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IKsControl>::~CComPtr<IKsControl>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}

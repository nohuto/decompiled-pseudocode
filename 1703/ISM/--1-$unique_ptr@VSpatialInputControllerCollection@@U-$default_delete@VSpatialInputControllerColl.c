/*
 * XREFs of ??1?$unique_ptr@VSpatialInputControllerCollection@@U?$default_delete@VSpatialInputControllerCollection@@@std@@@std@@QEAA@XZ @ 0x18007A87C
 * Callers:
 *     _SpatialInputControllerCollection::Create_::_1_::dtor$0 @ 0x1800A2F86 (_SpatialInputControllerCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unique_ptr<SpatialInputControllerCollection>::~unique_ptr<SpatialInputControllerCollection>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  return result;
}

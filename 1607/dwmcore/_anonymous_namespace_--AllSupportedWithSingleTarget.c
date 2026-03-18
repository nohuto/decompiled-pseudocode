/*
 * XREFs of _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x18017251C
 * Callers:
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800A6B00 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x180172594 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::AllSupportedWithSingleTarget(__int64 a1, unsigned int a2)
{
  char v4; // bl
  __int64 v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2, 0LL, 2LL) != 0;
  }
  return v4;
}

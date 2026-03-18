/*
 * XREFs of HUBMUX_QueueResetToAllPSMs @ 0x1C000CC9C
 * Callers:
 *     HUBHSM_NotifyingHubResetToPortsOnResetOnResume @ 0x1C00073F0 (HUBHSM_NotifyingHubResetToPortsOnResetOnResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_QueueResetToAllPSMs(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 i; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rdi

  _InterlockedOr((volatile signed __int32 *)(a1 + 2296), 0x10u);
  result = *(unsigned int *)(a1 + 2300);
  v2 = a1 + 2304;
  *(_DWORD *)(a1 + 2280) = result;
  for ( i = *(_QWORD *)(a1 + 2304); ; i = *v5 )
  {
    v4 = i - 248;
    v5 = (__int64 *)(v4 + 248);
    if ( v2 == v4 + 248 )
      break;
    _InterlockedOr((volatile signed __int32 *)(v4 + 264), 0x10u);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 1240))(v4, 3010LL);
  }
  return result;
}

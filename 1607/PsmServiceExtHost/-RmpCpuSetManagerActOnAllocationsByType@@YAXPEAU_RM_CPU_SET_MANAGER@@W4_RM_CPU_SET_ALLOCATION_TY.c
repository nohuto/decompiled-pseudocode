/*
 * XREFs of ?RmpCpuSetManagerActOnAllocationsByType@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@P6AE0PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z3@Z @ 0x18001D78C
 * Callers:
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x18001D694 (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerSweepInvalidSets@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D700 (-RmpCpuSetManagerSweepInvalidSets@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpCpuSetManagerActOnAllocationsByType(
        __int64 a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, __int64),
        __int64 a4)
{
  __int64 result; // rax
  _QWORD **v6; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx

  result = 16LL * a2;
  v6 = (_QWORD **)(result + a1 + 232);
  v9 = *v6;
  do
  {
    if ( v9 == v6 )
      break;
    v10 = v9 - 7;
    v9 = (_QWORD *)*v9;
    result = a3(a1, v10, a4);
  }
  while ( (_BYTE)result );
  return result;
}

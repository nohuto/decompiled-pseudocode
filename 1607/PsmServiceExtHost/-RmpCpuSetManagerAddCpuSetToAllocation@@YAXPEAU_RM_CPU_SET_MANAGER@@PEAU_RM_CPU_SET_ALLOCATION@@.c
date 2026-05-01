/*
 * XREFs of ?RmpCpuSetManagerAddCpuSetToAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DCE0
 * Callers:
 *     ?RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z @ 0x18001DA0C (-RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z.c)
 *     RmpCpuSetManagerResetValidMask @ 0x18001DA50 (RmpCpuSetManagerResetValidMask.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerAddCpuSetToAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rax

  v4 = a3;
  v5 = *((_QWORD *)a2 + a3 + 14);
  _bittestandset64(&v5, a4);
  *((_QWORD *)a2 + v4 + 14) = v5;
  v6 = *((int *)a2 + 70);
  ++*((_DWORD *)a2 + 68);
  ++*((_DWORD *)a1 + v6 + 238);
  RmpCpuSetManagerMarkAllocationDirty(a1, a2);
}

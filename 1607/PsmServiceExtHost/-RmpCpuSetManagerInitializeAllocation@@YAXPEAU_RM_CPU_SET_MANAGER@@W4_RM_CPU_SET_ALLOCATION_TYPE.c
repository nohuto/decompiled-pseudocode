/*
 * XREFs of ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18001E608
 * Callers:
 *     RmpCpuSetManagerInitialize @ 0x18001E4B4 (RmpCpuSetManagerInitialize.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 * Callees:
 *     RmpGenerateObjectHandle @ 0x18001E6C4 (RmpGenerateObjectHandle.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

unsigned __int8 *__fastcall RmpCpuSetManagerInitializeAllocation(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 *result; // rax

  memset_0(a3, 0, 0x120uLL);
  RmpGenerateObjectHandle(2LL, a3);
  v6 = a3[6] + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 11623883LL))))));
  v7 = a3[7];
  *((_QWORD *)a3 + 1) = a1;
  *((_DWORD *)a3 + 70) = a2;
  v8 = v7 + 37 * v6;
  result = a3 + 88;
  *((_QWORD *)a3 + 6) = v8;
  *((_QWORD *)a3 + 12) = a3 + 88;
  *((_QWORD *)a3 + 11) = a3 + 88;
  return result;
}

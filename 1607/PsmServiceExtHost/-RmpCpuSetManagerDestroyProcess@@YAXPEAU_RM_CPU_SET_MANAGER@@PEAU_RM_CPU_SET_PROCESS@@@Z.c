/*
 * XREFs of ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800300F0
 * Callers:
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002FA28 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0 (RmpCpuSetManagerRegisterProcessWithAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerDestroyProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  int v3; // r9d
  int v4; // r8d
  struct _RM_CPU_SET_PROCESS *v5; // rdx
  __int64 v6; // [rsp+58h] [rbp+10h]

  if ( *((_QWORD *)a2 + 2) )
  {
    v3 = *((_DWORD *)a1 + 11) >> 5;
    v6 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 11) & 0x1F));
    v4 = 37
       * (BYTE6(v6)
        + 37
        * (BYTE5(v6)
         + 37
         * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))));
    v5 = (struct _RM_CPU_SET_PROCESS *)(*((_QWORD *)a1 + 6) + 8LL * ((v4 + HIBYTE(v6)) & (unsigned int)(v3 - 1)));
    if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (struct _RM_CPU_SET_PROCESS *)(*((_QWORD *)a1 + 6) + 8LL * ((v4 + HIBYTE(v6)) & (unsigned int)(v3 - 1)));
    while ( (*(_QWORD *)v5 & 1) == 0 )
    {
      if ( *(struct _RM_CPU_SET_PROCESS **)v5 == a2 )
      {
        *(_QWORD *)v5 = *(_QWORD *)a2;
        --*((_DWORD *)a1 + 10);
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
      v5 = *(struct _RM_CPU_SET_PROCESS **)v5;
    }
    NtClose(*((HANDLE *)a2 + 2));
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}

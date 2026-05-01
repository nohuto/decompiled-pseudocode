/*
 * XREFs of ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002F428
 * Callers:
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002EFE0 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FFC8 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
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
    v3 = *((_DWORD *)a1 + 19) >> 5;
    v6 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
    v4 = 37
       * (BYTE6(v6)
        + 37
        * (BYTE5(v6)
         + 37
         * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))));
    v5 = (struct _RM_CPU_SET_PROCESS *)(*((_QWORD *)a1 + 10) + 8LL * ((v4 + HIBYTE(v6)) & (unsigned int)(v3 - 1)));
    if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (struct _RM_CPU_SET_PROCESS *)(*((_QWORD *)a1 + 10) + 8LL * ((v4 + HIBYTE(v6)) & (unsigned int)(v3 - 1)));
    while ( (*(_QWORD *)v5 & 1) == 0 )
    {
      if ( *(struct _RM_CPU_SET_PROCESS **)v5 == a2 )
      {
        *(_QWORD *)v5 = *(_QWORD *)a2;
        --*((_DWORD *)a1 + 18);
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
      v5 = *(struct _RM_CPU_SET_PROCESS **)v5;
    }
    NtClose(*((HANDLE *)a2 + 2));
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}

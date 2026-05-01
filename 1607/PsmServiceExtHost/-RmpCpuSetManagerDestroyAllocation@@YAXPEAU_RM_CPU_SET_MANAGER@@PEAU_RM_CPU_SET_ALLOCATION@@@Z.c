/*
 * XREFs of ?RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FF10
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     ?RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18003020C (-RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS.c)
 */

void __fastcall RmpCpuSetManagerDestroyAllocation(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  _QWORD *i; // rdi
  _QWORD *v5; // r10
  _QWORD *v6; // rdx
  __int64 v7; // [rsp+58h] [rbp+10h]

  for ( i = (_QWORD *)((char *)a2 + 88);
        (_QWORD *)*i != i;
        RmpCpuSetManagerDestroyProcessRegistration(a1, (struct _RM_CPU_SET_PROCESS_REGISTRATION *)(*i - 80LL)) )
  {
    ;
  }
  if ( *((_QWORD *)a2 + 2) )
    RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 3);
  if ( !*((_DWORD *)a2 + 26) && !*((_DWORD *)a2 + 27) )
    NtDeleteWnfStateName((char *)a2 + 104);
  if ( (*((_BYTE *)a2 + 276) & 1) != 0 )
  {
    v5 = (_QWORD *)((char *)a2 + 40);
    v7 = *((_QWORD *)a2 + 6) & (-1LL << (*((_DWORD *)a1 + 7) & 0x1F));
    v6 = (_QWORD *)(*((_QWORD *)a1 + 4)
                  + 8LL
                  * ((37
                    * (BYTE6(v7)
                     + 37
                     * (BYTE5(v7)
                      + 37
                      * (BYTE4(v7)
                       + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                    + HIBYTE(v7)) & (unsigned int)((*((_DWORD *)a1 + 7) >> 5) - 1)));
    if ( (*((_QWORD *)a2 + 5) & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = (_QWORD *)(*((_QWORD *)a1 + 4)
                    + 8LL
                    * ((37
                      * (BYTE6(v7)
                       + 37
                       * (BYTE5(v7)
                        + 37
                        * (BYTE4(v7)
                         + 37
                         * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                      + HIBYTE(v7)) & (unsigned int)((*((_DWORD *)a1 + 7) >> 5) - 1)));
    while ( (*v6 & 1) == 0 )
    {
      if ( (_QWORD *)*v6 == v5 )
      {
        *v6 = *v5;
        --*((_DWORD *)a1 + 6);
        *v5 |= 0x8000000000000002uLL;
        break;
      }
      v6 = (_QWORD *)*v6;
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}

/*
 * XREFs of ?RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18003020C
 * Callers:
 *     ?RmpCpuSetManagerDestroyAllProcessRegistrations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18002FD58 (-RmpCpuSetManagerDestroyAllProcessRegistrations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FF10 (-RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0 (RmpCpuSetManagerRegisterProcessWithAllocation.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180032050 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180030DD4 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerDestroyProcessRegistration(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v2; // r10
  __int64 v4; // r8
  _QWORD *v5; // r11
  _QWORD *v6; // rdx
  __int64 v7; // [rsp+58h] [rbp+10h]

  v2 = a2;
  if ( *((_QWORD *)a2 + 5) )
  {
    RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 10);
    *((_QWORD *)v2 + 5) = 0LL;
  }
  if ( *((_QWORD *)v2 + 4) )
  {
    RmpUtilRemoveEntryListAndClear((_QWORD *)v2 + 8);
    --*(_DWORD *)(v4 + 60);
    RmpCpuSetManagerMarkProcessDirty(a1, (struct _RM_CPU_SET_PROCESS *)v4);
  }
  if ( (*((_BYTE *)v2 + 96) & 1) != 0 )
  {
    RmpUtilRemoveEntryListAndClear((_QWORD *)v2 + 6);
    v5 = (_QWORD *)((char *)v2 + 8);
    v7 = *((_QWORD *)v2 + 2) & (-1LL << (*((_DWORD *)a1 + 15) & 0x1F));
    v6 = (_QWORD *)(*((_QWORD *)a1 + 8)
                  + 8LL
                  * ((37
                    * (BYTE6(v7)
                     + 37
                     * (BYTE5(v7)
                      + 37
                      * (BYTE4(v7)
                       + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                    + HIBYTE(v7)) & (unsigned int)((*((_DWORD *)a1 + 15) >> 5) - 1)));
    if ( (*((_QWORD *)v2 + 1) & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = (_QWORD *)(*((_QWORD *)a1 + 8)
                    + 8LL
                    * ((37
                      * (BYTE6(v7)
                       + 37
                       * (BYTE5(v7)
                        + 37
                        * (BYTE4(v7)
                         + 37
                         * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                      + HIBYTE(v7)) & (unsigned int)((*((_DWORD *)a1 + 15) >> 5) - 1)));
    while ( (*v6 & 1) == 0 )
    {
      if ( (_QWORD *)*v6 == v5 )
      {
        *v6 = *v5;
        --*((_DWORD *)a1 + 14);
        *v5 |= 0x8000000000000002uLL;
        break;
      }
      v6 = (_QWORD *)*v6;
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}

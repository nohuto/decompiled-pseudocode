/*
 * XREFs of ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_RM_OBJECT_TYPE@@@Z @ 0x180016D2C
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_TYPE@@PEA_KKPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BE4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTI.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpObjectHeaderInitialize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x28uLL);
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 16) = 1;
  result = HIBYTE(a2);
  *(_QWORD *)(a1 + 8) = HIBYTE(a2)
                      + 37
                      * (BYTE6(a2)
                       + 37
                       * (BYTE5(a2)
                        + 37
                        * (BYTE4(a2)
                         + 37
                         * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL)))))));
  return result;
}

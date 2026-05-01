/*
 * XREFs of ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800304C4
 * Callers:
 *     ?RmpCpuSetManagerCreateAndInitializeProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FC30 (-RmpCpuSetManagerCreateAndInitializeProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU.c)
 * Callees:
 *     RmpGenerateObjectHandle @ 0x18001E6C4 (RmpGenerateObjectHandle.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

void __fastcall RmpCpuSetManagerInitializeProcessRegistration(struct _RM_CPU_SET_PROCESS_REGISTRATION *a1)
{
  memset_0(a1, 0, 0x68uLL);
  RmpGenerateObjectHandle(3, (signed __int64 *)a1);
  *((_QWORD *)a1 + 2) = *((unsigned __int8 *)a1 + 7)
                      + 37
                      * (*((unsigned __int8 *)a1 + 6)
                       + 37
                       * (*((unsigned __int8 *)a1 + 5)
                        + 37
                        * (*((unsigned __int8 *)a1 + 4)
                         + 37
                         * (*((unsigned __int8 *)a1 + 3)
                          + 37
                          * (*((unsigned __int8 *)a1 + 2)
                           + 37 * (*((unsigned __int8 *)a1 + 1) + 37 * (*(unsigned __int8 *)a1 + 11623883LL)))))));
}

/*
 * XREFs of ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002F830
 * Callers:
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002F300 (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 * Callees:
 *     ?RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z @ 0x18001341C (-RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpCpuSetManagerInitializeProcessRegistration(struct _RM_CPU_SET_PROCESS_REGISTRATION *a1)
{
  __int64 ObjectHandle; // rax

  memset_0(a1, 0, 0x70uLL);
  ObjectHandle = RmpGenerateObjectHandle(3);
  *((_QWORD *)a1 + 3) = ObjectHandle;
  *((_DWORD *)a1 + 8) = 3;
  *((_DWORD *)a1 + 4) = 1;
  *((_QWORD *)a1 + 1) = HIBYTE(ObjectHandle)
                      + 37
                      * (BYTE6(ObjectHandle)
                       + 37
                       * (BYTE5(ObjectHandle)
                        + 37
                        * (BYTE4(ObjectHandle)
                         + 37
                         * (BYTE3(ObjectHandle)
                          + 37
                          * (BYTE2(ObjectHandle)
                           + 37 * (BYTE1(ObjectHandle) + 37 * ((unsigned __int8)ObjectHandle + 11623883LL)))))));
}

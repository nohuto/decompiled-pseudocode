/*
 * XREFs of ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F774
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z @ 0x18001341C (-RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpCpuSetManagerInitializeAllocation(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  __int64 ObjectHandle; // rax

  memset_0(a2, 0, 0x108uLL);
  ObjectHandle = RmpGenerateObjectHandle(2);
  *((_QWORD *)a2 + 3) = ObjectHandle;
  *((_QWORD *)a2 + 5) = a1;
  *((_DWORD *)a2 + 8) = 2;
  *((_DWORD *)a2 + 4) = 1;
  *((_QWORD *)a2 + 1) = HIBYTE(ObjectHandle)
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
  *((_QWORD *)a2 + 10) = (char *)a2 + 72;
  *((_QWORD *)a2 + 9) = (char *)a2 + 72;
}

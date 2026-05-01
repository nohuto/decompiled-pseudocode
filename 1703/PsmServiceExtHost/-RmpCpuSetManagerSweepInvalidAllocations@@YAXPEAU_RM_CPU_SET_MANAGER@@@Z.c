/*
 * XREFs of ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800304DC
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F43C (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FC54 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 */

void __fastcall RmpCpuSetManagerSweepInvalidAllocations(struct _RM_CPU_SET_MANAGER *a1)
{
  __int64 v2; // rsi
  char v3; // r15
  __int64 v4; // r14
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _RM_OBJECT_HEADER *Next; // rbx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  RmpObjectTableEnumerationBegin(
    (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v10);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v10);
    if ( !Next )
      break;
    v2 = 0LL;
    v3 = 0;
    v4 = 20LL;
    do
    {
      v5 = (char *)Next + v2;
      v6 = *(_QWORD *)((_BYTE *)Next + v2 + 96) & ~*(_QWORD *)((char *)a1 + v2 + 88);
      if ( v6 )
      {
        v3 = 1;
        *((_QWORD *)v5 + 12) &= ~v6;
        *((_DWORD *)Next + 64) -= RtlNumberOfSetBitsUlongPtr(v6, v5, v7, v8);
      }
      v2 += 8LL;
      --v4;
    }
    while ( v4 );
    if ( v3 )
      RmpCpuSetManagerInvalidateAllocation(a1, Next);
    RmpObjectRelease(Next);
  }
  RtlReleaseSRWLockShared(v10[0] + 16LL);
}

/*
 * XREFs of CmpAddStringToMapping @ 0x14057F61C
 * Callers:
 *     CmpVEAddHiveToSIDMappingTable @ 0x140601A84 (CmpVEAddHiveToSIDMappingTable.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  PVOID v5; // rdi
  char *PoolWithTag; // rax
  char *v7; // r9
  __int64 v8; // rcx
  PVOID v9; // rax
  int v10; // edi
  char *v11; // r14
  __int64 v12; // rbp

  v4 = 0;
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmpSIDToHiveMappingCount == -1 )
  {
    v4 = -1073741675;
    goto LABEL_7;
  }
  if ( CmpSIDToHiveMappingCount + 1 < (unsigned int)CmpSIDToHiveMappingSize )
    goto LABEL_12;
  v5 = CmpSIDToHiveMapping;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          PagedPool,
                          32LL * (unsigned int)(CmpSIDToHiveMappingSize + 4),
                          0x65564D43u);
  CmpSIDToHiveMapping = PoolWithTag;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    CmpSIDToHiveMapping = v5;
    goto LABEL_8;
  }
  CmpSIDToHiveMappingSize += 4;
  if ( v5 )
  {
    memmove(PoolWithTag, v5, 32LL * (unsigned int)CmpSIDToHiveMappingCount);
    ExFreePoolWithTag(v5, 0x65564D43u);
LABEL_12:
    v7 = (char *)CmpSIDToHiveMapping;
  }
  v8 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
  *(_QWORD *)&v7[v8 + 24] = a2;
  *(_WORD *)&v7[v8] = *(_WORD *)a1;
  *(_WORD *)&v7[v8 + 2] = *(_WORD *)a1;
  v9 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1, 0x65564D43u);
  v10 = CmpSIDToHiveMappingCount;
  v11 = (char *)CmpSIDToHiveMapping;
  v12 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
  *(_QWORD *)((char *)CmpSIDToHiveMapping + v12 + 8) = v9;
  if ( !v9 )
  {
LABEL_8:
    v4 = -1073741670;
    goto LABEL_7;
  }
  memmove(v9, a1[1], *(unsigned __int16 *)a1);
  *(_DWORD *)&v11[v12 + 16] = CmpHashUnicodeComponent((__m128i *)a1);
  CmpSIDToHiveMappingCount = v10 + 1;
LABEL_7:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}

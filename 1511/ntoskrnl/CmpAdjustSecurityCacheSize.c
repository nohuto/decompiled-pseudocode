/*
 * XREFs of CmpAdjustSecurityCacheSize @ 0x1404C08A8
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403DDA84 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char __fastcall CmpAdjustSecurityCacheSize(__int64 a1)
{
  unsigned int v1; // eax
  PVOID PoolWithTag; // rax
  PVOID v4; // rdi

  v1 = *(_DWORD *)(a1 + 3040);
  if ( v1 >= *(_DWORD *)(a1 + 3044) )
    goto LABEL_4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v1, 0x63534D43u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 3056), 16LL * *(unsigned int *)(a1 + 3040));
    ExFreePoolWithTag(*(PVOID *)(a1 + 3056), 0x63534D43u);
    *(_DWORD *)(a1 + 3044) = *(_DWORD *)(a1 + 3040);
    *(_QWORD *)(a1 + 3056) = v4;
LABEL_4:
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}

/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800F3644
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800F3290 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800F36C8 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 */

PVOID __fastcall RtlpTraceDatabaseAllocate(ULONG_PTR a1)
{
  __int64 v1; // rbx
  PVOID v3; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  v1 = 0LL;
  v3 = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v3, 0LL, &v4, 0x3000u, 4u) >= 0 )
    return v3;
  return (PVOID)v1;
}

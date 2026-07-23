/*
 * XREFs of MiAddFileOnlyPfns @ 0x14065A3C0
 * Callers:
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiAddFileOnlyPfns(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 << 12;
  v6 = a1 << 12;
  v5 = a2 << 12;
  result = MiAddPhysicalMemory(MiSystemPartition, &v6, &v5, 2);
  if ( (int)result >= 0 && v5 != v2 )
  {
    MiRemovePhysicalMemory(a1, v5 >> 12, 18);
    return 3221225711LL;
  }
  return result;
}

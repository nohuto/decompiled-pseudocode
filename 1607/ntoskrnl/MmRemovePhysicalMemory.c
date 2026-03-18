/*
 * XREFs of MmRemovePhysicalMemory @ 0x140658508
 * Callers:
 *     <none>
 * Callees:
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x14011191C (MiFreeContiguousPages.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = (unsigned __int64)StartAddress->QuadPart >> 12;
  v7 = v3;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  if ( v3 >= v4 + v3 )
    return -1073741585;
  result = MiFindContiguousPages(
             (__int64)MiSystemPartition,
             v3,
             v4 + v3 - 1,
             0LL,
             v4,
             1u,
             0x80000000,
             0x80000000,
             202375168,
             (__int64 *)&v7);
  if ( result >= 0 )
  {
    v6 = MiRemovePhysicalMemory(v7, v4, 16);
    if ( v6 < 0 )
      MiFreeContiguousPages((__int64)MiSystemPartition, v7, v4);
    else
      NumberOfBytes->QuadPart = v4 << 12;
    return v6;
  }
  return result;
}

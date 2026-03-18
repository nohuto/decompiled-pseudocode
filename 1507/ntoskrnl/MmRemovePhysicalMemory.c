/*
 * XREFs of MmRemovePhysicalMemory @ 0x1406A228C
 * Callers:
 *     VerifierMmRemovePhysicalMemory @ 0x140742330 (VerifierMmRemovePhysicalMemory.c)
 * Callees:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 v3; // rdx
  LONGLONG v4; // rbx
  NTSTATUS result; // eax
  __int64 v6; // r9
  NTSTATUS v7; // edi
  ULONG_PTR v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = StartAddress->QuadPart >> 12;
  v8 = v3;
  v4 = NumberOfBytes->QuadPart >> 12;
  if ( v3 >= v4 + v3 )
    return -1073741585;
  result = MiFindContiguousPages(
             MiSystemPartition,
             v3,
             v4 + v3 - 1,
             0LL,
             v4,
             1u,
             0x80000000,
             0x80000000,
             0xC200000u,
             &v8);
  if ( result >= 0 )
  {
    v7 = MiRemovePhysicalMemory(v8, v4, 0LL, v6);
    if ( v7 < 0 )
      MiFreeContiguousPages((__int64)MiSystemPartition, v8, v4);
    else
      NumberOfBytes->QuadPart = v4 << 12;
    return v7;
  }
  return result;
}

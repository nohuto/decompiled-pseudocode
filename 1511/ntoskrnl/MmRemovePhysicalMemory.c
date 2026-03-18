/*
 * XREFs of MmRemovePhysicalMemory @ 0x1406230A8
 * Callers:
 *     VerifierMmRemovePhysicalMemory @ 0x1406C0AF0 (VerifierMmRemovePhysicalMemory.c)
 * Callees:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 v3; // rdx
  LONGLONG v4; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  ULONG_PTR v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = StartAddress->QuadPart >> 12;
  v7 = v3;
  v4 = NumberOfBytes->QuadPart >> 12;
  if ( v3 >= v4 + v3 )
    return -1073741585;
  result = MiFindContiguousPages(
             (unsigned __int64)MiSystemPartition,
             v3,
             v4 + v3 - 1,
             0LL,
             v4,
             1u,
             0x80000000,
             0x80000000,
             0xC200000u,
             &v7);
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

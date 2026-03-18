/*
 * XREFs of ExpAllocateUuids @ 0x140555964
 * Callers:
 *     NtAllocateUuids @ 0x140555758 (NtAllocateUuids.c)
 *     ExpUuidGetValues @ 0x1405C235C (ExpUuidGetValues.c)
 * Callees:
 *     ExpUuidLoadSequenceNumber @ 0x1405C1C3C (ExpUuidLoadSequenceNumber.c)
 *     ExpSetBorrowedTimeOnTimestamp @ 0x1406F86D4 (ExpSetBorrowedTimeOnTimestamp.c)
 */

__int64 __fastcall ExpAllocateUuids(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  LARGE_INTEGER v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF
  int SequenceNumber; // [rsp+58h] [rbp+20h] BYREF

  if ( !ExpUuidSequenceNumberValid )
  {
    SequenceNumber = ExpUuidLoadSequenceNumber();
    if ( SequenceNumber < 0 )
    {
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
      ExpUuidSequenceNumber ^= (unsigned int)&SequenceNumber ^ v11.LowPart ^ (unsigned int)a3 ^ v11.HighPart;
    }
    else
    {
      ++ExpUuidSequenceNumber;
    }
    ExpUuidSequenceNumberValid = 1;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated;
  if ( MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated < 0 )
  {
    ++ExpUuidSequenceNumber;
    ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014] - 20000LL;
    v7 = 20000LL;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  if ( v7 )
  {
    if ( ExpUuidTimeSequenceNumber )
      ExpUuidTimeSequenceNumber = 0;
    if ( v7 > 10000000 )
      v7 = 10000000LL;
    if ( v7 <= 10000 )
    {
      *a2 = v7;
      v8 = 0LL;
    }
    else
    {
      *a2 = 10000;
      v8 = v7 - 10000;
    }
    v9 = v6 - (unsigned int)*a2 - v8;
    *a1 = v9;
    ExpUuidLastTimeAllocated = v9 + (unsigned int)*a2;
    goto LABEL_12;
  }
  v12 = ExpUuidTimeSequenceNumber;
  if ( (unsigned int)ExpUuidTimeSequenceNumber < 0x1F )
  {
    *a2 = 10000;
    v13 = v6 - 10000;
    ExpUuidTimeSequenceNumber = v12 + 1;
    *a1 = v13;
    ExpSetBorrowedTimeOnTimestamp(v13, (char *)a1 + 4);
LABEL_12:
    *a3 = ExpUuidSequenceNumber;
    return 0LL;
  }
  return 3221226029LL;
}

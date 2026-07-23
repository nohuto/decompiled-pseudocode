/*
 * XREFs of ExpAllocateUuids @ 0x1404C8288
 * Callers:
 *     NtAllocateUuids @ 0x1404C80B0 (NtAllocateUuids.c)
 *     ExpUuidGetValues @ 0x140580F6C (ExpUuidGetValues.c)
 * Callees:
 *     ExpUuidLoadSequenceNumber @ 0x14057FFB8 (ExpUuidLoadSequenceNumber.c)
 */

__int64 __fastcall ExpAllocateUuids(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  LARGE_INTEGER v12; // rax
  char v13; // al
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF
  int SequenceNumber; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !ExpUuidSequenceNumberValid )
  {
    SequenceNumber = ExpUuidLoadSequenceNumber();
    if ( SequenceNumber < 0 )
    {
      v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      ExpUuidSequenceNumber ^= (unsigned int)&SequenceNumber ^ v12.LowPart ^ (unsigned int)a3 ^ v12.HighPart;
    }
    else
    {
      ++ExpUuidSequenceNumber;
    }
    ExpUuidSequenceNumberValid = 1;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated;
  if ( MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated < 0 )
  {
    ++ExpUuidSequenceNumber;
    ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014] - 20000LL;
    v8 = 20000LL;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  if ( v8 )
  {
    if ( ExpUuidTimeSequenceNumber )
      ExpUuidTimeSequenceNumber = 0;
    if ( v8 > 10000000 )
      v8 = 10000000LL;
    if ( v8 <= 10000 )
    {
      *a2 = v8;
      v9 = 0LL;
    }
    else
    {
      *a2 = 10000;
      v9 = v8 - 10000;
    }
    v10 = v7 - (unsigned int)*a2 - v9;
    *(_QWORD *)a1 = v10;
    ExpUuidLastTimeAllocated = v10 + (unsigned int)*a2;
LABEL_12:
    *a3 = ExpUuidSequenceNumber;
    return 0LL;
  }
  if ( (unsigned int)ExpUuidTimeSequenceNumber < 0x1F )
  {
    v13 = ++ExpUuidTimeSequenceNumber;
    *a2 = 10000;
    *(_QWORD *)a1 = v7 - 10000;
    if ( (v13 & 1) != 0 )
      v3 = 0x8000000;
    if ( (v13 & 2) != 0 )
      v3 |= 0x4000000u;
    if ( (v13 & 4) != 0 )
      v3 |= 0x2000000u;
    if ( (v13 & 8) != 0 )
      v3 |= 0x1000000u;
    if ( (v13 & 0x10) != 0 )
      v3 |= 0x800000u;
    *(_DWORD *)(a1 + 4) |= v3;
    goto LABEL_12;
  }
  return 3221226029LL;
}

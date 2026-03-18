/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x14011E720
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x14011E6B8 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char v6; // bp
  __int64 v7; // r8
  unsigned int v8; // r14d

  if ( (a2 & 2) != 0 )
  {
    v6 = 4;
    v7 = 0xFFFFFFFFLL;
  }
  else
  {
    v6 = 8;
    v7 = 0LL;
  }
  v8 = MiChargeResident((__int16 *)a1, 1uLL, v7, a4);
  if ( v8 )
  {
    if ( (a2 & 1) == 0 )
    {
      if ( (__int16 *)a1 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14034FB28, 1uLL);
      return v8;
    }
    if ( (__int16 *)a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034FB38, 1uLL);
    if ( (unsigned int)MiChargeCommit(a1, 1uLL, v6) )
      return v8;
    if ( (__int16 *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_14034FB40, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), 1uLL);
    }
  }
  return 0LL;
}

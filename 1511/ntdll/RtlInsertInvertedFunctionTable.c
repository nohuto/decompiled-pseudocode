/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x18000F9C4
 * Callers:
 *     LdrpProcessMappedModule @ 0x1800102F0 (LdrpProcessMappedModule.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(a1, a2, 3LL, &v10);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  if ( LdrpInvertedFunctionTable[0] == dword_180155324 )
  {
    byte_18015532C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_180155328);
    v5 = 1;
    if ( LdrpInvertedFunctionTable[0] != 1 )
    {
      if ( LdrpInvertedFunctionTable[0] > 1u )
      {
        v6 = (unsigned __int64 *)&unk_180155350;
        do
        {
          if ( a1 < *v6 )
            break;
          ++v5;
          v6 += 3;
        }
        while ( v5 < LdrpInvertedFunctionTable[0] );
      }
      if ( v5 != LdrpInvertedFunctionTable[0] )
        memmove(
          &LdrpInvertedFunctionTable[4 * v5 + 10 + 2 * v5],
          &LdrpInvertedFunctionTable[4 * v5 + 4 + 2 * v5],
          24LL * (LdrpInvertedFunctionTable[0] - v5));
    }
    v7 = 3LL * v5;
    v8 = v10;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v7 + 4] = v4;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v7 + 6] = a1;
    LdrpInvertedFunctionTable[2 * v7 + 8] = v2;
    LdrpInvertedFunctionTable[2 * v7 + 9] = v8;
    ++LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180155328);
  }
  LdrProtectMrdata(1LL);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x18002F770
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002F938 (LdrpProcessMappedModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800D25A4 (LdrpInitializeExceptionTable.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

signed __int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rbp
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(a1, a2, 3LL, &v13);
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, v5, v6, v7);
  LdrProtectMrdata(0);
  if ( LdrpInvertedFunctionTable[0] == dword_180163424 )
  {
    byte_18016342C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_180163428);
    v8 = 1;
    if ( LdrpInvertedFunctionTable[0] != 1 )
    {
      if ( LdrpInvertedFunctionTable[0] > 1u )
      {
        v9 = (unsigned __int64 *)&unk_180163450;
        do
        {
          if ( a1 < *v9 )
            break;
          ++v8;
          v9 += 3;
        }
        while ( v8 < LdrpInvertedFunctionTable[0] );
      }
      if ( v8 != LdrpInvertedFunctionTable[0] )
        memmove(
          &LdrpInvertedFunctionTable[4 * v8 + 10 + 2 * v8],
          &LdrpInvertedFunctionTable[4 * v8 + 4 + 2 * v8],
          24LL * (LdrpInvertedFunctionTable[0] - v8));
    }
    v10 = 3LL * v8;
    v11 = v13;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v10 + 4] = v4;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v10 + 6] = a1;
    LdrpInvertedFunctionTable[2 * v10 + 8] = v2;
    LdrpInvertedFunctionTable[2 * v10 + 9] = v11;
    ++LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180163428);
  }
  LdrProtectMrdata(1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

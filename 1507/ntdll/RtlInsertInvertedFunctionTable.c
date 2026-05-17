/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x1800413CC
 * Callers:
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

signed __int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  __int64 v4; // rbp
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rdx
  unsigned int v14; // ebx
  unsigned __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = RtlImageDirectoryEntryToData(a1, 1, 3u, &v19);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock, v5, v6, v7);
  LdrProtectMrdata(0, v8, v9, v10);
  v13 = (char *)(unsigned int)LdrpInvertedFunctionTable[0];
  if ( LdrpInvertedFunctionTable[0] == dword_180157324 )
  {
    byte_18015732C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_180157328);
    v14 = 1;
    if ( LdrpInvertedFunctionTable[0] != 1 )
    {
      if ( LdrpInvertedFunctionTable[0] > 1u )
      {
        v15 = (unsigned __int64 *)&unk_180157350;
        do
        {
          if ( a1 < *v15 )
            break;
          ++v14;
          v15 += 3;
        }
        while ( v14 < LdrpInvertedFunctionTable[0] );
      }
      if ( v14 != LdrpInvertedFunctionTable[0] )
        memmove(
          &LdrpInvertedFunctionTable[4 * v14 + 10 + 2 * v14],
          &LdrpInvertedFunctionTable[4 * v14 + 4 + 2 * v14],
          24LL * (LdrpInvertedFunctionTable[0] - v14));
    }
    v16 = 3LL * v14;
    v17 = v19;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v16 + 4] = v4;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v16 + 6] = a1;
    LdrpInvertedFunctionTable[2 * v16 + 8] = a2;
    LdrpInvertedFunctionTable[2 * v16 + 9] = v17;
    ++LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180157328);
  }
  LdrProtectMrdata(1, v13, v11, v12);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

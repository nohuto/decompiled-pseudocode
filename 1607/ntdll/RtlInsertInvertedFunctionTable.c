/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x18002F760
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800D2664 (LdrpInitializeExceptionTable.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  PVOID v4; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  ULONG v8; // eax
  ULONG Size; // [rsp+50h] [rbp+18h] BYREF

  v4 = RtlImageDirectoryEntryToData(a1, 1u, 3u, &Size);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0);
  if ( LdrpInvertedFunctionTable[0] == dword_180163424 )
  {
    byte_18016342C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_180163428);
    v5 = 1;
    if ( LdrpInvertedFunctionTable[0] != 1 )
    {
      if ( LdrpInvertedFunctionTable[0] > 1u )
      {
        v6 = &unk_180163450;
        do
        {
          if ( (unsigned __int64)a1 < *v6 )
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
    v8 = Size;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v7 + 4] = v4;
    *(_QWORD *)&LdrpInvertedFunctionTable[2 * v7 + 6] = a1;
    LdrpInvertedFunctionTable[2 * v7 + 8] = a2;
    LdrpInvertedFunctionTable[2 * v7 + 9] = v8;
    ++LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180163428);
  }
  LdrProtectMrdata(1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

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

void __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  PVOID v4; // rbp
  unsigned int v5; // ebx
  ULONG_PTR *p_CfgBitMapSize; // rax
  __int64 v7; // rcx
  ULONG v8; // eax
  ULONG Size; // [rsp+50h] [rbp+18h] BYREF

  v4 = RtlImageDirectoryEntryToData(a1, 1u, 3u, &Size);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  if ( LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) == HIDWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) )
  {
    LOBYTE(LdrSystemDllInitBlock.Flags) = 1;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&LdrSystemDllInitBlock.RngData);
    v5 = 1;
    if ( LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) != 1 )
    {
      if ( LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) > 1 )
      {
        p_CfgBitMapSize = &LdrSystemDllInitBlock.CfgBitMapSize;
        do
        {
          if ( (unsigned __int64)a1 < *p_CfgBitMapSize )
            break;
          ++v5;
          p_CfgBitMapSize += 3;
        }
        while ( v5 < LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) );
      }
      if ( v5 != LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) )
        memmove(
          &LdrSystemDllInitBlock.CfgBitMap + 2 * v5 + v5,
          (char *)&LdrSystemDllInitBlock.MitigationOptionsMap + 16 * v5 + 8 * v5,
          24LL * (LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) - v5));
    }
    v7 = 3LL * v5;
    v8 = Size;
    LdrSystemDllInitBlock.MitigationOptionsMap.Map[v7] = (ULONG_PTR)v4;
    LdrSystemDllInitBlock.MitigationOptionsMap.Map[v7 + 1] = (ULONG_PTR)a1;
    LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[v7 + 2]) = a2;
    HIDWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[v7 + 2]) = v8;
    ++LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]);
    _InterlockedIncrement((volatile signed __int32 *)&LdrSystemDllInitBlock.RngData);
  }
  LdrProtectMrdata(1LL);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

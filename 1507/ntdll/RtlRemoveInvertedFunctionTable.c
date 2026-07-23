/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x18006CB9C
 * Callers:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // edi
  bool v4; // zf
  ULONG_PTR *p_CfgBitMapSize; // rax

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  v2 = LdrSystemDllInitBlock.Wow64SharedInformation[15];
  v3 = 1;
  v4 = LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) == 1;
  if ( LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) > 1 )
  {
    p_CfgBitMapSize = &LdrSystemDllInitBlock.CfgBitMapSize;
    do
    {
      if ( a1 == *p_CfgBitMapSize )
        break;
      ++v3;
      p_CfgBitMapSize += 3;
    }
    while ( v3 < LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) );
    v4 = v3 == LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]);
  }
  if ( !v4 )
  {
    LdrProtectMrdata(0);
    _InterlockedIncrement((volatile signed __int32 *)&LdrSystemDllInitBlock.RngData);
    if ( v2 != 2 )
      memmove(
        (char *)&LdrSystemDllInitBlock.MitigationOptionsMap + 16 * v3 + 8 * v3,
        &LdrSystemDllInitBlock.CfgBitMap + 2 * v3 + v3,
        24LL * (v2 - v3 - 1));
    --LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]);
    _InterlockedIncrement((volatile signed __int32 *)&LdrSystemDllInitBlock.RngData);
    LdrProtectMrdata(1);
  }
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

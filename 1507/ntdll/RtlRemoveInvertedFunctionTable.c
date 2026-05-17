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

signed __int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  unsigned int v9; // edi
  bool v10; // zf
  _QWORD *v11; // rax
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock, a2, a3, a4);
  v8 = LdrpInvertedFunctionTable[0];
  v9 = 1;
  v10 = LdrpInvertedFunctionTable[0] == 1;
  if ( LdrpInvertedFunctionTable[0] > 1u )
  {
    v11 = &unk_180157350;
    do
    {
      if ( a1 == *v11 )
        break;
      ++v9;
      v11 += 3;
    }
    while ( v9 < LdrpInvertedFunctionTable[0] );
    v10 = v9 == LdrpInvertedFunctionTable[0];
  }
  if ( !v10 )
  {
    LdrProtectMrdata(0, v5, v6, v7);
    _InterlockedIncrement(&dword_180157328);
    if ( v8 != 2 )
      memmove(
        &LdrpInvertedFunctionTable[4 * v9 + 4 + 2 * v9],
        &LdrpInvertedFunctionTable[4 * v9 + 10 + 2 * v9],
        24LL * (v8 - v9 - 1));
    --LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180157328);
    LdrProtectMrdata(1, v12, v13, v14);
  }
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}

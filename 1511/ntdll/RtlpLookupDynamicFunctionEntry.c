/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x180071CC4
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1800361F0 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpSearchFunctionTable @ 0x180071DB0 (RtlpSearchFunctionTable.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax
  unsigned int *v7; // rbx
  int v8; // edi
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(unsigned __int64, __int64); // rdi
  __int64 v11; // rbx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rsi

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock, a2, a3, a4);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_13;
    if ( a1 >= *(_QWORD *)(i + 32) && a1 < *(_QWORD *)(i + 40) )
      break;
  }
  v7 = *(unsigned int **)(i + 16);
  v8 = 0;
  v9 = *(_QWORD *)(i + 48);
  if ( *(_DWORD *)(i + 80) == 3 || !*(_DWORD *)(i + 80) )
  {
    v7 = (unsigned int *)RtlpSearchFunctionTable(
                           *(_QWORD *)(i + 16),
                           *(unsigned int *)(i + 84),
                           a1,
                           *(_QWORD *)(i + 48));
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( !v7 )
      return (__int64)v7;
LABEL_11:
    *(_QWORD *)a2 = v9;
    return (__int64)v7;
  }
  if ( *(_DWORD *)(i + 80) != 1 )
  {
    v10 = *(__int64 (__fastcall **)(unsigned __int64, __int64))(i + 56);
    v11 = *(_QWORD *)(i + 64);
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    *(_QWORD *)a2 = v9;
    return v10(a1, v11);
  }
  v13 = *(_DWORD *)(i + 84);
  v14 = a1 - v9;
  if ( v13 )
  {
    while ( v14 < *v7 || v14 >= v7[1] )
    {
      v7 += 3;
      if ( ++v8 >= v13 )
        goto LABEL_13;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    goto LABEL_11;
  }
LABEL_13:
  RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
  return 0LL;
}

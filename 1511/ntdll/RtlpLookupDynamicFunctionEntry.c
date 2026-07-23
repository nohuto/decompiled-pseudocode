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

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, _QWORD *a2)
{
  __int64 i; // rax
  unsigned int *v5; // rbx
  int v6; // edi
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(unsigned __int64, __int64); // rdi
  __int64 v9; // rbx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rsi

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_13;
    if ( a1 >= *(_QWORD *)(i + 32) && a1 < *(_QWORD *)(i + 40) )
      break;
  }
  v5 = *(unsigned int **)(i + 16);
  v6 = 0;
  v7 = *(_QWORD *)(i + 48);
  if ( *(_DWORD *)(i + 80) == 3 || !*(_DWORD *)(i + 80) )
  {
    v5 = (unsigned int *)RtlpSearchFunctionTable(
                           *(_QWORD *)(i + 16),
                           *(unsigned int *)(i + 84),
                           a1,
                           *(_QWORD *)(i + 48));
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( !v5 )
      return (__int64)v5;
LABEL_11:
    *a2 = v7;
    return (__int64)v5;
  }
  if ( *(_DWORD *)(i + 80) != 1 )
  {
    v8 = *(__int64 (__fastcall **)(unsigned __int64, __int64))(i + 56);
    v9 = *(_QWORD *)(i + 64);
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    *a2 = v7;
    return v8(a1, v9);
  }
  v11 = *(_DWORD *)(i + 84);
  v12 = a1 - v7;
  if ( v11 )
  {
    while ( v12 < *v5 || v12 >= v5[1] )
    {
      v5 += 3;
      if ( ++v6 >= v11 )
        goto LABEL_13;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    goto LABEL_11;
  }
LABEL_13:
  RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
  return 0LL;
}

/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x14002533C
 * Callers:
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1407D9C04 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x14002551C (MmLockLoadedModuleListExclusive.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  bool v4; // zf
  _QWORD *v5; // rdx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  MmLockLoadedModuleListExclusive(&v7);
  v3 = 1;
  v4 = PsInvertedFunctionTable[0] == 1;
  if ( PsInvertedFunctionTable[0] > 1u )
  {
    v5 = &unk_14031EF90;
    do
    {
      if ( a1 == *v5 )
        break;
      ++v3;
      v5 += 3;
    }
    while ( v3 < PsInvertedFunctionTable[0] );
    v4 = v3 == PsInvertedFunctionTable[0];
  }
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_14031EF68);
    if ( PsInvertedFunctionTable[0] != 2 )
      memmove(
        &PsInvertedFunctionTable[4 * v3 + 4 + 2 * v3],
        &PsInvertedFunctionTable[4 * v3 + 10 + 2 * v3],
        24LL * (PsInvertedFunctionTable[0] - v3 - 1));
    --PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_14031EF68);
  }
  LOBYTE(v2) = v7;
  return MmUnlockLoadedModuleListExclusive(v2);
}

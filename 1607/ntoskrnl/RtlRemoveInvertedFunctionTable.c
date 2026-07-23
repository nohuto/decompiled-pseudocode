/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x14012EA74
 * Callers:
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1407B162C (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x140082E18 (MmLockLoadedModuleListExclusive.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  unsigned int v2; // r9d
  bool v3; // zf
  _QWORD *v4; // rdx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  MmLockLoadedModuleListExclusive(&v5);
  v2 = 1;
  v3 = PsInvertedFunctionTable[0] == 1;
  if ( PsInvertedFunctionTable[0] > 1u )
  {
    v4 = &unk_1402F6FD0;
    do
    {
      if ( a1 == *v4 )
        break;
      ++v2;
      v4 += 3;
    }
    while ( v2 < PsInvertedFunctionTable[0] );
    v3 = v2 == PsInvertedFunctionTable[0];
  }
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1402F6FA8);
    if ( PsInvertedFunctionTable[0] != 2 )
      memmove(
        &PsInvertedFunctionTable[4 * v2 + 4 + 2 * v2],
        &PsInvertedFunctionTable[4 * v2 + 10 + 2 * v2],
        24LL * (PsInvertedFunctionTable[0] - v2 - 1));
    --PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_1402F6FA8);
  }
  MmUnlockLoadedModuleListExclusive(v5);
}

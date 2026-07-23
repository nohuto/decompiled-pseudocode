/*
 * XREFs of ResCIncrementCMFMissCount @ 0x18008A3E4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

__int64 ResCIncrementCMFMissCount()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( !ResRuntimeView )
    return 0LL;
  v0 = *((_QWORD *)ResRuntimeView + 2);
  if ( !v0 )
    return 0LL;
  v1 = *(_QWORD *)(v0 + 24);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(v0 + 64);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 24);
  if ( !v3 )
    return 0LL;
  if ( (*(_DWORD *)(v1 + 48) & 0x40000) != 0 )
    ++*(_QWORD *)(v3 + 32);
  return 1LL;
}

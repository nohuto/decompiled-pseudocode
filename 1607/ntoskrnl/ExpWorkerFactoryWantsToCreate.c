/*
 * XREFs of ExpWorkerFactoryWantsToCreate @ 0x1400AAC18
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpWorkerFactoryWantsToCreate(__int64 a1, int a2)
{
  BOOL v2; // r8d
  __int64 v3; // rdx

  if ( *(_DWORD *)(a1 + 144) )
    return 0;
  v2 = a2 == 1;
  if ( *(_DWORD *)(a1 + 128) >= (unsigned int)(v2 + *(_DWORD *)(a1 + 124)) )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v3 + 28) > (unsigned int)v2 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4LL) )
    return 1;
  return *(_DWORD *)(v3 + 24) != 0;
}

/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1800D1E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x1800663A0 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x1800D1F70 (RtlResetMemoryZone.c)
 */

__int64 __fastcall RtlResetMemoryBlockLookaside(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int i; // ebx
  unsigned int v6; // ebx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2, a3, a4);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)(32LL * i + a1 + 48));
  v6 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}

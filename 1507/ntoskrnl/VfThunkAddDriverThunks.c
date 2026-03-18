/*
 * XREFs of VfThunkAddDriverThunks @ 0x140744960
 * Callers:
 *     MmAddVerifierThunks @ 0x1406A2440 (MmAddVerifierThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     ViThunkCreateThunkTable @ 0x140745050 (ViThunkCreateThunkTable.c)
 */

__int64 __fastcall VfThunkAddDriverThunks(void *a1)
{
  __int64 *ThunkTable; // rbx
  __int64 **v3; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  ThunkTable = (__int64 *)ViThunkCreateThunkTable(a1);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock();
  VfThunksExtended = 1;
  _InterlockedOr(v4, 0);
  v3 = (__int64 **)qword_14032BB08;
  ++ViActiveVerifierThunks;
  *ThunkTable = (__int64)&ViVerifierDriverAddedThunkListHead;
  ThunkTable[1] = (__int64)v3;
  if ( *v3 != &ViVerifierDriverAddedThunkListHead )
    __fastfail(3u);
  *v3 = ThunkTable;
  qword_14032BB08 = (__int64)ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}

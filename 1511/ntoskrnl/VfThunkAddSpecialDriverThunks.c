/*
 * XREFs of VfThunkAddSpecialDriverThunks @ 0x1406C3140
 * Callers:
 *     MmAddVerifierSpecialThunks @ 0x140623168 (MmAddVerifierSpecialThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     ViThunkCreateThunkTable @ 0x1406C37B0 (ViThunkCreateThunkTable.c)
 *     ViThunkFindNextSpecialTable @ 0x1406C38DC (ViThunkFindNextSpecialTable.c)
 *     ViThunkRecoverPristines @ 0x1406C392C (ViThunkRecoverPristines.c)
 */

__int64 __fastcall VfThunkAddSpecialDriverThunks(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _QWORD *ThunkTable; // rbx
  _QWORD *NextSpecialTable; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rax
  PVOID **v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a2);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock();
  if ( (*(_DWORD *)(a4 + 104) & 0x2000000) != 0 )
    ViThunkRecoverPristines(ThunkTable);
  NextSpecialTable = (_QWORD *)ViThunkFindNextSpecialTable(&v15, 1LL);
  if ( !NextSpecialTable )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74566D4Du);
    NextSpecialTable = PoolWithTag;
    if ( !PoolWithTag )
    {
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
      return 3221225626LL;
    }
    PoolWithTag[2] = a1;
    v10 = PoolWithTag + 3;
    v10[1] = v10;
    *v10 = v10;
    v11 = (PVOID **)ViVerifierDriverAddedSpecialThunkListHead;
    *NextSpecialTable = ViVerifierDriverAddedSpecialThunkListHead;
    NextSpecialTable[1] = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( v11[1] != &ViVerifierDriverAddedSpecialThunkListHead )
      __fastfail(3u);
    ++ViVerifierSpecialThunkTables;
    v11[1] = (PVOID *)NextSpecialTable;
    ViVerifierDriverAddedSpecialThunkListHead = NextSpecialTable;
  }
  VfThunksExtended = 1;
  _InterlockedOr(v14, 0);
  v12 = (_QWORD *)NextSpecialTable[4];
  v13 = NextSpecialTable + 3;
  ++ViActiveVerifierThunks;
  *ThunkTable = v13;
  ThunkTable[1] = v12;
  if ( (_QWORD *)*v12 != v13 )
    __fastfail(3u);
  *v12 = ThunkTable;
  v13[1] = ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}

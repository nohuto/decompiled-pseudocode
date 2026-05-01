/*
 * XREFs of RmpObjectTableFindObjectByHandle @ 0x180017FB4
 * Callers:
 *     RmpActivityHostFindByHostId @ 0x180018014 (RmpActivityHostFindByHostId.c)
 *     RmpResourceSetTableFindById @ 0x18002E6E0 (RmpResourceSetTableFindById.c)
 * Callees:
 *     RmpObjectTableFindObjectByHandleWithLock @ 0x180016640 (RmpObjectTableFindObjectByHandleWithLock.c)
 */

__int64 __fastcall RmpObjectTableFindObjectByHandle(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  RtlAcquireSRWLockShared(a1 + 16);
  LODWORD(a3) = RmpObjectTableFindObjectByHandleWithLock(a1, a2, a3);
  RtlReleaseSRWLockShared(a1 + 16, v6, v7, v8);
  return (unsigned int)a3;
}

/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800828D8
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031810 (LdrpInsertModuleToIndexLockHeld.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  LdrpInsertModuleToIndexLockHeld(a1, (__int64)a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}

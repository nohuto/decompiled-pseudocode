/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800731A4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x180016F10 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2, a3, a4);
  LdrpInsertModuleToIndexLockHeld(a1, (__int64)a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}

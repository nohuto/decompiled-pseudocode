/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1404B7C04
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1400A6FC4 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x1400A7004 (ExpLockHandleTableExclusive.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v3; // rbx

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v3 = *(volatile signed __int32 **)(a1 + 96);
  if ( v3 )
    _InterlockedIncrement(v3);
  ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  return v3;
}

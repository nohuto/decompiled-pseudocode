/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1404C6520
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x14009642C (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x14009646C (ExpLockHandleTableExclusive.c)
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

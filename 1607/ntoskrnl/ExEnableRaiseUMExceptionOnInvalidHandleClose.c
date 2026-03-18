/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404D4250
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x1400A8A84 (ExpLockHandleTableExclusive.c)
 */

__int64 __fastcall ExEnableRaiseUMExceptionOnInvalidHandleClose(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= ~0x10u;
  }
  return ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
}

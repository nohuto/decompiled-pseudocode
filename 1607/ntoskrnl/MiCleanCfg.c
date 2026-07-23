/*
 * XREFs of MiCleanCfg @ 0x1400755A8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rsi
  __int64 *v2; // rbx
  char *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  v2 = (__int64 *)(qword_140327FD0 + 276840680);
  do
  {
    v3 = (char *)*v2;
    if ( *v2 )
    {
      MiLockVad((__int64)CurrentThread, *v2);
      MiUnlockAndDereferenceVad(v3);
      *v2 = 0LL;
    }
    v2 += 3;
    --v1;
  }
  while ( v1 );
}

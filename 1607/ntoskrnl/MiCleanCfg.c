/*
 * XREFs of MiCleanCfg @ 0x140075528
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x14002BFB0 (MiLockVad.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rsi
  __int64 *v2; // rbx
  char *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  v2 = (__int64 *)(qword_140327F90 + 276840680);
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

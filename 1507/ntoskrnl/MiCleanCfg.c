/*
 * XREFs of MiCleanCfg @ 0x14012851C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 */

void __fastcall MiCleanCfg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rsi
  char *v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)0xFFFFF58010804278LL;
  v6 = 2LL;
  do
  {
    v7 = (char *)*v5;
    if ( *v5 )
    {
      MiLockVad((__int64)CurrentThread, *v5, a3, a4);
      MiUnlockAndDereferenceVad(v7);
      *v5 = 0LL;
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
}

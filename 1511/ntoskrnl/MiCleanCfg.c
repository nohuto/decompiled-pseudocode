/*
 * XREFs of MiCleanCfg @ 0x14001F518
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 */

__int64 MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  void *v3; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (_QWORD *)0xFFFFF580108042D0LL;
  v2 = 2LL;
  do
  {
    v3 = (void *)*v1;
    if ( *v1 )
    {
      MiLockVad(CurrentThread, *v1);
      result = MiUnlockAndDereferenceVad(v3);
      *v1 = 0LL;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  return result;
}

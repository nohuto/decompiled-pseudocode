/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400EFEFC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAlertThread @ 0x140030D64 (KeAlertThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v6; // r14
  char v7; // bp
  KIRQL v8; // al
  KIRQL v9; // r8
  void **FirstArgument; // rdx
  void *v11; // rax
  void *v12; // rax
  int v13; // eax

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v9 = v8;
  FirstArgument = (void **)CurrentThread[1].FirstArgument;
  *v6 = 0;
  if ( &CurrentThread[1].FirstArgument == FirstArgument )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16], v8);
    *(_DWORD *)(a1 + 132) = 0;
  }
  else
  {
    do
    {
      if ( *((char *)FirstArgument + 35) < *((char *)FirstArgument + 34) + 2 )
      {
        v11 = *(void **)(a1 + 96);
        if ( !v11 || FirstArgument[5] == v11 )
        {
          v12 = *(void **)(a1 + 88);
          if ( !v12 || FirstArgument[20] == v12 )
          {
            v13 = *((_DWORD *)FirstArgument - 4);
            if ( (v13 & 0x400) == 0 && ((v13 & 0x84) != 0 || (*((_BYTE *)FirstArgument + 39) & 2) != 0) )
            {
              *((_BYTE *)FirstArgument + 36) = 1;
              v7 = 1;
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
      }
      FirstArgument = (void **)*FirstArgument;
    }
    while ( &CurrentThread[1].FirstArgument != FirstArgument );
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16], v9);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}

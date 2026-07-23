/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400AB68C
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThread @ 0x1400C7B94 (KeAlertThread.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
  void *v13; // rax
  int v14; // eax

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
          v13 = *(void **)(a1 + 88);
          if ( !v13 || FirstArgument[20] == v13 )
          {
            v14 = *((_DWORD *)FirstArgument - 4);
            if ( (v14 & 0x400) == 0 && ((v14 & 0x84) != 0 || (*((_BYTE *)FirstArgument + 39) & 2) != 0) )
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
      KeAlertThread(CurrentThread, 0LL);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}

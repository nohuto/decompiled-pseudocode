/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14012C7C4
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThread @ 0x14000C1F0 (KeAlertThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v6; // r14
  char v7; // r15
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  void **FirstArgument; // rdx
  void *v11; // rax
  void *v12; // rax
  int v13; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[16]);
  }
  else if ( _interlockedbittestandset64(v8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16]);
  }
  FirstArgument = (void **)CurrentThread[1].FirstArgument;
  *v6 = 0;
  if ( &CurrentThread[1].FirstArgument == FirstArgument )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[16], retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    __writecr8(CurrentIrql);
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[16], retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    __writecr8(CurrentIrql);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}

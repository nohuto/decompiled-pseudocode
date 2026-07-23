/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1400953BC
 * Callers:
 *     PspAddProcessToJobChain @ 0x140469188 (PspAddProcessToJobChain.c)
 *     PspSetProcessBackgroundCountCallback @ 0x1404A5C18 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140071D04 (KeAbProcessBaseIoPriorityChange.c)
 *     PspLockProcessThreadListShared @ 0x1400954DC (PspLockProcessThreadListShared.c)
 */

__int64 __fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 *i; // rdi
  unsigned int v7; // edx
  int v8; // r8d

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 772), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 772), 0x14u);
  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared(a1, CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = *(__int64 **)(a1 + 1160); i != (__int64 *)(a1 + 1160); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i - 896) | *((_BYTE *)i - 266)) != 63 )
    {
      if ( a2 )
      {
        v7 = (*((_DWORD *)i + 10) >> 9) & 7;
        v8 = 0;
      }
      else
      {
        v7 = 0;
        v8 = (*((_DWORD *)i + 10) >> 9) & 7;
      }
      if ( v7 != v8 )
        KeAbProcessBaseIoPriorityChange((__int64)(i - 211), v7, v8);
    }
  }
  __writecr8(CurrentIrql);
  return PspUnlockProcessThreadListShared(a1, CurrentThread);
}

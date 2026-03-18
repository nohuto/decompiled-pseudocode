/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1400EAFBC
 * Callers:
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 *     PspSetProcessBackgroundCountCallback @ 0x1404B47B4 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     PspLockProcessThreadListShared @ 0x1400143A8 (PspLockProcessThreadListShared.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x1400FB898 (KeAbProcessBaseIoPriorityChange.c)
 */

__int64 __fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 *i; // rdi
  int v7; // edx
  int v8; // r8d

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 772), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 772), 0x14u);
  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = *(__int64 **)(a1 + 1160); i != (__int64 *)(a1 + 1160); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i - 888) | *((_BYTE *)i - 262)) != 63 )
    {
      if ( a2 )
      {
        v7 = (*((_DWORD *)i + 11) >> 9) & 7;
        v8 = 0;
      }
      else
      {
        v7 = 0;
        v8 = (*((_DWORD *)i + 11) >> 9) & 7;
      }
      if ( v7 != v8 )
        KeAbProcessBaseIoPriorityChange(i - 210);
    }
  }
  __writecr8(CurrentIrql);
  return PspUnlockProcessThreadListShared(a1, (__int64)CurrentThread);
}

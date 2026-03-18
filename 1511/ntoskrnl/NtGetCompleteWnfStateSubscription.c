/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1403E3EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1403E3FEC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 */

__int64 __fastcall NtGetCompleteWnfStateSubscription(
        ULONG64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        volatile void *Address,
        SIZE_T Length)
{
  __int64 *v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = (__int64 *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  Flink = KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Flink;
  if ( Flink )
  {
    if ( !a1 || !a2 )
      goto LABEL_11;
    if ( a3 && (!a4 || a4 == -1073741267) )
    {
      if ( a1 >= MmUserProbeAddress )
        v7 = (__int64 *)MmUserProbeAddress;
      v12 = *v7;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      v9 = ExpWnfCompleteThreadSubscriptions((_DWORD)Flink, (unsigned int)&v12, *a2, a3, a4);
      if ( v9 >= 0 )
      {
LABEL_11:
        if ( (_DWORD)Length )
        {
          if ( (unsigned int)Length < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(Address, (unsigned int)Length, 8u);
            v9 = ExpWnfDeliverThreadNotifications(Flink, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}

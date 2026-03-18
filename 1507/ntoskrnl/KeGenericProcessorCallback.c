/*
 * XREFs of KeGenericProcessorCallback @ 0x1400D4D9C
 * Callers:
 *     KeGenericCallDpc @ 0x1400D3924 (KeGenericCallDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x1400D3CD8 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x1400D4B60 (KeFlushQueuedDpcs.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KeSetIntervalProfile @ 0x140560678 (KeSetIntervalProfile.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x1400D5D90 (KeSetPriorityBoost.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        unsigned __int16 *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        char a4)
{
  unsigned __int16 *v5; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  void (__fastcall *v8)(struct _KPRCB *, __int64); // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r12
  __int64 v10; // r13
  unsigned __int16 v11; // r15
  unsigned __int64 i; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *v15; // r14
  KPRIORITY Priority; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+24h] [rbp-DCh]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  void (__fastcall *v21)(struct _KPRCB *, __int64); // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+48h] [rbp-B8h]
  PKTHREAD Thread; // [rsp+50h] [rbp-B0h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[22]; // [rsp+70h] [rbp-90h] BYREF

  v20 = a3;
  v21 = a2;
  v5 = a1;
  if ( !a1 )
  {
    v25[0] = 1310721LL;
    v5 = (unsigned __int16 *)v25;
    memset(&v25[1], 0, 0xA0uLL);
    v25[1] |= 1uLL;
  }
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  CurrentPrcb = 0LL;
  v18 = a4 & 2;
  CurrentThread = KeGetCurrentThread();
  Priority = 0;
  Thread = CurrentThread;
  if ( (a4 & 2) != 0 )
    Priority = KeSetPriorityThread(CurrentThread, 30);
  else
    KeSetPriorityBoost(CurrentThread, 15LL);
  v8 = v21;
  p_PreviousAffinity = &PreviousAffinity;
  v10 = v20;
  v11 = 0;
  for ( i = *((_QWORD *)v5 + 1); ; i = *(_QWORD *)&v5[4 * v11 + 4] )
  {
    while ( i )
    {
      _BitScanForward64(&v13, i);
      Affinity.Group = v11;
      i &= ~(1LL << v13);
      v22 = v13;
      Affinity.Mask = 1LL << v13;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      p_PreviousAffinity = 0LL;
      v8(CurrentPrcb, v10);
    }
    if ( ++v11 >= (unsigned int)*v5 )
      break;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = Thread;
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v18 )
    KeSetPriorityThread(v15, Priority);
  else
    KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)v15);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch((__int64)CurrentPrcb, CurrentIrql);
}

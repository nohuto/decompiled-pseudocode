/*
 * XREFs of KeGenericProcessorCallback @ 0x1400FF2DC
 * Callers:
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KeFlushQueuedDpcs @ 0x14009C070 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x1400D948C (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x1400EB410 (ExpUpdateTimerConfiguration.c)
 *     KeSetIntervalProfile @ 0x1404E34F8 (KeSetIntervalProfile.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiEnumerateNextProcessorNumber @ 0x140076C5C (KiEnumerateNextProcessorNumber.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall KeGenericProcessorCallback(
        unsigned __int16 *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        char a4)
{
  unsigned __int16 *v6; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v9; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // si
  int v15; // r14d
  unsigned __int16 v16; // [rsp+20h] [rbp-E0h] BYREF
  char v17; // [rsp+22h] [rbp-DEh]
  int v18; // [rsp+24h] [rbp-DCh]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v22; // [rsp+50h] [rbp-B0h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[22]; // [rsp+70h] [rbp-90h] BYREF

  v20 = a3;
  v6 = a1;
  if ( !a1 )
  {
    v24[0] = 1310721LL;
    v6 = (unsigned __int16 *)v24;
    memset(&v24[1], 0, 0xA0uLL);
    v24[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v9 = 0;
  Affinity.Reserved[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v18 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v9 = KeSetPriorityThread(CurrentThread, 30);
  else
    KeSetPriorityBoost(CurrentThread, 15LL);
  v11 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
  v21[0] = v6;
  v12 = v20;
  v22 = 0;
  v21[1] = v11;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber((__int64)&v16, v21) )
  {
    Affinity.Group = v16;
    Affinity.Mask = 1LL << v17;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    p_PreviousAffinity = 0LL;
    a2(CurrentPrcb, v12);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = v18;
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v15 )
    KeSetPriorityThread(CurrentThread, v9);
  else
    KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread, v13);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  KiCheckForThreadDispatch((__int64)CurrentPrcb, CurrentIrql);
}

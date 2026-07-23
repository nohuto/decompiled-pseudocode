/*
 * XREFs of KeGenericProcessorCallback @ 0x1400C85B4
 * Callers:
 *     ExpUpdateTimerConfiguration @ 0x140007194 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x140082314 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     KeSetIntervalProfile @ 0x14052A8A4 (KeSetIntervalProfile.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x14009110C (KeSetPriorityBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x1400D32D0 (KiEnumerateNextProcessorNumber.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        char a4)
{
  _QWORD *v6; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v9; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // si
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 v19; // [rsp+20h] [rbp-E0h] BYREF
  char v20; // [rsp+22h] [rbp-DEh]
  int v21; // [rsp+24h] [rbp-DCh]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  _QWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+50h] [rbp-B0h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v27[22]; // [rsp+70h] [rbp-90h] BYREF

  v23 = a3;
  v6 = a1;
  if ( !a1 )
  {
    LODWORD(v27[0]) = 1310721;
    v6 = v27;
    memset((char *)v27 + 4, 0, 0xA4uLL);
    v27[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v9 = 0;
  Affinity.Reserved[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v21 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v9 = KeSetPriorityThread(CurrentThread, 30);
  else
    KeSetPriorityBoost((__int64)CurrentThread, 15, a3);
  v11 = v6[1];
  v24[0] = v6;
  v12 = v23;
  v25 = 0;
  v24[1] = v11;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber(&v19, v24) )
  {
    Affinity.Group = v19;
    Affinity.Mask = 1LL << v20;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    p_PreviousAffinity = 0LL;
    a2(CurrentPrcb, v12);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v14 = v21;
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v14 )
    KeSetPriorityThread(CurrentThread, v9);
  else
    KiRemoveBoostThread(CurrentPrcb, CurrentThread);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v15) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch(CurrentPrcb, v15, v16, v17);
}

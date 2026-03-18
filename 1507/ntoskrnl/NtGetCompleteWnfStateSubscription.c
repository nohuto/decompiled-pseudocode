/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x14050126C
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013FC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
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
  int v9; // edi
  unsigned __int64 v10; // r14
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v7 = (__int64 *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[19];
  if ( v10 )
  {
    if ( !a1 || !a2 )
      goto LABEL_11;
    if ( a3 && (!a4 || a4 == -1073741267) )
    {
      if ( a1 >= MmUserProbeAddress )
        v7 = (__int64 *)MmUserProbeAddress;
      v14 = *v7;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      v9 = ExpWnfCompleteThreadSubscriptions(v10, (unsigned int)&v14, *a2, a3, a4);
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
            v9 = ExpWnfDeliverThreadNotifications(v10, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v9;
}

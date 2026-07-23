/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x140681DA8
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140013BB4 (ExGetCallBackBlockRoutine.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3);
    v8 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
      return -1073741702;
    }
  }
  if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)ExGetCallBackBlockRoutine((__int64)v4) != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, 0LL, (__int64)v8) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v8);
    goto LABEL_6;
  }
  _InterlockedAdd(&PspLoadImageNotifyRoutineCount, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v8);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
  ExWaitForRundownProtectionRelease(v8);
  ExFreePoolWithTag(v8, 0);
  return 0;
}

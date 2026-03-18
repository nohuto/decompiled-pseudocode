/*
 * XREFs of PpmTryAcquireLock @ 0x1401395AC
 * Callers:
 *     PoLatencySensitivityHint @ 0x14013942C (PoLatencySensitivityHint.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PpmTryAcquireLock(LARGE_INTEGER a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  NTSTATUS v3; // eax
  struct _KTHREAD *v4; // rcx
  __int16 v6; // ax
  LARGE_INTEGER v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = 0;
  v7.QuadPart = 0LL;
  v3 = KeWaitForSingleObject(&dword_14032E2A8, Executive, 0, 0, &v7);
  v4 = KeGetCurrentThread();
  if ( v3 )
  {
    v6 = v4->SpecialApcDisable + 1;
    v4->SpecialApcDisable = v6;
    if ( !v6 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    v2 = 1;
    PpmPerfPolicyLock = (__int64)v4;
  }
  return v2;
}

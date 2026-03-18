/*
 * XREFs of PpmTryAcquireLock @ 0x140105EAC
 * Callers:
 *     PoLatencySensitivityHint @ 0x140105D7C (PoLatencySensitivityHint.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

char __fastcall PpmTryAcquireLock(LARGE_INTEGER a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  NTSTATUS v3; // eax
  struct _KTHREAD *v4; // rcx
  LARGE_INTEGER v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = 0;
  v6.QuadPart = 0LL;
  v3 = KeWaitForSingleObject(&dword_1402DDCE8, Executive, 0, 0, &v6);
  v4 = KeGetCurrentThread();
  if ( v3 )
  {
    KiLeaveGuardedRegionUnsafe((__int64)v4);
  }
  else
  {
    v2 = 1;
    PpmPerfPolicyLock = (__int64)v4;
  }
  return v2;
}

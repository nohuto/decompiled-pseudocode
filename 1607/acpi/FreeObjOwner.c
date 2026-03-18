/*
 * XREFs of FreeObjOwner @ 0x1C005BF90
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C005A6BC (AMLIRemoveNativeObjectsFromNamespace.c)
 *     FreeObjOwnerWorker @ 0x1C005C0D0 (FreeObjOwnerWorker.c)
 *     ParseUnload @ 0x1C00618A0 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 */

__int64 __fastcall FreeObjOwner(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  KIRQL v3; // al
  bool v4; // di
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  struct _KTIMER Timer; // [rsp+40h] [rbp-88h] BYREF
  struct _KDPC Dpc; // [rsp+80h] [rbp-48h] BYREF
  void *ThreadHandle; // [rsp+E0h] [rbp+18h] BYREF

  if ( (gdwfAMLI & 4) == 0 )
  {
    v5 = (__int64)a2;
    goto LABEL_10;
  }
  if ( a1 )
  {
    v3 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    v4 = a2[3].Count != 0;
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  }
  else
  {
    v4 = 0;
  }
  if ( !v4 )
  {
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, a2);
    KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
    ExWaitForRundownProtectionRelease(a2 + 4);
    KeCancelTimer(&Timer);
    v5 = (__int64)a2;
LABEL_10:
    HeapFree(v5);
    return 0;
  }
  v6 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FreeObjOwnerWorker, a2);
  if ( v6 >= 0 )
  {
    v6 = 32772;
    NtClose(ThreadHandle);
  }
  return (unsigned int)v6;
}

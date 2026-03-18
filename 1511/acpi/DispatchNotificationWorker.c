/*
 * XREFs of DispatchNotificationWorker @ 0x1C003FB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DispatchNotificationWorker(__int64 a1)
{
  KIRQL v2; // al
  void (__fastcall *v3)(__int64, _QWORD); // r14
  __int64 v4; // r15
  unsigned int **v5; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 336);
  v4 = *(_QWORD *)(a1 + 344);
  KeReleaseSpinLock(&NotifyHandlerLock, v2);
  KeWaitForSingleObject((PVOID)(a1 + 848), Executive, 0, 0, 0LL);
  v5 = (unsigned int **)(a1 + 808);
  while ( *v5 != (unsigned int *)v5 )
  {
    v6 = *v5;
    v7 = *(_QWORD *)*v5;
    if ( *((unsigned int ***)*v5 + 1) != v5 || *(unsigned int **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (unsigned int *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    KeSetEvent((PRKEVENT)(a1 + 848), 0, 0);
    if ( v3 )
      v3(v4, v6[4]);
    ExFreePoolWithTag(v6, 0x4D706341u);
    KeWaitForSingleObject((PVOID)(a1 + 848), Executive, 0, 0, 0LL);
  }
  *(_BYTE *)(a1 + 880) = 0;
  KeSetEvent((PRKEVENT)(a1 + 848), 0, 0);
  return ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)a1);
}

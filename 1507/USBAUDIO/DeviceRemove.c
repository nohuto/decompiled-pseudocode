/*
 * XREFs of DeviceRemove @ 0x1C0001CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     WmiUnregisterProvider @ 0x1C001B768 (WmiUnregisterProvider.c)
 */

ULONG __fastcall DeviceRemove(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  KIRQL v4; // al
  __int64 v5; // r8
  _QWORD *v6; // rdx
  PREGHANDLE v7; // rcx

  v1 = *(_QWORD **)(a1 + 16);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x11u,
    (__int64)&WPP_67bd095a70f836f2f34e78037ce373b5_Traceguids,
    a1);
  v3 = (void *)v1[62];
  if ( v3 )
  {
    PoDeletePowerRequest(v3);
    v1[62] = 0LL;
  }
  (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 24))(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  v5 = *v1;
  v6 = (_QWORD *)v1[1];
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v6 != v1 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v4);
  WmiUnregisterProvider(a1);
  return McGenEventUnregister(v7);
}

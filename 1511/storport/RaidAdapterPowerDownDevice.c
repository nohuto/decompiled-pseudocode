/*
 * XREFs of RaidAdapterPowerDownDevice @ 0x1C0008A94
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0008184 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00049C4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0008B70 (RaidAdapterStopOnPowerdown.c)
 *     RaidPauseAdapterQueue @ 0x1C00140CC (RaidPauseAdapterQueue.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterPowerDownDevice(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bp
  __int64 v5; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, a1, a2);
  }
  RaidAcquireAdapterRemoveLock(a1);
  RaidPauseAdapterQueue(a1);
  v4 = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v5 = *(_QWORD *)(a1 + 8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  if ( *(_DWORD *)(a1 + 960) )
  {
    *(_QWORD *)(a1 + 992) = 0LL;
    *(_QWORD *)(a1 + 1008) = RaidAdapterStopOnPowerdown;
    *(_BYTE *)(a1 + 976) = 1;
    *(_QWORD *)(a1 + 984) = a2;
    *(_QWORD *)(a1 + 1000) = v5;
  }
  else
  {
    v4 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    RaidAdapterStopOnPowerdown(v5, a2, 0LL);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, a1, a2, v4);
  }
  return 259LL;
}

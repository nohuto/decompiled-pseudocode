/*
 * XREFs of RaUnitRequestPowerUp @ 0x1C00074EC
 * Callers:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C0007450 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0011A64 (RaidResumeUnitQueue.c)
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerUp(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // r9
  __int64 v5; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( *(_DWORD *)(a1 + 188) == 1 || *(char *)(a1 + 144) < 0 || *(_BYTE *)(a1 + 196) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    RaidPauseUnitQueue(a1);
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_e109923e46317c4616adabc68839fe07_Traceguids, v4);
      }
      *(_BYTE *)(a1 + 144) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(a1 + 1456), 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 62LL, &WPP_e109923e46317c4616adabc68839fe07_Traceguids, v5);
      }
      RaidResumeUnitQueue(a1);
      _InterlockedExchange((volatile __int32 *)(a1 + 1456), 1);
    }
  }
  return v2;
}

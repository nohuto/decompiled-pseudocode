/*
 * XREFs of RaUnitRequestPowerUp @ 0x1C003059C
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C000ADF0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000C19C (RaidResumeUnitQueue.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerUp(__int64 a1)
{
  unsigned int v2; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( *(_DWORD *)(a1 + 196) == 1 || *(char *)(a1 + 152) < 0 || *(_BYTE *)(a1 + 204) )
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
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Fu,
          (__int64)&WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids);
      }
      *(_BYTE *)(a1 + 152) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(a1 + 1472), 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Eu,
          (__int64)&WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids);
      }
      RaidResumeUnitQueue(a1);
      _InterlockedExchange((volatile __int32 *)(a1 + 1472), 1);
    }
  }
  return v2;
}

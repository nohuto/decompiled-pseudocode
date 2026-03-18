/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1400D0E94
 * Callers:
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCheckForWork @ 0x1400FF0E8 (PopCheckForWork.c)
 *     PopGetDope @ 0x14013F194 (PopGetDope.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  KIRQL v9; // r9
  struct _DEVICE_OBJECT_POWER_EXTENSION *v10; // rcx
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
  ULONG DeviceType; // eax
  int v16; // esi
  __int64 Dope; // rdi
  KIRQL v18; // dl
  __int64 *v19; // rax
  __int64 **v20; // rcx

  v4 = 0LL;
  if ( ConservationIdleTime || PerformanceIdleTime )
  {
    if ( (unsigned int)(State - 2) > 2 )
      return v4;
    DeviceType = DeviceObject->DeviceType;
    v16 = 0;
    if ( DeviceType == 7 || DeviceType == 45 )
    {
      if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
        return v4;
      v16 = 1;
    }
    Dope = PopGetDope();
    if ( Dope )
    {
      v18 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      *(_DWORD *)(Dope + 16) = ConservationIdleTime;
      v19 = (__int64 *)(Dope + 32);
      *(_DWORD *)(Dope + 20) = PerformanceIdleTime;
      *(_DWORD *)(Dope + 52) = State;
      *(_DWORD *)(Dope + 48) = v16;
      if ( (__int64 *)*v19 == v19 )
      {
        *(_DWORD *)(Dope + 56) = 1;
        v20 = (__int64 **)qword_1402DDD48;
        *v19 = (__int64)&PopIdleDetectList;
        *(_QWORD *)(Dope + 40) = v20;
        if ( *v20 != &PopIdleDetectList )
          __fastfail(3u);
        *v20 = v19;
        qword_1402DDD48 = Dope + 32;
      }
      KeReleaseSpinLock(&PopDopeGlobalLock, v18);
      PopCheckForWork();
      return (PULONG)Dope;
    }
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    v10 = DeviceObject->DeviceObjectExtension->Dope;
    if ( v10 )
    {
      p_IdleList = &v10->IdleList;
      if ( p_IdleList->Flink != p_IdleList )
      {
        Flink = p_IdleList->Flink;
        Blink = v10->IdleList.Blink;
        if ( p_IdleList->Flink->Blink != p_IdleList || Blink->Flink != p_IdleList )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        *(_QWORD *)&v10->IdleType = 0LL;
        *(_QWORD *)&v10->ConservationIdleTime = 0LL;
        v10->CurrentState = PowerDeviceUnspecified;
        v10->IdleCount = 0;
        v10->BusyCount = 0;
        v10->BusyReference = 0;
        v10->TotalBusyCount = 0;
        v10->Specific = 0LL;
        v10->IdleList.Blink = &v10->IdleList;
        p_IdleList->Flink = p_IdleList;
      }
    }
    KeReleaseSpinLock(&PopDopeGlobalLock, v9);
  }
  return v4;
}

/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1400075E0
 * Callers:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopCheckForWork @ 0x1400D01A4 (PopCheckForWork.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  unsigned __int8 v9; // bp
  struct _DEVICE_OBJECT_POWER_EXTENSION *v10; // rcx
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
  ULONG DeviceType; // eax
  int v16; // ebp
  __int64 Dope; // rdi
  unsigned __int8 CurrentIrql; // r12
  __int64 *v19; // rax
  __int64 **v20; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

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
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(&PopDopeGlobalLock);
      }
      v19 = (__int64 *)(Dope + 32);
      *(_DWORD *)(Dope + 16) = ConservationIdleTime;
      *(_DWORD *)(Dope + 20) = PerformanceIdleTime;
      *(_DWORD *)(Dope + 52) = State;
      *(_DWORD *)(Dope + 48) = v16;
      if ( (__int64 *)*v19 == v19 )
      {
        *(_DWORD *)(Dope + 56) = 1;
        v20 = (__int64 **)qword_14032E308;
        *v19 = (__int64)&PopIdleDetectList;
        *(_QWORD *)(Dope + 40) = v20;
        if ( *v20 != &PopIdleDetectList )
          __fastfail(3u);
        *v20 = v19;
        qword_14032E308 = Dope + 32;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
      else
        _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
      __writecr8(CurrentIrql);
      PopCheckForWork();
      return (PULONG)Dope;
    }
  }
  else
  {
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&PopDopeGlobalLock);
    }
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
    else
      _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
    __writecr8(v9);
  }
  return v4;
}

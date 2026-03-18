/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0002810
 * Callers:
 *     <none>
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C00011D0 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerDeepSleep @ 0x1C00012D0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiCommitTimerResolution @ 0x1C0001CD0 (CiCommitTimerResolution.c)
 *     CiTransitionTimerResolutionState @ 0x1C0001D20 (CiTransitionTimerResolutionState.c)
 *     CiSystemAdjustTimerResolution @ 0x1C0001DA0 (CiSystemAdjustTimerResolution.c)
 *     CiSchedulerRemoveDeadline @ 0x1C00027C0 (CiSchedulerRemoveDeadline.c)
 *     CiLogSchedulerEvent @ 0x1C00036D0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerWakeup @ 0x1C000381C (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char v4; // r14
  int v5; // ebp
  struct _DEVICE_OBJECT *SystemArgument1; // r13
  PVOID *p_SystemArgument1; // rcx
  unsigned int v8; // r15d
  struct _DEVICE_OBJECT *NextDevice; // rdi
  __int64 p_NextDevice; // r12
  unsigned __int8 AttachedDevice; // cl
  unsigned int v12; // esi
  PVOID **v13; // rax
  PVOID *v14; // rdx
  PVOID **v15; // rdx
  char v16; // bl
  int v17; // edi
  int v18; // ebx
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF
  PVOID *v20; // [rsp+68h] [rbp+10h]

  p_Reserved = 0LL;
  if ( byte_1C0007298 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  CiSchedulerTimerResolutionState = 2;
  CiSystemAdjustTimerResolution(1u);
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids);
  v19 = 0;
  do
  {
    v5 = 0;
    CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    p_SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
    v8 = 0;
    for ( CiThreadsMovedUp = v4;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      p_NextDevice = (__int64)&SystemArgument1->NextDevice;
      v20 = &SystemArgument1[-1].Reserved;
      if ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice )
      {
        do
        {
          if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
          {
            if ( v4 )
            {
              if ( *(_QWORD *)(*((_QWORD *)&NextDevice[-1].Reserved + 1) + 80LL) )
              {
                AttachedDevice = *((_BYTE *)NextDevice[-1].Reserved + 40);
                if ( AttachedDevice > LOBYTE(NextDevice->AttachedDevice) )
                  AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
              }
              else
              {
                AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
              }
              v12 = AttachedDevice;
            }
            else
            {
              v12 = BYTE2(NextDevice->AttachedDevice);
            }
            if ( BYTE3(NextDevice->AttachedDevice) != v12 )
            {
              BYTE3(NextDevice->AttachedDevice) = v12;
              if ( byte_1C0007298 )
                CiLogSchedulerEvent(&NextDevice[-1].Dpc.DpcData, v12);
              KeSetActualBasePriorityThread(NextDevice->NextDevice, v12);
              v4 = CiThreadsMovedUp;
            }
            ++v5;
            ++v8;
          }
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        }
        while ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice );
        p_Reserved = v20;
        p_SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
      }
    }
    if ( v4 && v8 > 1 )
    {
      v13 = (PVOID **)p_Reserved[4];
      p_SystemArgument1 = p_Reserved + 4;
      v14 = *v13;
      if ( v13[1] != p_Reserved + 4 || v14[1] != v13 )
        __fastfail(3u);
      *p_SystemArgument1 = v14;
      v14[1] = p_SystemArgument1;
      v15 = (PVOID **)p_Reserved[5];
      *v13 = p_SystemArgument1;
      v13[1] = (PVOID *)v15;
      if ( *v15 != p_SystemArgument1 )
        __fastfail(3u);
      *v15 = (PVOID *)v13;
      p_Reserved[5] = v13;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait((__int64)p_SystemArgument1, &v19);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      v17 = CiSchedulerTimerResolutionState;
      CiSchedulerTimerResolutionState = CiTransitionTimerResolutionState(4, CiSchedulerTimerResolutionState);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      v18 = CiSchedulerTimerResolutionState;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiCommitTimerResolution(v17, v18);
      CiSchedulerDeepSleep((__int32 *)&v19);
    }
    v16 = v19;
    if ( byte_1C0007298 )
      CiLogSchedulerWakeup(v19);
  }
  while ( (v16 & 8) == 0 );
  if ( CiSchedulerTimerResolutionState > 1 )
    CiSystemAdjustTimerResolution(0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids);
  PsTerminateSystemThread(0);
}

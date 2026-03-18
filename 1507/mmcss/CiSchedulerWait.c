/*
 * XREFs of CiSchedulerWait @ 0x1C0001630
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001180 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSystemAcquireSpinLock @ 0x1C00011D0 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerSleep @ 0x1C0001370 (CiSchedulerSleep.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001C50 (CiSchedulerUpdateTimer.c)
 *     CiCommitTimerResolution @ 0x1C0001CD0 (CiCommitTimerResolution.c)
 *     CiTransitionTimerResolutionState @ 0x1C0001D20 (CiTransitionTimerResolutionState.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001DF0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002790 (CiSystemUpdateMediaBufferingState.c)
 *     __security_check_cookie @ 0x1C0002AA0 (__security_check_cookie.c)
 *     CiLogSchedulerSleep @ 0x1C00037A4 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C000381C (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004164 (WPP_SF_d.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // r12
  unsigned int DpcData_high; // edx
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  struct _DEVICE_OBJECT **p_NextDevice; // r8
  struct _DEVICE_OBJECT *SystemArgument1; // rdx
  struct _DEVICE_OBJECT *NextDevice; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int32 i; // esi
  unsigned __int64 v20; // rbp
  int v21; // r14d
  int v22; // r15d
  _QWORD *p_Type; // rbx
  _QWORD **v24; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rcx
  bool v27; // zf
  _QWORD *j; // rax
  unsigned int v30; // edi
  unsigned int v31; // ebx
  unsigned int v32; // edi
  unsigned int v33; // ebx
  int v34; // eax
  unsigned int v35; // edi
  unsigned int v36; // ebx
  int v37; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int32 *v38; // [rsp+38h] [rbp-60h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+50h] [rbp-48h] BYREF

  v2 = a2;
  v38 = a2;
  if ( CiThreadsMovedUp )
  {
    if ( CiSchedulerInLazyMode )
    {
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v4 = 2;
    }
    else
    {
      DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
      v4 = 1;
    }
    CiSchedulerSleep(v4, DpcData_high, v2);
    if ( (*v2 & 0xC) == 0 )
    {
      while ( 1 )
      {
        if ( CiSchedulerDisallowLazyMode )
        {
          v11 = CiProcessorIdleHistoryBits;
          v10 = CiSchedulerIdleCycleBitMask;
        }
        else
        {
          v5 = byte_1C00071F8;
          v6 = 0;
          v7 = 0;
          if ( !byte_1C00071F8 )
            goto LABEL_12;
          v8 = 0LL;
          do
          {
            if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v7, v8 + CiLastIdleTime) )
              ++v6;
            ++v7;
            v8 += 8LL;
          }
          while ( v7 < v5 );
          if ( v6 )
            v9 = 0;
          else
LABEL_12:
            v9 = (2 * CiProcessorIdleHistoryBits) | 1;
          v10 = CiSchedulerIdleCycleBitMask;
          v11 = CiSchedulerIdleCycleBitMask & v9;
          CiProcessorIdleHistoryBits = v11;
        }
        if ( !v11 )
          break;
        if ( v11 == v10 )
        {
          if ( !CiSchedulerInLazyMode )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                15LL,
                &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids,
                HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
            CiSchedulerInLazyMode = 1;
            CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            v30 = CiSchedulerTimerResolutionState;
            CiSchedulerTimerResolutionState = CiTransitionTimerResolutionState(
                                                1LL,
                                                (unsigned int)CiSchedulerTimerResolutionState);
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            v31 = CiSchedulerTimerResolutionState;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            CiCommitTimerResolution(v30, v31);
          }
          v12 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
          v13 = 4;
        }
        else
        {
          v12 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
          v13 = 3;
        }
        if ( byte_1C0007298 )
          CiLogSchedulerWakeup(*v2);
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        if ( CiSchedulerInLazyMode )
        {
          SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
          if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
          {
LABEL_83:
            *v2 |= 0x80u;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            return 0;
          }
          while ( 1 )
          {
            NextDevice = SystemArgument1->NextDevice;
            p_NextDevice = &SystemArgument1->NextDevice;
            if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
              break;
LABEL_88:
            SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
            if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
              goto LABEL_83;
          }
          while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
          {
            NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
            if ( NextDevice == (struct _DEVICE_OBJECT *)p_NextDevice )
              goto LABEL_88;
          }
        }
        if ( qword_1C0007198 )
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
        LOBYTE(p_NextDevice) = 0;
        v17 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
        qword_1C0007198 = v12 + MEMORY[0xFFFFF78000000008];
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
          while ( 1 )
          {
            if ( v17[3] <= (unsigned __int64)v12 + MEMORY[0xFFFFF78000000008] )
            {
              v18 = (_QWORD *)v17[1];
              if ( !v18 )
              {
                LOBYTE(p_NextDevice) = 1;
                break;
              }
            }
            else
            {
              v18 = (_QWORD *)*v17;
              if ( !*v17 )
              {
                LOBYTE(p_NextDevice) = 0;
                break;
              }
            }
            v17 = v18;
          }
        }
        RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v17, p_NextDevice, &WPP_MAIN_CB.Reserved);
        CiSchedulerUpdateTimer();
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C0007298 )
          CiLogSchedulerSleep(v13);
        for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
        {
          if ( !i )
            KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
          if ( CiSchedulerTimerResolutionState == 1 )
          {
            CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            v35 = CiSchedulerTimerResolutionState;
            CiSchedulerTimerResolutionState = CiTransitionTimerResolutionState(
                                                3LL,
                                                (unsigned int)CiSchedulerTimerResolutionState);
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            v36 = CiSchedulerTimerResolutionState;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            CiCommitTimerResolution(v35, v36);
          }
          if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          {
            v20 = MEMORY[0xFFFFF78000000008] + 2000LL;
            v21 = 0;
            v22 = 0;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            p_Type = &WPP_MAIN_CB.DeviceObjectExtension->Type;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            CiSchedulerTimerNode = 2LL;
            if ( WPP_MAIN_CB.DeviceObjectExtension )
            {
              do
              {
                v24 = (_QWORD **)p_Type[1];
                v25 = p_Type;
                v26 = p_Type;
                if ( v24 )
                {
                  p_Type = (_QWORD *)p_Type[1];
                  for ( j = *v24; j; j = (_QWORD *)*j )
                    p_Type = j;
                }
                else
                {
                  for ( p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL);
                        p_Type;
                        p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*p_Type == v26 )
                      break;
                    v26 = p_Type;
                  }
                }
                if ( v25[3] <= v20 )
                {
                  RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v25);
                  v27 = *((_DWORD *)v25 + 8) == 1;
                  v25[3] = 0LL;
                  if ( v27 )
                  {
                    v21 |= 0x20u;
                    CiSchedulerUpdateTaskIndexPriorities(v25 - 7);
                    v34 = *((_DWORD *)v25 + 22);
                    if ( (v34 & 2) != 0 )
                    {
                      *((_DWORD *)v25 + 22) = v34 & 0xFFFFFFFD;
                      CiSchedulerSetTaskIndexThreadTag((__int64)(v25 - 7), 0);
                      --CiTotalTasksBuffering;
                    }
                    if ( byte_1C0007298 )
                    {
                      UserData.Ptr = (ULONGLONG)(v25 + 6);
                      *(_QWORD *)&UserData.Size = 4LL;
                      EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
                    }
                    if ( (v25[11] & 1) != 0 )
                      v22 = 1;
                  }
                  else
                  {
                    v21 |= 0x10u;
                  }
                }
              }
              while ( p_Type );
              if ( v22 )
                CiSystemUpdateMediaBufferingState(v26);
            }
            if ( (v21 & 0x10) == 0 )
              CiSchedulerUpdateTimer();
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( v22 )
            {
              if ( byte_1C0007298 )
              {
                v40.Ptr = (ULONGLONG)&v37;
                v37 = 1;
                *(_QWORD *)&v40.Size = 4LL;
                EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v40);
              }
              PoLatencySensitivityHint(4LL);
            }
            i |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v21;
            if ( (i & 0xFFFFFFDF) != 0 )
              break;
          }
          if ( byte_1C0007298 )
            CiLogSchedulerWakeup(i);
        }
        v2 = v38;
        *v38 = i;
        if ( (i & 0xC) != 0 )
          return 0;
      }
      if ( CiSchedulerInLazyMode )
      {
        CiSchedulerInLazyMode = 0;
        CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v32 = CiSchedulerTimerResolutionState;
        CiSchedulerTimerResolutionState = CiTransitionTimerResolutionState(
                                            0LL,
                                            (unsigned int)CiSchedulerTimerResolutionState);
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        v33 = CiSchedulerTimerResolutionState;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        CiCommitTimerResolution(v32, v33);
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids);
      }
    }
    return 0;
  }
  else
  {
    CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
}

/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0001D60
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001180 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTimer @ 0x1C00011D0 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001370 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001A40 (CiSchedulerRemoveDeadline.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001D10 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001D40 (CiSchedulerProcessDeadlines.c)
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     CiLogSchedulerEvent @ 0x1C00037B0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003884 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C00038FC (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0003E00 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004254 (WPP_SF_d.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // rsi
  char v3; // r12
  int v4; // ebx
  __int64 v5; // r8
  struct _DEVICE_OBJECT *SystemArgument1; // r15
  unsigned int v7; // r13d
  struct _DEVICE_OBJECT *NextDevice; // rdi
  __int64 p_NextDevice; // r14
  int v10; // r15d
  unsigned __int8 AttachedDevice; // cl
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 **v16; // rdx
  unsigned int DpcData_high; // ebx
  unsigned int v18; // edi
  _QWORD *v19; // rdx
  unsigned __int32 i; // r13d
  unsigned __int64 v21; // r14
  int v22; // edi
  int v23; // r15d
  _QWORD *m; // rbx
  _QWORD **v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  bool v28; // zf
  unsigned int v29; // esi
  int v30; // r14d
  unsigned int v31; // ebx
  __int64 v32; // rdi
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // edi
  struct _DEVICE_OBJECT **v38; // r8
  struct _DEVICE_OBJECT *v39; // rdx
  struct _DEVICE_OBJECT *v40; // rcx
  _QWORD *v41; // rdx
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // r14
  int v45; // edi
  int v46; // r15d
  _QWORD *ii; // rbx
  _QWORD **v48; // rax
  _QWORD *v49; // rsi
  _QWORD *v50; // rcx
  __int64 SecurityDescriptor_high; // rbx
  _QWORD *v52; // rdx
  int v53; // edi
  int v54; // r15d
  unsigned __int64 v55; // r14
  _QWORD *p_Type; // rbx
  _QWORD **v57; // rax
  _QWORD *v58; // rsi
  _QWORD *v59; // rcx
  _QWORD *n; // rax
  _QWORD *v61; // rax
  _QWORD *k; // rax
  _QWORD *j; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  int v66; // eax
  __int32 v67; // r13d
  int v68; // eax
  int v69; // eax
  int v70; // [rsp+30h] [rbp-69h]
  int v71; // [rsp+38h] [rbp-61h] BYREF
  int v72; // [rsp+40h] [rbp-59h] BYREF
  int v73; // [rsp+48h] [rbp-51h] BYREF
  PVOID *v74; // [rsp+50h] [rbp-49h]
  struct _DEVICE_OBJECT *v75; // [rsp+58h] [rbp-41h]
  int v76; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+88h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+98h] [rbp-1h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+B8h] [rbp+1Fh] BYREF

  p_Reserved = 0LL;
  v74 = 0LL;
  if ( byte_1C0007298 )
    CiLogSchedulerWakeup(1LL);
  v3 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = KeGetCurrentThread();
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_8b28d92b1a60150b690e7f045c89e74a_Traceguids);
  while ( 2 )
  {
    v4 = 0;
    v70 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v7 = 0;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    CiThreadsMovedUp = v3;
    v75 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 != &WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      do
      {
        p_Reserved = &SystemArgument1[-1].Reserved;
        NextDevice = SystemArgument1->NextDevice;
        p_NextDevice = (__int64)&SystemArgument1->NextDevice;
        v74 = &SystemArgument1[-1].Reserved;
        if ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice )
        {
          v10 = v70;
          do
          {
            if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
            {
              if ( v3 )
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
                v3 = CiThreadsMovedUp;
              }
              ++v10;
              ++v7;
            }
            NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
          }
          while ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice );
          p_Reserved = v74;
          v70 = v10;
          SystemArgument1 = v75;
        }
        SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
        v75 = SystemArgument1;
      }
      while ( SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 );
      v4 = v70;
    }
    if ( v3 && v7 > 1 )
    {
      v13 = (__int64 *)p_Reserved[4];
      v14 = (__int64 *)(p_Reserved + 4);
      v15 = *v13;
      if ( (PVOID *)v13[1] != p_Reserved + 4 || *(__int64 **)(v15 + 8) != v13 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v16 = (__int64 **)p_Reserved[5];
      *v13 = (__int64)v14;
      v13[1] = (__int64)v16;
      if ( *v16 != v14 )
        __fastfail(3u);
      *v16 = v13;
      p_Reserved[5] = v13;
    }
    if ( !v4 )
    {
      v3 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_8b28d92b1a60150b690e7f045c89e74a_Traceguids);
      if ( byte_1C0007298 )
        CiLogSchedulerSleep(5LL);
      v67 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
      if ( !v67 )
        KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
      CiSchedulerProcessDeadlines(&v76);
      i = _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v67;
      goto LABEL_105;
    }
    if ( !v3 )
    {
      SecurityDescriptor_high = HIDWORD(WPP_MAIN_CB.SecurityDescriptor);
      if ( qword_1C0007198 )
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
      LOBYTE(v5) = 0;
      v52 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
      qword_1C0007198 = SecurityDescriptor_high + MEMORY[0xFFFFF78000000008];
      if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_112;
      while ( 1 )
      {
        if ( v52[3] <= (unsigned __int64)(SecurityDescriptor_high + MEMORY[0xFFFFF78000000008]) )
        {
          v65 = (_QWORD *)v52[1];
          if ( !v65 )
          {
            LOBYTE(v5) = 1;
            goto LABEL_112;
          }
        }
        else
        {
          v65 = (_QWORD *)*v52;
          if ( !*v52 )
          {
            LOBYTE(v5) = 0;
LABEL_112:
            RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v52, v5, &WPP_MAIN_CB.Reserved);
            CiSchedulerUpdateTimer();
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( byte_1C0007298 )
              CiLogSchedulerSleep(0LL);
            for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
            {
              if ( !i )
                KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
              if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
              {
                v53 = 0;
                v54 = 0;
                v55 = MEMORY[0xFFFFF78000000008] + 2000LL;
                KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                p_Type = &WPP_MAIN_CB.DeviceObjectExtension->Type;
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
                CiSchedulerTimerNode = 2LL;
                if ( WPP_MAIN_CB.DeviceObjectExtension )
                {
                  do
                  {
                    v57 = (_QWORD **)p_Type[1];
                    v58 = p_Type;
                    v59 = p_Type;
                    if ( v57 )
                    {
                      p_Type = (_QWORD *)p_Type[1];
                      for ( j = *v57; j; j = (_QWORD *)*j )
                        p_Type = j;
                    }
                    else
                    {
                      for ( p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL);
                            p_Type;
                            p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        if ( (_QWORD *)*p_Type == v59 )
                          break;
                        v59 = p_Type;
                      }
                    }
                    if ( v58[3] <= v55 )
                    {
                      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v58);
                      v28 = *((_DWORD *)v58 + 8) == 1;
                      v58[3] = 0LL;
                      if ( v28 )
                      {
                        v53 |= 0x20u;
                        CiSchedulerUpdateTaskIndexPriorities((__int64)(v58 - 7));
                        v68 = *((_DWORD *)v58 + 22);
                        if ( (v68 & 2) != 0 )
                        {
                          *((_DWORD *)v58 + 22) = v68 & 0xFFFFFFFD;
                          CiSchedulerSetTaskIndexThreadTag((__int64)(v58 - 7), 0);
                          --CiTotalTasksBuffering;
                        }
                        if ( byte_1C0007298 )
                        {
                          v80.Ptr = (ULONGLONG)(v58 + 6);
                          *(_QWORD *)&v80.Size = 4LL;
                          EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v80);
                        }
                        if ( (v58[11] & 1) != 0 )
                          v54 = 1;
                      }
                      else
                      {
                        v53 |= 0x10u;
                      }
                    }
                  }
                  while ( p_Type );
                  if ( v54 )
                    CiSystemUpdateMediaBufferingState();
                }
                if ( (v53 & 0x10) == 0 )
                  CiSchedulerUpdateTimer();
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
                if ( v54 )
                {
                  if ( byte_1C0007298 )
                  {
                    v82.Ptr = (ULONGLONG)&v72;
                    v72 = 1;
                    *(_QWORD *)&v82.Size = 4LL;
                    EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v82);
                  }
                  PoLatencySensitivityHint(4LL);
                }
                i |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v53;
                if ( (i & 0xFFFFFFDF) != 0 )
                  break;
              }
              if ( byte_1C0007298 )
                CiLogSchedulerWakeup(i);
            }
            v3 = 1;
            goto LABEL_105;
          }
        }
        v52 = v65;
      }
    }
    if ( CiSchedulerInLazyMode )
    {
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v18 = 2;
    }
    else
    {
      DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
      v18 = 1;
    }
    if ( qword_1C0007198 )
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
    LOBYTE(v5) = 0;
    v19 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
    qword_1C0007198 = DpcData_high + MEMORY[0xFFFFF78000000008];
    if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
      goto LABEL_34;
    while ( v19[3] > (unsigned __int64)DpcData_high + MEMORY[0xFFFFF78000000008] )
    {
      v64 = (_QWORD *)*v19;
      if ( !*v19 )
      {
        LOBYTE(v5) = 0;
        goto LABEL_34;
      }
LABEL_171:
      v19 = v64;
    }
    v64 = (_QWORD *)v19[1];
    if ( v64 )
      goto LABEL_171;
    LOBYTE(v5) = 1;
LABEL_34:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v19, v5, &WPP_MAIN_CB.Reserved);
    CiSchedulerUpdateTimer();
    v3 = 0;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( byte_1C0007298 )
      CiLogSchedulerSleep(v18);
    for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
    {
      if ( !i )
        KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
      if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      {
        v21 = MEMORY[0xFFFFF78000000008] + 2000LL;
        v22 = 0;
        v23 = 0;
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        m = &WPP_MAIN_CB.DeviceObjectExtension->Type;
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        CiSchedulerTimerNode = 2LL;
        if ( WPP_MAIN_CB.DeviceObjectExtension )
        {
          do
          {
            v25 = (_QWORD **)m[1];
            v26 = m;
            v27 = m;
            if ( v25 )
            {
              m = (_QWORD *)m[1];
              for ( k = *v25; k; k = (_QWORD *)*k )
                m = k;
            }
            else
            {
              for ( m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL); m; m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*m == v27 )
                  break;
                v27 = m;
              }
            }
            if ( v26[3] <= v21 )
            {
              RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v26);
              v28 = *((_DWORD *)v26 + 8) == 1;
              v26[3] = 0LL;
              if ( v28 )
              {
                v22 |= 0x20u;
                CiSchedulerUpdateTaskIndexPriorities((__int64)(v26 - 7));
                v69 = *((_DWORD *)v26 + 22);
                if ( (v69 & 2) != 0 )
                {
                  *((_DWORD *)v26 + 22) = v69 & 0xFFFFFFFD;
                  CiSchedulerSetTaskIndexThreadTag((__int64)(v26 - 7), 0);
                  --CiTotalTasksBuffering;
                }
                if ( byte_1C0007298 )
                {
                  UserData.Ptr = (ULONGLONG)(v26 + 6);
                  *(_QWORD *)&UserData.Size = 4LL;
                  EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
                }
                if ( (v26[11] & 1) != 0 )
                  v23 = 1;
              }
              else
              {
                v22 |= 0x10u;
              }
            }
          }
          while ( m );
          if ( v23 )
            CiSystemUpdateMediaBufferingState();
        }
        if ( (v22 & 0x10) == 0 )
          CiSchedulerUpdateTimer();
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( v23 )
        {
          if ( byte_1C0007298 )
          {
            v79.Ptr = (ULONGLONG)&v73;
            v73 = 1;
            *(_QWORD *)&v79.Size = 4LL;
            EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v79);
          }
          PoLatencySensitivityHint(4LL);
        }
        i |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v22;
        if ( (i & 0xFFFFFFDF) != 0 )
          break;
      }
      if ( byte_1C0007298 )
        CiLogSchedulerWakeup(i);
    }
    if ( (i & 0xC) == 0 )
    {
      while ( 1 )
      {
        if ( CiSchedulerDisallowLazyMode )
        {
          v35 = CiProcessorIdleHistoryBits;
          v34 = CiSchedulerIdleCycleBitMask;
        }
        else
        {
          v29 = byte_1C00071F8;
          v30 = 0;
          v31 = 0;
          if ( !byte_1C00071F8 )
            goto LABEL_61;
          v32 = 0LL;
          do
          {
            if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v31, v32 + CiLastIdleTime) )
              ++v30;
            ++v31;
            v32 += 8LL;
          }
          while ( v31 < v29 );
          if ( v30 )
            v33 = 0;
          else
LABEL_61:
            v33 = (2 * CiProcessorIdleHistoryBits) | 1;
          v34 = CiSchedulerIdleCycleBitMask;
          v35 = CiSchedulerIdleCycleBitMask & v33;
          CiProcessorIdleHistoryBits = v35;
        }
        if ( !v35 )
          break;
        if ( v35 == v34 )
        {
          if ( !CiSchedulerInLazyMode )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                13LL,
                &WPP_8b28d92b1a60150b690e7f045c89e74a_Traceguids,
                HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
            CiSchedulerInLazyMode = 1;
          }
          v36 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
          v37 = 4;
        }
        else
        {
          v36 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
          v37 = 3;
        }
        if ( byte_1C0007298 )
          CiLogSchedulerWakeup(i);
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        if ( CiSchedulerInLazyMode )
        {
          v39 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
          if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
          {
LABEL_193:
            i |= 0x80u;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            goto LABEL_105;
          }
          while ( 1 )
          {
            v40 = v39->NextDevice;
            v38 = &v39->NextDevice;
            if ( v40 != (struct _DEVICE_OBJECT *)&v39->NextDevice )
              break;
LABEL_228:
            v39 = *(struct _DEVICE_OBJECT **)&v39->Type;
            if ( v39 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
              goto LABEL_193;
          }
          while ( (BYTE4(v40->DeviceExtension) & 1) != 0 )
          {
            v40 = *(struct _DEVICE_OBJECT **)&v40->Type;
            if ( v40 == (struct _DEVICE_OBJECT *)v38 )
              goto LABEL_228;
          }
        }
        if ( qword_1C0007198 )
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
        LOBYTE(v38) = 0;
        v41 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
        qword_1C0007198 = v36 + MEMORY[0xFFFFF78000000008];
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
          while ( 1 )
          {
            if ( v41[3] <= (unsigned __int64)v36 + MEMORY[0xFFFFF78000000008] )
            {
              v61 = (_QWORD *)v41[1];
              if ( !v61 )
              {
                LOBYTE(v38) = 1;
                break;
              }
            }
            else
            {
              v61 = (_QWORD *)*v41;
              if ( !*v41 )
              {
                LOBYTE(v38) = 0;
                break;
              }
            }
            v41 = v61;
          }
        }
        RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v41, v38, &WPP_MAIN_CB.Reserved);
        if ( WPP_MAIN_CB.DeviceObjectExtension )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)CiSchedulerTimerNode )
          {
            Dope = WPP_MAIN_CB.DeviceObjectExtension->Dope;
            if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)Dope )
            {
              v43 = 0LL;
            }
            else
            {
              v43 = MEMORY[0xFFFFF78000000008] - (_QWORD)Dope;
              if ( (__int64)(MEMORY[0xFFFFF78000000008] - (_QWORD)Dope) < -2000 )
                v43 += 2000LL;
            }
            CiSchedulerTimerNode = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
            ExSetTimer(
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
              v43,
              0LL,
              &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
          }
        }
        else if ( CiSchedulerTimerNode != 1 )
        {
          CiSchedulerTimerNode = 1LL;
          ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
        }
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C0007298 )
          CiLogSchedulerSleep(v37);
        for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
        {
          if ( !i )
            KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
          if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          {
            v44 = MEMORY[0xFFFFF78000000008] + 2000LL;
            v45 = 0;
            v46 = 0;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            ii = &WPP_MAIN_CB.DeviceObjectExtension->Type;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            CiSchedulerTimerNode = 2LL;
            if ( WPP_MAIN_CB.DeviceObjectExtension )
            {
              do
              {
                v48 = (_QWORD **)ii[1];
                v49 = ii;
                v50 = ii;
                if ( v48 )
                {
                  ii = (_QWORD *)ii[1];
                  for ( n = *v48; n; n = (_QWORD *)*n )
                    ii = n;
                }
                else
                {
                  for ( ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL); ii; ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*ii == v50 )
                      break;
                    v50 = ii;
                  }
                }
                if ( v49[3] <= v44 )
                {
                  RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v49);
                  v28 = *((_DWORD *)v49 + 8) == 1;
                  v49[3] = 0LL;
                  if ( v28 )
                  {
                    v45 |= 0x20u;
                    CiSchedulerUpdateTaskIndexPriorities((__int64)(v49 - 7));
                    v66 = *((_DWORD *)v49 + 22);
                    if ( (v66 & 2) != 0 )
                    {
                      *((_DWORD *)v49 + 22) = v66 & 0xFFFFFFFD;
                      CiSchedulerSetTaskIndexThreadTag((__int64)(v49 - 7), 0);
                      --CiTotalTasksBuffering;
                    }
                    if ( byte_1C0007298 )
                    {
                      v77.Ptr = (ULONGLONG)(v49 + 6);
                      *(_QWORD *)&v77.Size = 4LL;
                      EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v77);
                    }
                    if ( (v49[11] & 1) != 0 )
                      v46 = 1;
                  }
                  else
                  {
                    v45 |= 0x10u;
                  }
                }
              }
              while ( ii );
              if ( v46 )
                CiSystemUpdateMediaBufferingState();
            }
            if ( (v45 & 0x10) == 0 )
              CiSchedulerUpdateTimer();
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( v46 )
            {
              if ( byte_1C0007298 )
              {
                v78.Ptr = (ULONGLONG)&v71;
                v71 = 1;
                *(_QWORD *)&v78.Size = 4LL;
                EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v78);
              }
              PoLatencySensitivityHint(4LL);
            }
            i |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v45;
            if ( (i & 0xFFFFFFDF) != 0 )
              break;
          }
          if ( byte_1C0007298 )
            CiLogSchedulerWakeup(i);
        }
        if ( (i & 0xC) != 0 )
          goto LABEL_105;
      }
      if ( CiSchedulerInLazyMode )
      {
        CiSchedulerInLazyMode = 0;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_8b28d92b1a60150b690e7f045c89e74a_Traceguids);
      }
    }
LABEL_105:
    if ( byte_1C0007298 )
      CiLogSchedulerWakeup(i);
    if ( (i & 8) == 0 )
    {
      p_Reserved = v74;
      continue;
    }
    break;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_8b28d92b1a60150b690e7f045c89e74a_Traceguids);
  PsTerminateSystemThread(0);
}

/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0001E90
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001030 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001060 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001800 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001990 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001E10 (CiSchedulerUpdateTimer.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     CiLogSchedulerEvent @ 0x1C0003B38 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003C0C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003C84 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004214 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00045BC (WPP_SF_d.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // rdi
  char v3; // r14
  int v4; // r15d
  __int64 v5; // r8
  unsigned int v6; // r12d
  struct _DEVICE_OBJECT *SystemArgument1; // rcx
  struct _DEVICE_OBJECT *NextDevice; // rsi
  __int64 p_NextDevice; // r13
  __int64 v10; // rax
  unsigned __int8 AttachedDevice; // al
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 **v16; // rdx
  unsigned int DpcData_high; // ebx
  unsigned int v18; // edi
  _QWORD *v19; // rdx
  unsigned __int32 j; // r13d
  unsigned __int64 v21; // r15
  int v22; // edi
  int v23; // r12d
  _QWORD *p_Type; // rbx
  _QWORD **v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  unsigned int v28; // esi
  int v29; // r14d
  unsigned int v30; // ebx
  __int64 v31; // rdi
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // edi
  struct _DEVICE_OBJECT **v37; // r8
  struct _DEVICE_OBJECT *v38; // rdx
  struct _DEVICE_OBJECT *v39; // rcx
  _QWORD *v40; // rdx
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // r15
  int v44; // edi
  int v45; // r12d
  _QWORD *n; // rbx
  _QWORD **v47; // rax
  _QWORD *v48; // rsi
  _QWORD *v49; // rcx
  __int64 SecurityDescriptor_high; // rbx
  _QWORD *v51; // rdx
  unsigned __int64 v52; // r15
  int v53; // edi
  int v54; // r12d
  _QWORD *jj; // rbx
  _QWORD **v56; // rax
  _QWORD *v57; // rsi
  _QWORD *v58; // rcx
  _QWORD *m; // rax
  _QWORD *v60; // rax
  _QWORD *k; // rax
  _QWORD *ii; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // r14
  int v66; // eax
  __int32 v67; // r13d
  __int64 v68; // r14
  int v69; // eax
  __int64 v70; // r14
  int v71; // eax
  struct _DEVICE_OBJECT *i; // [rsp+30h] [rbp-99h]
  int v73; // [rsp+38h] [rbp-91h] BYREF
  int v74; // [rsp+40h] [rbp-89h] BYREF
  int v75; // [rsp+48h] [rbp-81h] BYREF
  PVOID *v76; // [rsp+50h] [rbp-79h]
  int v77; // [rsp+58h] [rbp-71h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+80h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+A0h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+B0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+C0h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+D0h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+E0h] [rbp+17h] BYREF

  p_Reserved = 0LL;
  v76 = 0LL;
  if ( byte_1C0007290 )
    CiLogSchedulerWakeup(1LL);
  CiThreadsMovedUp = 1;
  v3 = 1;
  CiSchedulerThread = KeGetCurrentThread();
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_f1f89d0ac8b239ac98360555d5789966_Traceguids);
  while ( 1 )
  {
    v4 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v6 = 0;
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    CiThreadsMovedUp = v3;
    for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          i = SystemArgument1 )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      p_NextDevice = (__int64)&SystemArgument1->NextDevice;
      v76 = &SystemArgument1[-1].Reserved;
      if ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice )
      {
        do
        {
          if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
          {
            if ( v3 )
            {
              v10 = *((_QWORD *)&NextDevice[-1].Reserved + 1);
              if ( *(_QWORD *)(v10 + 120) || !*(_BYTE *)(v10 + 132) && *(_QWORD *)(v10 + 80) )
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
              if ( byte_1C0007290 )
                CiLogSchedulerEvent(&NextDevice[-1].Dpc.DpcData, v12);
              KeSetActualBasePriorityThread(NextDevice->NextDevice, v12);
              v3 = CiThreadsMovedUp;
            }
            ++v4;
            ++v6;
          }
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        }
        while ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice );
        SystemArgument1 = i;
        p_Reserved = v76;
      }
      SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
    }
    if ( v3 && v6 > 1 )
    {
      v13 = (__int64 *)p_Reserved[4];
      v14 = (__int64 *)(p_Reserved + 4);
      v15 = *v13;
      if ( (PVOID *)v13[1] != p_Reserved + 4 || *(__int64 **)(v15 + 8) != v13 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v16 = (__int64 **)p_Reserved[5];
      if ( *v16 != v14 )
        __fastfail(3u);
      *v13 = (__int64)v14;
      v13[1] = (__int64)v16;
      *v16 = v13;
      p_Reserved[5] = v13;
    }
    if ( v4 )
    {
      if ( v3 )
      {
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
        byte_1C00071A4 = 0;
        qword_1C0007198 = DpcData_high + MEMORY[0xFFFFF78000000008];
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
          while ( 1 )
          {
            if ( v19[3] <= (unsigned __int64)DpcData_high + MEMORY[0xFFFFF78000000008] )
            {
              v64 = (_QWORD *)v19[1];
              if ( !v64 )
              {
                LOBYTE(v5) = 1;
                break;
              }
            }
            else
            {
              v64 = (_QWORD *)*v19;
              if ( !*v19 )
              {
                LOBYTE(v5) = 0;
                break;
              }
            }
            v19 = v64;
          }
        }
        RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v19, v5, &WPP_MAIN_CB.Reserved);
        CiSchedulerUpdateTimer();
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C0007290 )
          CiLogSchedulerSleep(v18);
        for ( j = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; j = 0 )
        {
          if ( !j )
            KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
          if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          {
            v21 = MEMORY[0xFFFFF78000000008] + 2000LL;
            v22 = 0;
            v23 = 0;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            p_Type = &WPP_MAIN_CB.DeviceObjectExtension->Type;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            CiSchedulerTimerNode = 2LL;
            if ( WPP_MAIN_CB.DeviceObjectExtension )
            {
              do
              {
                v25 = (_QWORD **)p_Type[1];
                v26 = p_Type;
                v27 = p_Type;
                if ( v25 )
                {
                  p_Type = (_QWORD *)p_Type[1];
                  for ( k = *v25; k; k = (_QWORD *)*k )
                    p_Type = k;
                }
                else
                {
                  for ( p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL);
                        p_Type;
                        p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*p_Type == v27 )
                      break;
                    v27 = p_Type;
                  }
                }
                if ( v26[3] <= v21 )
                {
                  RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v26);
                  v26[3] = 0LL;
                  if ( *((_DWORD *)v26 + 8) == 1 )
                  {
                    v22 |= 0x20u;
                    if ( *((_BYTE *)v26 + 36) )
                    {
                      v68 = (__int64)(v26 - 12);
                    }
                    else
                    {
                      v68 = (__int64)(v26 - 7);
                      if ( (v26[16] & 1) != 0 )
                        v23 = 1;
                    }
                    CiSchedulerUpdateTaskIndexPriorities(v68);
                    v69 = *(_DWORD *)(v68 + 184);
                    if ( (v69 & 2) != 0 && (*((_BYTE *)v26 + 36) || !*(_BYTE *)(v68 + 132)) )
                    {
                      *(_DWORD *)(v68 + 184) = v69 & 0xFFFFFFFD;
                      CiSchedulerSetTaskIndexThreadTag(v68, 0);
                      --CiTotalTasksBuffering;
                    }
                    if ( byte_1C0007290 )
                    {
                      if ( *((_BYTE *)v26 + 36) )
                      {
                        v79.Ptr = v68 + 144;
                        *(_QWORD *)&v79.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v79);
                      }
                      else
                      {
                        UserData.Ptr = v68 + 144;
                        *(_QWORD *)&UserData.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
                      }
                    }
                  }
                  else
                  {
                    v22 |= 0x10u;
                  }
                }
              }
              while ( p_Type );
              if ( v23 && CiCurrentMediaBufferingState )
              {
                CiCurrentMediaBufferingState = 0;
                PoNotifyMediaBuffering(0LL);
              }
            }
            if ( (v22 & 0x10) == 0 )
              CiSchedulerUpdateTimer();
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( v23 )
            {
              if ( byte_1C0007290 )
              {
                v80.Ptr = (ULONGLONG)&v73;
                v73 = 1;
                *(_QWORD *)&v80.Size = 4LL;
                EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v80);
              }
              PoLatencySensitivityHint(4LL);
            }
            j |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v22;
            if ( (j & 0xFFFFFFDF) != 0 )
              break;
          }
          if ( byte_1C0007290 )
            CiLogSchedulerWakeup(j);
        }
        if ( (j & 0xC) == 0 )
        {
          while ( 1 )
          {
            if ( CiSchedulerDisallowLazyMode )
            {
              v34 = CiProcessorIdleHistoryBits;
              v33 = CiSchedulerIdleCycleBitMask;
            }
            else
            {
              v28 = byte_1C00071F8;
              v29 = 0;
              v30 = 0;
              if ( !byte_1C00071F8 )
                goto LABEL_60;
              v31 = 0LL;
              do
              {
                if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v30, v31 + CiLastIdleTime) )
                  ++v29;
                ++v30;
                v31 += 8LL;
              }
              while ( v30 < v28 );
              if ( v29 )
                v32 = 0;
              else
LABEL_60:
                v32 = (2 * CiProcessorIdleHistoryBits) | 1;
              v33 = CiSchedulerIdleCycleBitMask;
              v34 = CiSchedulerIdleCycleBitMask & v32;
              CiProcessorIdleHistoryBits = v34;
            }
            if ( !v34 )
              break;
            if ( v34 == v33 )
            {
              if ( !CiSchedulerInLazyMode )
              {
                if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                  WPP_SF_d(
                    WPP_GLOBAL_Control->AttachedDevice,
                    13LL,
                    &WPP_f1f89d0ac8b239ac98360555d5789966_Traceguids,
                    HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
                CiSchedulerInLazyMode = 1;
              }
              v35 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
              v36 = 4;
            }
            else
            {
              v35 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
              v36 = 3;
            }
            if ( byte_1C0007290 )
              CiLogSchedulerWakeup(j);
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            if ( CiSchedulerInLazyMode )
            {
              v38 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
              if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
              {
LABEL_210:
                j |= 0x80u;
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
                goto LABEL_103;
              }
              while ( 1 )
              {
                v39 = v38->NextDevice;
                v37 = &v38->NextDevice;
                if ( v39 != (struct _DEVICE_OBJECT *)&v38->NextDevice )
                  break;
LABEL_233:
                v38 = *(struct _DEVICE_OBJECT **)&v38->Type;
                if ( v38 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
                  goto LABEL_210;
              }
              while ( (BYTE4(v39->DeviceExtension) & 1) != 0 )
              {
                v39 = *(struct _DEVICE_OBJECT **)&v39->Type;
                if ( v39 == (struct _DEVICE_OBJECT *)v37 )
                  goto LABEL_233;
              }
            }
            if ( qword_1C0007198 )
              RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
            LOBYTE(v37) = 0;
            v40 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
            qword_1C0007198 = v35 + MEMORY[0xFFFFF78000000008];
            byte_1C00071A4 = 0;
            if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
            {
              while ( 1 )
              {
                if ( v40[3] <= (unsigned __int64)v35 + MEMORY[0xFFFFF78000000008] )
                {
                  v60 = (_QWORD *)v40[1];
                  if ( !v60 )
                  {
                    LOBYTE(v37) = 1;
                    break;
                  }
                }
                else
                {
                  v60 = (_QWORD *)*v40;
                  if ( !*v40 )
                  {
                    LOBYTE(v37) = 0;
                    break;
                  }
                }
                v40 = v60;
              }
            }
            RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v40, v37, &WPP_MAIN_CB.Reserved);
            if ( WPP_MAIN_CB.DeviceObjectExtension )
            {
              if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)CiSchedulerTimerNode )
              {
                Dope = WPP_MAIN_CB.DeviceObjectExtension->Dope;
                if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)Dope )
                {
                  v42 = 0LL;
                }
                else
                {
                  v42 = MEMORY[0xFFFFF78000000008] - (_QWORD)Dope;
                  if ( (__int64)(MEMORY[0xFFFFF78000000008] - (_QWORD)Dope) < -2000 )
                    v42 += 2000LL;
                }
                CiSchedulerTimerNode = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
                ExSetTimer(
                  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                  v42,
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
            if ( byte_1C0007290 )
              CiLogSchedulerSleep(v36);
            for ( j = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; j = 0 )
            {
              if ( !j )
                KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
              if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
              {
                v43 = MEMORY[0xFFFFF78000000008] + 2000LL;
                v44 = 0;
                v45 = 0;
                KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                n = &WPP_MAIN_CB.DeviceObjectExtension->Type;
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
                CiSchedulerTimerNode = 2LL;
                if ( WPP_MAIN_CB.DeviceObjectExtension )
                {
                  do
                  {
                    v47 = (_QWORD **)n[1];
                    v48 = n;
                    v49 = n;
                    if ( v47 )
                    {
                      n = (_QWORD *)n[1];
                      for ( m = *v47; m; m = (_QWORD *)*m )
                        n = m;
                    }
                    else
                    {
                      for ( n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL); n; n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        if ( (_QWORD *)*n == v49 )
                          break;
                        v49 = n;
                      }
                    }
                    if ( v48[3] <= v43 )
                    {
                      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v48);
                      v48[3] = 0LL;
                      if ( *((_DWORD *)v48 + 8) == 1 )
                      {
                        v44 |= 0x20u;
                        if ( *((_BYTE *)v48 + 36) )
                        {
                          v65 = (__int64)(v48 - 12);
                        }
                        else
                        {
                          v65 = (__int64)(v48 - 7);
                          if ( (v48[16] & 1) != 0 )
                            v45 = 1;
                        }
                        CiSchedulerUpdateTaskIndexPriorities(v65);
                        v66 = *(_DWORD *)(v65 + 184);
                        if ( (v66 & 2) != 0 && (*((_BYTE *)v48 + 36) || !*(_BYTE *)(v65 + 132)) )
                        {
                          *(_DWORD *)(v65 + 184) = v66 & 0xFFFFFFFD;
                          CiSchedulerSetTaskIndexThreadTag(v65, 0);
                          --CiTotalTasksBuffering;
                        }
                        if ( byte_1C0007290 )
                        {
                          if ( *((_BYTE *)v48 + 36) )
                          {
                            v82.Ptr = v65 + 144;
                            *(_QWORD *)&v82.Size = 4LL;
                            EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v82);
                          }
                          else
                          {
                            v81.Ptr = v65 + 144;
                            *(_QWORD *)&v81.Size = 4LL;
                            EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v81);
                          }
                        }
                      }
                      else
                      {
                        v44 |= 0x10u;
                      }
                    }
                  }
                  while ( n );
                  if ( v45 && CiCurrentMediaBufferingState )
                  {
                    CiCurrentMediaBufferingState = 0;
                    PoNotifyMediaBuffering(0LL);
                  }
                }
                if ( (v44 & 0x10) == 0 )
                  CiSchedulerUpdateTimer();
                WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
                if ( v45 )
                {
                  if ( byte_1C0007290 )
                  {
                    *(_QWORD *)&v83.Size = 4LL;
                    v74 = 1;
                    v83.Ptr = (ULONGLONG)&v74;
                    EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v83);
                  }
                  PoLatencySensitivityHint(4LL);
                }
                j |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v44;
                if ( (j & 0xFFFFFFDF) != 0 )
                  break;
              }
              if ( byte_1C0007290 )
                CiLogSchedulerWakeup(j);
            }
            if ( (j & 0xC) != 0 )
              goto LABEL_103;
          }
          if ( CiSchedulerInLazyMode )
          {
            CiSchedulerInLazyMode = 0;
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_f1f89d0ac8b239ac98360555d5789966_Traceguids);
          }
        }
LABEL_103:
        v3 = 0;
      }
      else
      {
        SecurityDescriptor_high = HIDWORD(WPP_MAIN_CB.SecurityDescriptor);
        if ( qword_1C0007198 )
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
        LOBYTE(v5) = 0;
        v51 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
        qword_1C0007198 = SecurityDescriptor_high + MEMORY[0xFFFFF78000000008];
        byte_1C00071A4 = 0;
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
          while ( 1 )
          {
            if ( v51[3] <= (unsigned __int64)(SecurityDescriptor_high + MEMORY[0xFFFFF78000000008]) )
            {
              v63 = (_QWORD *)v51[1];
              if ( !v63 )
              {
                LOBYTE(v5) = 1;
                break;
              }
            }
            else
            {
              v63 = (_QWORD *)*v51;
              if ( !*v51 )
              {
                LOBYTE(v5) = 0;
                break;
              }
            }
            v51 = v63;
          }
        }
        RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v51, v5, &WPP_MAIN_CB.Reserved);
        CiSchedulerUpdateTimer();
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C0007290 )
          CiLogSchedulerSleep(0LL);
        for ( j = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; j = 0 )
        {
          if ( !j )
            KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
          if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          {
            v52 = MEMORY[0xFFFFF78000000008] + 2000LL;
            v53 = 0;
            v54 = 0;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            jj = &WPP_MAIN_CB.DeviceObjectExtension->Type;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
            CiSchedulerTimerNode = 2LL;
            if ( WPP_MAIN_CB.DeviceObjectExtension )
            {
              do
              {
                v56 = (_QWORD **)jj[1];
                v57 = jj;
                v58 = jj;
                if ( v56 )
                {
                  jj = (_QWORD *)jj[1];
                  for ( ii = *v56; ii; ii = (_QWORD *)*ii )
                    jj = ii;
                }
                else
                {
                  for ( jj = (_QWORD *)(jj[2] & 0xFFFFFFFFFFFFFFFCuLL); jj; jj = (_QWORD *)(jj[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*jj == v58 )
                      break;
                    v58 = jj;
                  }
                }
                if ( v57[3] <= v52 )
                {
                  RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v57);
                  v57[3] = 0LL;
                  if ( *((_DWORD *)v57 + 8) == 1 )
                  {
                    v53 |= 0x20u;
                    if ( *((_BYTE *)v57 + 36) )
                    {
                      v70 = (__int64)(v57 - 12);
                    }
                    else
                    {
                      v70 = (__int64)(v57 - 7);
                      if ( (v57[16] & 1) != 0 )
                        v54 = 1;
                    }
                    CiSchedulerUpdateTaskIndexPriorities(v70);
                    v71 = *(_DWORD *)(v70 + 184);
                    if ( (v71 & 2) != 0 && (*((_BYTE *)v57 + 36) || !*(_BYTE *)(v70 + 132)) )
                    {
                      *(_DWORD *)(v70 + 184) = v71 & 0xFFFFFFFD;
                      CiSchedulerSetTaskIndexThreadTag(v70, 0);
                      --CiTotalTasksBuffering;
                    }
                    if ( byte_1C0007290 )
                    {
                      if ( *((_BYTE *)v57 + 36) )
                      {
                        v85.Ptr = v70 + 144;
                        *(_QWORD *)&v85.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v85);
                      }
                      else
                      {
                        v84.Ptr = v70 + 144;
                        *(_QWORD *)&v84.Size = 4LL;
                        EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v84);
                      }
                    }
                  }
                  else
                  {
                    v53 |= 0x10u;
                  }
                }
              }
              while ( jj );
              if ( v54 && CiCurrentMediaBufferingState )
              {
                CiCurrentMediaBufferingState = 0;
                PoNotifyMediaBuffering(0LL);
              }
            }
            if ( (v53 & 0x10) == 0 )
              CiSchedulerUpdateTimer();
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            if ( v54 )
            {
              if ( byte_1C0007290 )
              {
                *(_QWORD *)&v86.Size = 4LL;
                v75 = 1;
                v86.Ptr = (ULONGLONG)&v75;
                EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v86);
              }
              PoLatencySensitivityHint(4LL);
            }
            j |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v53;
            if ( (j & 0xFFFFFFDF) != 0 )
              break;
          }
          if ( byte_1C0007290 )
            CiLogSchedulerWakeup(j);
        }
        v3 = 1;
      }
    }
    else
    {
      v3 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_f1f89d0ac8b239ac98360555d5789966_Traceguids);
      if ( byte_1C0007290 )
        CiLogSchedulerSleep(5LL);
      v67 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
      if ( !v67 )
        KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
      CiSchedulerProcessDeadlines(&v77);
      j = _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v67;
    }
    if ( byte_1C0007290 )
      CiLogSchedulerWakeup(j);
    if ( (j & 8) != 0 )
      break;
    p_Reserved = v76;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_f1f89d0ac8b239ac98360555d5789966_Traceguids);
  PsTerminateSystemThread(0);
}

/*
 * XREFs of UsbhBusPnpStart @ 0x1C000C330
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAllocateTimerObject @ 0x1C000CA10 (UsbhAllocateTimerObject.c)
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhFreeTimerObject @ 0x1C0045C80 (UsbhFreeTimerObject.c)
 */

__int64 __fastcall UsbhBusPnpStart(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int16 v5; // bp
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 TimerObject; // rax
  PIRP Irp; // rax
  POOL_TYPE v10; // ecx
  PVOID PoolWithTag; // rax
  unsigned __int16 v12; // ax
  PVOID v13; // rax
  __int64 v14; // rax
  PVOID v15; // rax
  __int64 v16; // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v18; // r8
  _DWORD *v19; // r14
  _DWORD *i; // rbx
  unsigned __int8 *DeviceExtension; // rdx
  PIO_WORKITEM v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  void *v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rdx
  void *v28; // rdx
  __int64 v29; // rcx
  void *v30; // rdx
  __int64 v31; // rcx
  struct _IO_WORKITEM *v33; // rcx
  __int64 v34; // rbx
  PIO_WORKITEM *v35; // rbx
  IRP *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx

  v4 = FdoExt(DeviceObject);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids);
  v5 = 0;
  Log((_DWORD)DeviceObject, 4, 1649628242, 0, 0LL);
  v6 = v4 + 2720;
  *(_QWORD *)(v4 + 2720) = UsbhAllocateTimerObject(DeviceObject, UsbhIsrRetryTimer, 1232302674LL);
  *(_QWORD *)(v4 + 2728) = UsbhAllocateTimerObject(DeviceObject, UsbhResetIrqPipeRetryTimer, 1380545137LL);
  v7 = (_QWORD *)(v4 + 2768);
  *(_QWORD *)(v4 + 2768) = UsbhAllocateTimerObject(DeviceObject, UsbHubhInitTimeoutTimer, 1231967343LL);
  TimerObject = UsbhAllocateTimerObject(DeviceObject, UsbhInitRetryTimer, 1231966821LL);
  *(_QWORD *)(v4 + 2776) = TimerObject;
  if ( *(_QWORD *)(v4 + 2720) )
  {
    if ( *(_QWORD *)(v4 + 2728) )
    {
      if ( *v7 )
      {
        if ( TimerObject )
        {
          Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v4 + 1208) + 76LL), 0);
          if ( Irp )
          {
            v10 = ExDefaultNonPagedPoolType;
            *(_QWORD *)(v4 + 2664) = Irp;
            PoolWithTag = ExAllocatePoolWithTag(v10, 0x98uLL, 0x42554855u);
            *(_QWORD *)(v4 + 2672) = PoolWithTag;
            if ( PoolWithTag )
              memset(PoolWithTag, 0, 0x98uLL);
            if ( *(_QWORD *)(v4 + 2672) )
            {
              v12 = *(_WORD *)(v4 + 2632);
              *(_QWORD *)(v4 + 2680) = 0LL;
              if ( v12 )
              {
                v13 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v12, 0x42554855u);
                *(_QWORD *)(v4 + 2680) = v13;
                if ( v13 )
                  memset(v13, 0, *(unsigned __int16 *)(v4 + 2632));
              }
              if ( *(_QWORD *)(v4 + 2680) )
              {
                *(_QWORD *)(v4 + 3056) = 0LL;
                if ( *(_BYTE *)(FdoExt(DeviceObject) + 2938) )
                {
                  v14 = FdoExt(DeviceObject);
                  v15 = ExAllocatePoolWithTag(
                          ExDefaultNonPagedPoolType,
                          2928LL * *(unsigned __int8 *)(v14 + 2938),
                          0x42554855u);
                  *(_QWORD *)(v4 + 3056) = v15;
                  if ( v15 )
                  {
                    v16 = FdoExt(DeviceObject);
                    memset(*(void **)(v4 + 3056), 0, 2928LL * *(unsigned __int8 *)(v16 + 2938));
                  }
                }
                if ( *(_QWORD *)(v4 + 3056) )
                {
                  *(_DWORD *)(v4 + 3052) = *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938);
                  WorkItem = IoAllocateWorkItem(DeviceObject);
                  *(_QWORD *)(v4 + 1184) = WorkItem;
                  if ( WorkItem )
                  {
                    v19 = *(_DWORD **)(v4 + 3056);
                    for ( i = v19 + 7; ; i += 732 )
                    {
                      if ( !DeviceObject )
                        UsbhTrapFatal_Dbg(0LL, 0LL, v18, 0LL);
                      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
                      if ( !DeviceExtension )
                        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v18, 0LL);
                      if ( *(_DWORD *)DeviceExtension != 541218120 )
                        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, v18, 0LL);
                      if ( v5 >= DeviceExtension[2938] )
                      {
                        UsbhDispatch_BusEvent(DeviceObject, a2, 4LL);
                        Log((_DWORD)DeviceObject, 4, 1045648466, 0, 0LL);
                        return 0LL;
                      }
                      *v19 = 1146120296;
                      *(i - 1) = 2017613128;
                      *(_QWORD *)(i + 3) = i - 1;
                      ++v5;
                      *i = 2;
                      *(_QWORD *)(i + 1) = DeviceObject;
                      i[27] = 1734964085;
                      i[15] = 1734964085;
                      i[11] = 1734964085;
                      i[7] = 1734964085;
                      i[18] = 1734964085;
                      i[21] = 1734964085;
                      i[24] = 1734964085;
                      i[29] = 1734964085;
                      i[43] = 2017613128;
                      *(_QWORD *)(i + 47) = i + 43;
                      i[44] = 7;
                      *(_QWORD *)(i + 45) = DeviceObject;
                      i[71] = 1734964085;
                      i[59] = 1734964085;
                      i[55] = 1734964085;
                      i[51] = 1734964085;
                      i[62] = 1734964085;
                      i[65] = 1734964085;
                      i[68] = 1734964085;
                      i[73] = 1734964085;
                      *(_QWORD *)(i - 3) = DeviceObject;
                      *((_WORD *)i - 12) = v5;
                      i[93] = 0;
                      KeInitializeTimer((PKTIMER)(i + 131));
                      KeInitializeDpc((PRKDPC)(i + 147), UsbhResetPortTimerDpc, v19);
                      KeInitializeEvent((PRKEVENT)(i + 185), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 597), NotificationEvent, 0);
                      i[603] = 1;
                      i[596] = 0;
                      KeInitializeSpinLock((PKSPIN_LOCK)(i + 605));
                      v22 = IoAllocateWorkItem(DeviceObject);
                      *(_QWORD *)(i + 607) = v22;
                      if ( !v22 )
                        break;
                      v24 = *((unsigned __int16 *)i - 12);
                      if ( (UsbhLogMask & 0x200) != 0 )
                      {
                        v25 = DeviceObject->DeviceExtension;
                        if ( v25 )
                        {
                          v26 = *((_QWORD *)v25 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
                          *(_DWORD *)v26 = 1129344617;
                          *(_QWORD *)(v26 + 8) = 0LL;
                          *(_QWORD *)(v26 + 16) = 0LL;
                          *(_QWORD *)(v26 + 24) = v24;
                        }
                      }
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          52,
                          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                          *((_WORD *)i - 12));
                      v27 = DeviceObject->DeviceExtension;
                      if ( !v27 )
                        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v24, v23);
                      if ( *v27 != 541218120 )
                        UsbhTrapFatal_Dbg(DeviceObject, v27, v24, v23);
                      KeInitializeEvent((PRKEVENT)(i + 123), SynchronizationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 609), SynchronizationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 111), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 117), NotificationEvent, 0);
                      KeInitializeEvent((PRKEVENT)(i + 193), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 171), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 179), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 199), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 715), SynchronizationEvent, 1u);
                      i[167] = 0;
                      i[208] = 32;
                      KeInitializeSpinLock((PKSPIN_LOCK)(i + 103));
                      i[105] = 0;
                      *(_QWORD *)(i + 109) = i + 107;
                      *(_QWORD *)(i + 107) = i + 107;
                      v18 = *((unsigned __int16 *)i - 12);
                      i[712] = 0;
                      *((_BYTE *)i + 2811) = 0;
                      *(i - 4) = 1;
                      if ( (UsbhLogMask & 0x8000) != 0 )
                      {
                        v28 = DeviceObject->DeviceExtension;
                        if ( v28 )
                        {
                          v29 = *((_QWORD *)v28 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
                          *(_DWORD *)v29 = 1279684201;
                          *(_QWORD *)(v29 + 8) = 0LL;
                          *(_QWORD *)(v29 + 16) = 0LL;
                          *(_QWORD *)(v29 + 24) = v18;
                        }
                      }
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          12,
                          (__int64)&WPP_71d4df441bc53643947fc1224878c183_Traceguids,
                          *((_WORD *)i - 12));
                      if ( (UsbhLogMask & 0x2000) != 0 )
                      {
                        v30 = DeviceObject->DeviceExtension;
                        if ( v30 )
                        {
                          v31 = *((_QWORD *)v30 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
                          *(_DWORD *)v31 = 1416195689;
                          *(_QWORD *)(v31 + 16) = i + 679;
                          *(_QWORD *)(v31 + 24) = UsbhPindicatorTimer;
                          *(_QWORD *)(v31 + 8) = 0LL;
                        }
                      }
                      *(_QWORD *)(i + 679) = 1332899156LL;
                      *(_QWORD *)(i + 691) = UsbhPindicatorTimer;
                      v19 += 732;
                      i[681] = 0;
                      i[697] = 1349086820;
                      i[699] = 4;
                      i[701] = 500;
                    }
                    v6 = v4 + 2720;
                    v5 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v33 = *(struct _IO_WORKITEM **)(v4 + 1184);
  if ( v33 )
  {
    IoFreeWorkItem(v33);
    *(_QWORD *)(v4 + 1184) = 0LL;
  }
  v34 = *(_QWORD *)(v4 + 3056);
  if ( v34 )
  {
    v35 = (PIO_WORKITEM *)(v34 + 2456);
    while ( v5 < *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
    {
      if ( *v35 )
      {
        IoFreeWorkItem(*v35);
        *v35 = 0LL;
      }
      v35 += 366;
      ++v5;
    }
    v7 = (_QWORD *)(v4 + 2768);
  }
  UsbhFreeTimerObject(DeviceObject, v6);
  UsbhFreeTimerObject(DeviceObject, v4 + 2728);
  UsbhFreeTimerObject(DeviceObject, v7);
  UsbhFreeTimerObject(DeviceObject, v4 + 2776);
  v36 = *(IRP **)(v4 + 2664);
  if ( v36 )
  {
    IoFreeIrp(v36);
    *(_QWORD *)(v4 + 2664) = 0LL;
  }
  v37 = *(void **)(v4 + 2672);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(v4 + 2672) = 0LL;
  }
  v38 = *(void **)(v4 + 2680);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(v4 + 2680) = 0LL;
  }
  v39 = *(void **)(v4 + 3056);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(v4 + 3056) = 0LL;
  }
  return 3221225626LL;
}

/*
 * XREFs of UsbhBusPnpStart @ 0x1C001CED0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 *     UsbhAllocateTimerObject @ 0x1C001D5B0 (UsbhAllocateTimerObject.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhFreeTimerObject @ 0x1C00458D8 (UsbhFreeTimerObject.c)
 */

__int64 __fastcall UsbhBusPnpStart(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  unsigned __int16 v7; // bp
  _DWORD *v8; // r14
  _QWORD *v9; // r12
  __int64 TimerObject; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PIRP Irp; // rax
  POOL_TYPE v15; // ecx
  PVOID PoolWithTag; // rax
  unsigned __int16 v17; // ax
  PVOID v18; // rax
  _DWORD *v19; // rax
  PVOID v20; // rax
  _DWORD *v21; // rax
  PIO_WORKITEM WorkItem; // rax
  _DWORD *v23; // r14
  _DWORD *i; // rbx
  unsigned __int8 *DeviceExtension; // rdx
  PIO_WORKITEM v26; // rax
  __int64 v27; // r8
  void *v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  void *v31; // rdx
  __int64 v32; // rcx
  void *v33; // rdx
  __int64 v34; // rcx
  struct _IO_WORKITEM *v36; // rcx
  __int64 v37; // rbx
  PIO_WORKITEM *v38; // rbx
  IRP *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx

  v6 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
  v7 = 0;
  Log((__int64)DeviceObject, 4, 1649628242, 0LL, 0LL);
  v8 = v6 + 680;
  *((_QWORD *)v6 + 340) = UsbhAllocateTimerObject(DeviceObject, UsbhIsrRetryTimer, 1232302674LL);
  *((_QWORD *)v6 + 341) = UsbhAllocateTimerObject(DeviceObject, UsbhResetIrqPipeRetryTimer, 1380545137LL);
  v9 = v6 + 692;
  *((_QWORD *)v6 + 346) = UsbhAllocateTimerObject(DeviceObject, UsbHubhInitTimeoutTimer, 1231967343LL);
  TimerObject = UsbhAllocateTimerObject(DeviceObject, UsbhInitRetryTimer, 1231966821LL);
  *((_QWORD *)v6 + 347) = TimerObject;
  if ( *((_QWORD *)v6 + 340) )
  {
    if ( *((_QWORD *)v6 + 341) )
    {
      if ( *v9 )
      {
        if ( TimerObject )
        {
          Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v6 + 151) + 76LL), 0);
          if ( Irp )
          {
            v15 = ExDefaultNonPagedPoolType;
            *((_QWORD *)v6 + 333) = Irp;
            PoolWithTag = ExAllocatePoolWithTag(v15, 0x98uLL, 0x42554855u);
            *((_QWORD *)v6 + 334) = PoolWithTag;
            if ( PoolWithTag )
              memset(PoolWithTag, 0, 0x98uLL);
            if ( *((_QWORD *)v6 + 334) )
            {
              v17 = *((_WORD *)v6 + 1316);
              *((_QWORD *)v6 + 335) = 0LL;
              if ( v17 )
              {
                v18 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v17, 0x42554855u);
                *((_QWORD *)v6 + 335) = v18;
                if ( v18 )
                  memset(v18, 0, *((unsigned __int16 *)v6 + 1316));
              }
              if ( *((_QWORD *)v6 + 335) )
              {
                *((_QWORD *)v6 + 382) = 0LL;
                if ( *((_BYTE *)FdoExt((__int64)DeviceObject, v11, v12, v13) + 2938) )
                {
                  v19 = FdoExt((__int64)DeviceObject, v11, v12, v13);
                  v20 = ExAllocatePoolWithTag(
                          ExDefaultNonPagedPoolType,
                          2928LL * *((unsigned __int8 *)v19 + 2938),
                          0x42554855u);
                  *((_QWORD *)v6 + 382) = v20;
                  if ( v20 )
                  {
                    v21 = FdoExt((__int64)DeviceObject, v11, v12, v13);
                    memset(*((void **)v6 + 382), 0, 2928LL * *((unsigned __int8 *)v21 + 2938));
                  }
                }
                if ( *((_QWORD *)v6 + 382) )
                {
                  v6[763] = *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v11, v12, v13) + 2938);
                  WorkItem = IoAllocateWorkItem(DeviceObject);
                  *((_QWORD *)v6 + 148) = WorkItem;
                  if ( WorkItem )
                  {
                    v23 = (_DWORD *)*((_QWORD *)v6 + 382);
                    for ( i = v23 + 7; ; i += 732 )
                    {
                      if ( !DeviceObject )
                        UsbhTrapFatal_Dbg(0LL, 0LL, v12, 0LL);
                      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
                      if ( !DeviceExtension )
                        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v12, 0LL);
                      if ( *(_DWORD *)DeviceExtension != 541218120 )
                        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, v12, 0LL);
                      if ( v7 >= DeviceExtension[2938] )
                      {
                        UsbhDispatch_BusEvent(DeviceObject, a2, 4LL, 0LL);
                        Log((__int64)DeviceObject, 4, 1045648466, 0LL, 0LL);
                        return 0LL;
                      }
                      *v23 = 1146120296;
                      *(i - 1) = 2017613128;
                      *(_QWORD *)(i + 3) = i - 1;
                      ++v7;
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
                      *((_WORD *)i - 12) = v7;
                      i[93] = 0;
                      KeInitializeTimer((PKTIMER)(i + 131));
                      KeInitializeDpc((PRKDPC)(i + 147), UsbhResetPortTimerDpc, v23);
                      KeInitializeEvent((PRKEVENT)(i + 185), NotificationEvent, 1u);
                      KeInitializeEvent((PRKEVENT)(i + 597), NotificationEvent, 0);
                      i[603] = 1;
                      i[596] = 0;
                      KeInitializeSpinLock((PKSPIN_LOCK)(i + 605));
                      v26 = IoAllocateWorkItem(DeviceObject);
                      *(_QWORD *)(i + 607) = v26;
                      if ( !v26 )
                        break;
                      v27 = *((unsigned __int16 *)i - 12);
                      if ( (UsbhLogMask & 0x200) != 0 )
                      {
                        v28 = DeviceObject->DeviceExtension;
                        if ( v28 )
                        {
                          v29 = *((_QWORD *)v28 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
                          *(_DWORD *)v29 = 1129344617;
                          *(_QWORD *)(v29 + 8) = 0LL;
                          *(_QWORD *)(v29 + 16) = 0LL;
                          *(_QWORD *)(v29 + 24) = v27;
                        }
                      }
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          52,
                          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
                          *((_WORD *)i - 12));
                      v30 = DeviceObject->DeviceExtension;
                      if ( !v30 )
                        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v27, v13);
                      if ( *v30 != 541218120 )
                        UsbhTrapFatal_Dbg(DeviceObject, v30, v27, v13);
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
                      v12 = *((unsigned __int16 *)i - 12);
                      i[712] = 0;
                      *((_BYTE *)i + 2811) = 0;
                      *(i - 4) = 1;
                      if ( (UsbhLogMask & 0x8000) != 0 )
                      {
                        v31 = DeviceObject->DeviceExtension;
                        if ( v31 )
                        {
                          v32 = *((_QWORD *)v31 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
                          *(_DWORD *)v32 = 1279684201;
                          *(_QWORD *)(v32 + 8) = 0LL;
                          *(_QWORD *)(v32 + 16) = 0LL;
                          *(_QWORD *)(v32 + 24) = v12;
                        }
                      }
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          12,
                          (__int64)&WPP_2b88037d15597a26bc3d8f7fc80400b3_Traceguids,
                          *((_WORD *)i - 12));
                      if ( (UsbhLogMask & 0x2000) != 0 )
                      {
                        v33 = DeviceObject->DeviceExtension;
                        if ( v33 )
                        {
                          v34 = *((_QWORD *)v33 + 111)
                              + 32LL
                              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
                          *(_DWORD *)v34 = 1416195689;
                          *(_QWORD *)(v34 + 16) = i + 679;
                          *(_QWORD *)(v34 + 24) = UsbhPindicatorTimer;
                          *(_QWORD *)(v34 + 8) = 0LL;
                        }
                      }
                      *(_QWORD *)(i + 679) = 1332899156LL;
                      *(_QWORD *)(i + 691) = UsbhPindicatorTimer;
                      v23 += 732;
                      i[681] = 0;
                      i[697] = 1349086820;
                      i[699] = 4;
                      i[701] = 500;
                    }
                    v8 = v6 + 680;
                    v7 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v36 = (struct _IO_WORKITEM *)*((_QWORD *)v6 + 148);
  if ( v36 )
  {
    IoFreeWorkItem(v36);
    *((_QWORD *)v6 + 148) = 0LL;
  }
  v37 = *((_QWORD *)v6 + 382);
  if ( v37 )
  {
    v38 = (PIO_WORKITEM *)(v37 + 2456);
    while ( v7 < *((unsigned __int8 *)FdoExt((__int64)DeviceObject, v11, v12, v13) + 2938) )
    {
      if ( *v38 )
      {
        IoFreeWorkItem(*v38);
        *v38 = 0LL;
      }
      v38 += 366;
      ++v7;
    }
    v9 = v6 + 692;
  }
  UsbhFreeTimerObject(DeviceObject, v8);
  UsbhFreeTimerObject(DeviceObject, v6 + 682);
  UsbhFreeTimerObject(DeviceObject, v9);
  UsbhFreeTimerObject(DeviceObject, v6 + 694);
  v39 = (IRP *)*((_QWORD *)v6 + 333);
  if ( v39 )
  {
    IoFreeIrp(v39);
    *((_QWORD *)v6 + 333) = 0LL;
  }
  v40 = (void *)*((_QWORD *)v6 + 334);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *((_QWORD *)v6 + 334) = 0LL;
  }
  v41 = (void *)*((_QWORD *)v6 + 335);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *((_QWORD *)v6 + 335) = 0LL;
  }
  v42 = (void *)*((_QWORD *)v6 + 382);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *((_QWORD *)v6 + 382) = 0LL;
  }
  return 3221225626LL;
}

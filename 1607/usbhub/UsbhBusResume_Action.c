/*
 * XREFs of UsbhBusResume_Action @ 0x1C0011110
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C000D21C (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C000D410 (UsbhRefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhPostInterrupt @ 0x1C0024290 (UsbhPostInterrupt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *DeviceExtension; // rbx
  __int64 v7; // r9
  unsigned __int16 i; // si
  unsigned __int8 *v9; // rdx
  void *v10; // r8
  void *v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  void *v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // r15
  void *v29; // rdx
  __int64 v30; // rcx
  KIRQL v31; // al
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v43; // rbx
  KIRQL v44; // [rsp+68h] [rbp-40h]

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( DeviceExtension->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  Log((_DWORD)DeviceObject, 2048, 1919251262, 0, 0LL);
  LODWORD(DeviceExtension[110].Header.WaitListHead.Blink) = 0;
  KeResetEvent(DeviceExtension + 112);
  DeviceExtension[113].Header.LockNV = 0;
  for ( i = 1; ; ++i )
  {
    v9 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    v10 = &WPP_7750967c46a832f629b3446543f02792_Traceguids;
    if ( !v9 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v9, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
    if ( i > v9[2938] )
      break;
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v9, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        59,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        i);
      v10 = &WPP_7750967c46a832f629b3446543f02792_Traceguids;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v11 = DeviceObject->DeviceExtension;
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_DWORD *)v12 = 858801488;
        *(_QWORD *)(v12 + 24) = i;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = DeviceObject->DeviceExtension;
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = 1413771367;
        *(_QWORD *)(v14 + 16) = i;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v15 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v15 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v15, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
      if ( i <= v15[2938] )
      {
        v16 = *((_QWORD *)v15 + 382);
        if ( v16 )
        {
          v17 = v16 + 2928LL * (i - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v18 = *((_QWORD *)v15 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
            *(_DWORD *)v18 = 1044672615;
            *(_QWORD *)(v18 + 16) = i;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 24) = v17;
          }
          if ( v17 )
          {
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v17, 3, a2, 0LL, 0, 0LL, 0LL);
            v10 = &WPP_7750967c46a832f629b3446543f02792_Traceguids;
          }
        }
      }
    }
    v19 = DeviceObject->DeviceExtension;
    if ( !v19 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
    if ( *v19 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v19, &WPP_7750967c46a832f629b3446543f02792_Traceguids, v7);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        56,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v20 = DeviceObject->DeviceExtension;
      if ( v20 )
      {
        v21 = *((_QWORD *)v20 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
        *(_DWORD *)v21 = 825247056;
        *(_QWORD *)(v21 + 24) = i;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v22 = DeviceObject->DeviceExtension;
      if ( v22 )
      {
        v23 = *((_QWORD *)v22 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
        *(_DWORD *)v23 = 1413771367;
        *(_QWORD *)(v23 + 16) = i;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v24 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v24 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v10, v7);
      if ( *(_DWORD *)v24 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v24, v10, v7);
      if ( i <= v24[2938] )
      {
        v25 = *((_QWORD *)v24 + 382);
        if ( v25 )
        {
          v26 = v25 + 2928LL * (i - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v27 = *((_QWORD *)v24 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
            *(_DWORD *)v27 = 1044672615;
            *(_QWORD *)(v27 + 16) = i;
            *(_QWORD *)(v27 + 8) = 0LL;
            *(_QWORD *)(v27 + 24) = v26;
          }
          if ( v26 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v26, 1, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v28 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v29 = DeviceObject->DeviceExtension;
      if ( v29 )
      {
        v30 = *((_QWORD *)v29 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
        *(_DWORD *)v30 = 1329877100;
        *(_QWORD *)(v30 + 16) = i;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 24) = 1382380368LL;
      }
    }
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v33 = (unsigned int)UsbhLogMask;
    v44 = v31;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v34 = DeviceObject->DeviceExtension;
      if ( v34 )
      {
        v35 = *((_QWORD *)v34 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v34 + 220) & *((_DWORD *)v34 + 221));
        *(_DWORD *)v35 = 1413771367;
        *(_QWORD *)(v35 + 16) = i;
        *(_QWORD *)(v35 + 8) = 0LL;
        *(_QWORD *)(v35 + 24) = 0LL;
        v33 = (unsigned int)UsbhLogMask;
      }
    }
    if ( i )
    {
      v36 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v36 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v32, v33);
      if ( *(_DWORD *)v36 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v36, v32, v33);
      if ( i <= v36[2938] )
      {
        v37 = *((_QWORD *)v36 + 382);
        if ( v37 )
        {
          v38 = v37 + 2928LL * (i - 1);
          if ( (v33 & 8) != 0 )
          {
            v37 = *((_QWORD *)v36 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
            *(_DWORD *)v37 = 1044672615;
            *(_QWORD *)(v37 + 16) = i;
            *(_QWORD *)(v37 + 8) = 0LL;
            *(_QWORD *)(v37 + 24) = v38;
          }
          if ( v38 )
          {
            v28 = *(_QWORD *)(v38 + 392);
            if ( v28 )
              v28 = UsbhRefPdo(v37, v28, 0LL, 1382380368LL);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v44);
    if ( v28 )
    {
      v43 = PdoExt(v28);
      KeWaitForSingleObject((PVOID)(v43 + 2864), Executive, 0, 0, 0LL);
      *(_DWORD *)(v43 + 1412) &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v43 + 2864), 0, 0);
      UsbhUnlatchPdo(DeviceObject, v28, 0LL, 1382380368LL);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v39 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(FdoExt(DeviceObject) + 3288), 0LL);
  Log((_DWORD)DeviceObject, 2048, 1114863917, 0, (__int64)v39);
  return UsbhDecHubBusy((__int64)DeviceObject, v40, v39, v41);
}

/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C001E7B0
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C0019360 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSyncSuspendPdoPort @ 0x1C000ABE8 (UsbhSyncSuspendPdoPort.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncBusResume @ 0x1C001C360 (UsbhSyncBusResume.c)
 *     UsbhSshResumePort @ 0x1C001EC20 (UsbhSshResumePort.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C001F018 (UsbhDisarmHubWakeOnConnect.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

void __fastcall UsbhSshResumeDownstream(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  struct _KEVENT *v5; // r15
  struct _KEVENT *v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // bp
  unsigned __int16 i; // di
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v14; // rcx
  unsigned __int8 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 *v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int PortState; // eax
  char v34; // r10
  int v35; // r11d
  struct _KEVENT *v36; // rcx
  _DWORD *v37; // rax
  unsigned int v38; // eax
  int v39; // edx
  int v40; // [rsp+48h] [rbp-50h]
  int v41; // [rsp+50h] [rbp-48h]
  int v42; // [rsp+54h] [rbp-44h] BYREF
  int v43[16]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a3;
  v5 = 0LL;
  v41 = 0;
  v8 = (struct _KEVENT *)FdoExt((__int64)DeviceObject, a2, a3, a4);
  Log((__int64)DeviceObject, 0x10000, 1383285870, a2, 0LL);
  v11 = 1;
  for ( i = 1; ; ++i )
  {
    if ( !DeviceObject )
      UsbhTrapFatal_Dbg(0LL, 0LL, v9, v10);
    DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL, v9, v10);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, v9, v10);
    if ( i > DeviceExtension[2938] )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v14 = *((_QWORD *)DeviceExtension + 111)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v14 = 1413771367;
      *(_QWORD *)(v14 + 16) = i;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    if ( i )
    {
      v15 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v15 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v9, v10);
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v15, v9, v10);
      if ( i <= v15[2938] )
      {
        v16 = *((_QWORD *)v15 + 382);
        if ( v16 )
        {
          v9 = v16 + 2928LL * (i - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v17 = *((_QWORD *)v15 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
            *(_DWORD *)v17 = 1044672615;
            *(_QWORD *)(v17 + 16) = i;
            *(_QWORD *)(v17 + 8) = 0LL;
            *(_QWORD *)(v17 + 24) = v9;
          }
          if ( v9 )
          {
            v18 = *(_QWORD *)(v9 + 392);
            if ( v18 )
            {
              v5 = (struct _KEVENT *)PdoExt(v18, (__int64)v15, v9, v10);
              KeWaitForSingleObject(&v5[121], Executive, 0, 0, 0LL);
              if ( (HIDWORD(v5[58].Header.WaitListHead.Blink) & 0x4000000) != 0 )
              {
                PortState = UsbhQueryPortState((__int64)DeviceObject, i, (__int64)&v42, v43);
                Log((__int64)DeviceObject, 0x10000, 1397965875, PortState, (unsigned __int16)v42);
                if ( v35 >= 0 && (v34 & 2) == 0 )
                {
                  HIDWORD(v5[58].Header.WaitListHead.Blink) |= 0x3000000u;
                  v36 = v5 + 120;
                  if ( (v34 & 1) != 0 )
                    KeSetEvent(v36, 0, 0);
                  else
                    KeResetEvent(v36);
                }
              }
              KeSetEvent(v5 + 121, 0, 0);
            }
          }
        }
      }
    }
  }
  if ( v4 == 1 )
    UsbhSyncBusResume(DeviceObject, a2, v9, v10);
  UsbhDisarmHubWakeOnConnect(DeviceObject);
  while ( 1 )
  {
    v21 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v21 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL, v19, v20);
    if ( *(_DWORD *)v21 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v21, v19, v20);
    if ( v11 > v21[2938] )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v22 = *((_QWORD *)v21 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
      *(_DWORD *)v22 = 1413771367;
      *(_QWORD *)(v22 + 16) = v11;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    if ( v11 )
    {
      v23 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v23 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v19, v20);
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v23, v19, v20);
      if ( v11 <= v23[2938] )
      {
        v24 = *((_QWORD *)v23 + 382);
        if ( v24 )
        {
          v25 = v24 + 2928LL * (v11 - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v26 = *((_QWORD *)v23 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
            *(_DWORD *)v26 = 1044672615;
            *(_QWORD *)(v26 + 16) = v11;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 24) = v25;
          }
          if ( v25 )
          {
            v27 = *(_QWORD *)(v25 + 392);
            if ( !v27
              || (v5 = (struct _KEVENT *)PdoExt(*(_QWORD *)(v25 + 392), (__int64)v23, v19, v20),
                  v41 = PdoExt(v27, v30, v31, v32)[282],
                  (HIBYTE(v5[58].Header.WaitListHead.Blink) & 1) == 0) )
            {
              v28 = UsbhSshResumePort(DeviceObject, a2, v25);
              v29 = v28;
              if ( v28 >= 0 && v27 && (HIDWORD(v5[58].Header.WaitListHead.Blink) & 0x8004) == 0 && v41 == 4 )
              {
                *(_DWORD *)(v25 + 2408) |= 2u;
                v37 = PdoExt(v27, (unsigned int)v28, v19, v20);
                v38 = UsbhSyncSuspendPdoPort((__int64)(v37 + 236), v27, 0);
                *(_DWORD *)(v25 + 2408) &= ~2u;
                v29 = v38;
              }
              if ( (v29 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v29) )
              {
                LOBYTE(v40) = 0;
                UsbhException((int)DeviceObject, v11, 128, 0, 0, v39, 0, usbfile_sshub_c, 2430, v40);
              }
            }
          }
        }
      }
    }
    ++v11;
  }
  if ( v4 == 1 )
  {
    Usbh_SSH_Event(DeviceObject, 7u, a2, v20);
    UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE);
    KeSetEvent(v8 + 141, 0, 0);
    UsbhEnableTimerObject(
      (__int64)DeviceObject,
      (__int64)&v8[133].Header.WaitListHead,
      (unsigned int)v8[219].Header.Lock,
      0LL,
      a2,
      0x77485353u);
  }
}

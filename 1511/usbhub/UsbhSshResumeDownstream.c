/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C000AA90
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C001B8F0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001BC50 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00564B4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSshResumePort @ 0x1C000AF00 (UsbhSshResumePort.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhSyncBusResume @ 0x1C0021708 (UsbhSyncBusResume.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0025B2C (UsbhDisarmHubWakeOnConnect.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r15
  struct _KEVENT *v7; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // bp
  unsigned __int16 i; // di
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // edx
  int PortState; // eax
  char v30; // r10
  int v31; // r11d
  struct _KEVENT *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+50h] [rbp-48h]
  unsigned __int16 v38; // [rsp+54h] [rbp-44h]

  v4 = 0LL;
  v37 = 0;
  v7 = (struct _KEVENT *)FdoExt(a1);
  Log(a1, 0x10000, 1383285870, a2, 0LL);
  v10 = 1;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v8, v9);
    v12 = *(_QWORD *)(a1 + 64);
    if ( !v12 )
      UsbhTrapFatal_Dbg(a1, 0LL, v8, v9);
    if ( *(_DWORD *)v12 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v12, v8, v9);
    if ( i > *(unsigned __int8 *)(v12 + 2938) )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1413771367;
      *(_QWORD *)(v13 + 16) = i;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    if ( i )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( !v14 )
        UsbhTrapFatal_Dbg(a1, 0LL, v8, v9);
      if ( *(_DWORD *)v14 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v14, v8, v9);
      if ( i <= *(unsigned __int8 *)(v14 + 2938) )
      {
        v15 = *(_QWORD *)(v14 + 3056);
        if ( v15 )
        {
          v8 = v15 + 2928LL * (i - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v16 = *(_QWORD *)(v14 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
            *(_DWORD *)v16 = 1044672615;
            *(_QWORD *)(v16 + 16) = i;
            *(_QWORD *)(v16 + 8) = 0LL;
            *(_QWORD *)(v16 + 24) = v8;
          }
          if ( v8 )
          {
            v17 = *(_QWORD *)(v8 + 392);
            if ( v17 )
            {
              v4 = PdoExt(v17);
              KeWaitForSingleObject((PVOID)(v4 + 2912), Executive, 0, 0, 0LL);
              if ( (*(_DWORD *)(v4 + 1412) & 0x4000000) != 0 )
              {
                PortState = UsbhQueryPortState(a1);
                Log(a1, 0x10000, 1397965875, PortState, v38);
                if ( v31 >= 0 && (v30 & 2) == 0 )
                {
                  *(_DWORD *)(v4 + 1412) |= 0x3000000u;
                  v32 = (struct _KEVENT *)(v4 + 2888);
                  if ( (v30 & 1) != 0 )
                    KeSetEvent(v32, 0, 0);
                  else
                    KeResetEvent(v32);
                }
              }
              KeSetEvent((PRKEVENT)(v4 + 2912), 0, 0);
            }
          }
        }
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(a1, a2);
  UsbhDisarmHubWakeOnConnect(a1);
  while ( 1 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( !v20 )
      UsbhTrapFatal_Dbg(a1, 0LL, v18, v19);
    if ( *(_DWORD *)v20 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v20, v18, v19);
    result = *(unsigned __int8 *)(v20 + 2938);
    if ( v10 > (unsigned __int16)result )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v22 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v22 = 1413771367;
      *(_QWORD *)(v22 + 16) = v10;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    if ( v10 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( !v23 )
        UsbhTrapFatal_Dbg(a1, 0LL, v18, v19);
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v23, v18, v19);
      if ( v10 <= *(unsigned __int8 *)(v23 + 2938) )
      {
        v24 = *(_QWORD *)(v23 + 3056);
        if ( v24 )
        {
          v25 = v24 + 2928LL * (v10 - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v26 = *(_QWORD *)(v23 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
            *(_DWORD *)v26 = 1044672615;
            *(_QWORD *)(v26 + 16) = v10;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 24) = v25;
          }
          if ( v25 )
          {
            v27 = *(_QWORD *)(v25 + 392);
            if ( !v27
              || (v4 = PdoExt(*(_QWORD *)(v25 + 392)),
                  v37 = *(_DWORD *)(PdoExt(v27) + 1128),
                  (*(_BYTE *)(v4 + 1415) & 1) == 0) )
            {
              v28 = UsbhSshResumePort(a1, a2, v25);
              if ( v28 >= 0 && v27 && (*(_DWORD *)(v4 + 1412) & 0x8004) == 0 && v37 == 4 )
              {
                *(_DWORD *)(v25 + 2408) |= 2u;
                v33 = PdoExt(v27);
                v34 = UsbhSyncSuspendPdoPort(v33 + 944, v27, 0LL);
                *(_DWORD *)(v25 + 2408) &= ~2u;
                v28 = v34;
              }
              if ( (v28 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v28) )
              {
                LOBYTE(v36) = 0;
                UsbhException(a1, v10, 128, 0, 0, v35, 0, usbfile_sshub_c, 2436, v36);
              }
            }
          }
        }
      }
    }
    ++v10;
  }
  if ( a3 == 1 )
  {
    Usbh_SSH_Event(a1, 7LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    KeSetEvent(v7 + 141, 0, 0);
    return UsbhEnableTimerObject(a1, (int)v7 + 3200, v7[219].Header.LockNV, 0, a2, 2001228627);
  }
  return result;
}

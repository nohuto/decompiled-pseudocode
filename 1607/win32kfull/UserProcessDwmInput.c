/*
 * XREFs of UserProcessDwmInput @ 0x1C00E0620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C00E0E14 (-GetDITWakeReason@@YAHPEAK@Z.c)
 *     ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C00E0E48 (-DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     DitClose @ 0x1C01D68C0 (DitClose.c)
 *     DitOpen @ 0x1C01D692C (DitOpen.c)
 *     DitStartRead @ 0x1C01D69E4 (DitStartRead.c)
 *     DitStopRead @ 0x1C01D6A50 (DitStopRead.c)
 *     DitTouchInject @ 0x1C01D6B0C (DitTouchInject.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C0223944 (xxxDitCompositionInputSinkLuidFromPoint.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C0228E54 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     ProcessHidInputViaRim @ 0x1C0229C44 (ProcessHidInputViaRim.c)
 *     xxxRouteTouchpadInertiaToMT @ 0x1C022A464 (xxxRouteTouchpadInertiaToMT.c)
 */

__int64 __fastcall UserProcessDwmInput(struct DIT_INFO *a1)
{
  unsigned int v2; // esi
  char v3; // r14
  unsigned int v4; // eax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  PalmRejection *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PalmRejection *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _KEVENT *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 **v31; // rdx
  __int64 v32; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-40h]
  int v36; // [rsp+28h] [rbp-38h]
  _QWORD v37[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v38; // [rsp+50h] [rbp-10h]
  unsigned int v39; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp+48h] BYREF
  char v41; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0;
  *((_DWORD *)a1 + 14) = 0;
  v3 = 1;
  while ( !gbDITUseIocp )
  {
    LOBYTE(v36) = 1;
    LOBYTE(BugCheckParameter4) = 1;
    v4 = ObWaitForMultipleObjects(
           *((unsigned int *)a1 + 12),
           *((_QWORD *)a1 + 4),
           0LL,
           1LL,
           BugCheckParameter4,
           v36,
           0LL);
    v2 = v4;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v2 = 0;
LABEL_113:
        *((_DWORD *)a1 + 14) = 1;
        return v2;
      }
      if ( v4 != 2 )
      {
        if ( v4 != 3 )
        {
          if ( v4 != 4 )
          {
            if ( v4 != 192 )
            {
              v5 = v4 == 257;
              goto LABEL_41;
            }
LABEL_111:
            EtwTraceDitTerminated();
            return v2;
          }
          goto LABEL_102;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !(unsigned int)GetDITWakeReason(&v39) )
              goto LABEL_109;
            if ( v39 > 0x20 )
              break;
            switch ( v39 )
            {
              case 0x20u:
                DitTouchInject();
                break;
              case 1u:
                DitOpen();
                break;
              case 2u:
                DitClose();
                break;
              case 4u:
                DitStartRead();
                break;
              case 8u:
                DitStopRead();
                break;
              case 0x10u:
                EnterCrit(0LL, 1LL);
                goto LABEL_18;
            }
          }
          switch ( v39 )
          {
            case 0x40u:
              ProcessQueuedMouseEvents();
              break;
            case 0x80u:
              xxxDitCompositionInputSinkLuidFromPoint();
              break;
            case 0x100u:
              xxxRouteTouchpadInertiaToMT();
              break;
            case 0x200u:
              EnterCrit(0LL, 1LL);
              PalmRejection::DispatchBufferedInputFrames(v8);
LABEL_18:
              UserSessionSwitchLeaveCrit(v7, v6);
              break;
          }
        }
      }
      DITExecuteQueuedInputCompletions(a1);
    }
    else
    {
      v3 = 0;
      v2 = 0;
    }
LABEL_109:
    if ( !v3 )
      return v2;
  }
  if ( gbDITResetEventAlreadySignaled )
    return v2;
  if ( gbDITMmcssEventAlreadySignaled )
    goto LABEL_113;
  DITExecuteQueuedInputCompletions(a1);
  LOBYTE(v36) = 1;
  v9 = ZwRemoveIoCompletionEx(ghDITIocp, v37, 1LL, &v41, 0LL, v36);
  v2 = v9;
  if ( !v9 )
  {
    if ( v37[1] != 1LL )
    {
      EnterDeviceInfoListCrit_(v9);
      v28 = v37[0];
      if ( v37[0] )
      {
        --*(_DWORD *)(v37[0] + 312LL);
        v29 = (__int64 *)(v28 + 104);
        if ( (__int64 *)*v29 == v29 )
        {
          *(_OWORD *)(v28 + 168) = v38;
          v30 = gpDitInfo + 64;
          v31 = *(__int64 ***)(gpDitInfo + 72);
          if ( *v31 != (__int64 *)(gpDitInfo + 64) )
            __fastfail(3u);
          *v29 = v30;
          v29[1] = (__int64)v31;
          *v31 = v29;
          *(_QWORD *)(v30 + 8) = v29;
        }
        LeaveDeviceInfoListCrit_();
        DITExecuteQueuedInputCompletions(a1);
        EnterDeviceInfoListCrit_(v32);
      }
      LeaveDeviceInfoListCrit_();
      goto LABEL_109;
    }
    if ( (HANDLE)v37[0] == ghDITResetEventWcp )
    {
      AssociateKernelIocpWcp(
        ghDITResetEventWcp,
        ghDITIocp,
        ghDITResetEvent,
        ghDITResetEventWcp,
        1LL,
        0,
        &gbDITResetEventAlreadySignaled);
      return v2;
    }
    if ( (HANDLE)v37[0] == ghDITMmcssEventWcp )
    {
      AssociateKernelIocpWcp(
        ghDITMmcssEventWcp,
        ghDITIocp,
        ghDITMmcssEvent,
        ghDITMmcssEventWcp,
        1LL,
        0,
        &gbDITMmcssEventAlreadySignaled);
      goto LABEL_113;
    }
    if ( (HANDLE)v37[0] == ghDITEventWcp )
    {
      AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !(unsigned int)GetDITWakeReason(&v40) )
            goto LABEL_109;
          if ( v40 > 0x20 )
            break;
          switch ( v40 )
          {
            case 0x20u:
              DitTouchInject();
              break;
            case 1u:
              DitOpen();
              break;
            case 2u:
              DitClose();
              break;
            case 4u:
              DitStartRead();
              break;
            case 8u:
              DitStopRead();
              break;
            case 0x10u:
              EnterCrit(0LL, 1LL);
              goto LABEL_57;
          }
        }
        switch ( v40 )
        {
          case 0x40u:
            ProcessQueuedMouseEvents();
            break;
          case 0x80u:
            xxxDitCompositionInputSinkLuidFromPoint();
            break;
          case 0x100u:
            xxxRouteTouchpadInertiaToMT();
            break;
          case 0x200u:
            EnterCrit(0LL, 1LL);
            PalmRejection::DispatchBufferedInputFrames(v12);
LABEL_57:
            UserSessionSwitchLeaveCrit(v11, v10);
            break;
        }
      }
    }
    if ( (HANDLE)v37[0] == ghDITRITEventWcp )
    {
      AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
      goto LABEL_109;
    }
    v13 = aDeviceTemplate[157];
    if ( v37[0] == v13 )
    {
      AssociateKernelIocpWcp(v13, ghDITIocp, aDeviceTemplate[155], aDeviceTemplate[157], 1LL, 0, &aDeviceTemplate[158]);
      EnterCrit(0LL, 1LL);
      RIMOnPnpNotification(aDeviceTemplate[152]);
    }
    else
    {
      v16 = aDeviceTemplate[162];
      if ( v37[0] == v16 )
      {
        AssociateKernelIocpWcp(
          v16,
          ghDITIocp,
          aDeviceTemplate[160],
          aDeviceTemplate[162],
          1LL,
          0,
          &aDeviceTemplate[163]);
        EnterCrit(0LL, 1LL);
        v18 = 0LL;
        v19 = (_QWORD *)aDeviceTemplate[201];
        if ( v19 != &aDeviceTemplate[202] )
          v18 = aDeviceTemplate[201];
        UserSessionSwitchLeaveCrit(v19, v17);
        v20 = aDeviceTemplate[0];
        if ( SLODWORD(aDeviceTemplate[196]) >= 0 )
        {
          ProcessHidInputViaRim((void *)aDeviceTemplate[201]);
          v20 = aDeviceTemplate[0];
          if ( v18 )
          {
            aDeviceTemplate[201] = &aDeviceTemplate[202];
            v20 = aDeviceTemplate[0];
          }
        }
        LOBYTE(BugCheckParameter4a) = 0;
        RIMReadInput(
          *(_QWORD *)(v20 + 1216),
          v20 + 1608,
          *(unsigned int *)(v20 + 1564),
          *(_QWORD *)(v20 + 1272),
          BugCheckParameter4a,
          v20 + 1584,
          v20 + 1560,
          v20 + 1568);
        if ( !v18 )
          goto LABEL_109;
        EnterCrit(0LL, 1LL);
        RIMFreeKernelMem(v18);
        goto LABEL_100;
      }
      v21 = aDeviceTemplate[167];
      if ( v37[0] == v21 )
      {
        AssociateKernelIocpWcp(
          v21,
          ghDITIocp,
          aDeviceTemplate[165],
          aDeviceTemplate[167],
          1LL,
          0,
          &aDeviceTemplate[168]);
        EnterCrit(0LL, 1LL);
        v22 = 0LL;
      }
      else
      {
        v23 = aDeviceTemplate[172];
        if ( v37[0] != v23 )
        {
          v24 = aDeviceTemplate[180];
          if ( v37[0] == v24 )
          {
            AssociateKernelIocpWcp(
              v24,
              ghDITIocp,
              aDeviceTemplate[178],
              aDeviceTemplate[180],
              1LL,
              0,
              &aDeviceTemplate[181]);
            EnterCrit(0LL, 1LL);
            RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
            v25 = (struct _KEVENT *)aDeviceTemplate[182];
          }
          else
          {
            v26 = aDeviceTemplate[186];
            if ( v37[0] == v26 )
            {
              AssociateKernelIocpWcp(
                v26,
                ghDITIocp,
                aDeviceTemplate[184],
                aDeviceTemplate[186],
                1LL,
                0,
                &aDeviceTemplate[187]);
              EnterCrit(0LL, 1LL);
              if ( gProtocolType )
                goto LABEL_100;
              RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
              v25 = (struct _KEVENT *)aDeviceTemplate[188];
            }
            else
            {
              v27 = aDeviceTemplate[192];
              if ( v37[0] != v27 )
              {
                AssociateKernelIocpWcp(
                  ghDITMouseFlushTimerWcp,
                  ghDITIocp,
                  ghDITMouseFlushTimer,
                  ghDITMouseFlushTimerWcp,
                  1LL,
                  0,
                  0LL);
LABEL_102:
                ProcessQueuedMouseEvents();
                goto LABEL_109;
              }
              AssociateKernelIocpWcp(
                v27,
                ghDITIocp,
                aDeviceTemplate[190],
                aDeviceTemplate[192],
                1LL,
                0,
                &aDeviceTemplate[193]);
              EnterCrit(0LL, 1LL);
              if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              RIMDirectStartDeviceClassNotifications(aDeviceTemplate[152], gpWin32kDriverObject);
              v25 = (struct _KEVENT *)aDeviceTemplate[194];
            }
          }
          KeSetEvent(v25, 1, 0);
          goto LABEL_100;
        }
        AssociateKernelIocpWcp(
          v23,
          ghDITIocp,
          aDeviceTemplate[165],
          aDeviceTemplate[172],
          1LL,
          0,
          &aDeviceTemplate[173]);
        EnterCrit(0LL, 1LL);
        v22 = 1LL;
      }
      RIMOnTimerNotification(aDeviceTemplate[152], v22);
    }
LABEL_100:
    UserSessionSwitchLeaveCrit(v15, v14);
    goto LABEL_109;
  }
  if ( v9 == 192 )
    goto LABEL_111;
  v5 = v9 == 257;
LABEL_41:
  if ( v5 )
  {
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      EtwTraceDitTerminated();
      v3 = 0;
    }
    goto LABEL_109;
  }
  return v2;
}

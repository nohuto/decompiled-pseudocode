/*
 * XREFs of UserProcessDwmInput @ 0x1C00F1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C00078FC (-GetDITWakeReason@@YAHPEAK@Z.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C00F27BC (-DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z.c)
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     DitClose @ 0x1C01DF8B4 (DitClose.c)
 *     DitOpen @ 0x1C01DF91C (DitOpen.c)
 *     DitStartRead @ 0x1C01DF998 (DitStartRead.c)
 *     DitStopRead @ 0x1C01DFA00 (DitStopRead.c)
 *     DitTouchInject @ 0x1C01DFA68 (DitTouchInject.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022D7D4 (xxxDitCompositionInputSinkLuidFromPoint.c)
 *     ProcessHidInputViaRim @ 0x1C022DE3C (ProcessHidInputViaRim.c)
 */

__int64 __fastcall UserProcessDwmInput(struct DIT_INFO *a1)
{
  unsigned int v2; // esi
  char v3; // r14
  unsigned int v4; // eax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _KEVENT *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-60h]
  int v36; // [rsp+28h] [rbp-58h]
  _QWORD v37[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v39; // [rsp+68h] [rbp-18h]
  unsigned int v40; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v41; // [rsp+C8h] [rbp+48h] BYREF
  char v42; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0;
  *((_DWORD *)a1 + 14) = 0;
  v3 = 1;
  while ( 1 )
  {
    if ( !gbDITUseIocp )
    {
      LOBYTE(v36) = 1;
      LOBYTE(v34) = 1;
      v4 = ObWaitForMultipleObjects(*((unsigned int *)a1 + 12), *((_QWORD *)a1 + 4), 0LL, 1LL, v34, v36, 0LL);
      v2 = v4;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v2 = 0;
LABEL_100:
          *((_DWORD *)a1 + 14) = 1;
          return v2;
        }
        if ( v4 != 2 )
        {
          if ( v4 == 3 )
          {
            while ( (unsigned int)GetDITWakeReason(&v40) )
            {
              switch ( v40 )
              {
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
                  EnterCrit(1LL);
                  xxxAssessPointerContactState();
                  UserSessionSwitchLeaveCrit(v7, v6);
                  break;
                case 0x20u:
                  DitTouchInject();
                  break;
                case 0x40u:
                  ProcessQueuedMouseEvents();
                  break;
                case 0x80u:
                  xxxDitCompositionInputSinkLuidFromPoint();
                  break;
              }
            }
            goto LABEL_96;
          }
          if ( v4 != 4 )
          {
            if ( v4 == 192 )
              goto LABEL_98;
            v5 = v4 == 257;
LABEL_35:
            if ( !v5 )
              return v2;
            if ( PsIsThreadTerminating(KeGetCurrentThread()) )
            {
              EtwTraceDitTerminated();
              v3 = 0;
            }
            goto LABEL_96;
          }
          goto LABEL_89;
        }
        DITExecuteQueuedInputCompletions(a1);
      }
      else
      {
        v3 = 0;
        v2 = 0;
      }
      goto LABEL_96;
    }
    if ( gbDITResetEventAlreadySignaled )
      return v2;
    if ( gbDITMmcssEventAlreadySignaled )
      goto LABEL_100;
    DITExecuteQueuedInputCompletions(a1);
    LOBYTE(v36) = 1;
    v8 = ZwRemoveIoCompletionEx(ghDITIocp, v38, 1LL, &v42, 0LL, v36);
    v2 = v8;
    if ( v8 )
    {
      if ( v8 == 192 )
      {
LABEL_98:
        EtwTraceDitTerminated();
        return v2;
      }
      v5 = v8 == 257;
      goto LABEL_35;
    }
    if ( v38[1] != 1LL )
    {
      EnterDeviceInfoListCrit_(v8);
      v28 = v38[0];
      if ( v38[0] )
      {
        --*(_DWORD *)(v38[0] + 312LL);
        v29 = (_QWORD *)(v28 + 104);
        if ( (_QWORD *)*v29 == v29 )
        {
          *(_OWORD *)(v28 + 168) = v39;
          v30 = gpDitInfo + 64;
          v31 = *(_QWORD **)(gpDitInfo + 72);
          *v29 = gpDitInfo + 64;
          v29[1] = v31;
          if ( *v31 != v30 )
            __fastfail(3u);
          *v31 = v29;
          *(_QWORD *)(v30 + 8) = v29;
        }
        LeaveDeviceInfoListCrit_(v29);
        DITExecuteQueuedInputCompletions(a1);
        EnterDeviceInfoListCrit_(v32);
      }
      LeaveDeviceInfoListCrit_(v27);
      goto LABEL_96;
    }
    if ( (HANDLE)v38[0] == ghDITResetEventWcp )
      break;
    if ( (HANDLE)v38[0] == ghDITMmcssEventWcp )
    {
      AssociateKernelIocpWcp(
        ghDITMmcssEventWcp,
        ghDITIocp,
        ghDITMmcssEvent,
        ghDITMmcssEventWcp,
        1LL,
        0,
        &gbDITMmcssEventAlreadySignaled);
      goto LABEL_100;
    }
    if ( (HANDLE)v38[0] == ghDITEventWcp )
    {
      AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
      while ( (unsigned int)GetDITWakeReason(&v41) )
      {
        switch ( v41 )
        {
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
            EnterCrit(1LL);
            xxxAssessPointerContactState();
            UserSessionSwitchLeaveCrit(v10, v9);
            break;
          case 0x20u:
            DitTouchInject();
            break;
          case 0x40u:
            ProcessQueuedMouseEvents();
            break;
          case 0x80u:
            xxxDitCompositionInputSinkLuidFromPoint();
            break;
        }
      }
      goto LABEL_96;
    }
    if ( (HANDLE)v38[0] != ghDITRITEventWcp )
    {
      if ( !LODWORD(aDeviceTemplate[154]) )
        goto LABEL_88;
      v11 = aDeviceTemplate[160];
      if ( v38[0] == v11 )
      {
        AssociateKernelIocpWcp(v11, ghDITIocp, aDeviceTemplate[158], v11, 1LL, 0, &aDeviceTemplate[161]);
        EnterCrit(1LL);
        RIMOnPnpNotification(aDeviceTemplate[155]);
      }
      else
      {
        v14 = aDeviceTemplate[165];
        if ( v38[0] == v14 )
        {
          AssociateKernelIocpWcp(v14, ghDITIocp, aDeviceTemplate[163], v14, 1LL, 0, &aDeviceTemplate[166]);
          v15 = 0LL;
          EnterCrit(1LL);
          v17 = (_QWORD *)aDeviceTemplate[204];
          if ( v17 != &aDeviceTemplate[205] )
          {
            v15 = aDeviceTemplate[204];
            PushW32ThreadLock((__int64)v17, v37, RIMFreeKernelMem);
          }
          UserSessionSwitchLeaveCrit(v17, v16);
          v19 = aDeviceTemplate[0];
          if ( SLODWORD(aDeviceTemplate[199]) >= 0 )
          {
            ProcessHidInputViaRim(aDeviceTemplate[204], LODWORD(aDeviceTemplate[198]), v18, aDeviceTemplate[201]);
            if ( v15 )
              aDeviceTemplate[204] = &aDeviceTemplate[205];
            v19 = aDeviceTemplate[0];
          }
          LOBYTE(v35) = 0;
          RIMReadInput(
            *(_QWORD *)(v19 + 1240),
            v19 + 1632,
            *(unsigned int *)(v19 + 1588),
            *(_QWORD *)(v19 + 1296),
            v35,
            v19 + 1608,
            v19 + 1584,
            v19 + 1592);
          if ( !v15 )
            goto LABEL_96;
          EnterCrit(1LL);
          PopAndFreeAlwaysW32ThreadLock((__int64)v37);
        }
        else
        {
          v20 = aDeviceTemplate[170];
          if ( v38[0] == v20 )
          {
            AssociateKernelIocpWcp(v20, ghDITIocp, aDeviceTemplate[168], v20, 1LL, 0, &aDeviceTemplate[171]);
            EnterCrit(1LL);
            v21 = 0LL;
          }
          else
          {
            v22 = aDeviceTemplate[175];
            if ( v38[0] != v22 )
            {
              v23 = aDeviceTemplate[183];
              if ( v38[0] == v23 )
              {
                AssociateKernelIocpWcp(v23, ghDITIocp, aDeviceTemplate[181], v23, 1LL, 0, &aDeviceTemplate[184]);
                EnterCrit(1LL);
                RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[155], 2LL);
                v24 = (struct _KEVENT *)aDeviceTemplate[185];
              }
              else
              {
                v25 = aDeviceTemplate[189];
                if ( v38[0] == v25 )
                {
                  AssociateKernelIocpWcp(v25, ghDITIocp, aDeviceTemplate[187], v25, 1LL, 0, &aDeviceTemplate[190]);
                  EnterCrit(1LL);
                  RIMDirectStartStopDeviceRead(aDeviceTemplate[155]);
                  v24 = (struct _KEVENT *)aDeviceTemplate[191];
                }
                else
                {
                  v26 = aDeviceTemplate[195];
                  if ( v38[0] != v26 )
                  {
LABEL_88:
                    AssociateKernelIocpWcp(
                      ghDITMouseFlushTimerWcp,
                      ghDITIocp,
                      ghDITMouseFlushTimer,
                      ghDITMouseFlushTimerWcp,
                      1LL,
                      0,
                      0LL);
LABEL_89:
                    ProcessQueuedMouseEvents();
                    goto LABEL_96;
                  }
                  AssociateKernelIocpWcp(v26, ghDITIocp, aDeviceTemplate[193], v26, 1LL, 0, &aDeviceTemplate[196]);
                  EnterCrit(1LL);
                  RIMDirectStartDeviceClassNotifications(aDeviceTemplate[155], gpWin32kDriverObject);
                  v24 = (struct _KEVENT *)aDeviceTemplate[197];
                }
              }
              KeSetEvent(v24, 1, 0);
              goto LABEL_87;
            }
            AssociateKernelIocpWcp(v22, ghDITIocp, aDeviceTemplate[168], v22, 1LL, 0, &aDeviceTemplate[176]);
            EnterCrit(1LL);
            v21 = 1LL;
          }
          RIMOnTimerNotification(aDeviceTemplate[155], v21);
        }
      }
LABEL_87:
      UserSessionSwitchLeaveCrit(v13, v12);
      goto LABEL_96;
    }
    AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
LABEL_96:
    if ( !v3 )
      return v2;
  }
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

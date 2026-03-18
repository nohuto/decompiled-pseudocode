/*
 * XREFs of UserProcessDwmInput @ 0x1C00F7160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C0009788 (-GetDITWakeReason@@YAHPEAK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C00F7950 (-DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     DitClose @ 0x1C01DFEB4 (DitClose.c)
 *     DitOpen @ 0x1C01DFF20 (DitOpen.c)
 *     DitStartRead @ 0x1C01DFF9C (DitStartRead.c)
 *     DitStopRead @ 0x1C01E0008 (DitStopRead.c)
 *     DitTouchInject @ 0x1C01E0074 (DitTouchInject.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022DBD8 (xxxDitCompositionInputSinkLuidFromPoint.c)
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
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
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  int v33; // [rsp+20h] [rbp-60h]
  int v34; // [rsp+20h] [rbp-60h]
  int v35; // [rsp+28h] [rbp-58h]
  _QWORD v36[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v38; // [rsp+68h] [rbp-18h]
  unsigned int v39; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v40; // [rsp+C8h] [rbp+48h] BYREF
  char v41; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0;
  *((_DWORD *)a1 + 14) = 0;
  v3 = 1;
  while ( 1 )
  {
    if ( !gbDITUseIocp )
    {
      LOBYTE(v35) = 1;
      LOBYTE(v33) = 1;
      v4 = ObWaitForMultipleObjects(*((unsigned int *)a1 + 12), *((_QWORD *)a1 + 4), 0LL, 1LL, v33, v35, 0LL);
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
            while ( (unsigned int)GetDITWakeReason(&v39) )
            {
              switch ( v39 )
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
                  EnterCrit(0LL, 1LL);
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
    LOBYTE(v35) = 1;
    v8 = ZwRemoveIoCompletionEx(ghDITIocp, v37, 1LL, &v41, 0LL, v35);
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
    if ( v37[1] != 1LL )
    {
      EnterDeviceInfoListCrit_(v8);
      v27 = v37[0];
      if ( v37[0] )
      {
        --*(_DWORD *)(v37[0] + 304LL);
        v28 = (_QWORD *)(v27 + 96);
        if ( (_QWORD *)*v28 == v28 )
        {
          *(_OWORD *)(v27 + 160) = v38;
          v29 = gpDitInfo + 64;
          v30 = *(_QWORD **)(gpDitInfo + 72);
          *v28 = gpDitInfo + 64;
          v28[1] = v30;
          if ( *v30 != v29 )
            __fastfail(3u);
          *v30 = v28;
          *(_QWORD *)(v29 + 8) = v28;
        }
        LeaveDeviceInfoListCrit_();
        DITExecuteQueuedInputCompletions(a1);
        EnterDeviceInfoListCrit_(v31);
      }
      LeaveDeviceInfoListCrit_();
      goto LABEL_96;
    }
    if ( (HANDLE)v37[0] == ghDITResetEventWcp )
      break;
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
      goto LABEL_100;
    }
    if ( (HANDLE)v37[0] == ghDITEventWcp )
    {
      AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
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
            EnterCrit(0LL, 1LL);
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
    if ( (HANDLE)v37[0] != ghDITRITEventWcp )
    {
      if ( !LODWORD(aDeviceTemplate[154]) )
        goto LABEL_88;
      v11 = aDeviceTemplate[160];
      if ( v37[0] == v11 )
      {
        AssociateKernelIocpWcp(v11, ghDITIocp, aDeviceTemplate[158], v11, 1LL, 0, &aDeviceTemplate[161]);
        EnterCrit(0LL, 1LL);
        RIMOnPnpNotification(aDeviceTemplate[155]);
      }
      else
      {
        v14 = aDeviceTemplate[165];
        if ( v37[0] == v14 )
        {
          AssociateKernelIocpWcp(v14, ghDITIocp, aDeviceTemplate[163], v14, 1LL, 0, &aDeviceTemplate[166]);
          v15 = 0LL;
          EnterCrit(0LL, 1LL);
          v17 = (_QWORD *)aDeviceTemplate[204];
          if ( v17 != &aDeviceTemplate[205] )
          {
            v15 = aDeviceTemplate[204];
            PushW32ThreadLock((__int64)v17, v36, (__int64)RIMFreeKernelMem);
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
          LOBYTE(v34) = 0;
          RIMReadInput(
            *(_QWORD *)(v19 + 1240),
            v19 + 1632,
            *(unsigned int *)(v19 + 1588),
            *(_QWORD *)(v19 + 1296),
            v34,
            v19 + 1608,
            v19 + 1584,
            v19 + 1592);
          if ( !v15 )
            goto LABEL_96;
          EnterCrit(0LL, 1LL);
          PopAndFreeAlwaysW32ThreadLock((__int64)v36);
        }
        else
        {
          v20 = aDeviceTemplate[170];
          if ( v37[0] == v20 )
          {
            AssociateKernelIocpWcp(v20, ghDITIocp, aDeviceTemplate[168], v20, 1LL, 0, &aDeviceTemplate[171]);
            EnterCrit(0LL, 1LL);
            v21 = 0LL;
          }
          else
          {
            v22 = aDeviceTemplate[175];
            if ( v37[0] != v22 )
            {
              v23 = aDeviceTemplate[183];
              if ( v37[0] == v23 )
              {
                AssociateKernelIocpWcp(v23, ghDITIocp, aDeviceTemplate[181], v23, 1LL, 0, &aDeviceTemplate[184]);
                EnterCrit(0LL, 1LL);
                RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[155], 2LL);
                v24 = (struct _KEVENT *)aDeviceTemplate[185];
              }
              else
              {
                v25 = aDeviceTemplate[189];
                if ( v37[0] == v25 )
                {
                  AssociateKernelIocpWcp(v25, ghDITIocp, aDeviceTemplate[187], v25, 1LL, 0, &aDeviceTemplate[190]);
                  EnterCrit(0LL, 1LL);
                  RIMDirectStartStopDeviceRead(aDeviceTemplate[155]);
                  v24 = (struct _KEVENT *)aDeviceTemplate[191];
                }
                else
                {
                  v26 = aDeviceTemplate[195];
                  if ( v37[0] != v26 )
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
                  EnterCrit(0LL, 1LL);
                  RIMDirectStartDeviceClassNotifications(aDeviceTemplate[155], gpWin32kDriverObject);
                  v24 = (struct _KEVENT *)aDeviceTemplate[197];
                }
              }
              KeSetEvent(v24, 1, 0);
              goto LABEL_87;
            }
            AssociateKernelIocpWcp(v22, ghDITIocp, aDeviceTemplate[168], v22, 1LL, 0, &aDeviceTemplate[176]);
            EnterCrit(0LL, 1LL);
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

/*
 * XREFs of ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C009FF44
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C009F6C0 (UserDeactivateDwmInputProcessing.c)
 *     WaitForRitDisEngagement @ 0x1C009FBB8 (WaitForRitDisEngagement.c)
 * Callees:
 *     ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C0009788 (-GetDITWakeReason@@YAHPEAK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     DitClose @ 0x1C01DFEB4 (DitClose.c)
 *     DitOpen @ 0x1C01DFF20 (DitOpen.c)
 *     DitStartRead @ 0x1C01DFF9C (DitStartRead.c)
 *     DitStopRead @ 0x1C01E0008 (DitStopRead.c)
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
 */

void __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // r14d
  int v5; // esi
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rdx
  struct _KEVENT *v22; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  int v24; // [rsp+28h] [rbp-58h]
  _QWORD v25[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v27; // [rsp+68h] [rbp-18h]
  unsigned int v28; // [rsp+B0h] [rbp+30h] BYREF
  char v29; // [rsp+C8h] [rbp+48h] BYREF

  v4 = a2;
  v5 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( !v5 )
              {
                v6 = ObWaitForSingleObject(ghDITRITEvent, 0LL, 0LL, 0LL, 0LL);
                goto LABEL_4;
              }
              LOBYTE(v24) = 0;
              v6 = ZwRemoveIoCompletionEx(ghDITIocp, v26, 1LL, &v29, 0LL, v24);
              if ( !v6 )
                break;
LABEL_4:
              if ( v6 != 257 || PsIsThreadTerminating(KeGetCurrentThread()) )
                goto LABEL_6;
            }
            if ( v26[1] == 1LL )
              break;
            EnterDeviceInfoListCrit_();
            v10 = v26[0];
            if ( v26[0] )
            {
              v11 = (_QWORD *)(v26[0] + 96LL);
              *(_QWORD *)(v26[0] + 104LL) = v26[0] + 96LL;
              *(_QWORD *)(v10 + 96) = v10 + 96;
              --*(_DWORD *)(v10 + 304);
              if ( v4 )
              {
                if ( (_QWORD *)*v11 == v11 )
                {
                  *(_OWORD *)(v10 + 160) = v27;
                  v12 = gpDitInfo + 64;
                  v13 = *(_QWORD **)(gpDitInfo + 72);
                  *v11 = gpDitInfo + 64;
                  v11[1] = v13;
                  if ( *v13 != v12 )
                    __fastfail(3u);
                  *v13 = v11;
                  *(_QWORD *)(v12 + 8) = v11;
                }
              }
              else
              {
                *(_WORD *)(v10 + 64) &= ~2u;
              }
            }
            LeaveDeviceInfoListCrit_();
          }
          if ( (HANDLE)v26[0] == ghDITRITEventWcp )
          {
            AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
            goto LABEL_6;
          }
          if ( (HANDLE)v26[0] != ghDITEventWcp )
            break;
          AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
          while ( (unsigned int)GetDITWakeReason(&v28) )
          {
            switch ( v28 )
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
                *a3 |= 0x10u;
                break;
              case 0x20u:
                *a3 |= 0x20u;
                break;
              case 0x40u:
                *a3 |= 0x40u;
                break;
              case 0x80u:
                *a3 |= 0x80u;
                break;
            }
          }
        }
        if ( (HANDLE)v26[0] != ghDITResetEventWcp )
          break;
        gbDITResetEventAlreadySignaled = 1;
      }
      if ( (HANDLE)v26[0] != ghDITMmcssEventWcp )
        break;
      gbDITMmcssEventAlreadySignaled = 1;
    }
    if ( LODWORD(aDeviceTemplate[154]) )
      break;
LABEL_43:
    AssociateKernelIocpWcp(
      ghDITMouseFlushTimerWcp,
      ghDITIocp,
      ghDITMouseFlushTimer,
      ghDITMouseFlushTimerWcp,
      1LL,
      0,
      0LL);
  }
  if ( v26[0] == aDeviceTemplate[160] )
  {
    AssociateKernelIocpWcp(
      aDeviceTemplate[160],
      ghDITIocp,
      aDeviceTemplate[158],
      aDeviceTemplate[160],
      1LL,
      0,
      &aDeviceTemplate[161]);
    EnterCrit(0LL, 1LL);
    RIMOnPnpNotification(aDeviceTemplate[155]);
    goto LABEL_52;
  }
  if ( v26[0] != aDeviceTemplate[165] )
  {
    if ( v26[0] == aDeviceTemplate[170] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[170],
        ghDITIocp,
        aDeviceTemplate[168],
        aDeviceTemplate[170],
        1LL,
        0,
        &aDeviceTemplate[171]);
      EnterCrit(0LL, 1LL);
      v21 = 0LL;
    }
    else
    {
      if ( v26[0] != aDeviceTemplate[175] )
      {
        if ( v26[0] == aDeviceTemplate[183] )
        {
          AssociateKernelIocpWcp(
            aDeviceTemplate[183],
            ghDITIocp,
            aDeviceTemplate[181],
            aDeviceTemplate[183],
            1LL,
            0,
            &aDeviceTemplate[184]);
          EnterCrit(0LL, 1LL);
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[155], 2LL);
          v22 = (struct _KEVENT *)aDeviceTemplate[185];
          goto LABEL_65;
        }
        if ( v26[0] == aDeviceTemplate[189] )
        {
          AssociateKernelIocpWcp(
            aDeviceTemplate[189],
            ghDITIocp,
            aDeviceTemplate[187],
            aDeviceTemplate[189],
            1LL,
            0,
            &aDeviceTemplate[190]);
          EnterCrit(0LL, 1LL);
          RIMDirectStartStopDeviceRead(aDeviceTemplate[155]);
          v22 = (struct _KEVENT *)aDeviceTemplate[191];
LABEL_65:
          KeSetEvent(v22, 1, 0);
LABEL_52:
          UserSessionSwitchLeaveCrit(v15, v14);
          goto LABEL_6;
        }
        v7 = aDeviceTemplate[195];
        if ( v26[0] == v7 )
        {
          AssociateKernelIocpWcp(v7, ghDITIocp, aDeviceTemplate[193], v7, 1LL, 0, &aDeviceTemplate[196]);
          EnterCrit(0LL, 1LL);
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[155], gpWin32kDriverObject);
          KeSetEvent((PRKEVENT)aDeviceTemplate[197], 1, 0);
          UserSessionSwitchLeaveCrit(v9, v8);
          goto LABEL_4;
        }
        goto LABEL_43;
      }
      AssociateKernelIocpWcp(
        aDeviceTemplate[175],
        ghDITIocp,
        aDeviceTemplate[173],
        aDeviceTemplate[175],
        1LL,
        0,
        &aDeviceTemplate[176]);
      EnterCrit(0LL, 1LL);
      v21 = 1LL;
    }
    RIMOnTimerNotification(aDeviceTemplate[155], v21);
    goto LABEL_52;
  }
  AssociateKernelIocpWcp(
    aDeviceTemplate[165],
    ghDITIocp,
    aDeviceTemplate[163],
    aDeviceTemplate[165],
    1LL,
    0,
    &aDeviceTemplate[166]);
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = (_QWORD *)aDeviceTemplate[204];
  if ( v18 != &aDeviceTemplate[205] )
  {
    v16 = aDeviceTemplate[204];
    PushW32ThreadLock((__int64)v18, v25, (__int64)RIMFreeKernelMem);
  }
  UserSessionSwitchLeaveCrit(v18, v17);
  v20 = aDeviceTemplate[0];
  if ( SLODWORD(aDeviceTemplate[199]) >= 0 )
  {
    ProcessHidInputViaRim(aDeviceTemplate[204], LODWORD(aDeviceTemplate[198]), v19, aDeviceTemplate[201]);
    if ( v16 )
      aDeviceTemplate[204] = &aDeviceTemplate[205];
    v20 = aDeviceTemplate[0];
  }
  LOBYTE(v23) = 0;
  RIMReadInput(
    *(_QWORD *)(v20 + 1240),
    v20 + 1632,
    *(unsigned int *)(v20 + 1588),
    *(_QWORD *)(v20 + 1296),
    v23,
    v20 + 1608,
    v20 + 1584,
    v20 + 1592);
  if ( v16 )
  {
    EnterCrit(0LL, 1LL);
    PopAndFreeAlwaysW32ThreadLock((__int64)v25);
    goto LABEL_52;
  }
LABEL_6:
  EnterCrit(0LL, 1LL);
}

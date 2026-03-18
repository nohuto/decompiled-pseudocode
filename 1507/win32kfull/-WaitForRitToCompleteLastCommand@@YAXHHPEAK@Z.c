/*
 * XREFs of ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C00F3B10 (UserDeactivateDwmInputProcessing.c)
 *     WaitForRitDisEngagement @ 0x1C00F3EF4 (WaitForRitDisEngagement.c)
 * Callees:
 *     ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C00078FC (-GetDITWakeReason@@YAHPEAK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     DitClose @ 0x1C01DF8B4 (DitClose.c)
 *     DitOpen @ 0x1C01DF91C (DitOpen.c)
 *     DitStartRead @ 0x1C01DF998 (DitStartRead.c)
 *     DitStopRead @ 0x1C01DFA00 (DitStopRead.c)
 *     ProcessHidInputViaRim @ 0x1C022DE3C (ProcessHidInputViaRim.c)
 */

void __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // r14d
  int v5; // esi
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // rdx
  struct _KEVENT *v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-60h]
  int v25; // [rsp+28h] [rbp-58h]
  _QWORD v26[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v28; // [rsp+68h] [rbp-18h]
  unsigned int v29; // [rsp+B0h] [rbp+30h] BYREF
  char v30; // [rsp+C8h] [rbp+48h] BYREF

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
              LOBYTE(v25) = 0;
              v6 = ZwRemoveIoCompletionEx(ghDITIocp, v27, 1LL, &v30, 0LL, v25);
              if ( !v6 )
                break;
LABEL_4:
              if ( v6 != 257 || PsIsThreadTerminating(KeGetCurrentThread()) )
                goto LABEL_6;
            }
            if ( v27[1] == 1LL )
              break;
            EnterDeviceInfoListCrit_(v7);
            v12 = v27[0];
            if ( v27[0] )
            {
              v11 = v27[0] + 104LL;
              *(_QWORD *)(v27[0] + 112LL) = v27[0] + 104LL;
              *(_QWORD *)(v12 + 104) = v12 + 104;
              --*(_DWORD *)(v12 + 312);
              if ( v4 )
              {
                if ( *(_QWORD *)v11 == v11 )
                {
                  *(_OWORD *)(v12 + 168) = v28;
                  v13 = gpDitInfo + 64;
                  v14 = *(__int64 **)(gpDitInfo + 72);
                  *(_QWORD *)v11 = gpDitInfo + 64;
                  *(_QWORD *)(v11 + 8) = v14;
                  if ( *v14 != v13 )
                    __fastfail(3u);
                  *v14 = v11;
                  *(_QWORD *)(v13 + 8) = v11;
                }
              }
              else
              {
                v11 = 65533LL;
                *(_WORD *)(v12 + 64) &= ~2u;
              }
            }
            LeaveDeviceInfoListCrit_(v11);
          }
          if ( (HANDLE)v27[0] == ghDITRITEventWcp )
          {
            AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
            goto LABEL_6;
          }
          if ( (HANDLE)v27[0] != ghDITEventWcp )
            break;
          AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
          while ( (unsigned int)GetDITWakeReason(&v29) )
          {
            switch ( v29 )
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
        if ( (HANDLE)v27[0] != ghDITResetEventWcp )
          break;
        gbDITResetEventAlreadySignaled = 1;
      }
      if ( (HANDLE)v27[0] != ghDITMmcssEventWcp )
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
  if ( v27[0] == aDeviceTemplate[160] )
  {
    AssociateKernelIocpWcp(
      aDeviceTemplate[160],
      ghDITIocp,
      aDeviceTemplate[158],
      aDeviceTemplate[160],
      1LL,
      0,
      &aDeviceTemplate[161]);
    EnterCrit(1LL);
    RIMOnPnpNotification(aDeviceTemplate[155]);
    goto LABEL_52;
  }
  if ( v27[0] != aDeviceTemplate[165] )
  {
    if ( v27[0] == aDeviceTemplate[170] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[170],
        ghDITIocp,
        aDeviceTemplate[168],
        aDeviceTemplate[170],
        1LL,
        0,
        &aDeviceTemplate[171]);
      EnterCrit(1LL);
      v22 = 0LL;
    }
    else
    {
      if ( v27[0] != aDeviceTemplate[175] )
      {
        if ( v27[0] == aDeviceTemplate[183] )
        {
          AssociateKernelIocpWcp(
            aDeviceTemplate[183],
            ghDITIocp,
            aDeviceTemplate[181],
            aDeviceTemplate[183],
            1LL,
            0,
            &aDeviceTemplate[184]);
          EnterCrit(1LL);
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[155], 2LL);
          v23 = (struct _KEVENT *)aDeviceTemplate[185];
          goto LABEL_65;
        }
        if ( v27[0] == aDeviceTemplate[189] )
        {
          AssociateKernelIocpWcp(
            aDeviceTemplate[189],
            ghDITIocp,
            aDeviceTemplate[187],
            aDeviceTemplate[189],
            1LL,
            0,
            &aDeviceTemplate[190]);
          EnterCrit(1LL);
          RIMDirectStartStopDeviceRead(aDeviceTemplate[155]);
          v23 = (struct _KEVENT *)aDeviceTemplate[191];
LABEL_65:
          KeSetEvent(v23, 1, 0);
LABEL_52:
          UserSessionSwitchLeaveCrit(v16, v15);
          goto LABEL_6;
        }
        v8 = aDeviceTemplate[195];
        if ( v27[0] == v8 )
        {
          AssociateKernelIocpWcp(v8, ghDITIocp, aDeviceTemplate[193], v8, 1LL, 0, &aDeviceTemplate[196]);
          EnterCrit(1LL);
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[155], gpWin32kDriverObject);
          KeSetEvent((PRKEVENT)aDeviceTemplate[197], 1, 0);
          UserSessionSwitchLeaveCrit(v10, v9);
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
      EnterCrit(1LL);
      v22 = 1LL;
    }
    RIMOnTimerNotification(aDeviceTemplate[155], v22);
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
  v17 = 0LL;
  EnterCrit(1LL);
  v19 = (_QWORD *)aDeviceTemplate[204];
  if ( v19 != &aDeviceTemplate[205] )
  {
    v17 = aDeviceTemplate[204];
    PushW32ThreadLock((__int64)v19, v26, (__int64)RIMFreeKernelMem);
  }
  UserSessionSwitchLeaveCrit(v19, v18);
  v21 = aDeviceTemplate[0];
  if ( SLODWORD(aDeviceTemplate[199]) >= 0 )
  {
    ProcessHidInputViaRim(aDeviceTemplate[204], LODWORD(aDeviceTemplate[198]), v20, aDeviceTemplate[201]);
    if ( v17 )
      aDeviceTemplate[204] = &aDeviceTemplate[205];
    v21 = aDeviceTemplate[0];
  }
  LOBYTE(v24) = 0;
  RIMReadInput(
    *(_QWORD *)(v21 + 1240),
    v21 + 1632,
    *(unsigned int *)(v21 + 1588),
    *(_QWORD *)(v21 + 1296),
    v24,
    v21 + 1608,
    v21 + 1584,
    v21 + 1592);
  if ( v17 )
  {
    EnterCrit(1LL);
    PopAndFreeAlwaysW32ThreadLock((__int64)v26);
    goto LABEL_52;
  }
LABEL_6:
  EnterCrit(1LL);
}

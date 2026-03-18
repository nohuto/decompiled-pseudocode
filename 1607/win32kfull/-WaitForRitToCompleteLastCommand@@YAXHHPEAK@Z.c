/*
 * XREFs of ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C01190F0 (UserDeactivateDwmInputProcessing.c)
 *     WaitForRitDisEngagement @ 0x1C01195D8 (WaitForRitDisEngagement.c)
 * Callees:
 *     ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C00E0E14 (-GetDITWakeReason@@YAHPEAK@Z.c)
 *     DitClose @ 0x1C01D68C0 (DitClose.c)
 *     DitOpen @ 0x1C01D692C (DitOpen.c)
 *     DitStartRead @ 0x1C01D69E4 (DitStartRead.c)
 *     DitStopRead @ 0x1C01D6A50 (DitStopRead.c)
 *     ProcessHidInputViaRim @ 0x1C0229C44 (ProcessHidInputViaRim.c)
 */

void __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KEVENT *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-68h]
  int v24; // [rsp+28h] [rbp-60h]
  _QWORD v25[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v26; // [rsp+50h] [rbp-38h]
  unsigned int v27; // [rsp+90h] [rbp+8h] BYREF
  char v28; // [rsp+A8h] [rbp+20h] BYREF

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
              v6 = ZwRemoveIoCompletionEx(ghDITIocp, v25, 1LL, &v28, 0LL, v24);
              if ( !v6 )
                break;
LABEL_4:
              if ( v6 != 257 || PsIsThreadTerminating(KeGetCurrentThread()) )
                goto LABEL_6;
            }
            if ( v25[1] == 1LL )
              break;
            EnterDeviceInfoListCrit_(v7);
            v13 = v25[0];
            if ( v25[0] )
            {
              v12 = v25[0] + 104LL;
              *(_QWORD *)(v25[0] + 112LL) = v25[0] + 104LL;
              *(_QWORD *)(v13 + 104) = v13 + 104;
              --*(_DWORD *)(v13 + 312);
              if ( v4 )
              {
                if ( *(_QWORD *)v12 == v12 )
                {
                  *(_OWORD *)(v13 + 168) = v26;
                  v14 = gpDitInfo + 64;
                  v11 = *(__int64 **)(gpDitInfo + 72);
                  if ( *v11 != gpDitInfo + 64 )
                    __fastfail(3u);
                  *(_QWORD *)v12 = v14;
                  *(_QWORD *)(v12 + 8) = v11;
                  *v11 = v12;
                  *(_QWORD *)(v14 + 8) = v12;
                }
              }
              else
              {
                v12 = 65533LL;
                *(_WORD *)(v13 + 64) &= ~2u;
              }
            }
            LeaveDeviceInfoListCrit_(v12, v11);
          }
          if ( (HANDLE)v25[0] == ghDITRITEventWcp )
          {
            AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
            goto LABEL_6;
          }
          if ( (HANDLE)v25[0] != ghDITEventWcp )
            break;
          AssociateKernelIocpWcp(ghDITEventWcp, ghDITIocp, ghDITEvent, ghDITEventWcp, 1LL, 0, 0LL);
          while ( (unsigned int)GetDITWakeReason(&v27) )
          {
            switch ( v27 )
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
              case 0x100u:
                *a3 |= 0x100u;
                break;
            }
          }
        }
        if ( (HANDLE)v25[0] != ghDITResetEventWcp )
          break;
        gbDITResetEventAlreadySignaled = 1;
      }
      if ( (HANDLE)v25[0] != ghDITMmcssEventWcp )
        break;
      gbDITMmcssEventAlreadySignaled = 1;
    }
    if ( v25[0] == aDeviceTemplate[157] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[157],
        ghDITIocp,
        aDeviceTemplate[155],
        aDeviceTemplate[157],
        1LL,
        0,
        &aDeviceTemplate[158]);
      EnterCrit(0LL, 1LL);
      RIMOnPnpNotification(aDeviceTemplate[152]);
      goto LABEL_70;
    }
    if ( v25[0] == aDeviceTemplate[162] )
      break;
    if ( v25[0] == aDeviceTemplate[167] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[167],
        ghDITIocp,
        aDeviceTemplate[165],
        aDeviceTemplate[167],
        1LL,
        0,
        &aDeviceTemplate[168]);
      EnterCrit(0LL, 1LL);
      v18 = 0LL;
      goto LABEL_61;
    }
    if ( v25[0] == aDeviceTemplate[172] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[172],
        ghDITIocp,
        aDeviceTemplate[170],
        aDeviceTemplate[172],
        1LL,
        0,
        &aDeviceTemplate[173]);
      EnterCrit(0LL, 1LL);
      v18 = 1LL;
LABEL_61:
      RIMOnTimerNotification(aDeviceTemplate[152], v18);
      goto LABEL_70;
    }
    if ( v25[0] == aDeviceTemplate[180] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[180],
        ghDITIocp,
        aDeviceTemplate[178],
        aDeviceTemplate[180],
        1LL,
        0,
        &aDeviceTemplate[181]);
      EnterCrit(0LL, 1LL);
      RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
      v17 = (struct _KEVENT *)aDeviceTemplate[182];
LABEL_58:
      KeSetEvent(v17, 1, 0);
LABEL_70:
      UserSessionSwitchLeaveCrit(v16, v15);
      goto LABEL_6;
    }
    if ( v25[0] == aDeviceTemplate[186] )
    {
      AssociateKernelIocpWcp(
        aDeviceTemplate[186],
        ghDITIocp,
        aDeviceTemplate[184],
        aDeviceTemplate[186],
        1LL,
        0,
        &aDeviceTemplate[187]);
      EnterCrit(0LL, 1LL);
      if ( !gProtocolType )
      {
        RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
        v17 = (struct _KEVENT *)aDeviceTemplate[188];
        goto LABEL_58;
      }
      goto LABEL_70;
    }
    v8 = aDeviceTemplate[192];
    if ( v25[0] == v8 )
    {
      AssociateKernelIocpWcp(v8, ghDITIocp, aDeviceTemplate[190], aDeviceTemplate[192], 1LL, 0, &aDeviceTemplate[193]);
      EnterCrit(0LL, 1LL);
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      RIMDirectStartDeviceClassNotifications(aDeviceTemplate[152], gpWin32kDriverObject);
      KeSetEvent((PRKEVENT)aDeviceTemplate[194], 1, 0);
      UserSessionSwitchLeaveCrit(v10, v9);
      goto LABEL_4;
    }
    AssociateKernelIocpWcp(
      ghDITMouseFlushTimerWcp,
      ghDITIocp,
      ghDITMouseFlushTimer,
      ghDITMouseFlushTimerWcp,
      1LL,
      0,
      0LL);
  }
  AssociateKernelIocpWcp(
    aDeviceTemplate[162],
    ghDITIocp,
    aDeviceTemplate[160],
    aDeviceTemplate[162],
    1LL,
    0,
    &aDeviceTemplate[163]);
  EnterCrit(0LL, 1LL);
  v20 = 0LL;
  v21 = (_QWORD *)aDeviceTemplate[201];
  if ( v21 != &aDeviceTemplate[202] )
    v20 = aDeviceTemplate[201];
  UserSessionSwitchLeaveCrit(v21, v19);
  v22 = aDeviceTemplate[0];
  if ( SLODWORD(aDeviceTemplate[196]) >= 0 )
  {
    ProcessHidInputViaRim((void *)aDeviceTemplate[201]);
    v22 = aDeviceTemplate[0];
    if ( v20 )
    {
      aDeviceTemplate[201] = &aDeviceTemplate[202];
      v22 = aDeviceTemplate[0];
    }
  }
  LOBYTE(BugCheckParameter4) = 0;
  RIMReadInput(
    *(_QWORD *)(v22 + 1216),
    v22 + 1608,
    *(unsigned int *)(v22 + 1564),
    *(_QWORD *)(v22 + 1272),
    BugCheckParameter4,
    v22 + 1584,
    v22 + 1560,
    v22 + 1568);
  if ( v20 )
  {
    EnterCrit(0LL, 1LL);
    RIMFreeKernelMem(v20);
    goto LABEL_70;
  }
LABEL_6:
  EnterCrit(0LL, 1LL);
}

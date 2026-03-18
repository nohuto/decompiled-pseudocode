/*
 * XREFs of UsbhQueryPortState @ 0x1C0019A40
 * Callers:
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0004A20 (UsbhBusSuspend_Action.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhQueryChange @ 0x1C000FA00 (UsbhQueryChange.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0016A90 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0019330 (UsbhFdoReturnPortStatus.c)
 *     UsbhFinishStart @ 0x1C001B760 (UsbhFinishStart.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC04 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F1E0 (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040A90 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhPortResumeTimeout @ 0x1C0044014 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046430 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhFlushPortChange @ 0x1C003BDA0 (UsbhFlushPortChange.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int16 v4; // si
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v8; // ecx
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  KIRQL v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  _DWORD *v23; // rsi
  _QWORD *PoolWithTag; // rax
  _DWORD *v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  KIRQL v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 *v39; // rdi
  __int64 *v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // rdx
  __int64 **v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  _DWORD *v52; // r10
  _DWORD *v53; // r10
  _DWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  _DWORD *v58; // rax
  int v59; // eax
  unsigned __int16 v60; // dx
  int v61; // [rsp+50h] [rbp-41h]
  int v62; // [rsp+58h] [rbp-39h]
  int v64; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int16 v65; // [rsp+6Ch] [rbp-25h]
  __int16 v66; // [rsp+6Eh] [rbp-23h]
  _DWORD *v67; // [rsp+70h] [rbp-21h]
  _BYTE v68[8]; // [rsp+78h] [rbp-19h] BYREF
  _DWORD *v69; // [rsp+80h] [rbp-11h]
  _BYTE v70[6]; // [rsp+88h] [rbp-9h] BYREF
  unsigned __int16 v71; // [rsp+8Eh] [rbp-3h]
  char v72; // [rsp+90h] [rbp-1h]

  v67 = a4;
  v69 = a3;
  v4 = a2;
  v6 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v8 = v7[640];
  if ( (v8 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0LL, 0LL);
    if ( v52 )
      *v52 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v8 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0LL, 0LL);
    if ( v53 )
      *v53 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    v66 = 4;
    *a3 = 0;
    v71 = a2;
    v65 = a2;
    *(_DWORD *)&v70[2] = 0x40000;
    *(_WORD *)v70 = 0;
    v64 = 163;
    v72 = 0;
    v9 = (int)UsbhSyncSendCommand(a1, (unsigned int)&v64, (unsigned int)v70, (unsigned int)&v70[4]);
    v10 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1329877100;
        *(_QWORD *)(v12 + 16) = v4;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 24) = 1383420738LL;
      }
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v15 = (unsigned int)UsbhLogMask;
    v16 = v13;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 1413771367;
        *(_QWORD *)(v18 + 16) = v4;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 24) = 0LL;
        v15 = (unsigned int)UsbhLogMask;
      }
    }
    if ( v4 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( !v19 )
        UsbhTrapFatal_Dbg(a1, 0LL, v14, v15);
      if ( *(_DWORD *)v19 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v19, v14, v15);
      if ( v4 <= *(unsigned __int8 *)(v19 + 2938) )
      {
        v20 = *(_QWORD *)(v19 + 3056);
        if ( v20 )
        {
          v21 = v20 + 2928LL * (v4 - 1);
          if ( (v15 & 8) != 0 )
          {
            v22 = *(_QWORD *)(v19 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
            *(_DWORD *)v22 = 1044672615;
            *(_QWORD *)(v22 + 16) = v4;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 24) = v21;
          }
          if ( v21 )
          {
            v10 = *(_QWORD *)(v21 + 392);
            if ( v10 )
            {
              v23 = *(_DWORD **)(v10 + 64);
              if ( !v23 )
                UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), 0LL, v21, v15);
              if ( *v23 != 1329877064 )
                UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), *(_QWORD *)(v10 + 64), v21, v15);
              PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
              if ( PoolWithTag )
              {
                v25 = v23 + 316;
                *PoolWithTag = 0LL;
                PoolWithTag[1] = 0LL;
                PoolWithTag[2] = 0LL;
                PoolWithTag[3] = 0LL;
                *(_DWORD *)PoolWithTag = 1668571500;
                PoolWithTag[4] = v10;
                *((_DWORD *)PoolWithTag + 6) = 1383420738;
                PoolWithTag[5] = 0LL;
                v26 = PoolWithTag + 1;
                v27 = (_QWORD *)*((_QWORD *)v25 + 1);
                *v26 = v25;
                v26[1] = v27;
                if ( (_DWORD *)*v27 != v25 )
                  __fastfail(3u);
                *v27 = v26;
                *((_QWORD *)v25 + 1) = v26;
              }
              else
              {
                ++v23[320];
              }
              v4 = a2;
            }
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v16);
    if ( v10 )
    {
      v6 = *(_QWORD *)(v10 + 64);
      if ( !v6 )
        UsbhTrapFatal_Dbg(v10, 0LL, v29, v30);
      if ( *(_DWORD *)v6 != 1329877064 )
        UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64), v29, v30);
    }
    if ( (int)v9 >= 0 && v6 && *(_BYTE *)(v6 + 2716) )
    {
      v62 = *(_DWORD *)v70;
      if ( ((v70[2] | v70[0]) & 8) != 0 )
      {
        v54 = FdoExt(a1, v28, v29, v30);
        UsbhDispatch_HardResetEvent(a1, (__int64)(v54 + 566), 3);
      }
      if ( (v62 & 1) == 0 && (v62 & 0x10000) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v28,
            3,
            21,
            (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
            a1);
        byte_1C0067688 = 1;
        UsbhFlushPortChange(a1, v4, v68);
        v58 = FdoExt(a1, v55, v56, v57);
        UsbhDispatch_HardResetEvent(a1, (__int64)(v58 + 566), 3);
      }
    }
    if ( v10 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 1329877109;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = v10;
          *(_QWORD *)(v32 + 24) = 1383420738LL;
        }
      }
      v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v36 = *(_QWORD *)(a1 + 64);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
          *(_DWORD *)v37 = 1348891236;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 16) = v10;
          *(_QWORD *)(v37 + 24) = 1383420738LL;
        }
      }
      v38 = *(_QWORD *)(v10 + 64);
      if ( !v38 )
        UsbhTrapFatal_Dbg(v10, 0LL, v33, v34);
      if ( *(_DWORD *)v38 != 1329877064 )
        UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64), v33, v34);
      v39 = (__int64 *)(v38 + 1264);
      v40 = *(__int64 **)(v38 + 1264);
      if ( v40 == (__int64 *)(v38 + 1264) )
      {
LABEL_97:
        v59 = *(_DWORD *)(v38 + 1280);
        if ( v59 )
          *(_DWORD *)(v38 + 1280) = v59 - 1;
      }
      else
      {
        while ( 1 )
        {
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v41 = *(_QWORD *)(a1 + 64);
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
              *(_DWORD *)v42 = 1064591724;
              *(_QWORD *)(v42 + 8) = 0LL;
              *(_QWORD *)(v42 + 16) = v38;
              *(_QWORD *)(v42 + 24) = 1383420738LL;
            }
          }
          if ( *((_DWORD *)v40 + 4) == 1383420738 && !v40[4] )
            break;
          v40 = (__int64 *)*v40;
          if ( v40 == v39 )
            goto LABEL_97;
        }
        v43 = (__int64 *)*v40;
        v44 = (__int64 **)v40[1];
        if ( *(__int64 **)(*v40 + 8) != v40 || *v44 != v40 )
          __fastfail(3u);
        *v44 = v43;
        v43[1] = (__int64)v44;
        ExFreePoolWithTag(v40 - 1, 0);
      }
      if ( (__int64 *)*v39 == v39 && !*(_DWORD *)(v38 + 1280) )
        KeSetEvent((PRKEVENT)(v38 + 1288), 0, 0);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v35);
    }
    if ( (UsbhLogMask & 4) != 0 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
        *(_DWORD *)v46 = 1953722449;
        *(_QWORD *)(v46 + 8) = 0LL;
        *(_QWORD *)(v46 + 16) = v9;
        *(_QWORD *)(v46 + 24) = 0LL;
      }
    }
    if ( (int)v9 < 0 || *(_WORD *)&v70[4] == 4 )
    {
      if ( (v9 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v9) )
      {
        Log(a1, 4, 1366324018, v60, 0LL);
        LOBYTE(v61) = 0;
        UsbhException(a1, a2, 8, (int)v70, 10, v9, 0, usbfile_bus_c, 1639, v61);
      }
      if ( (int)v9 >= 0 )
      {
        v47 = *(unsigned __int16 *)v70;
        v48 = *(unsigned __int16 *)&v70[2];
        *v69 = *(_DWORD *)v70;
        if ( (UsbhLogMask & 4) != 0 )
        {
          v49 = *(_QWORD *)(a1 + 64);
          if ( v49 )
          {
            v50 = *(_QWORD *)(v49 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
            *(_DWORD *)v50 = 1953722448;
            *(_QWORD *)(v50 + 8) = 0LL;
            *(_QWORD *)(v50 + 16) = v48;
            *(_QWORD *)(v50 + 24) = v47;
          }
        }
      }
      if ( v67 )
        *v67 = 0;
      return (unsigned int)v9;
    }
    else
    {
      Log(a1, 4, 1366324017, *(unsigned __int16 *)&v70[4], 0LL);
      LOBYTE(v61) = 0;
      UsbhException(a1, a2, 9, (int)v70, 10, v9, 0, usbfile_bus_c, 1627, v61);
      if ( v67 )
        *v67 = 0;
      return 3221225473LL;
    }
  }
}

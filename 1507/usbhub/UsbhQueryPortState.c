/*
 * XREFs of UsbhQueryPortState @ 0x1C0014220
 * Callers:
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0004B00 (UsbhBusSuspend_Action.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000ABE8 (UsbhSyncSuspendPdoPort.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C00104E0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0013B10 (UsbhFdoReturnPortStatus.c)
 *     UsbhQueryChange @ 0x1C00187B0 (UsbhQueryChange.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BA54 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C003EFB0 (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040874 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhPortResumeTimeout @ 0x1C0043EE4 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463B0 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhFlushPortChange @ 0x1C0003D18 (UsbhFlushPortChange.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0015DC8 (UsbhDispatch_HardResetEvent.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rbp
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v13; // r12
  __int64 v14; // rdi
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  KIRQL v21; // r13
  __int64 v22; // rdx
  unsigned __int16 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  _DWORD *v29; // rsi
  _QWORD *v30; // rax
  _DWORD *v31; // rsi
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int16 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  KIRQL v42; // bp
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  _QWORD *v48; // rdi
  _QWORD *v49; // rdx
  _QWORD *v50; // r9
  __int64 v51; // r8
  __int64 v52; // rcx
  int v53; // eax
  unsigned __int16 v54; // ax
  _QWORD *v55; // rdx
  _QWORD *v56; // rcx
  int v57; // r9d
  __int64 v58; // rax
  int v59; // [rsp+48h] [rbp-60h]
  int v60; // [rsp+50h] [rbp-58h]
  _BYTE v61[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v62; // [rsp+62h] [rbp-46h]
  unsigned __int16 v63; // [rsp+64h] [rbp-44h]
  unsigned __int16 v64; // [rsp+66h] [rbp-42h]
  int v65; // [rsp+B0h] [rbp+8h]

  v8 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v10 = v9[640];
  if ( (v10 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v10 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[4] = 0;
      PoolWithTag[2] = 4;
      *(_DWORD *)a3 = 0;
      PoolWithTag[3] = a2;
      *(_DWORD *)PoolWithTag = 0;
      v61[0] = -93;
      *((_BYTE *)PoolWithTag + 8) = 0;
      v61[1] = 0;
      v62 = 0;
      v63 = a2;
      v64 = PoolWithTag[2];
      v14 = 0LL;
      v60 = UsbhSyncSendCommand(a1, (unsigned int)v61, (_DWORD)PoolWithTag, (int)PoolWithTag + 4);
      v15 = v60;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 1329877100;
          *(_QWORD *)(v17 + 16) = a2;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 24) = 1383420738LL;
        }
      }
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v20 = (unsigned int)UsbhLogMask;
      v21 = v18;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 && (v22 = *(_QWORD *)(a1 + 64)) != 0 )
      {
        v23 = a2;
        v24 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v24 = 1413771367;
        *(_QWORD *)(v24 + 16) = a2;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 24) = 0LL;
        v20 = (unsigned int)UsbhLogMask;
      }
      else
      {
        v23 = a2;
      }
      if ( v23 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( !v25 )
          UsbhTrapFatal_Dbg(a1, 0LL, v19, v20);
        if ( *(_DWORD *)v25 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v25, v19, v20);
        if ( v23 <= *(unsigned __int8 *)(v25 + 2938) )
        {
          v26 = *(_QWORD *)(v25 + 3056);
          if ( v26 )
          {
            v27 = v26 + 2928LL * (v23 - 1);
            if ( (v20 & 8) != 0 )
            {
              v28 = *(_QWORD *)(v25 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
              *(_DWORD *)v28 = 1044672615;
              *(_QWORD *)(v28 + 16) = v23;
              *(_QWORD *)(v28 + 8) = 0LL;
              *(_QWORD *)(v28 + 24) = v27;
            }
            if ( v27 )
            {
              v14 = *(_QWORD *)(v27 + 392);
              if ( v14 )
              {
                v29 = *(_DWORD **)(v14 + 64);
                if ( !v29 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), 0LL, v27, v20);
                if ( *v29 != 1329877064 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), *(_QWORD *)(v14 + 64), v27, v20);
                v30 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
                if ( v30 )
                {
                  v31 = v29 + 316;
                  *v30 = 0LL;
                  v30[1] = 0LL;
                  v30[2] = 0LL;
                  v30[3] = 0LL;
                  *(_DWORD *)v30 = 1668571500;
                  v30[4] = v14;
                  *((_DWORD *)v30 + 6) = 1383420738;
                  v30[5] = 0LL;
                  v32 = v30 + 1;
                  v33 = (_QWORD *)*((_QWORD *)v31 + 1);
                  *v32 = v31;
                  v32[1] = v33;
                  if ( (_DWORD *)*v33 != v31 )
                    __fastfail(3u);
                  *v33 = v32;
                  *((_QWORD *)v31 + 1) = v32;
                }
                else
                {
                  ++v29[320];
                }
                v15 = v60;
              }
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21);
      if ( v14 )
      {
        v8 = *(_QWORD *)(v14 + 64);
        if ( !v8 )
          UsbhTrapFatal_Dbg(v14, 0LL, v35, v36);
        if ( *(_DWORD *)v8 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v35, v36);
      }
      if ( v15 < 0 || !v8 || !*(_BYTE *)(v8 + 2708) )
        goto LABEL_50;
      v65 = *(_DWORD *)v13;
      if ( ((*((_BYTE *)v13 + 2) | *(_BYTE *)v13) & 8) != 0 )
      {
        v37 = FdoExt(a1);
        UsbhDispatch_HardResetEvent(a1, v37 + 2264, 3LL);
      }
      if ( (v65 & 1) == 0 && (v65 & 0x10000) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v34,
            3,
            21,
            (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
            a1);
        v38 = a2;
        byte_1C0066688 = 1;
        UsbhFlushPortChange(a1, a2);
        v39 = FdoExt(a1);
        UsbhDispatch_HardResetEvent(a1, v39 + 2264, 3LL);
      }
      else
      {
LABEL_50:
        v38 = a2;
      }
      if ( v14 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v40 = *(_QWORD *)(a1 + 64);
          if ( v40 )
          {
            v41 = *(_QWORD *)(v40 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
            *(_DWORD *)v41 = 1329877109;
            *(_QWORD *)(v41 + 8) = 0LL;
            *(_QWORD *)(v41 + 16) = v14;
            *(_QWORD *)(v41 + 24) = 1383420738LL;
          }
        }
        v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v45 = *(_QWORD *)(a1 + 64);
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
            *(_DWORD *)v46 = 1348891236;
            *(_QWORD *)(v46 + 8) = 0LL;
            *(_QWORD *)(v46 + 16) = v14;
            *(_QWORD *)(v46 + 24) = 1383420738LL;
          }
        }
        v47 = *(_QWORD *)(v14 + 64);
        if ( !v47 )
          UsbhTrapFatal_Dbg(v14, 0LL, v43, v44);
        if ( *(_DWORD *)v47 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v43, v44);
        v48 = (_QWORD *)(v47 + 1264);
        v49 = *(_QWORD **)(v47 + 1264);
        if ( v49 == (_QWORD *)(v47 + 1264) )
        {
LABEL_67:
          v53 = *(_DWORD *)(v47 + 1280);
          if ( v53 )
            *(_DWORD *)(v47 + 1280) = v53 - 1;
        }
        else
        {
          while ( 1 )
          {
            v50 = v49 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v51 = *(_QWORD *)(a1 + 64);
              if ( v51 )
              {
                v52 = *(_QWORD *)(v51 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
                *(_DWORD *)v52 = 1064591724;
                *(_QWORD *)(v52 + 8) = 0LL;
                *(_QWORD *)(v52 + 16) = v47;
                *(_QWORD *)(v52 + 24) = 1383420738LL;
              }
            }
            if ( *((_DWORD *)v50 + 6) == 1383420738 && !v50[5] )
              break;
            v49 = (_QWORD *)*v49;
            if ( v49 == v48 )
              goto LABEL_67;
          }
          v55 = (_QWORD *)*v49;
          v56 = (_QWORD *)v50[2];
          if ( (_QWORD *)v55[1] != v50 + 1 || (_QWORD *)*v56 != v50 + 1 )
            __fastfail(3u);
          *v56 = v55;
          v55[1] = v56;
          ExFreePoolWithTag(v50, 0);
        }
        if ( (_QWORD *)*v48 == v48 && !*(_DWORD *)(v47 + 1280) )
          KeSetEvent((PRKEVENT)(v47 + 1288), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v42);
        v15 = v60;
      }
      Log(a1, 4, 1366324084, v15, 0LL);
      if ( v15 < 0 || (v54 = v13[2], v54 == 4) )
      {
        if ( (v15 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v15) )
        {
          Log(a1, 4, 1366324018, v13[2], 0LL);
          LOBYTE(v59) = 0;
          UsbhException(a1, v38, 8, (int)v13, 10, v15, 0, usbfile_bus_c, 1649, v59);
        }
        if ( v15 >= 0 )
        {
          v57 = v13[1];
          *(_WORD *)(a3 + 2) = v57;
          v58 = *v13;
          *(_WORD *)a3 = v58;
          Log(a1, 4, 1349546868, v57, v58);
        }
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(v13, 0);
        return (unsigned int)v15;
      }
      else
      {
        Log(a1, 4, 1366324017, v54, 0LL);
        LOBYTE(v59) = 0;
        UsbhException(a1, v38, 9, (int)v13, 10, v15, 0, usbfile_bus_c, 1635, v59);
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(v13, 0);
        return 3221225473LL;
      }
    }
    else
    {
      Log(a1, 4, 1366319468, 0, 0LL);
      if ( a4 )
        *a4 = -1073737728;
      return 3221225626LL;
    }
  }
}

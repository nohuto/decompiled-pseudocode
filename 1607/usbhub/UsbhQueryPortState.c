/*
 * XREFs of UsbhQueryPortState @ 0x1C00150B0
 * Callers:
 *     UsbhFdoColdStartCheckPort @ 0x1C00035B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003D8C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0004C20 (UsbhBusSuspend_Action.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0011850 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C001A924 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhQueryChange @ 0x1C0024D40 (UsbhQueryChange.c)
 *     UsbhFinishStart @ 0x1C0025AA0 (UsbhFinishStart.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003C024 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E338 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040DC8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 *     UsbhPortResumeTimeout @ 0x1C0044354 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046760 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0015A50 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0017864 (UsbhDispatch_HardResetEvent.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhFlushPortChange @ 0x1C003C1C0 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rbp
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v13; // r13
  __int64 v14; // rdi
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  KIRQL v21; // r15
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
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  KIRQL v41; // bp
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  _QWORD *v47; // rdi
  _QWORD *v48; // rdx
  _QWORD *v49; // r9
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // eax
  unsigned __int16 v53; // ax
  _QWORD *v54; // rdx
  _QWORD *v55; // rcx
  int v56; // r9d
  __int64 v57; // rax
  int v58; // [rsp+48h] [rbp-60h]
  int v59; // [rsp+50h] [rbp-58h]
  char v60[8]; // [rsp+58h] [rbp-50h] BYREF
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
      v59 = UsbhSyncSendCommand(a1, (unsigned int)v61, (_DWORD)PoolWithTag, (int)PoolWithTag + 4);
      v15 = v59;
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
                  if ( (_DWORD *)*v33 != v31 )
                    __fastfail(3u);
                  *v32 = v31;
                  v32[1] = v33;
                  *v33 = v32;
                  *((_QWORD *)v31 + 1) = v32;
                }
                else
                {
                  ++v29[320];
                }
                v15 = v59;
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
      if ( v15 >= 0 && v8 && *(_BYTE *)(v8 + 2716) )
      {
        v65 = *(_DWORD *)v13;
        if ( ((v13[1] | *v13) & 8) != 0 )
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
              (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
              a1);
          byte_1C0067688 = 1;
          UsbhFlushPortChange(a1, a2, v60);
          v38 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v38 + 2264, 3LL);
        }
      }
      if ( v14 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v39 = *(_QWORD *)(a1 + 64);
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
            *(_DWORD *)v40 = 1329877109;
            *(_QWORD *)(v40 + 8) = 0LL;
            *(_QWORD *)(v40 + 16) = v14;
            *(_QWORD *)(v40 + 24) = 1383420738LL;
          }
        }
        v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v44 = *(_QWORD *)(a1 + 64);
          if ( v44 )
          {
            v45 = *(_QWORD *)(v44 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
            *(_DWORD *)v45 = 1348891236;
            *(_QWORD *)(v45 + 8) = 0LL;
            *(_QWORD *)(v45 + 16) = v14;
            *(_QWORD *)(v45 + 24) = 1383420738LL;
          }
        }
        v46 = *(_QWORD *)(v14 + 64);
        if ( !v46 )
          UsbhTrapFatal_Dbg(v14, 0LL, v42, v43);
        if ( *(_DWORD *)v46 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v42, v43);
        v47 = (_QWORD *)(v46 + 1264);
        v48 = *(_QWORD **)(v46 + 1264);
        if ( v48 == (_QWORD *)(v46 + 1264) )
        {
LABEL_66:
          v52 = *(_DWORD *)(v46 + 1280);
          if ( v52 )
            *(_DWORD *)(v46 + 1280) = v52 - 1;
        }
        else
        {
          while ( 1 )
          {
            v49 = v48 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v50 = *(_QWORD *)(a1 + 64);
              if ( v50 )
              {
                v51 = *(_QWORD *)(v50 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
                *(_DWORD *)v51 = 1064591724;
                *(_QWORD *)(v51 + 8) = 0LL;
                *(_QWORD *)(v51 + 16) = v46;
                *(_QWORD *)(v51 + 24) = 1383420738LL;
              }
            }
            if ( *((_DWORD *)v49 + 6) == 1383420738 && !v49[5] )
              break;
            v48 = (_QWORD *)*v48;
            if ( v48 == v47 )
              goto LABEL_66;
          }
          v54 = (_QWORD *)*v48;
          v55 = (_QWORD *)v49[2];
          if ( (_QWORD *)v54[1] != v49 + 1 || (_QWORD *)*v55 != v49 + 1 )
            __fastfail(3u);
          *v55 = v54;
          v54[1] = v55;
          ExFreePoolWithTag(v49, 0);
        }
        if ( (_QWORD *)*v47 == v47 && !*(_DWORD *)(v46 + 1280) )
          KeSetEvent((PRKEVENT)(v46 + 1288), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v41);
        v15 = v59;
      }
      Log(a1, 4, 1366324084, v15, 0LL);
      if ( v15 < 0 || (v53 = v13[2], v53 == 4) )
      {
        if ( (v15 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v15) )
        {
          Log(a1, 4, 1366324018, v13[2], 0LL);
          LOBYTE(v58) = 0;
          UsbhException(a1, a2, 8, (int)v13, 10, v15, 0, usbfile_bus_c, 1649, v58);
        }
        if ( v15 >= 0 )
        {
          v56 = v13[1];
          *(_WORD *)(a3 + 2) = v56;
          v57 = *v13;
          *(_WORD *)a3 = v57;
          Log(a1, 4, 1349546868, v56, v57);
        }
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(v13, 0);
        return (unsigned int)v15;
      }
      else
      {
        Log(a1, 4, 1366324017, v53, 0LL);
        LOBYTE(v58) = 0;
        UsbhException(a1, a2, 9, (int)v13, 10, v15, 0, usbfile_bus_c, 1635, v58);
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

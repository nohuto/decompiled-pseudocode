/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1C0022500
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004730 (UsbhSignalSyncDeviceReset.c)
 *     UsbhFlushPortChangeQueue @ 0x1C000B3D4 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B48C (UsbhFreePortChangeQueueObject.c)
 *     UsbhSignalPauseEvent @ 0x1C000B5C4 (UsbhSignalPauseEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhRefPdo @ 0x1C000BE50 (UsbhRefPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v10; // r8
  KIRQL v11; // r13
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  KSPIN_LOCK *v25; // rsi
  KIRQL v26; // r14
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rdx
  __int64 **v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  unsigned __int16 v37; // si
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  KIRQL v41; // al
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // esi
  int v52; // esi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // r8
  __int64 v57; // rax
  KSPIN_LOCK *v58; // r15
  KIRQL v59; // si
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r9
  KIRQL v65; // [rsp+98h] [rbp+20h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 812661041;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = v7;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      a3,
      45,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  v12 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 19LL;
      *(_QWORD *)(v14 + 24) = v10;
      v12 = UsbhLogMask;
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = *(int *)(a2 + 12);
  if ( (v12 & 0x10) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 724267376;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 24) = v15;
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = a2 + 32 * (v19 + 43);
  *(_DWORD *)v20 = 19;
  *(_DWORD *)(v20 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v20 + 8) = -1;
  *(_QWORD *)(v20 + 12) = 0LL;
  *(_QWORD *)(v20 + 20) = 0LL;
  *(_DWORD *)(v20 + 28) = 0;
  v21 = *(_DWORD *)(a2 + 12);
  if ( v21 == 12 || v21 >= 5 && (v21 <= 6 || v21 == 16) )
  {
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v21;
    v22 = *(_QWORD *)(a1 + 64);
    if ( !v22 )
      UsbhTrapFatal_Dbg(a1, 0LL, v15, v16);
    if ( *(_DWORD *)v22 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v22, v15, v16);
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v24 = *(_QWORD *)(v22 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
      *(_DWORD *)v24 = 1397778803;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = 0LL;
      *(_QWORD *)(v24 + 24) = v23;
    }
    v25 = (KSPIN_LOCK *)(v22 + 4944);
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4944));
    if ( *(_QWORD *)(a2 + 792) )
    {
      *(_QWORD *)(a2 + 792) = 0LL;
      KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
    }
    KeReleaseSpinLock(v25, v26);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4));
    v29 = *(_DWORD **)(a1 + 64);
    if ( !v29 )
      UsbhTrapFatal_Dbg(a1, 0LL, v27, v28);
    if ( *v29 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v29, v27, v28);
    v30 = (__int64 **)(a2 + 456);
    while ( *v30 != (__int64 *)v30 )
    {
      v56 = *v30;
      v57 = **v30;
      if ( (__int64 **)(*v30)[1] != v30 || *(__int64 **)(v57 + 8) != v56 )
        __fastfail(3u);
      *v30 = (__int64 *)v57;
      *(_QWORD *)(v57 + 8) = v30;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v56 - 2), 1);
    }
    v31 = *(unsigned __int16 *)(a2 + 4);
    v32 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 757952880;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = v32;
        *(_QWORD *)(v34 + 24) = v31;
      }
    }
    v35 = *(_DWORD *)(a2 + 12);
    v36 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v36 + a2 + 1384) = v35;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
    v37 = *(_WORD *)(a2 + 4);
    v38 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
        *(_DWORD *)v40 = 1329877100;
        *(_QWORD *)(v40 + 16) = v37;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 24) = 1884308559LL;
      }
    }
    v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v43 = (unsigned int)UsbhLogMask;
    v65 = v41;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v44 = *(_QWORD *)(a1 + 64);
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
        *(_DWORD *)v45 = 1413771367;
        *(_QWORD *)(v45 + 16) = v37;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_QWORD *)(v45 + 24) = 0LL;
        v43 = (unsigned int)UsbhLogMask;
      }
    }
    if ( v37 )
    {
      v46 = *(_QWORD *)(a1 + 64);
      if ( !v46 )
        UsbhTrapFatal_Dbg(a1, 0LL, v42, v43);
      if ( *(_DWORD *)v46 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v46, v42, v43);
      if ( v37 <= *(unsigned __int8 *)(v46 + 2938) )
      {
        v47 = *(_QWORD *)(v46 + 3056);
        if ( v47 )
        {
          v48 = v47 + 2928LL * (v37 - 1);
          if ( (v43 & 8) != 0 )
          {
            v47 = *(_QWORD *)(v46 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
            *(_DWORD *)v47 = 1044672615;
            *(_QWORD *)(v47 + 16) = v37;
            *(_QWORD *)(v47 + 8) = 0LL;
            *(_QWORD *)(v47 + 24) = v48;
          }
          if ( v48 )
          {
            v38 = *(_QWORD *)(v48 + 392);
            if ( v38 )
              v38 = UsbhRefPdo(v47, v38, 0LL, 1884308559LL);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v65);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v49 = *(_QWORD *)(a1 + 64);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
        *(_DWORD *)v50 = 1634744625;
        *(_QWORD *)(v50 + 8) = 0LL;
        *(_QWORD *)(v50 + 16) = a2;
        *(_QWORD *)(v50 + 24) = v38;
      }
    }
    if ( v38 )
    {
      v58 = (KSPIN_LOCK *)(v6 + 5168);
      *(_DWORD *)(a2 + 416) = 1;
      v59 = KeAcquireSpinLockRaiseToDpc(v58);
      if ( *((_QWORD *)PdoExt(v38, v60, v61, v62) + 108) )
      {
        Log(a1, 4, 825847906, v38, 0LL);
        KeReleaseSpinLock(v58, v59);
        UsbhCancelResetTimeout(a1, a2, 1);
        UsbhReleaseEnumBusLockEx(a1, a3, *(_WORD *)(a2 + 4));
        UsbhSignalSyncDeviceReset(a1, v38, a2, 0xC0000001);
      }
      else
      {
        KeReleaseSpinLock(v58, v59);
      }
      UsbhBusUnlatchPdo(a1, v38, a2, v63, 0LL);
    }
  }
  else
  {
    UsbhFlushPortChangeQueue(a1, a2, v15, v16);
    v51 = v21 - 10;
    if ( v51 )
    {
      v52 = v51 - 3;
      if ( v52 )
      {
        if ( v52 == 1 )
        {
          v53 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v53 + a2 + 1384) = 3;
        }
      }
      else
      {
        v54 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v54 + a2 + 1384) = 12;
      }
    }
    else
    {
      v55 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v55 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v11, 0LL);
  }
}

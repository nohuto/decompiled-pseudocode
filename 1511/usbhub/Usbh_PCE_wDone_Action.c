/*
 * XREFs of Usbh_PCE_wDone_Action @ 0x1C0017DA0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0026510 (UsbhLogSignalSuspendEvent.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C0026660 (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

void __fastcall Usbh_PCE_wDone_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // r14
  char v14; // cl
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // r8d
  int v52; // r8d
  int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // [rsp+20h] [rbp-48h]

  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7, a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 812660319;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      36,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  v14 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v15 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = 6LL;
      *(_QWORD *)(v15 + 24) = v12;
      v14 = UsbhLogMask;
    }
  }
  v16 = *(unsigned __int16 *)(a2 + 4);
  v17 = *(int *)(a2 + 12);
  if ( (v14 & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v18 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v18 = 724267376;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v17;
      *(_QWORD *)(v18 + 24) = v16;
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = a2 + 32 * (v19 + 43);
  *(_DWORD *)v20 = 6;
  *(_DWORD *)(v20 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v20 + 8) = -1;
  *(_QWORD *)(v20 + 12) = 0LL;
  *(_QWORD *)(v20 + 20) = 0LL;
  *(_DWORD *)(v20 + 28) = 0;
  v21 = UsbhLogMask;
  v22 = *(int *)(a2 + 12);
  v23 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v24 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v24 = 829437535;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v22;
      *(_QWORD *)(v24 + 24) = v23;
      v21 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v22 == 12 )
  {
    v35 = *(unsigned __int16 *)(a2 + 4);
    if ( (v21 & 0x200) != 0 )
    {
      v36 = *(_QWORD *)(a1 + 64);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
        *(_DWORD *)v37 = 862991967;
        *(_QWORD *)(v37 + 8) = 0LL;
        *(_QWORD *)(v37 + 16) = 0LL;
        *(_QWORD *)(v37 + 24) = v35;
        LOBYTE(v21) = UsbhLogMask;
      }
    }
    v38 = *(unsigned __int16 *)(a2 + 4);
    v39 = *(int *)(a2 + 12);
    if ( (v21 & 0x10) != 0 )
    {
      v40 = *(_QWORD *)(a1 + 64);
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
        *(_DWORD *)v41 = 1986359664;
        *(_QWORD *)(v41 + 8) = 0LL;
        *(_QWORD *)(v41 + 16) = v39;
        *(_QWORD *)(v41 + 24) = v38;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v42 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 6;
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(v42 + a2 + 1384) = 6;
    v43 = *(unsigned __int16 *)(a2 + 4);
    v44 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
        *(_DWORD *)v46 = 757952880;
        *(_QWORD *)(v46 + 8) = 0LL;
        *(_QWORD *)(v46 + 16) = v44;
        *(_QWORD *)(v46 + 24) = v43;
      }
    }
    v47 = *(_DWORD *)(a2 + 12);
    v48 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v48 + a2 + 1384) = v47;
    goto LABEL_38;
  }
  if ( (_DWORD)v22 == 3 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        3,
        38,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
      v21 = UsbhLogMask;
    }
    v25 = *(unsigned __int16 *)(a2 + 4);
    if ( (v21 & 0x200) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 64);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 879769183;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = 0LL;
        *(_QWORD *)(v27 + 24) = v25;
      }
    }
    v28 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v28 + a2 + 1384) = 2;
    v29 = *(unsigned __int16 *)(a2 + 4);
    v30 = *(int *)(a2 + 12);
    *(_QWORD *)(a2 + 384) = 0LL;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
        *(_DWORD *)v32 = 757952880;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v30;
        *(_QWORD *)(v32 + 24) = v29;
      }
    }
    v33 = *(_DWORD *)(a2 + 12);
    v34 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v34 + a2 + 1384) = v33;
LABEL_38:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v13);
    return;
  }
  v49 = v22 - 8;
  if ( !v49 )
  {
    Log(a1, 512, 1597403190, a2, *(unsigned __int16 *)(a2 + 4));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        40,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v50 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 7;
    *(_DWORD *)(v50 + a2 + 1384) = 7;
    if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    {
      Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 16) = 30;
    }
    goto LABEL_44;
  }
  v51 = v49 - 2;
  if ( v51 )
  {
    v52 = v51 - 3;
    if ( !v52 )
    {
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v58 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v58 + a2 + 1384) = 6;
      goto LABEL_62;
    }
    v53 = v52 - 1;
    if ( v53 )
    {
      v61 = *(unsigned __int16 *)(a2 + 4);
      if ( v53 != 3 )
      {
        Log(a1, 512, 1597403224, a2, v61);
        v54 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v54 + a2 + 1384) = 19;
LABEL_44:
        UsbhUnlockPcqWithTag(a1, a2, v13, 0LL);
        return;
      }
      Log(a1, 512, 1597403186, a2, v61);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          42,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v55 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 15;
      *(_DWORD *)(v55 + a2 + 1384) = 15;
LABEL_62:
      UsbhFlushPortChangeQueue(a1, a2);
      *(_QWORD *)(a2 + 384) = 0LL;
      goto LABEL_44;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        0,
        39,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1597403189, 0LL, *(unsigned __int16 *)(a2 + 4));
    v57 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 4;
    *(_DWORD *)(v57 + a2 + 1384) = 4;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        0,
        41,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1597403191, 0LL, *(unsigned __int16 *)(a2 + 4));
    v59 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v59 + a2 + 1384) = 9;
  }
  *(_QWORD *)(a2 + 384) = 0LL;
  UsbhUnlockPcqWithTag(a1, a2, v13, v56);
  UsbhHubQueueProcessChangeWorker(v60, a2);
}

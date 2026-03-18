/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x1C0013310
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00418D4 (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  KIRQL v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 result; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6, a3, a4);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = UsbhLogMask;
  v11 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 2LL;
      *(_QWORD *)(v12 + 24) = v9;
      v10 = UsbhLogMask;
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (v10 & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v15 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v14;
      *(_QWORD *)(v15 + 24) = v13;
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 2;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *(_DWORD *)(v17 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v13,
      11,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v19 = UsbhLogMask;
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 812659295;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v18;
      *(_QWORD *)(v22 + 24) = v20;
      v19 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v18 == 4 )
  {
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (v19 & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 862990943;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = 4LL;
        *(_QWORD *)(v25 + 24) = v23;
      }
    }
    v26 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 5;
    *(_DWORD *)(v26 + a2 + 1384) = 5;
    v27 = *(unsigned __int16 *)(a2 + 4);
    v28 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v30 = 1986359664;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = v28;
        *(_QWORD *)(v30 + 24) = v27;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 20;
    v31 = *(unsigned __int16 *)(a2 + 4);
    v32 = *(int *)(a2 + 12);
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
  }
  else
  {
    if ( (_DWORD)v18 == 7 )
    {
      Log(a1, 512, 1597141041, 7LL, *(unsigned __int16 *)(a2 + 4));
      Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
      v44 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v44 + a2 + 1384) = 11;
LABEL_37:
      UsbhFlushPortChangeQueue(a1, a2);
LABEL_38:
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    }
    else
    {
      switch ( (int)v18 )
      {
        case 1:
        case 2:
        case 18:
          Log(a1, 512, 1597141042, v18, *(unsigned __int16 *)(a2 + 4));
          v46 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 6;
          *(_DWORD *)(v46 + a2 + 1384) = 6;
          UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
          goto LABEL_37;
        case 3:
        case 12:
          Log(a1, 512, 1597141044, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          v45 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v45 + a2 + 1384) = 12;
          break;
        case 5:
        case 16:
        case 17:
          Log(a1, 512, 1597141048, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          v50 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = v18;
          *(_DWORD *)(v50 + a2 + 1384) = v18;
          break;
        case 6:
        case 11:
        case 15:
          Log(a1, 512, 1597141045, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhFlushPortChangeQueue(a1, a2);
          UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
          goto LABEL_38;
        case 8:
          UsbhRemoveQueuedSuspend(a1, a2, v20, v14);
          UsbhiSignalSuspendEvent(a1, a2);
          Log(a1, 512, 1597141047, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          v48 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v48 + a2 + 1384) = 12;
          break;
        case 9:
          UsbhRemoveQueuedSuspend(a1, a2, v20, v14);
          Log(a1, 512, 1597141046, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          v47 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 5;
          *(_DWORD *)(v47 + a2 + 1384) = 5;
          break;
        case 10:
          UsbhRemoveQueuedSuspend(a1, a2, v20, v14);
          UsbhiSignalSuspendEvent(a1, a2);
          Log(a1, 512, 1597141047, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          v49 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 13;
          *(_DWORD *)(v49 + a2 + 1384) = 13;
          break;
        case 13:
        case 14:
          Log(a1, 512, 1597141049, v18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          v51 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 13;
          *(_DWORD *)(v51 + a2 + 1384) = 13;
          break;
        default:
          v52 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v52 + a2 + 1384) = 19;
          UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
          break;
      }
    }
    UsbhUnlockPcqWithTag(a1, a2, v11, 0LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  v37 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 1129346859;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = 0LL;
      *(_QWORD *)(v39 + 24) = v37;
    }
  }
  result = UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 729239619LL, 6, a2);
  v41 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      result = 1129346861LL;
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 1129346861;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = 0LL;
      *(_QWORD *)(v43 + 24) = v41;
    }
  }
  return result;
}

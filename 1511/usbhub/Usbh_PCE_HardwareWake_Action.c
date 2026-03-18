/*
 * XREFs of Usbh_PCE_HardwareWake_Action @ 0x1C0023B00
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00418D4 (UsbhRemoveQueuedSuspend.c)
 */

void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r9
  char v9; // cl
  KIRQL v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int16 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // r10d
  __int64 v45; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6, a3, a4);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = UsbhLogMask;
  v10 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 12LL;
      *(_QWORD *)(v12 + 24) = v8;
      v9 = UsbhLogMask;
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (v9 & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v14;
      *(_QWORD *)(v16 + 24) = v13;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 12;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = UsbhLogMask;
  v20 = *(int *)(a2 + 12);
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v22 = *(_QWORD *)(a1 + 64);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
      *(_DWORD *)v23 = 812659249;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 16) = v20;
      *(_QWORD *)(v23 + 24) = v21;
      v19 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v20 == 2 )
  {
LABEL_14:
    v24 = *(unsigned __int16 *)(a2 + 4);
    if ( (v19 & 0x200) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 829436465;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v20;
        *(_QWORD *)(v26 + 24) = v24;
      }
    }
    v27 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v20;
    *(_DWORD *)(v27 + a2 + 1384) = v20;
    v28 = *(unsigned __int16 *)(a2 + 4);
    v29 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 757952880;
        *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v31 + 16) = v29;
        *(_QWORD *)(v31 + 24) = v28;
      }
    }
    v32 = *(_DWORD *)(a2 + 12);
    v33 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v33 + a2 + 1384) = v32;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
  }
  else
  {
    switch ( (int)v20 )
    {
      case 1:
      case 18:
      case 20:
        Log(a1, 512, 825389110, v20, *(unsigned __int16 *)(a2 + 4));
        v43 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v44;
        *(_DWORD *)(v43 + a2 + 1384) = v44;
        break;
      case 3:
      case 4:
      case 14:
        goto LABEL_14;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
        Log(a1, 512, 825389107, v20, *(unsigned __int16 *)(a2 + 4));
        v36 = a1;
        v37 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v38;
        *(_DWORD *)(v37 + a2 + 1384) = v38;
        if ( *(_DWORD *)(a2 + 400) != 5 )
          goto LABEL_35;
        Log(a1, 512, 825389161, v35, *(unsigned __int16 *)(a2 + 4));
        break;
      case 7:
        Log(a1, 512, 825389106, v20, *(unsigned __int16 *)(a2 + 4));
        v34 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 2;
        *(_DWORD *)(v34 + a2 + 1384) = 2;
        *(_DWORD *)(a2 + 400) = 0;
        goto LABEL_31;
      case 8:
      case 10:
        Log(a1, 512, 825389108, v20, *(unsigned __int16 *)(a2 + 4));
        v39 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v39 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 825389109, v20, *(unsigned __int16 *)(a2 + 4));
        UsbhRemoveQueuedSuspend(a1, a2, v40, v41);
        v42 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v42 + a2 + 1384) = 4;
LABEL_31:
        UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
        KeResetEvent((PRKEVENT)(a2 + 472));
        break;
      default:
        Log(a1, 512, 825389144, v20, *(unsigned __int16 *)(a2 + 4));
        v45 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v45 + a2 + 1384) = 19;
        break;
    }
    v36 = a1;
LABEL_35:
    UsbhUnlockPcqWithTag(v36, a2, v10, 0LL);
  }
}

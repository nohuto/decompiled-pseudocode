/*
 * XREFs of Usbh_PCE_Enable_Action @ 0x1C000DBF0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_Enable_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  char v9; // cl
  KIRQL v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  KSPIN_LOCK *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  KIRQL v38; // dl
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  KIRQL v49; // bp
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // r10d
  __int64 v55; // rax

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
      *(_QWORD *)(v12 + 16) = 1LL;
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
  *(_DWORD *)v18 = 1;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 812658992;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v19;
      *(_QWORD *)(v22 + 24) = v20;
    }
  }
  if ( (_DWORD)v19 == 1 )
  {
LABEL_14:
    KeResetEvent((PRKEVENT)(a2 + 472));
    v24 = *(unsigned __int16 *)(a2 + 4);
    v25 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v26 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v26 = 1986359664;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v25;
        *(_QWORD *)(v26 + 24) = v24;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
    if ( *(_QWORD *)(a2 + 456) == a2 + 456 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          v24,
          14,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      v27 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 1414360677;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = 0LL;
          *(_QWORD *)(v29 + 24) = v27;
        }
      }
      v30 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 2;
      *(_DWORD *)(v30 + a2 + 1384) = 2;
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
      v35 = (KSPIN_LOCK *)(a2 + 440);
      v36 = *(_DWORD *)(a2 + 12);
      v37 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v37 + a2 + 1384) = v36;
      v38 = v10;
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          v24,
          15,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      v39 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 1196650085;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = 0LL;
          *(_QWORD *)(v41 + 24) = v39;
        }
      }
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v42 + a2 + 1384) = 4;
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
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
      if ( *(_DWORD *)(a2 + 2412) != 1 )
      {
        v50 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 2412) = 1;
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          if ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 64);
            if ( v51 )
            {
              v52 = *(_QWORD *)(v51 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
              *(_DWORD *)v52 = 1464029265;
              *(_QWORD *)(v52 + 8) = 0LL;
              *(_QWORD *)(v52 + 16) = a2;
              *(_QWORD *)(v52 + 24) = 0LL;
            }
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
        IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
      }
      v38 = v49;
      v35 = (KSPIN_LOCK *)(a2 + 2448);
    }
    KeReleaseSpinLock(v35, v38);
  }
  else
  {
    switch ( (int)v19 )
    {
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 14:
      case 15:
      case 16:
      case 17:
      case 20:
        Log(a1, 512, 808546354, v19, *(unsigned __int16 *)(a2 + 4));
        v53 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v54;
        *(_DWORD *)(v53 + a2 + 1384) = v54;
        break;
      case 18:
        goto LABEL_14;
      default:
        Log(a1, 512, 808546392, v19, *(unsigned __int16 *)(a2 + 4));
        v55 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v55 + a2 + 1384) = 19;
        break;
    }
    UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
  }
}

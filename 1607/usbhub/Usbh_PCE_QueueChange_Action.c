/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C000FA60
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AAE8 (UsbhFlushPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000F6B0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024950 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D488 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C0040B34 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0042DA8 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C00459A8 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_PCE_QueueChange_Action(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  int v6; // ebx
  char v7; // r14
  _DWORD *v10; // rdx
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // cl
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  KSPIN_LOCK *v30; // r14
  KIRQL v31; // r15
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  unsigned int v36; // r14d
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  KIRQL v50; // si
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // edx
  int v55; // r8d
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r11
  PDEVICE_OBJECT v63; // rcx
  __int16 v64; // r9
  int v65; // r9d
  __int64 v66; // r11
  __int16 v67; // r9
  __int64 v68; // rax
  __int64 v69; // r9
  int v70; // r10d
  void *v71; // r11
  __int64 v72; // r9
  __int16 v73; // r9
  __int64 v74; // rax
  unsigned __int8 v75; // r10
  __int64 v76; // rax
  int v77; // edx
  __int64 v78; // r9
  char v79; // r10
  int v80; // [rsp+20h] [rbp-68h]
  int v81; // [rsp+44h] [rbp-44h]
  KIRQL v82; // [rsp+90h] [rbp+8h]
  __int64 v83; // [rsp+A8h] [rbp+20h] BYREF

  v83 = a4;
  v6 = a4;
  v7 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10, a3, a4);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v13 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v14 = UsbhLogMask;
  v82 = v11;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = 4LL;
      *(_QWORD *)(v15 + 24) = v13;
      v14 = UsbhLogMask;
    }
  }
  v16 = *(unsigned __int16 *)(a2 + 4);
  v17 = *(int *)(a2 + 12);
  if ( (v14 & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v18 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v18 = 724267376;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v17;
      *(_QWORD *)(v18 + 24) = v16;
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = a2 + 32 * (v19 + 43);
  *(_DWORD *)v20 = 4;
  *(_DWORD *)(v20 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v20 + 8) = -1;
  *(_DWORD *)(v20 + 12) = v6;
  *(_QWORD *)(v20 + 16) = 0LL;
  *(_QWORD *)(v20 + 24) = 0LL;
  v21 = *(int *)(a2 + 12);
  v22 = UsbhLogMask;
  v23 = *(unsigned __int16 *)(a2 + 4);
  v81 = *(_DWORD *)(a2 + 12);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v24 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v24 = 812659807;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v21;
      *(_QWORD *)(v24 + 24) = v23;
      v22 = UsbhLogMask;
    }
  }
  v25 = *(unsigned __int16 *)(a2 + 4);
  if ( (v22 & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v26 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v26 = 812147537;
      *(_QWORD *)(v26 + 8) = 0LL;
      *(_QWORD *)(v26 + 16) = a2;
      *(_QWORD *)(v26 + 24) = v25;
      v22 = UsbhLogMask;
    }
  }
  v27 = (unsigned int)v83;
  if ( (v22 & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v28 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v28 = 812147537;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_QWORD *)(v28 + 16) = a2;
      *(_QWORD *)(v28 + 24) = v27;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      v27,
      19,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      v7);
  if ( (v83 & 0x80000) != 0 )
  {
    v29 = *(_QWORD *)(a1 + 64);
    if ( !v29 )
      UsbhTrapFatal_Dbg(a1, 0LL, v27, v17);
    if ( *(_DWORD *)v29 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v27, v17);
    v30 = (KSPIN_LOCK *)(v29 + 4944);
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v29 + 4944));
    v32 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 1836086128;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = 0LL;
        *(_QWORD *)(v34 + 24) = v32;
      }
    }
    if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
    {
      KeResetEvent((PRKEVENT)(a2 + 800));
      *(_QWORD *)(a2 + 792) = a2;
    }
    KeReleaseSpinLock(v30, v31);
  }
  if ( v81 == 2 )
  {
    v35 = a6;
    v36 = a5;
    v37 = UsbhInsertQueuePortChangeObject(a1, v23, &v83, a5, a6);
    v38 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
        *(_DWORD *)v40 = 846214239;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = v37;
        *(_QWORD *)(v40 + 24) = v38;
      }
    }
    if ( v37 >= 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          20,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          v23);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v41 = *(_QWORD *)(a1 + 64);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
          *(_DWORD *)v42 = 827353457;
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_QWORD *)(v42 + 16) = a2;
          *(_QWORD *)(v42 + 24) = v23;
        }
      }
      v43 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v43 + a2 + 1384) = 4;
      v44 = *(unsigned __int16 *)(a2 + 4);
      v45 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v46 = *(_QWORD *)(a1 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 757952880;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = v45;
          *(_QWORD *)(v47 + 24) = v44;
        }
      }
      v48 = *(_DWORD *)(a2 + 12);
      v49 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v49 + a2 + 1384) = v48;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v82);
      v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
      if ( *(_DWORD *)(a2 + 2412) != 1 )
      {
        v51 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 2412) = 1;
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 64);
            if ( v52 )
            {
              v53 = *(_QWORD *)(v52 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
              *(_DWORD *)v53 = 1464029265;
              *(_QWORD *)(v53 + 8) = 0LL;
              *(_QWORD *)(v53 + 16) = a2;
              *(_QWORD *)(v53 + 24) = 0LL;
            }
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
        IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v50);
      goto LABEL_50;
    }
    Log(a1, 8, 1902727218, a2, v23);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v77,
        1,
        21,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        v23,
        v79);
    if ( v36 == 1 )
    {
      Log(a1, 512, 1902735480, v35, *(unsigned __int16 *)(a2 + 4));
      Usbh_iSignalSyncDeviceReset(a1, v35, a2);
    }
    else if ( v36 == 2 )
    {
      LOBYTE(v78) = 1;
      UsbhFreePortChangeQueueTimeoutObject(a1, a2, v35, v78);
    }
  }
  else if ( v81 == 7 )
  {
    Log(a1, 512, 1597272113, 0, *(unsigned __int16 *)(a2 + 4));
    v56 = a5;
    v57 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 7;
    *(_DWORD *)(v57 + a2 + 1384) = 7;
    UsbhInsertQueuePortChangeObject(a1, v23, &v83, v56, a6);
    UsbhFlushPortChangeQueue(a1, a2, v58, v59);
  }
  else
  {
    switch ( v81 )
    {
      case 1:
      case 18:
        Log(a1, 512, 1597272118, 0, *(unsigned __int16 *)(a2 + 4));
        v63 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v73 )
          goto LABEL_66;
        v65 = 25;
        goto LABEL_65;
      case 3:
      case 14:
        Log(a1, 512, 1597272116, 0, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v67 )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 23, v66, v23);
        UsbhInsertQueuePortChangeObject(a1, v23, &v83, a5, a6);
        v68 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v68 + a2 + 1384) = 14;
        break;
      case 4:
        Log(a1, 512, 1597272115, 0, *(unsigned __int16 *)(a2 + 4));
        v63 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v64 )
          goto LABEL_66;
        v65 = 22;
LABEL_65:
        WPP_RECORDER_SF_d(v63->DeviceExtension, 0, 1, v65, v62, v23);
LABEL_66:
        UsbhInsertQueuePortChangeObject(a1, v23, &v83, a5, a6);
        break;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 20:
        Log(a1, 512, 1597272117, a5, *(unsigned __int16 *)(a2 + 4));
        if ( v70 == 1 )
        {
          Log(a1, 512, 1597272184, a6, *(unsigned __int16 *)(a2 + 4));
          Usbh_iSignalSyncDeviceReset(a1, v72, a2);
        }
        else
        {
          if ( v70 != 2 )
            goto LABEL_76;
          LOBYTE(v69) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, a6, v69);
        }
        v71 = &WPP_7750967c46a832f629b3446543f02792_Traceguids;
LABEL_76:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 24, (__int64)v71, v23);
        break;
      case 8:
      case 10:
        Log(a1, 512, 1597272119, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v23, &v83, a5, a6);
        v74 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v74 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 1597272120, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v23, &v83, a5, a6);
        break;
      default:
        Log(a1, 512, 1597272152, 0, *(unsigned __int16 *)(a2 + 4));
        v60 = v75;
        v76 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v76 + a2 + 1384) = 19;
        goto LABEL_56;
    }
  }
  v60 = v82;
  v61 = 0LL;
LABEL_56:
  UsbhUnlockPcqWithTag(a1, a2, v60, v61);
LABEL_50:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v54, v55, 26, v80, v23, v81);
}

/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C001AA70
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C001B100 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00407FC (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0042A70 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045668 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
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
  int v36; // r14d
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
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r11
  PDEVICE_OBJECT v61; // rcx
  __int16 v62; // r9
  int v63; // r9d
  __int64 v64; // r11
  __int16 v65; // r9
  __int64 v66; // rax
  __int64 v67; // r9
  int v68; // r10d
  void *v69; // r11
  __int64 v70; // r9
  __int16 v71; // r9
  __int64 v72; // rax
  unsigned __int8 v73; // r10
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // r9
  char v77; // r10
  int v78; // [rsp+20h] [rbp-68h]
  int v79; // [rsp+44h] [rbp-44h]
  KIRQL v80; // [rsp+90h] [rbp+8h]
  __int64 v81; // [rsp+A8h] [rbp+20h] BYREF

  v81 = a4;
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
  v80 = v11;
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
  v79 = *(_DWORD *)(a2 + 12);
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
  v27 = (unsigned int)v81;
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
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      v7);
  if ( (v81 & 0x80000) != 0 )
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
  if ( v79 == 2 )
  {
    v35 = a6;
    v36 = a5;
    v37 = UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v23, (unsigned int)&v81, a5, a6);
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
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
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
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v80);
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
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(a2 + 2456),
          (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
          DelayedWorkQueue,
          (PVOID)a2);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v50);
      goto LABEL_50;
    }
    Log(a1, 8, 1902727218, a2, v23);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v75,
        1,
        21,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        v23,
        v77);
    if ( v36 == 1 )
    {
      Log(a1, 512, 1902735480, v35, *(unsigned __int16 *)(a2 + 4));
      Usbh_iSignalSyncDeviceReset(a1, v35, a2);
    }
    else if ( v36 == 2 )
    {
      LOBYTE(v76) = 1;
      UsbhFreePortChangeQueueTimeoutObject(a1, a2, v35, v76);
    }
  }
  else if ( v79 == 7 )
  {
    Log(a1, 512, 1597272113, 0LL, *(unsigned __int16 *)(a2 + 4));
    v56 = a5;
    v57 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 7;
    *(_DWORD *)(v57 + a2 + 1384) = 7;
    UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v23, (unsigned int)&v81, v56, a6);
    UsbhFlushPortChangeQueue(a1, a2);
  }
  else
  {
    switch ( v79 )
    {
      case 1:
      case 18:
        Log(a1, 512, 1597272118, 0LL, *(unsigned __int16 *)(a2 + 4));
        v61 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v71 )
          goto LABEL_66;
        v63 = 25;
        goto LABEL_65;
      case 3:
      case 14:
        Log(a1, 512, 1597272116, 0LL, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v65 )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 23, v64, v23);
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v23, (unsigned int)&v81, a5, a6);
        v66 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v66 + a2 + 1384) = 14;
        break;
      case 4:
        Log(a1, 512, 1597272115, 0LL, *(unsigned __int16 *)(a2 + 4));
        v61 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v62 )
          goto LABEL_66;
        v63 = 22;
LABEL_65:
        WPP_RECORDER_SF_d(v61->DeviceExtension, 0, 1, v63, v60, v23);
LABEL_66:
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v23, (unsigned int)&v81, a5, a6);
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
        if ( v68 == 1 )
        {
          Log(a1, 512, 1597272184, a6, *(unsigned __int16 *)(a2 + 4));
          Usbh_iSignalSyncDeviceReset(a1, v70, a2);
        }
        else
        {
          if ( v68 != 2 )
            goto LABEL_76;
          LOBYTE(v67) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, a6, v67);
        }
        v69 = &WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids;
LABEL_76:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 24, (__int64)v69, v23);
        break;
      case 8:
      case 10:
        Log(a1, 512, 1597272119, 0LL, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v23, (unsigned int)&v81, a5, a6);
        v72 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v72 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 1597272120, 0LL, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v23, (unsigned int)&v81, a5, a6);
        break;
      default:
        Log(a1, 512, 1597272152, 0LL, *(unsigned __int16 *)(a2 + 4));
        v58 = v73;
        v74 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v74 + a2 + 1384) = 19;
        goto LABEL_56;
    }
  }
  v58 = v80;
  v59 = 0LL;
LABEL_56:
  UsbhUnlockPcqWithTag(a1, a2, v58, v59);
LABEL_50:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v54, v55, 26, v78, v23, v79);
}

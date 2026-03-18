/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x1C000D1E0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000E1A0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0024F50 (UsbhiSignalResumeEvent.c)
 *     UsbhSetResumePending @ 0x1C0025250 (UsbhSetResumePending.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00416B8 (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004281C (UsbhiSignalSuspendEvent.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *DeviceExtension; // rdx
  int v7; // esi
  _QWORD *v8; // r15
  KIRQL v9; // al
  __int64 v10; // r8
  char v11; // cl
  KIRQL v12; // r12
  void *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rdi
  __int64 v23; // r8
  void *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rdx
  __int64 v28; // rcx
  KSPIN_LOCK *v29; // rax
  KSPIN_LOCK *v30; // rdi
  KIRQL v31; // r12
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KEVENT *v45; // rbx
  __int64 Signalling; // rcx
  void *v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  LONG result; // eax
  __int64 v53; // r8
  void *v54; // rdx
  __int64 v55; // rcx
  void *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  KIRQL v60; // al
  KIRQL v61; // di
  __int64 v62; // r8
  __int64 v63; // r9
  void *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  void *v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  void *v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r9
  int v86; // r8d
  __int64 v87; // rax
  int v88; // esi
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r9
  volatile int Lock; // eax
  __int64 Timeout; // [rsp+20h] [rbp-58h]
  __int64 Timeouta; // [rsp+20h] [rbp-58h]
  __int64 Timeoutb; // [rsp+20h] [rbp-58h]
  _DWORD v99[4]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v100; // [rsp+80h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension, a3, a4);
  v7 = 0;
  v8 = (_QWORD *)UsbhIncHubBusy(a1, a3, (__int64)a1, 1383162736LL, 0);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v11 = UsbhLogMask;
  v12 = v9;
  v100 = v9;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = a1->DeviceExtension;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 3LL;
      *(_QWORD *)(v14 + 24) = v10;
      v11 = UsbhLogMask;
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = *(int *)(a2 + 12);
  if ( (v11 & 0x10) != 0 )
  {
    v17 = a1->DeviceExtension;
    if ( v17 )
    {
      v18 = *((_QWORD *)v17 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
      *(_DWORD *)v18 = 724267376;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 24) = v15;
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = a2 + 32 * (v19 + 43);
  *(_DWORD *)v20 = 3;
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
    v24 = a1->DeviceExtension;
    if ( v24 )
    {
      v25 = *((_QWORD *)v24 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
      *(_DWORD *)v25 = 812659551;
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)(v25 + 16) = v22;
      *(_QWORD *)(v25 + 24) = v23;
      v21 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v22 == 1 )
  {
    v26 = *(unsigned __int16 *)(a2 + 4);
    if ( (v21 & 0x200) != 0 )
    {
      v27 = a1->DeviceExtension;
      if ( v27 )
      {
        v28 = *((_QWORD *)v27 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
        *(_DWORD *)v28 = 862991199;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = 1LL;
        *(_QWORD *)(v28 + 24) = v26;
      }
    }
    v29 = (KSPIN_LOCK *)a1->DeviceExtension;
    if ( !v29 )
      UsbhTrapFatal_Dbg(a1, 0LL, v26, v16);
    if ( *(_DWORD *)v29 != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v26, v16);
    v30 = v29 + 618;
    v31 = KeAcquireSpinLockRaiseToDpc(v29 + 618);
    v32 = *(unsigned __int16 *)(a2 + 4);
    v33 = *(int *)(a2 + 696);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v34 = a1->DeviceExtension;
      if ( v34 )
      {
        v35 = *((_QWORD *)v34 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v34 + 220) & *((_DWORD *)v34 + 221));
        *(_DWORD *)v35 = 1397909875;
        *(_QWORD *)(v35 + 8) = 0LL;
        *(_QWORD *)(v35 + 16) = v33;
        *(_QWORD *)(v35 + 24) = v32;
      }
    }
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      Log((_DWORD)a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(a2 + 696) = 0;
      KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
      v7 = 1;
    }
    KeReleaseSpinLock(v30, v31);
    if ( v7 )
      UsbhSetPcqEventStatus(a1, a2, 1LL, 30LL);
    v36 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v36 + a2 + 1384) = 1;
    v37 = *(unsigned __int16 *)(a2 + 4);
    v38 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v39 = a1->DeviceExtension;
      if ( v39 )
      {
        v40 = *((_QWORD *)v39 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
        *(_DWORD *)v40 = 757952880;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = v38;
        *(_QWORD *)(v40 + 24) = v37;
      }
    }
    v41 = *(_DWORD *)(a2 + 12);
    v42 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v42 + a2 + 1384) = v41;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v100);
    v45 = (struct _KEVENT *)a1->DeviceExtension;
    if ( !v45 )
      UsbhTrapFatal_Dbg(a1, 0LL, v43, v44);
    if ( v45->Header.LockNV != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v43, v44);
    v45[142].Header.Type = 1;
    KeWaitForSingleObject(&v45[139], Executive, 0, 0, 0LL);
    Signalling = v45[142].Header.Signalling;
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v47 = a1->DeviceExtension;
      if ( v47 )
      {
        v48 = *((_QWORD *)v47 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v47 + 220) & *((_DWORD *)v47 + 221));
        *(_DWORD *)v48 = 1667581000;
        *(_QWORD *)(v48 + 8) = 0LL;
        *(_QWORD *)(v48 + 16) = v8;
        *(_QWORD *)(v48 + 24) = Signalling;
      }
    }
    if ( !v45[142].Header.Signalling )
      return KeSetEvent(v45 + 139, 0, 0);
    if ( v8 != (_QWORD *)1936941672 )
    {
      if ( !v8 )
        return KeSetEvent(v45 + 139, 0, 0);
      v49 = v8[1];
      v50 = v8 + 1;
      v51 = (_QWORD *)v8[2];
      if ( *(_QWORD **)(v49 + 8) != v8 + 1 || (_QWORD *)*v51 != v50 )
        __fastfail(3u);
LABEL_39:
      *v51 = v49;
      *(_QWORD *)(v49 + 8) = v51;
      v50[1] = v50;
      *v50 = v50;
      ExFreePoolWithTag(v8, 0);
      return KeSetEvent(v45 + 139, 0, 0);
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v22 == 6 )
  {
    v53 = *(unsigned __int16 *)(a2 + 4);
    v99[0] = 0x100000;
    if ( (v21 & 0x200) != 0 )
    {
      v54 = a1->DeviceExtension;
      if ( v54 )
      {
        v55 = *((_QWORD *)v54 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v54 + 220) & *((_DWORD *)v54 + 221));
        *(_DWORD *)v55 = 846213983;
        *(_QWORD *)(v55 + 8) = 0LL;
        *(_QWORD *)(v55 + 16) = 6LL;
        *(_QWORD *)(v55 + 24) = v53;
        LOBYTE(v21) = UsbhLogMask;
      }
    }
    v56 = a1->DeviceExtension;
    if ( !v56 )
      UsbhTrapFatal_Dbg(a1, 0LL, v53, v16);
    if ( *(_DWORD *)v56 != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v53, v16);
    v57 = *(unsigned __int16 *)(a2 + 4);
    v58 = *(int *)(a2 + 12);
    if ( (v21 & 0x10) != 0 )
    {
      v59 = *((_QWORD *)v56 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v56 + 220) & *((_DWORD *)v56 + 221));
      *(_DWORD *)v59 = 1986359664;
      *(_QWORD *)(v59 + 8) = 0LL;
      *(_QWORD *)(v59 + 16) = v58;
      *(_QWORD *)(v59 + 24) = v57;
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
    v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v56 + 618);
    *(_BYTE *)(a2 + 2838) = 0;
    v61 = v60;
    *(_DWORD *)(a2 + 696) = 3;
    KeResetEvent((PRKEVENT)(a2 + 712));
    KeReleaseSpinLock((PKSPIN_LOCK)v56 + 618, v61);
    v62 = *(unsigned __int16 *)(a2 + 4);
    v63 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v64 = a1->DeviceExtension;
      if ( v64 )
      {
        v65 = *((_QWORD *)v64 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v64 + 220) & *((_DWORD *)v64 + 221));
        *(_DWORD *)v65 = 1986359664;
        *(_QWORD *)(v65 + 8) = 0LL;
        *(_QWORD *)(v65 + 16) = v63;
        *(_QWORD *)(v65 + 24) = v62;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
    v66 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v66 + a2 + 1384) = 1;
    v67 = *(unsigned __int16 *)(a2 + 4);
    v68 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v69 = a1->DeviceExtension;
      if ( v69 )
      {
        v70 = *((_QWORD *)v69 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v69 + 220) & *((_DWORD *)v69 + 221));
        *(_DWORD *)v70 = 1986359664;
        *(_QWORD *)(v70 + 8) = 0LL;
        *(_QWORD *)(v70 + 16) = v68;
        *(_QWORD *)(v70 + 24) = v67;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
    KeResetEvent((PRKEVENT)(a2 + 472));
    UsbhInsertQueuePortChangeObject((_DWORD)a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v99, 0, 0LL);
    v71 = *(unsigned __int16 *)(a2 + 4);
    v72 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v73 = a1->DeviceExtension;
      if ( v73 )
      {
        v74 = *((_QWORD *)v73 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v73 + 220) & *((_DWORD *)v73 + 221));
        *(_DWORD *)v74 = 757952880;
        *(_QWORD *)(v74 + 8) = 0LL;
        *(_QWORD *)(v74 + 16) = v72;
        *(_QWORD *)(v74 + 24) = v71;
      }
    }
    v75 = *(_DWORD *)(a2 + 12);
    v76 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v76 + a2 + 8) = v75;
    *(_DWORD *)(v76 + a2 + 12) = 0x100000;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
    v45 = (struct _KEVENT *)a1->DeviceExtension;
    if ( !v45 )
      UsbhTrapFatal_Dbg(a1, 0LL, v77, v78);
    if ( v45->Header.LockNV != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v77, v78);
    v45[142].Header.Type = 1;
    KeWaitForSingleObject(&v45[139], Executive, 0, 0, 0LL);
    v79 = v45[142].Header.Signalling;
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v80 = a1->DeviceExtension;
      if ( v80 )
      {
        v81 = *((_QWORD *)v80 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v80 + 220) & *((_DWORD *)v80 + 221));
        *(_DWORD *)v81 = 1667581000;
        *(_QWORD *)(v81 + 8) = 0LL;
        *(_QWORD *)(v81 + 16) = v8;
        *(_QWORD *)(v81 + 24) = v79;
      }
    }
    if ( !v45[142].Header.Signalling )
      return KeSetEvent(v45 + 139, 0, 0);
    if ( v8 != (_QWORD *)1936941672 )
    {
      if ( !v8 )
        return KeSetEvent(v45 + 139, 0, 0);
      v49 = v8[1];
      v50 = v8 + 1;
      v51 = (_QWORD *)v8[2];
      if ( *(_QWORD **)(v49 + 8) != v8 + 1 || (_QWORD *)*v51 != v50 )
        __fastfail(3u);
      goto LABEL_39;
    }
LABEL_100:
    Lock = v45[130].Header.Lock;
    if ( Lock )
      v45[130].Header.LockNV = Lock - 1;
    return KeSetEvent(v45 + 139, 0, 0);
  }
  switch ( (int)v22 )
  {
    case 2:
    case 3:
    case 4:
    case 14:
      UsbhiSignalResumeEvent(a1, a2);
      v86 = 1597206581;
      goto LABEL_74;
    case 5:
    case 12:
    case 13:
      Timeoutb = *(unsigned __int16 *)(a2 + 4);
      v99[0] = 0x100000;
      Log((_DWORD)a1, 512, 1597206583, v22, Timeoutb);
      UsbhSetResumePending(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 1LL, 10LL);
      UsbhInsertQueuePortChangeObject((_DWORD)a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v99, 0, 0LL);
      UsbhUnlockPcqWithTag(a1, a2, v12, 0x100000LL);
      return UsbhDecHubBusy((__int64)a1, v90, v8, v91);
    case 7:
    case 11:
      Timeout = *(unsigned __int16 *)(a2 + 4);
      v99[0] = 0x100000;
      Log((_DWORD)a1, 512, 1597206577, v22, Timeout);
      UsbhSetResumePending(a1, a2);
      v82 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 18;
      *(_DWORD *)(v82 + a2 + 1384) = 18;
      UsbhInsertQueuePortChangeObject((_DWORD)a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v99, 0, 0LL);
      UsbhSetPcqEventStatus(a1, a2, 2LL, 10LL);
      KeResetEvent((PRKEVENT)(a2 + 472));
      v83 = 0x100000LL;
      goto LABEL_72;
    case 8:
    case 9:
    case 10:
      if ( (_DWORD)v22 == 9 )
      {
        v88 = 4;
      }
      else
      {
        v88 = 14;
        if ( (_DWORD)v22 == 8 )
          v88 = 3;
      }
      UsbhRemoveQueuedSuspend(a1, a2, 0x1C0000000uLL, v16);
      UsbhiSignalSuspendEvent(a1, a2);
      Log((_DWORD)a1, 512, 1597206580, v88, *(unsigned __int16 *)(a2 + 4));
      if ( *(_DWORD *)(a2 + 400) == 5 )
      {
        Timeouta = *(unsigned __int16 *)(a2 + 4);
        v99[0] = 0x100000;
        Log((_DWORD)a1, 512, 1597206610, v22, Timeouta);
        UsbhSetResumePending(a1, a2);
        UsbhInsertQueuePortChangeObject((_DWORD)a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v99, 0, 0LL);
      }
      v89 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v88;
      *(_DWORD *)(v89 + a2 + 1384) = v88;
      goto LABEL_75;
    case 15:
    case 16:
    case 17:
    case 20:
      UsbhiSignalResumeEvent(a1, a2);
      v86 = 1597206582;
      goto LABEL_74;
    case 18:
      v86 = 1597206584;
LABEL_74:
      Log((_DWORD)a1, 512, v86, v22, *(unsigned __int16 *)(a2 + 4));
      v87 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v22;
      *(_DWORD *)(v87 + a2 + 1384) = v22;
LABEL_75:
      v83 = 0LL;
LABEL_72:
      UsbhUnlockPcqWithTag(a1, a2, v12, v83);
      result = UsbhDecHubBusy((__int64)a1, v84, v8, v85);
      break;
    default:
      Log((_DWORD)a1, 512, 1597206616, v22, *(unsigned __int16 *)(a2 + 4));
      v92 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v92 + a2 + 1384) = 19;
      UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
      result = UsbhDecHubBusy((__int64)a1, v93, v8, v94);
      break;
  }
  return result;
}

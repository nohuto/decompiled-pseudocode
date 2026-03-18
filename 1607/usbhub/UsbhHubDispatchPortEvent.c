/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C0013130
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0011850 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0040C70 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004850 (UsbhSignalSyncDeviceReset.c)
 *     UsbhEnumerate1 @ 0x1C0009834 (UsbhEnumerate1.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000C0C4 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000C21C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhWaitConnect @ 0x1C0015F20 (UsbhWaitConnect.c)
 *     UsbhSignalResumeEvent @ 0x1C00256AC (UsbhSignalResumeEvent.c)
 *     UsbhHandleSuspend @ 0x1C002697C (UsbhHandleSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041CF8 (UsbhSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0046AAC (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhEnumerate2 @ 0x1C00504FC (UsbhEnumerate2.c)
 *     UsbhDropDevice @ 0x1C005077C (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C00508F4 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // r14
  void *DeviceExtension; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int16 v16; // bp
  void *v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  KIRQL v22; // r12
  void *v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int8 v29; // bp
  unsigned __int16 v30; // dx
  __int16 v31; // ax
  void *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  void *v39; // rdx
  __int64 v40; // rcx
  PDEVICE_OBJECT v41; // r10
  int v42; // ecx
  int v43; // r12d
  __int16 v44; // dx
  int v45; // eax
  __int64 v46; // r14
  __int64 v47; // r14
  _QWORD *v48; // rcx
  void (__fastcall *v49)(_QWORD, int *, __int64, __int64); // rax
  __int64 v50; // r12
  int v51; // eax
  int v52; // eax
  void *v53; // rdx
  __int64 v54; // rcx
  __int64 v56; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v58; // r14
  _QWORD *v59; // r14
  _QWORD *v60; // rcx
  __int64 v61; // r14
  void *v62; // rdx
  __int64 v63; // rcx
  void *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbp
  __int64 *v69; // r14
  __int64 *v70; // r8
  void *v71; // rdx
  __int64 v72; // rcx
  __int64 *v73; // rdx
  __int64 **v74; // rcx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int64 v79; // r9
  int v80; // edx
  int v81; // edx
  int v82; // edx
  int v83; // eax
  int v84; // r8d
  __int64 v85; // rdx
  struct _KEVENT *v86; // rcx
  int v87; // eax
  int v88; // [rsp+48h] [rbp-50h]
  int v89; // [rsp+50h] [rbp-48h] BYREF
  KIRQL v90; // [rsp+58h] [rbp-40h]

  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v9 = 729179504;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3,
      88,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      0);
  v10 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = a1->DeviceExtension;
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v12 = 1313891184;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v13 = a1->DeviceExtension;
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = 1145332592;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = v4;
      }
    }
  }
  v15 = 0LL;
  v16 = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v17 = a1->DeviceExtension;
    if ( v17 )
    {
      v18 = *((_QWORD *)v17 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
      *(_DWORD *)v18 = 1329877100;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 24) = 1884308559LL;
    }
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v21 = (unsigned int)UsbhLogMask;
  v22 = v19;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v23 = a1->DeviceExtension;
    if ( v23 )
    {
      v24 = *((_QWORD *)v23 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
      *(_DWORD *)v24 = 1413771367;
      *(_QWORD *)(v24 + 16) = v16;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 24) = 0LL;
      v21 = (unsigned int)UsbhLogMask;
    }
  }
  if ( v16 )
  {
    v25 = (unsigned __int8 *)a1->DeviceExtension;
    if ( !v25 )
      UsbhTrapFatal_Dbg(a1, 0LL, v20, v21);
    if ( *(_DWORD *)v25 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v25, v20, v21);
    if ( v16 <= v25[2938] )
    {
      v26 = *((_QWORD *)v25 + 382);
      if ( v26 )
      {
        v27 = v26 + 2928LL * (v16 - 1);
        if ( (v21 & 8) != 0 )
        {
          v28 = *((_QWORD *)v25 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
          *(_DWORD *)v28 = 1044672615;
          *(_QWORD *)(v28 + 16) = v16;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 24) = v27;
        }
        if ( v27 )
        {
          v15 = *(_QWORD *)(v27 + 392);
          if ( v15 )
          {
            v56 = *(_QWORD *)(v15 + 64);
            if ( !v56 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), 0LL, v27, v21);
            if ( *(_DWORD *)v56 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), *(_QWORD *)(v15 + 64), v27, v21);
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            v58 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              *(_DWORD *)v58 = 1668571500;
              v58[4] = v15;
              *((_DWORD *)v58 + 6) = 1884308559;
              v58[5] = 0LL;
              v59 = v58 + 1;
              v60 = *(_QWORD **)(v56 + 1272);
              if ( *v60 != v56 + 1264 )
                __fastfail(3u);
              *v59 = v56 + 1264;
              v59[1] = v60;
              *v60 = v59;
              *(_QWORD *)(v56 + 1272) = v59;
            }
            else
            {
              ++*(_DWORD *)(v56 + 1280);
            }
            v4 = a3;
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v22);
  if ( v15 )
    *(_DWORD *)(a2 + 416) = 1;
  v29 = v15 != 0;
  v30 = *a4;
  if ( (*a4 & 1) != 0 )
    v29 |= 0x10u;
  if ( (v30 & 4) != 0 )
    v29 |= 2u;
  if ( (v30 & 8) != 0 )
    v29 |= 4u;
  if ( (v30 & 2) != 0 )
    v29 |= 8u;
  *(_WORD *)(a2 + 420) = v30;
  v31 = UsbhLogMask;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v32 = a1->DeviceExtension;
    if ( v32 )
    {
      v33 = *((_QWORD *)v32 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
      *(_DWORD *)v33 = 1414087210;
      *(_QWORD *)(v33 + 16) = v30;
      *(_QWORD *)(v33 + 24) = v29;
      *(_QWORD *)(v33 + 8) = 0LL;
      v31 = UsbhLogMask;
    }
  }
  v34 = *(unsigned __int16 *)(a2 + 4);
  v35 = *(unsigned int *)(a2 + 400);
  if ( (v31 & 0x200) != 0 )
  {
    v36 = a1->DeviceExtension;
    if ( v36 )
    {
      v37 = *((_QWORD *)v36 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
      *(_DWORD *)v37 = 844382762;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v35;
      *(_QWORD *)(v37 + 24) = v34;
      v31 = UsbhLogMask;
    }
  }
  v38 = *(unsigned int *)(v4 + 8);
  if ( (v31 & 0x200) != 0 )
  {
    v39 = a1->DeviceExtension;
    if ( v39 )
    {
      v40 = *((_QWORD *)v39 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
      *(_DWORD *)v40 = 861159978;
      *(_QWORD *)(v40 + 24) = v29;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = v38;
    }
  }
  v41 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v38,
      89,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_WORD *)(a2 + 420));
    v41 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v80,
        v38,
        90,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_DWORD *)(a2 + 400));
      v41 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          v81,
          v38,
          91,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(v4 + 8));
        v41 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            v82,
            v38,
            92,
            (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
            *(_WORD *)(a2 + 4),
            v29);
          v41 = WPP_GLOBAL_Control;
        }
      }
    }
  }
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 && (*(_DWORD *)(v4 + 8) & 0x80008) == 0 )
  {
    if ( LOWORD(v41->DeviceType) )
      WPP_RECORDER_SF_d(
        v41->DeviceExtension,
        0,
        1,
        93,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4));
    Log((_DWORD)a1, 512, 1886353240, v29, *(unsigned int *)(v4 + 8));
    v29 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    LOBYTE(v88) = 0;
    UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 60, v4, 56, 0, 0, usbfile_pchange_c, 5582, v88);
  }
  v42 = *(_DWORD *)(v4 + 8);
  v43 = *(_DWORD *)(v4 + 32);
  v44 = *(_WORD *)(a2 + 420);
  v45 = *(_DWORD *)(a2 + 400);
  v46 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  *(_DWORD *)(a2 + 856) = v46;
  v47 = a2 + 32 * (v46 + 27);
  *(_DWORD *)v47 = v45;
  *(_DWORD *)(v47 + 4) = v42;
  *(_BYTE *)(v47 + 18) = v29;
  *(_WORD *)(v47 + 16) = v44;
  *(_QWORD *)(v47 + 8) = v15;
  *(_BYTE *)(v47 + 19) = 0;
  *(_DWORD *)(v47 + 20) = v43;
  *(_DWORD *)(v47 + 28) = 1;
  v48 = a1->DeviceExtension;
  if ( !v48 )
    UsbhTrapFatal_Dbg(a1, 0LL, v38, v35);
  if ( *(_DWORD *)v48 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v38, v35);
  v49 = (void (__fastcall *)(_QWORD, int *, __int64, __int64))v48[574];
  if ( v49 )
  {
    v49(v48[570], &v89, v38, v35);
    LODWORD(v49) = v89;
  }
  *(_DWORD *)(v47 + 24) = (_DWORD)v49 - v43;
  if ( !v15 )
    goto LABEL_55;
  v61 = *(_QWORD *)(v15 + 64);
  if ( !v61 )
    UsbhTrapFatal_Dbg(v15, 0LL, v38, v35);
  if ( *(_DWORD *)v61 != 1329877064 )
    UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64), v38, v35);
  if ( *(_BYTE *)(v61 + 2716) && (*(_BYTE *)(a2 + 420) & 1) == 0 )
  {
    v83 = *(_DWORD *)(a3 + 8);
    if ( (v83 & 0x30008) != 0 )
    {
      if ( (v83 & 0x30000) != 0 )
      {
        Log((_DWORD)a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
        UsbhSignalSyncDeviceReset((__int64)a1, v15, a2, 0xC0000001);
      }
      Log((_DWORD)a1, 512, 1650741836, 0, *(unsigned int *)(a3 + 8));
      v84 = *(unsigned __int16 *)(a2 + 4);
      if ( *((_DWORD *)DeviceExtension + 768) == v84 )
      {
        v85 = *(_QWORD *)(a2 + 376);
        if ( *((_QWORD *)DeviceExtension + 385) == v85 )
          UsbhReleaseEnumBusLockEx((__int64)a1, v85, v84);
      }
      LOBYTE(v88) = 1;
      UsbhException((int)a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v88);
    }
    goto LABEL_62;
  }
  if ( (*(_DWORD *)(v61 + 1412) & 0x400000) != 0 )
  {
    KeWaitForSingleObject((PVOID)(v61 + 2912), Executive, 0, 0, 0LL);
    v50 = a3;
    if ( (*(_DWORD *)(v61 + 1412) & 0x4000000) != 0 && (*(_BYTE *)(a3 + 8) & 1) != 0 )
    {
      Log((_DWORD)a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v61 + 1412)) & 1, *(unsigned __int16 *)(a2 + 420));
      *(_DWORD *)(v61 + 1412) |= 0x3000000u;
      v86 = (struct _KEVENT *)(v61 + 2888);
      if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
        KeSetEvent(v86, 0, 0);
      else
        KeResetEvent(v86);
      KeSetEvent((PRKEVENT)(v61 + 2912), 0, 0);
      goto LABEL_62;
    }
    KeSetEvent((PRKEVENT)(v61 + 2912), 0, 0);
  }
  else
  {
LABEL_55:
    v50 = a3;
  }
  if ( (*(_DWORD *)(v50 + 8) & 0x20000) != 0 )
  {
    v79 = *(_QWORD *)(v50 + 40);
    if ( v79 != v15 )
    {
      Log((_DWORD)a1, 512, 1685222994, v79, *(unsigned int *)(v50 + 8));
      UsbhSignalSyncDeviceReset((__int64)a1, *(_QWORD *)(v50 + 40), a2, 0xC000000E);
      goto LABEL_62;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      94,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v51 = *(_DWORD *)(a2 + 400);
  if ( !v51 )
  {
    v52 = UsbhWaitConnect((_DWORD)a1, v15);
    goto LABEL_61;
  }
  v75 = v51 - 1;
  if ( !v75 )
  {
    v52 = UsbhEnumerate1((__int64)a1, *(_QWORD *)(v50 + 8), v29, a2, v15);
    goto LABEL_61;
  }
  v76 = v75 - 1;
  if ( !v76 )
  {
    v52 = UsbhEnumerate2((_DWORD)a1, v15);
    goto LABEL_61;
  }
  v77 = v76 - 1;
  if ( v77 )
  {
    v78 = v77 - 1;
    if ( v78 )
    {
      if ( v78 != 1 )
        goto LABEL_62;
      v52 = UsbhHandleSuspend((_DWORD)a1, v15);
LABEL_61:
      *(_DWORD *)(a2 + 400) = v52;
      goto LABEL_62;
    }
    if ( (*(_DWORD *)(v50 + 8) & 8) != 0 )
    {
      *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent((int)a1, v15);
    }
    else
    {
      *(_DWORD *)(a2 + 400) = 4;
      if ( (*(_DWORD *)(v50 + 8) & 0x20000) != 0 )
        UsbhSignalSyncDeviceReset((__int64)a1, v15, a2, 0xC0000001);
      if ( (*(_BYTE *)(v50 + 10) & 1) != 0 )
        UsbhSignalSyncDeviceReset((__int64)a1, v15, a2, 0xC0000001);
      if ( (*(_DWORD *)(v50 + 8) & 0x40000) != 0 )
        UsbhSignalSuspendEvent(a1, a2);
      if ( (*(_DWORD *)(v50 + 8) & 0x100000) != 0 )
      {
        UsbhSignalResumeEvent(a1, a2);
        if ( v29 == 1 )
        {
          UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
          UsbhDropDevice(a1, a2, v15);
        }
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        96,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids);
    Log((_DWORD)a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v29);
  }
  else
  {
    if ( (*(_DWORD *)(v50 + 8) & 8) != 0 )
      *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent((int)a1, v15);
    *(_DWORD *)(a2 + 400) = 3;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        95,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids);
    Log((_DWORD)a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v29);
  }
LABEL_62:
  if ( *(_DWORD *)(a2 + 416) )
  {
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      v62 = a1->DeviceExtension;
      if ( v62 )
      {
        v63 = *((_QWORD *)v62 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v62 + 220) & *((_DWORD *)v62 + 221));
        *(_DWORD *)v63 = 827354229;
        *(_QWORD *)(v63 + 8) = 0LL;
        *(_QWORD *)(v63 + 16) = v15;
        *(_QWORD *)(v63 + 24) = a2;
      }
    }
    v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a2 + 416) = 0;
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      v64 = a1->DeviceExtension;
      if ( v64 )
      {
        v65 = *((_QWORD *)v64 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v64 + 220) & *((_DWORD *)v64 + 221));
        *(_DWORD *)v65 = 844131445;
        *(_QWORD *)(v65 + 8) = 0LL;
        *(_QWORD *)(v65 + 16) = v15;
        *(_QWORD *)(v65 + 24) = a2;
      }
    }
    Log((_DWORD)a1, 256, 1685218896, v15, 1884308559LL);
    if ( !v15 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v66, v67);
    v68 = *(_QWORD *)(v15 + 64);
    if ( !v68 )
      UsbhTrapFatal_Dbg(v15, 0LL, v66, v67);
    if ( *(_DWORD *)v68 != 1329877064 )
      UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64), v66, v67);
    v69 = (__int64 *)(v68 + 1264);
    v70 = *(__int64 **)(v68 + 1264);
    if ( v70 == (__int64 *)(v68 + 1264) )
    {
LABEL_170:
      v87 = *(_DWORD *)(v68 + 1280);
      if ( v87 )
        *(_DWORD *)(v68 + 1280) = v87 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v71 = a1->DeviceExtension;
          if ( v71 )
          {
            v72 = *((_QWORD *)v71 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v71 + 220) & *((_DWORD *)v71 + 221));
            *(_DWORD *)v72 = 1064591724;
            *(_QWORD *)(v72 + 8) = 0LL;
            *(_QWORD *)(v72 + 16) = v68;
            *(_QWORD *)(v72 + 24) = 1884308559LL;
          }
        }
        if ( *((_DWORD *)v70 + 4) == 1884308559 && !v70[4] )
          break;
        v70 = (__int64 *)*v70;
        if ( v70 == v69 )
          goto LABEL_170;
      }
      v73 = (__int64 *)*v70;
      v74 = (__int64 **)v70[1];
      if ( *(__int64 **)(*v70 + 8) != v70 || *v74 != v70 )
        __fastfail(3u);
      *v74 = v73;
      v73[1] = (__int64)v74;
      ExFreePoolWithTag(v70 - 1, 0);
    }
    if ( (__int64 *)*v69 == v69 && !*(_DWORD *)(v68 + 1280) )
      KeSetEvent((PRKEVENT)(v68 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v90);
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v53 = a1->DeviceExtension;
    if ( v53 )
    {
      v54 = *((_QWORD *)v53 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v53 + 220) & *((_DWORD *)v53 + 221));
      *(_DWORD *)v54 = 762733936;
      *(_QWORD *)(v54 + 8) = 0LL;
      *(_QWORD *)(v54 + 16) = a2;
      *(_QWORD *)(v54 + 24) = 0LL;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}

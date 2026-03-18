/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C0018370
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0016A90 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0040938 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhWaitConnect @ 0x1C001A510 (UsbhWaitConnect.c)
 *     UsbhAcquireEnumBusLock @ 0x1C001F288 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     UsbhHandleSuspend @ 0x1C00257E8 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x1C00267E8 (UsbhEnumerate1.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003D0A8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhEnumerate2 @ 0x1C004FE68 (UsbhEnumerate2.c)
 *     UsbhDropDevice @ 0x1C00500E8 (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C0050254 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int16 v16; // bp
  __int64 v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  KIRQL v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int8 v29; // bp
  unsigned __int16 v30; // dx
  __int16 v31; // ax
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  PDEVICE_OBJECT v41; // r10
  int v42; // ecx
  int v43; // r12d
  __int16 v44; // dx
  int v45; // eax
  __int64 v46; // r14
  __int64 v47; // r14
  __int64 v48; // rcx
  void (__fastcall *v49)(_QWORD, int *, __int64, __int64); // rax
  __int64 v50; // r12
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v56; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v58; // r14
  _DWORD *v59; // rbp
  _QWORD *v60; // r14
  _QWORD *v61; // rax
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbp
  __int64 *v70; // r14
  __int64 *v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // rdx
  __int64 **v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  __int64 v80; // r9
  int v81; // edx
  int v82; // edx
  int v83; // edx
  int v84; // eax
  int v85; // r8d
  __int64 v86; // rdx
  struct _KEVENT *v87; // rcx
  int v88; // eax
  int v89; // [rsp+48h] [rbp-50h]
  int v90; // [rsp+50h] [rbp-48h] BYREF
  KIRQL v91; // [rsp+58h] [rbp-40h]

  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 729179504;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      a3,
      88,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      0);
  v10 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 1313891184;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
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
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
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
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
      *(_DWORD *)v24 = 1413771367;
      *(_QWORD *)(v24 + 16) = v16;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 24) = 0LL;
      v21 = (unsigned int)UsbhLogMask;
    }
  }
  if ( v16 )
  {
    v25 = *(_QWORD *)(a1 + 64);
    if ( !v25 )
      UsbhTrapFatal_Dbg(a1, 0LL, v20, v21);
    if ( *(_DWORD *)v25 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v25, v20, v21);
    if ( v16 <= *(unsigned __int8 *)(v25 + 2938) )
    {
      v26 = *(_QWORD *)(v25 + 3056);
      if ( v26 )
      {
        v27 = v26 + 2928LL * (v16 - 1);
        if ( (v21 & 8) != 0 )
        {
          v28 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
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
            v56 = *(_DWORD **)(v15 + 64);
            if ( !v56 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), 0LL, v27, v21);
            if ( *v56 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), *(_QWORD *)(v15 + 64), v27, v21);
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            v58 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              *(_DWORD *)v58 = 1668571500;
              v59 = v56 + 316;
              v58[4] = v15;
              *((_DWORD *)v58 + 6) = 1884308559;
              v58[5] = 0LL;
              v60 = v58 + 1;
              v61 = (_QWORD *)*((_QWORD *)v59 + 1);
              *v60 = v59;
              v60[1] = v61;
              if ( (_DWORD *)*v61 != v59 )
                __fastfail(3u);
              *v61 = v60;
              *((_QWORD *)v59 + 1) = v60;
            }
            else
            {
              ++v56[320];
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
    v32 = *(_QWORD *)(a1 + 64);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
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
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
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
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
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
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      *(_WORD *)(a2 + 420));
    v41 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v81,
        v38,
        90,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_DWORD *)(a2 + 400));
      v41 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          v82,
          v38,
          91,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(v4 + 8));
        v41 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            v83,
            v38,
            92,
            (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
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
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 512, 1886353240, v29, *(unsigned int *)(v4 + 8));
    v29 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    LOBYTE(v89) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, v4, 56, 0, 0, usbfile_pchange_c, 5582, v89);
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
  v48 = *(_QWORD *)(a1 + 64);
  if ( !v48 )
    UsbhTrapFatal_Dbg(a1, 0LL, v38, v35);
  if ( *(_DWORD *)v48 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v38, v35);
  v49 = *(void (__fastcall **)(_QWORD, int *, __int64, __int64))(v48 + 4592);
  if ( v49 )
  {
    v49(*(_QWORD *)(v48 + 4560), &v90, v38, v35);
    LODWORD(v49) = v90;
  }
  *(_DWORD *)(v47 + 24) = (_DWORD)v49 - v43;
  if ( !v15 )
    goto LABEL_55;
  v62 = *(_QWORD *)(v15 + 64);
  if ( !v62 )
    UsbhTrapFatal_Dbg(v15, 0LL, v38, v35);
  if ( *(_DWORD *)v62 != 1329877064 )
    UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64), v38, v35);
  if ( *(_BYTE *)(v62 + 2716) && (*(_BYTE *)(a2 + 420) & 1) == 0 )
  {
    v84 = *(_DWORD *)(a3 + 8);
    if ( (v84 & 0x30008) != 0 )
    {
      if ( (v84 & 0x30000) != 0 )
      {
        Log(a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
        UsbhSignalSyncDeviceReset(a1, v15, a2, 0xC0000001);
      }
      Log(a1, 512, 1650741836, 0LL, *(unsigned int *)(a3 + 8));
      v85 = *(unsigned __int16 *)(a2 + 4);
      if ( *(_DWORD *)(v7 + 3072) == v85 )
      {
        v86 = *(_QWORD *)(a2 + 376);
        if ( *(_QWORD *)(v7 + 3080) == v86 )
          UsbhReleaseEnumBusLockEx(a1, v86, v85);
      }
      LOBYTE(v89) = 1;
      UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v89);
    }
    goto LABEL_62;
  }
  if ( (*(_DWORD *)(v62 + 1412) & 0x400000) != 0 )
  {
    KeWaitForSingleObject((PVOID)(v62 + 2912), Executive, 0, 0, 0LL);
    v50 = a3;
    if ( (*(_DWORD *)(v62 + 1412) & 0x4000000) != 0 && (*(_BYTE *)(a3 + 8) & 1) != 0 )
    {
      Log(a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v62 + 1412)) & 1, *(unsigned __int16 *)(a2 + 420));
      *(_DWORD *)(v62 + 1412) |= 0x3000000u;
      v87 = (struct _KEVENT *)(v62 + 2888);
      if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
        KeSetEvent(v87, 0, 0);
      else
        KeResetEvent(v87);
      KeSetEvent((PRKEVENT)(v62 + 2912), 0, 0);
      goto LABEL_62;
    }
    KeSetEvent((PRKEVENT)(v62 + 2912), 0, 0);
  }
  else
  {
LABEL_55:
    v50 = a3;
  }
  if ( (*(_DWORD *)(v50 + 8) & 0x20000) != 0 )
  {
    v80 = *(_QWORD *)(v50 + 40);
    if ( v80 != v15 )
    {
      Log(a1, 512, 1685222994, v80, *(unsigned int *)(v50 + 8));
      UsbhSignalSyncDeviceReset(a1, *(_QWORD *)(v50 + 40), a2, 0xC000000E);
      goto LABEL_62;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      94,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  v51 = *(_DWORD *)(a2 + 400);
  if ( !v51 )
  {
    v52 = UsbhWaitConnect(a1, v15);
    goto LABEL_61;
  }
  v76 = v51 - 1;
  if ( !v76 )
  {
    v52 = UsbhEnumerate1(a1, v15);
    goto LABEL_61;
  }
  v77 = v76 - 1;
  if ( !v77 )
  {
    v52 = UsbhEnumerate2(a1, v15);
    goto LABEL_61;
  }
  v78 = v77 - 1;
  if ( v78 )
  {
    v79 = v78 - 1;
    if ( v79 )
    {
      if ( v79 != 1 )
        goto LABEL_62;
      v52 = UsbhHandleSuspend(a1, v15);
LABEL_61:
      *(_DWORD *)(a2 + 400) = v52;
      goto LABEL_62;
    }
    if ( (*(_DWORD *)(v50 + 8) & 8) != 0 )
    {
      *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, v15);
    }
    else
    {
      *(_DWORD *)(a2 + 400) = 4;
      if ( (*(_DWORD *)(v50 + 8) & 0x20000) != 0 )
        UsbhSignalSyncDeviceReset(a1, v15, a2, 0xC0000001);
      if ( (*(_BYTE *)(v50 + 10) & 1) != 0 )
        UsbhSignalSyncDeviceReset(a1, v15, a2, 0xC0000001);
      if ( (*(_DWORD *)(v50 + 8) & 0x40000) != 0 )
        UsbhSignalSuspendEvent(a1, a2);
      if ( (*(_DWORD *)(v50 + 8) & 0x100000) != 0 )
      {
        UsbhSignalResumeEvent(a1, a2);
        if ( v29 == 1 )
        {
          UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
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
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids);
    Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v29);
  }
  else
  {
    if ( (*(_DWORD *)(v50 + 8) & 8) != 0 )
      *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, v15);
    *(_DWORD *)(a2 + 400) = 3;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        95,
        (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids);
    Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v29);
  }
LABEL_62:
  if ( *(_DWORD *)(a2 + 416) )
  {
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      v63 = *(_QWORD *)(a1 + 64);
      if ( v63 )
      {
        v64 = *(_QWORD *)(v63 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v63 + 880)) & *(_DWORD *)(v63 + 884));
        *(_DWORD *)v64 = 827354229;
        *(_QWORD *)(v64 + 8) = 0LL;
        *(_QWORD *)(v64 + 16) = v15;
        *(_QWORD *)(v64 + 24) = a2;
      }
    }
    v91 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    *(_DWORD *)(a2 + 416) = 0;
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      v65 = *(_QWORD *)(a1 + 64);
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v65 + 880)) & *(_DWORD *)(v65 + 884));
        *(_DWORD *)v66 = 844131445;
        *(_QWORD *)(v66 + 8) = 0LL;
        *(_QWORD *)(v66 + 16) = v15;
        *(_QWORD *)(v66 + 24) = a2;
      }
    }
    Log(a1, 256, 1685218896, v15, 1884308559LL);
    if ( !v15 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v67, v68);
    v69 = *(_QWORD *)(v15 + 64);
    if ( !v69 )
      UsbhTrapFatal_Dbg(v15, 0LL, v67, v68);
    if ( *(_DWORD *)v69 != 1329877064 )
      UsbhTrapFatal_Dbg(v15, *(_QWORD *)(v15 + 64), v67, v68);
    v70 = (__int64 *)(v69 + 1264);
    v71 = *(__int64 **)(v69 + 1264);
    if ( v71 == (__int64 *)(v69 + 1264) )
    {
LABEL_170:
      v88 = *(_DWORD *)(v69 + 1280);
      if ( v88 )
        *(_DWORD *)(v69 + 1280) = v88 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v72 = *(_QWORD *)(a1 + 64);
          if ( v72 )
          {
            v73 = *(_QWORD *)(v72 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 880)) & *(_DWORD *)(v72 + 884));
            *(_DWORD *)v73 = 1064591724;
            *(_QWORD *)(v73 + 8) = 0LL;
            *(_QWORD *)(v73 + 16) = v69;
            *(_QWORD *)(v73 + 24) = 1884308559LL;
          }
        }
        if ( *((_DWORD *)v71 + 4) == 1884308559 && !v71[4] )
          break;
        v71 = (__int64 *)*v71;
        if ( v71 == v70 )
          goto LABEL_170;
      }
      v74 = (__int64 *)*v71;
      v75 = (__int64 **)v71[1];
      if ( *(__int64 **)(*v71 + 8) != v71 || *v75 != v71 )
        __fastfail(3u);
      *v75 = v74;
      v74[1] = (__int64)v75;
      ExFreePoolWithTag(v71 - 1, 0);
    }
    if ( (__int64 *)*v70 == v70 && !*(_DWORD *)(v69 + 1280) )
      KeSetEvent((PRKEVENT)(v69 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v91);
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v53 = *(_QWORD *)(a1 + 64);
    if ( v53 )
    {
      v54 = *(_QWORD *)(v53 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
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
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}

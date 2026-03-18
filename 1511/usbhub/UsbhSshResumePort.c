/*
 * XREFs of UsbhSshResumePort @ 0x1C000AF00
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00089C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhRefPdo @ 0x1C00095D0 (UsbhRefPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhSshPropagateResume @ 0x1C0025CD0 (UsbhSshPropagateResume.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00412F0 (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rbp
  unsigned __int16 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  KIRQL v29; // al
  KSPIN_LOCK *v30; // rcx
  int v31; // r10d
  KIRQL v32; // [rsp+30h] [rbp-48h]
  unsigned int v33; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v33 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v9 = *(_WORD *)(a3 + 4);
  v10 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
    *(_DWORD *)v11 = 1329877100;
    *(_QWORD *)(v11 + 16) = v9;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 24) = 1399612007LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v14 = (unsigned int)UsbhLogMask;
  v32 = v12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 1413771367;
      *(_QWORD *)(v16 + 16) = v9;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
      v14 = (unsigned int)UsbhLogMask;
    }
  }
  if ( v9 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( !v17 )
      UsbhTrapFatal_Dbg(a1, 0LL, v13, v14);
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v13, v14);
    if ( v9 <= *(unsigned __int8 *)(v17 + 2938) )
    {
      v18 = *(_QWORD *)(v17 + 3056);
      if ( v18 )
      {
        v19 = v9 - 1;
        v20 = v18 + 2928 * v19;
        if ( (v14 & 8) != 0 )
        {
          v19 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880));
          v21 = *(_QWORD *)(v17 + 888) + 32LL * ((unsigned int)v19 & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v21 = 1044672615;
          *(_QWORD *)(v21 + 16) = v9;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 24) = v20;
        }
        if ( v20 )
        {
          v10 = *(_QWORD *)(v20 + 392);
          if ( v10 )
            v10 = UsbhRefPdo(v19, v10, 0LL, 1399612007LL);
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v32);
  if ( v10 )
  {
    Log(a1, 0x10000, 1936937522, *(unsigned __int16 *)(a3 + 4), v10);
    Log(a1, 0x10000, 1936937523, 0, *(unsigned __int16 *)(a3 + 4));
    while ( 1 )
    {
      v28 = UsbhFdoCheckUpstreamConnectionState(a1, &v33, v26, v27);
      if ( (v28 & 0xC0000000) == 0xC0000000 )
        break;
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4944));
      v30 = (KSPIN_LOCK *)(v8 + 4944);
      if ( *(_DWORD *)(a3 + 696) != 3 )
      {
        KeReleaseSpinLock(v30, v29);
        v31 = 0;
        goto LABEL_30;
      }
      KeReleaseSpinLock(v30, v29);
      v31 = UsbhWaitEventWithTimeoutEx(a1, a3 + 712, 500LL, 1936937556LL, 0, 0LL);
      if ( v31 != 258 )
        goto LABEL_30;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v28);
LABEL_30:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT, *(unsigned __int16 *)(a3 + 4), v31);
    v4 = UsbhSshPropagateResume(a1, a2, v10);
    Log(a1, 0x10000, 1936937524, *(unsigned __int16 *)(a3 + 4), v10);
    UsbhUnlatchPdo(a1, v10, 0LL, 1399612007LL);
  }
  else
  {
    v22 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 894595955;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
    }
  }
  return v4;
}

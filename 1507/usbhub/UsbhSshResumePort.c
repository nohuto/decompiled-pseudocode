/*
 * XREFs of UsbhSshResumePort @ 0x1C001EC20
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhRefPdo @ 0x1C000BE50 (UsbhRefPdo.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSshPropagateResume @ 0x1C0020824 (UsbhSshPropagateResume.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00410D4 (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  char *DeviceExtension; // rbp
  unsigned __int16 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  KIRQL v29; // al
  KSPIN_LOCK *v30; // rcx
  KIRQL v31; // [rsp+30h] [rbp-48h]
  unsigned int v32; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v32 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
  v9 = *(_WORD *)(a3 + 4);
  v10 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v11 = *((_QWORD *)DeviceExtension + 111)
        + 32LL
        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
    *(_DWORD *)v11 = 1329877100;
    *(_QWORD *)(v11 + 16) = v9;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 24) = 1399612007LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v14 = (unsigned int)UsbhLogMask;
  v31 = v12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v15 = a1->DeviceExtension;
    if ( v15 )
    {
      v16 = *((_QWORD *)v15 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
      *(_DWORD *)v16 = 1413771367;
      *(_QWORD *)(v16 + 16) = v9;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
      v14 = (unsigned int)UsbhLogMask;
    }
  }
  if ( v9 )
  {
    v17 = (unsigned __int8 *)a1->DeviceExtension;
    if ( !v17 )
      UsbhTrapFatal_Dbg(a1, 0LL, v13, v14);
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v13, v14);
    if ( v9 <= v17[2938] )
    {
      v18 = *((_QWORD *)v17 + 382);
      if ( v18 )
      {
        v19 = v9 - 1;
        v20 = v18 + 2928 * v19;
        if ( (v14 & 8) != 0 )
        {
          v19 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220);
          v21 = *((_QWORD *)v17 + 111) + 32LL * ((unsigned int)v19 & *((_DWORD *)v17 + 221));
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
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v31);
  if ( v10 )
  {
    Log((__int64)a1, 0x10000, 1936937522, *(unsigned __int16 *)(a3 + 4), v10);
    Log((__int64)a1, 0x10000, 1936937523, 0LL, *(unsigned __int16 *)(a3 + 4));
    while ( 1 )
    {
      v28 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v32, v26, v27);
      if ( (v28 & 0xC0000000) == 0xC0000000 )
        break;
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 618);
      v30 = (KSPIN_LOCK *)(DeviceExtension + 4944);
      if ( *(_DWORD *)(a3 + 696) != 3 )
      {
        KeReleaseSpinLock(v30, v29);
        goto LABEL_30;
      }
      KeReleaseSpinLock(v30, v29);
      if ( (unsigned int)UsbhWaitEventWithTimeoutEx(a1, (void *)(a3 + 712), 500, 1936937556, 0, 0LL) != 258 )
        goto LABEL_30;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log((__int64)a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v28);
LABEL_30:
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT);
    v4 = UsbhSshPropagateResume(a1, a2, v10);
    Log((__int64)a1, 0x10000, 1936937524, *(unsigned __int16 *)(a3 + 4), v10);
    UsbhUnlatchPdo((__int64)a1, v10, 0LL, 0x536C6267u);
  }
  else
  {
    v22 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v23 = a1->DeviceExtension;
      if ( v23 )
      {
        v24 = *((_QWORD *)v23 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
        *(_DWORD *)v24 = 894595955;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
    }
  }
  return v4;
}

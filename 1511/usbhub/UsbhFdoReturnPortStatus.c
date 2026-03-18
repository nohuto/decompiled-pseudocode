/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x1C0019330
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C001B8F0 (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004AA48 (USBHUB_TriggerCallBacks.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00564B4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _DWORD *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  _DWORD *v12; // rbx
  _DWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rax
  KIRQL v20; // dl
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rax
  bool v24; // zf
  KIRQL v25; // dl
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdx
  _DWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // edi
  __int64 PortState; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdx
  char v44; // al
  __int64 SecurityQos_low; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  _QWORD *v51; // rbx
  KIRQL v52; // r14
  _QWORD *v53; // rcx
  _QWORD *v54; // r8
  _QWORD *v55; // rdx
  __int64 v57; // rcx
  int v58; // eax
  unsigned __int16 v60; // [rsp+98h] [rbp+20h]
  char v61; // [rsp+9Ah] [rbp+22h]

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_DWORD **)(a2 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a2, 0LL, a3, a4);
  if ( *v8 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), a3, a4);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1045647431;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a3;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225485LL;
  }
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (__int64)a3, 0LL);
    return 3221225485LL;
  }
  LODWORD(SecurityContext->SecurityQos) = 0;
  v12 = *(_DWORD **)(a2 + 64);
  if ( !v12 )
    UsbhTrapFatal_Dbg(a2, 0LL, a3, a4);
  if ( *v12 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), a3, a4);
  v13 = v12 + 236;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v14 = *(_QWORD *)(a1 + 64);
  if ( !v14 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v14 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  *(_BYTE *)(v14 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 5056));
  v13[10] = *(_DWORD *)(v14 + 4172);
  v13[11] = 11;
  v13[8] = 844055622;
  v13[9] = 1953516355;
  *((_QWORD *)v13 + 3) = KeGetCurrentThread();
  *(_QWORD *)(v14 + 1344) = v13;
  v17 = *((_QWORD *)v13 + 1);
  if ( !v17 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v15, v16);
  v18 = *(_DWORD **)(v17 + 64);
  if ( !v18 )
    UsbhTrapFatal_Dbg(v17, 0LL, v15, v16);
  if ( *v18 != 541218120 )
    UsbhTrapFatal_Dbg(v17, v18, v15, v16);
  if ( v18[1043] == 213 )
    goto LABEL_132;
  if ( *v18 != 541218120 )
    UsbhTrapFatal_Dbg(v17, v18, v15, v16);
  if ( v18[1043] == 212 )
  {
LABEL_132:
    UsbhReleaseFdoPwrLock(a1, v13);
    Log(a1, 8, 1196450936, (__int64)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v19 = *(_QWORD *)(a1 + 64);
  if ( !v19 )
    UsbhTrapFatal_Dbg(a1, 0LL, v15, v16);
  if ( *(_DWORD *)v19 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v15, v16);
  if ( *v18 != 541218120 )
    UsbhTrapFatal_Dbg(v17, v18, v15, v16);
  v13[8] = 1734964085;
  v20 = *(_BYTE *)(v19 + 5064);
  *(_QWORD *)(v19 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 5056), v20);
  *((_BYTE *)v13 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v13[34] = 1;
  v13[22] = 2018460752;
  v13[23] = 16;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v13;
  *((_QWORD *)v13 + 3) = KeGetCurrentThread();
  v23 = *(_DWORD **)(a2 + 64);
  if ( !v23 )
    UsbhTrapFatal_Dbg(a2, 0LL, v21, v22);
  if ( *v23 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v21, v22);
  v24 = v23[281] == 3;
  v13[34] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v13[22] = 1734964085;
  v25 = *((_BYTE *)v13 + 132);
  if ( !v24 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446584, (__int64)a3, 0LL);
    return 3221225486LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
  v28 = *((_QWORD *)v13 + 1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids,
      5);
  v29 = *((_QWORD *)v13 + 1);
  if ( !v29 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v26, v27);
  v30 = *(_QWORD *)(v29 + 64);
  if ( !v30 )
    UsbhTrapFatal_Dbg(v29, 0LL, v26, v27);
  if ( *(_DWORD *)v30 != 541218120 )
    UsbhTrapFatal_Dbg(v29, *(_QWORD *)(v29 + 64), v26, v27);
  KeWaitForSingleObject((PVOID)(v30 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v30 + 3192) = v13;
  v13[30] = 2018005843;
  v13[31] = 5;
  *((_QWORD *)v13 + 3) = KeGetCurrentThread();
  v33 = *(_DWORD *)(v30 + 3456);
  v34 = 32LL * (v33 & 7) + v30;
  if ( *(_DWORD *)(v34 + 3460) != 5 || *(_DWORD *)(v34 + 3464) != *(_DWORD *)(v30 + 3124) )
  {
    v57 = ((_BYTE)v33 + 1) & 7;
    *(_DWORD *)(v30 + 3456) = v57;
    v57 *= 32LL;
    *(_DWORD *)(v57 + v30 + 3460) = 5;
    *(_DWORD *)(v57 + v30 + 3464) = *(_DWORD *)(v30 + 3124);
  }
  v35 = *(unsigned int *)(v30 + 3124);
  switch ( (_DWORD)v35 )
  {
    case 1:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
      if ( !v28 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v31, v32);
      v36 = *(_DWORD **)(v28 + 64);
      if ( !v36 )
        UsbhTrapFatal_Dbg(v28, 0LL, v31, v32);
      if ( *v36 != 541218120 )
        UsbhTrapFatal_Dbg(v28, v36, v31, v32);
      v37 = *((_QWORD *)v13 + 1);
      if ( !v37 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v31, v32);
      v38 = *(_QWORD *)(v37 + 64);
      if ( !v38 )
        UsbhTrapFatal_Dbg(*((_QWORD *)v13 + 1), 0LL, v31, v32);
      if ( *(_DWORD *)v38 != 541218120 )
        UsbhTrapFatal_Dbg(*((_QWORD *)v13 + 1), *(_QWORD *)(v37 + 64), v31, v32);
      v39 = *(unsigned int *)(v38 + 3456);
      *(_DWORD *)(v38 + 3124) = 1;
      *(_DWORD *)(32 * v39 + v38 + 3468) = 1;
      v13[30] = 1734964085;
      *(_QWORD *)(v38 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v38 + 3128), 16, 1, 0);
      v40 = 0;
      goto LABEL_44;
    case 2:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          12,
          (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
LABEL_110:
      FdoExt(v28, v35, v31, v32);
LABEL_82:
      UsbhUnlockSSH(v13);
      v40 = -1073741823;
      goto LABEL_44;
    case 3:
      v40 = Usbh_SSH_HubPendingResumeAfterSuspend(v28, 5LL, v13);
      goto LABEL_44;
    case 4:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          14,
          (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
      goto LABEL_82;
  }
  if ( (_DWORD)v35 != 5 )
  {
    if ( (_DWORD)v35 != 6 )
    {
      v40 = -1073741823;
      UsbhUnlockSSH(v13);
      goto LABEL_44;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        16,
        (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
    goto LABEL_110;
  }
  v40 = Usbh_SSH_HubPendingResume(v28, 5LL, v13);
LABEL_44:
  if ( (v40 & 0xC0000000) == 0xC0000000 )
  {
    LODWORD(SecurityContext->SecurityQos) |= 3u;
    LODWORD(PortState) = 0;
  }
  else
  {
    PortState = (int)UsbhQueryPortState(a1);
    if ( (UsbhLogMask & 8) != 0 && (v42 = *(_QWORD *)(a1 + 64)) != 0 )
    {
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 861098055;
      v44 = v60;
      *(_QWORD *)(v43 + 16) = v60;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 24) = PortState;
    }
    else
    {
      v44 = v60;
    }
    if ( (int)PortState < 0 )
      goto LABEL_123;
    if ( (v44 & 1) != 0 )
      LODWORD(SecurityContext->SecurityQos) |= 2u;
    else
      LODWORD(PortState) = -1073741810;
    if ( (v44 & 2) != 0 )
      LODWORD(SecurityContext->SecurityQos) |= 1u;
    if ( v8[594] == 2 )
      LODWORD(SecurityContext->SecurityQos) &= ~1u;
    if ( (v61 & 1) != 0 )
LABEL_123:
      LODWORD(PortState) = -1073741810;
  }
  SecurityQos_low = LODWORD(SecurityContext->SecurityQos);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v46 = *(_QWORD *)(a1 + 64);
    if ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
      *(_DWORD *)v47 = 877875271;
      *(_QWORD *)(v47 + 24) = (int)PortState;
      *(_QWORD *)(v47 + 8) = 0LL;
      *(_QWORD *)(v47 + 16) = SecurityQos_low;
    }
  }
  a3->IoStatus.Status = PortState;
  IofCompleteRequest(a3, 0);
  v50 = *(_QWORD *)(a2 + 64);
  if ( !v50 )
    UsbhTrapFatal_Dbg(a2, 0LL, v48, v49);
  if ( *(_DWORD *)v50 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v48, v49);
  v51 = (_QWORD *)(v50 + 1216);
  v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v50 + 1208));
  if ( (_QWORD *)*v51 == v51 || (v53 = (_QWORD *)*v51) == 0LL || v53 == v51 )
  {
LABEL_127:
    v58 = *(_DWORD *)(v50 + 1256);
    if ( !v58 )
    {
      USBHUB_TriggerCallBacks(a2);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
    }
    *(_DWORD *)(v50 + 1256) = v58 - 1;
  }
  else
  {
    while ( (IRP *)v53[2] != a3 )
    {
      v53 = (_QWORD *)*v53;
      if ( v53 == v51 )
        goto LABEL_127;
    }
    v54 = (_QWORD *)*v53;
    v55 = (_QWORD *)v53[1];
    if ( *(_QWORD **)(*v53 + 8LL) != v53 || (_QWORD *)*v55 != v53 )
      __fastfail(3u);
    *v55 = v54;
    v54[1] = v55;
    ExFreePoolWithTag(v53 - 1, 0);
  }
  if ( (_QWORD *)*v51 != v51 || *(_DWORD *)(v50 + 1256) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v50 + 1208), v52);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v50 + 1208), v52);
    KeSetEvent((PRKEVENT)(v50 + 1232), 0, 0);
  }
  return (unsigned int)PortState;
}

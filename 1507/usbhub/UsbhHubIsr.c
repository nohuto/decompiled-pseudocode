/*
 * XREFs of UsbhHubIsr @ 0x1C0022AD0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00230C0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhSignalResumeEvent @ 0x1C00250BC (UsbhSignalResumeEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C00417A4 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, __int64 Irp, _QWORD *Context, __int64 a4)
{
  PIRP v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rcx
  signed __int32 v10; // r15d
  unsigned __int64 v11; // rcx
  __int64 Status; // r12
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r8
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rcx
  KIRQL v21; // r14
  __int64 *v22; // rcx
  __int64 **v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rax
  struct _KEVENT *v28; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  KSPIN_LOCK *v36; // r14
  KIRQL v37; // al
  _DWORD *v38; // rax
  int v39; // [rsp+48h] [rbp-40h]

  v5 = (PIRP)Irp;
  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
  if ( !Context )
    UsbhTrapFatal_Dbg(0LL, 0LL, Context, a4);
  v7 = Context[8];
  if ( !v7 )
    UsbhTrapFatal_Dbg(Context, 0LL, Context, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(Context, Context[8], Context, a4);
  v8 = *(_QWORD *)(v7 + 2672);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 1145661539;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v8;
    *(_QWORD *)(v9 + 24) = v5;
  }
  v10 = _InterlockedDecrement((volatile signed __int32 *)(v7 + 2712));
  if ( (UsbhLogMask & 4) != 0 )
  {
    Irp = Context[8];
    if ( Irp )
    {
      v11 = *(_QWORD *)(Irp + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(Irp + 880)) & *(_DWORD *)(Irp + 884));
      *(_DWORD *)v11 = 1717790819;
      *(_QWORD *)(v11 + 24) = v10;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v8;
    }
  }
  Status = v5->IoStatus.Status;
  v13 = *(int *)(v8 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    Irp = Context[8];
    if ( Irp )
    {
      v14 = *(_QWORD *)(Irp + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(Irp + 880)) & *(_DWORD *)(Irp + 884));
      *(_DWORD *)v14 = 843671651;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = Status;
      *(_QWORD *)(v14 + 24) = v13;
    }
  }
  if ( (int)Status >= 0 && !*(_DWORD *)(v8 + 36) )
  {
    Log((__int64)Context, 4, 1769101906, Status, *(int *)(v8 + 4));
    LOBYTE(v39) = 0;
    UsbhException((int)Context, 0, 116, 0, 0, Status, *(_DWORD *)(v8 + 4), usbfile_bus_c, 1094, v39);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v8 + 4) >= 0 && v10 != -1 )
  {
    *(_DWORD *)(v7 + 2656) = 0;
    v15 = 0;
    v16 = Context[8];
    while ( 1 )
    {
      if ( !v16 )
        UsbhTrapFatal_Dbg(Context, 0LL, 0LL, a4);
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(Context, Context[8], v16, a4);
      if ( v15 > *(unsigned __int8 *)(v16 + 2938) )
        break;
      Irp = (unsigned int)(1 << (v15 & 7));
      if ( ((unsigned __int8)Irp & *(_BYTE *)(((unsigned __int64)v15 >> 3) + *(_QWORD *)(v7 + 2680))) != 0 )
        break;
      ++v15;
    }
    if ( v15 > *((unsigned __int8 *)FdoExt((__int64)Context, Irp, v16, a4) + 2938) )
    {
      Log((__int64)Context, 4, 1113870435, v15, 0LL);
      LOBYTE(v39) = 0;
      UsbhException((int)Context, 0, 117, 0, 0, 0, 0, usbfile_bus_c, 1190, v39);
      v15 = 0;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
        v15);
    v17 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v20 = (_DWORD *)Context[8];
    v21 = v17;
    if ( !v20 )
      UsbhTrapFatal_Dbg(Context, 0LL, v18, v19);
    if ( *v20 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8], v18, v19);
    v20[383] = v15;
    v20[384] = 1;
    v22 = (__int64 *)(v20 + 386);
    v23 = (__int64 **)qword_1C0066668;
    *v22 = (__int64)&qword_1C0066660;
    v22[1] = (__int64)v23;
    if ( *v23 != &qword_1C0066660 )
      __fastfail(3u);
    *v23 = v22;
    qword_1C0066668 = (__int64)v22;
    v24 = FdoExt((__int64)Context, (__int64)&qword_1C0066660, v18, v19);
    _InterlockedIncrement(v24 + 685);
    Log((__int64)Context, 4, 1212764715, (__int64)Context, (int)v24[685]);
    KeReleaseSpinLock(&SpinLock, v21);
    v27 = (_DWORD *)Context[8];
    if ( !v27 )
      UsbhTrapFatal_Dbg(Context, 0LL, v25, v26);
    if ( *v27 != 541218120 )
      UsbhTrapFatal_Dbg(Context, Context[8], v25, v26);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v7 + 2720),
      (unsigned int)UsbhHubIsrWorker,
      0,
      (__int64)(v27 + 346),
      v15,
      1230467945);
    v28 = &Event;
    goto LABEL_36;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v8 + 4) != -1073676288 )
    {
LABEL_59:
      Log((__int64)Context, 4, 1667778867, Status, v10);
LABEL_60:
      v28 = (struct _KEVENT *)(v7 + 2688);
LABEL_36:
      KeSetEvent(v28, 0, 0);
      return 3221225494LL;
    }
    while ( 1 )
    {
LABEL_40:
      Irp = Context[8];
      if ( !Irp )
        UsbhTrapFatal_Dbg(Context, 0LL, v13, a4);
      if ( *(_DWORD *)Irp != 541218120 )
        UsbhTrapFatal_Dbg(Context, Irp, v13, a4);
      if ( v6 > *(unsigned __int8 *)(Irp + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v30 = *(_QWORD *)(Irp + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(Irp + 880)) & *(_DWORD *)(Irp + 884));
        *(_DWORD *)v30 = 1413771367;
        *(_QWORD *)(v30 + 16) = (unsigned __int16)v6;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 24) = 0LL;
      }
      if ( (_WORD)v6 )
      {
        v31 = Context[8];
        if ( !v31 )
          UsbhTrapFatal_Dbg(Context, 0LL, v13, a4);
        if ( *(_DWORD *)v31 != 541218120 )
          UsbhTrapFatal_Dbg(Context, v31, v13, a4);
        if ( (unsigned __int16)v6 > *(unsigned __int8 *)(v31 + 2938) )
        {
          v33 = 0LL;
        }
        else
        {
          v32 = *(_QWORD *)(v31 + 3056);
          if ( v32 )
          {
            v33 = v32 + 2928LL * ((unsigned __int16)v6 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v34 = *(_QWORD *)(v31 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
              *(_DWORD *)v34 = 1044672615;
              *(_QWORD *)(v34 + 16) = (unsigned __int16)v6;
              *(_QWORD *)(v34 + 8) = 0LL;
              *(_QWORD *)(v34 + 24) = v33;
            }
          }
          else
          {
            v33 = 0LL;
          }
        }
      }
      else
      {
        v33 = 0LL;
      }
      v35 = Context[8];
      if ( !v35 )
        UsbhTrapFatal_Dbg(Context, 0LL, v13, a4);
      if ( *(_DWORD *)v35 != 541218120 )
        UsbhTrapFatal_Dbg(Context, v35, v13, a4);
      v36 = (KSPIN_LOCK *)(v35 + 4944);
      v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v35 + 4944));
      if ( *(_DWORD *)(v33 + 696) == 2 )
      {
        KeReleaseSpinLock(v36, v37);
        Log((__int64)Context, 16, 1666207794, (__int64)Context, *(unsigned __int16 *)(v33 + 4));
        UsbhSignalSuspendEvent(Context, v33);
      }
      else if ( *(_DWORD *)(v33 + 696) == 3 )
      {
        KeReleaseSpinLock(v36, v37);
        Log((__int64)Context, 16, 1666207793, (__int64)Context, *(unsigned __int16 *)(v33 + 4));
        UsbhSignalResumeEvent(Context, v33);
      }
      else
      {
        KeReleaseSpinLock(v36, v37);
      }
      ++v6;
    }
    goto LABEL_58;
  }
  if ( (_DWORD)Status == -1073741823 )
  {
    if ( *(_DWORD *)(v8 + 4) != -1073741819 )
      goto LABEL_87;
    goto LABEL_40;
  }
LABEL_58:
  if ( (_DWORD)Status == -1073741536 )
    goto LABEL_59;
  if ( (_DWORD)Status == -1073741810 || (_DWORD)Status == -1073741667 )
    goto LABEL_60;
LABEL_87:
  if ( v10 == -1 )
    goto LABEL_59;
  if ( ++*(_DWORD *)(v7 + 2656) < 3u )
  {
    *(_DWORD *)(v7 + 2560) |= 0x1000u;
    v38 = FdoExt((__int64)Context, Irp, v13, a4);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      *(_QWORD *)(v7 + 2728),
      (unsigned int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v38 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v7 + 2688), 0, 0);
    LOBYTE(v39) = 0;
    UsbhException((int)Context, 0, 7, 0, 0, Status, *(_DWORD *)(v8 + 4), usbfile_bus_c, 1147, v39);
  }
  return 3221225494LL;
}

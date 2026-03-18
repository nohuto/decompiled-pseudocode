/*
 * XREFs of UsbhWaitConnect @ 0x1C0015F20
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x1C0018C00 (UsbhBusUnlatchPdo.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0022CF8 (UsbhAcquirePdoStateLock.c)
 *     UsbhRequestPortSuspend @ 0x1C0025DD4 (UsbhRequestPortSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D754 (WPP_RECORDER_SF_DDD.c)
 *     UsbhHandleOvercurrent @ 0x1C00508F4 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C0053F84 (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  unsigned __int8 v7; // r14
  __int64 v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rax
  KSPIN_LOCK *v19; // r15
  KIRQL v20; // al
  char v21; // cl
  KIRQL v22; // r12
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  KIRQL v30; // al
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // r9
  __int64 (__fastcall *v37)(); // rax
  int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // rbp
  int v47; // r9d
  __int64 v48; // rax
  unsigned int v49; // [rsp+88h] [rbp+10h]

  v49 = a2;
  v5 = *(_DWORD *)(a4 + 400);
  v7 = a3;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      a3 = *(_QWORD *)(a1 + 64);
      if ( a3 )
      {
        v9 = *(_QWORD *)(a3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a3 + 880)) & *(_DWORD *)(a3 + 884));
        *(_DWORD *)v9 = 1313754947;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a4;
        *(_QWORD *)(v9 + 24) = a2;
      }
    }
  }
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      *(unsigned __int16 *)(a4 + 4),
      10,
      (__int64)&WPP_2de0652197c239c8e2f1ef214ff7695f_Traceguids,
      *(_WORD *)(a4 + 4),
      v7,
      a2);
    a2 = v49;
    v10 = WPP_GLOBAL_Control;
  }
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
          *(_DWORD *)v12 = 1884180291;
          *(_QWORD *)(v12 + 16) = v7;
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 24) = 0LL;
          v10 = WPP_GLOBAL_Control;
        }
      }
    }
    if ( LOWORD(v10->DeviceType) )
      WPP_RECORDER_SF_d(
        v10->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
        *(_WORD *)(a4 + 4));
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v10 = (PDEVICE_OBJECT)(*(_QWORD *)(v13 + 888)
                               + 32LL
                               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884)));
          *(_DWORD *)&v10->Type = 1313175651;
          v10->DriverObject = 0LL;
          v10->NextDevice = (_DEVICE_OBJECT *)a4;
          v10->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v46 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock(v10, v46, 19LL);
      if ( *(_DWORD *)(PdoExt(a5) + 1124) == 2 )
      {
        UsbhBusUnlatchPdo(a1, a5, a4, v47, v46 + 132);
        UsbhDeletePdo(a1, a5, 2LL);
      }
      else
      {
        v48 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v48 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(v48 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v48 + 132));
      }
    }
    return 4;
  }
  if ( a2 != 0x100000 )
  {
    if ( a2 > 0x10 )
    {
      switch ( a2 )
      {
        case 0x20000u:
          Log(a1, 4, 1129270904, v7, 0LL);
          v37 = (__int64 (__fastcall *)())qword_1C005A098[2 * v42];
          break;
        case 0x10000u:
          Log(a1, 4, 1129270900, v7, 0LL);
          v37 = off_1C005BAD8[2 * v45];
          break;
        case 0x40000u:
          Log(a1, 4, 1129270867, v7, 0LL);
          return UsbhRequestPortSuspend(a1, v38, v7, a4, a5);
        default:
          return v5;
      }
    }
    else if ( a2 == 16 )
    {
      Log(a1, 4, 1129270898, v7, 0LL);
      v37 = off_1C005B6D8[2 * v44];
    }
    else
    {
      v35 = a2 - 1;
      if ( !v35 )
      {
        Log(a1, 4, 1129270883, v7, 0LL);
        v37 = off_1C005A298[2 * v36];
        goto LABEL_46;
      }
      v39 = v35 - 1;
      if ( v39 )
      {
        v40 = v39 - 2;
        if ( !v40 )
        {
          Log(a1, 4, 1129270899, v7, 0LL);
          v37 = (__int64 (__fastcall *)())qword_1C005A498[2 * v41];
          goto LABEL_46;
        }
        if ( v40 == 4 )
        {
          Log(a1, 4, 1129270902, v7, 0LL);
          return UsbhHandleOvercurrent(a1, a5);
        }
        return v5;
      }
      Log(a1, 4, 1129270885, v7, 0LL);
      v37 = off_1C005B8D8[2 * v43];
    }
LABEL_46:
    if ( v37 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))v37)(a1, a4, a5);
    return v5;
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 1833848643;
        *(_QWORD *)(v16 + 16) = v7;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 24) = 0LL;
      }
    }
  }
  v17 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v18 = *(_QWORD *)(a1 + 64);
  if ( !v18 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v18 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v19 = (KSPIN_LOCK *)(v18 + 4944);
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 4944));
  v21 = UsbhLogMask;
  v22 = v20;
  v23 = *(unsigned __int16 *)(a4 + 4);
  v24 = *(int *)(a4 + 696);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v25 = *(_QWORD *)(a1 + 64);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
      *(_DWORD *)v26 = 1397909875;
      *(_QWORD *)(v26 + 8) = 0LL;
      *(_QWORD *)(v26 + 16) = v24;
      *(_QWORD *)(v26 + 24) = v23;
      v21 = UsbhLogMask;
    }
  }
  if ( *(_DWORD *)(a4 + 696) == 3 )
  {
    v27 = *(unsigned __int16 *)(a4 + 4);
    if ( (v21 & 0x10) != 0 )
    {
      v28 = *(_QWORD *)(a1 + 64);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
        *(_DWORD *)v29 = 2018666867;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_QWORD *)(v29 + 16) = 3LL;
        *(_QWORD *)(v29 + 24) = v27;
      }
    }
    *(_DWORD *)(a4 + 696) = 0;
    KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
    v17 = 1;
  }
  KeReleaseSpinLock(v19, v22);
  if ( !v17 )
    return v5;
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
  v31 = *(unsigned __int16 *)(a4 + 4);
  v32 = *(int *)(a4 + 12);
  *(_DWORD *)(a4 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 64);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 1986359664;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 16) = v32;
      *(_QWORD *)(v34 + 24) = v31;
    }
  }
  *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
  *(_DWORD *)(a4 + 448) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v30);
  return v5;
}

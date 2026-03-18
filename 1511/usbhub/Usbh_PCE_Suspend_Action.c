/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x1C000F3F8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C000A590 (UsbhPCE_Suspend.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C001B100 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhRawWait @ 0x1C001BFE0 (UsbhRawWait.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024140 (UsbhLockPcqWithTag.c)
 *     UsbhSetSuspendPending @ 0x1C00260AC (UsbhSetSuspendPending.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C0026660 (UsbhHubQueueProcessChangeWorker.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040A90 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x1C0041224 (UsbhPCE_ResumeDone.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // r15d
  int v9; // esi
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // [rsp+40h] [rbp-10h] BYREF
  __int64 v37; // [rsp+48h] [rbp-8h]
  char v38; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  v37 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, a2 + 824, 660000LL, 825258049LL, 2, a2);
  v9 = UsbhLockPcqWithTag(a1, a2, 10, (unsigned int)&v38, 0);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    LOBYTE(v35) = v38;
    return UsbhUnlockPcqWithTag(a1, a2, v35, 0LL);
  }
  *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
  Log(a1, 512, 825258032, v9, *(unsigned __int16 *)(a2 + 4));
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
  UsbhSetSuspendPending(a1, a2);
  if ( v9 > 10 )
  {
    if ( v9 == 11 )
      goto LABEL_22;
    if ( v9 <= 13 )
      goto LABEL_46;
    if ( v9 != 14 )
    {
      if ( v9 == 15 )
      {
        Log(a1, 512, 825258081, 15, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
        UsbhFlushPortChangeQueue(a1, a2);
        v21 = *(unsigned int *)(a2 + 2400);
        LOBYTE(v22) = v38;
        *(_DWORD *)(a2 + 12) = 15;
        *(_DWORD *)(32 * v21 + a2 + 1384) = 15;
        UsbhUnlockPcqWithTag(a1, a2, v22, 0LL);
        goto LABEL_27;
      }
      if ( v9 > 17 )
      {
        if ( v9 == 18 )
        {
          Log(a1, 512, 825258039, 18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 1LL, 20LL);
          LOBYTE(v29) = v38;
          UsbhUnlockPcqWithTag(a1, a2, v29, 0LL);
          UsbhWaitEventWithTimeoutEx(a1, a2 + 712, 660000LL, 825258039LL, 3, a2);
          v30 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhPCE_ResumeDone(a1, a2 + 24, v30);
          goto LABEL_13;
        }
        if ( v9 == 20 )
        {
          LOBYTE(v10) = v38;
          UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
          UsbhSignalSuspendEvent(a1, a2);
          goto LABEL_13;
        }
        goto LABEL_42;
      }
LABEL_46:
      Log(a1, 512, 825258041, v9, *(unsigned __int16 *)(a2 + 4));
      v33 = *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      LOBYTE(v34) = v38;
      *(_DWORD *)(a2 + 12) = v9;
      *(_DWORD *)(32 * v33 + a2 + 1384) = v9;
      UsbhUnlockPcqWithTag(a1, a2, v34, 0LL);
      UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 825258041LL, 4, a2);
      result = UsbhPCE_Suspend(a1, a3, *(_WORD *)(a2 + 4));
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
      return result;
    }
LABEL_44:
    Log(a1, 512, 825258035, v9, *(unsigned __int16 *)(a2 + 4));
    v31 = *(unsigned __int16 *)(a2 + 4);
    v36 = 0x40000;
    *(_QWORD *)(a2 + 736) = 0LL;
    v5 = UsbhInsertQueuePortChangeObject(a1, v31, (unsigned int)&v36, 0, 0LL);
    if ( v5 >= 0 )
    {
      v32 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v32 + a2 + 1384) = 10;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( v9 >= 8 )
  {
    Log(a1, 512, 825258040, v9, *(unsigned __int16 *)(a2 + 4));
    v26 = *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 736) = 0LL;
    LOBYTE(v27) = v38;
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(32 * v26 + a2 + 1384) = v9;
    UsbhUnlockPcqWithTag(a1, a2, v27, 0LL);
    goto LABEL_13;
  }
  switch ( v9 )
  {
    case 1:
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 825258038, 1, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      goto LABEL_24;
    case 2:
      Log(a1, 512, 825258037, 2, *(unsigned __int16 *)(a2 + 4));
      v11 = *(unsigned __int16 *)(a2 + 4);
      v36 = 0x40000;
      *(_QWORD *)(a2 + 736) = 0LL;
      v5 = UsbhInsertQueuePortChangeObject(a1, v11, (unsigned int)&v36, 0, 0LL);
      if ( v5 >= 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            17,
            (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
            *(_WORD *)(a2 + 4));
        Log(a1, 8, 1902727217, a2, *(unsigned __int16 *)(a2 + 4));
        v12 = *(unsigned int *)(a2 + 2400);
        LOBYTE(v13) = v38;
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(32 * v12 + a2 + 1384) = 9;
        UsbhUnlockPcqWithTag(a1, a2, v13, 0LL);
        UsbhHubQueueProcessChangeWorker(v14, a2);
        goto LABEL_13;
      }
      Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalSuspendEvent(a1, a2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          1,
          18,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          *(_WORD *)(a2 + 4),
          v5);
      goto LABEL_24;
    case 3:
      goto LABEL_44;
  }
  if ( v9 != 4 )
  {
    if ( v9 != 5 )
    {
      if ( v9 != 6 )
      {
        if ( v9 == 7 )
        {
LABEL_22:
          Log(a1, 512, 825258033, v9, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          goto LABEL_23;
        }
LABEL_42:
        Log(a1, 512, 825258072, v9, *(unsigned __int16 *)(a2 + 4));
        v28 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_QWORD *)(a2 + 736) = 0LL;
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v28 + a2 + 1384) = 19;
        goto LABEL_24;
      }
      Log(a1, 512, 825258034, 6, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      UsbhFlushPortChangeQueue(a1, a2);
      LOBYTE(v18) = v38;
      v19 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v19 + a2 + 1384) = 11;
      UsbhUnlockPcqWithTag(a1, a2, v18, 0LL);
      *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v20, a2);
LABEL_27:
      UsbhSignalSuspendEvent(a1, a2);
      goto LABEL_13;
    }
    goto LABEL_46;
  }
  Log(a1, 512, 825258036, 4, *(unsigned __int16 *)(a2 + 4));
  v23 = *(unsigned __int16 *)(a2 + 4);
  v36 = 0x40000;
  v5 = UsbhInsertQueuePortChangeObject(a1, v23, (unsigned int)&v36, 0, 0LL);
  if ( v5 >= 0 )
  {
    v24 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v24 + a2 + 1384) = 9;
    goto LABEL_24;
  }
LABEL_23:
  UsbhiSignalSuspendEvent(a1, a2);
LABEL_24:
  LOBYTE(v17) = v38;
  UsbhUnlockPcqWithTag(a1, a2, v17, 0LL);
LABEL_13:
  UsbhWaitEventWithTimeoutEx(a1, a2 + 744, 660000LL, 825258104LL, 5, a2);
  result = *(unsigned int *)(v37 + 2560);
  if ( (result & 1) != 0 && *(_BYTE *)(v37 + 5235) == 32 )
  {
    Log(a1, 8, 2002872692, 10, 0LL);
    result = UsbhRawWait(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
  *a4 = v5;
  return result;
}

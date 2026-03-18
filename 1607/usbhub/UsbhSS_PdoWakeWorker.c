/*
 * XREFs of UsbhSS_PdoWakeWorker @ 0x1C0021490
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdoPowerState @ 0x1C001A240 (UsbhSetPdoPowerState.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0021680 (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rdi
  KIRQL v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  KIRQL v19; // dl
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // al
  int v33; // edx
  int v34; // r8d
  char v35; // r10

  FdoExt(a1, a2, a3, a4);
  v9 = PdoExt(a3, v6, v7, v8);
  v13 = PdoExt(a3, v10, v11, v12) + 236;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_ffb6dafc59903cb34fef89ac9d19df64_Traceguids,
      *((_WORD *)v9 + 710));
  Log(a1, 0x10000, 1936945239, a3, *((unsigned __int16 *)v9 + 710));
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v13[34] = 1;
  *((_BYTE *)v13 + 132) = v14;
  v13[22] = 2018460752;
  v13[23] = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v13;
  *((_QWORD *)v13 + 3) = KeGetCurrentThread();
  v18 = PdoExt(a3, v15, v16, v17)[281] == 3;
  v13[34] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v13[22] = 1734964085;
  v19 = *((_BYTE *)v13 + 132);
  if ( v18 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
    UsbhAcquireFdoPwrLock(a1, v13, 126LL, 1986356311LL);
    FdoExt(*((_QWORD *)v13 + 1), v20, v21, v22);
    v26 = FdoExt(*((_QWORD *)v13 + 1), v23, v24, v25)[1043];
    v31 = (unsigned int)PdoExt(a3, v27, v28, v29)[282];
    if ( v26 == 201 && ((_DWORD)v31 != 1 || (v9[353] & 4) != 0) )
    {
      UsbhSetPdoPowerState((__int64)v13, a3, v30, v31, 12);
      UsbhReleaseFdoPwrLock(a1, v13);
      v32 = UsbhCompletePdoWakeIrp(a1, a3, 0LL);
      Log(a1, 0x10000, 1936938801, v32, a3);
      if ( v35 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v33,
          v34,
          11,
          (__int64)&WPP_ffb6dafc59903cb34fef89ac9d19df64_Traceguids,
          *((_WORD *)v9 + 710),
          a3);
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v13);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
  }
  UsbhUnlatchPdo(a1, a3, 0LL, 0x73737057u);
}

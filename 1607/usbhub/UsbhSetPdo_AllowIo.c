/*
 * XREFs of UsbhSetPdo_AllowIo @ 0x1C001A68C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001B6A8 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhResetNotifyCompletion @ 0x1C00470E0 (UsbhResetNotifyCompletion.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_AllowIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  KIRQL v17; // al
  _DWORD *v18; // rax

  v5 = (KSPIN_LOCK *)PdoExt(a2, a2, a3, a4);
  v9 = PdoExt(a2, v6, v7, v8) + 236;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v9[34] = 1;
  *((_BYTE *)v9 + 132) = v10;
  v9[22] = 2018460752;
  v9[23] = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v9;
  *((_QWORD *)v9 + 3) = KeGetCurrentThread();
  if ( PdoExt(a2, v11, v12, v13)[281] == 3 )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(v5 + 151);
    *((_DWORD *)v5 + 196) = 1;
    KeReleaseSpinLock(v5 + 151, v17);
  }
  v18 = PdoExt(a2, v14, v15, v16);
  v18[270] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v18[258] = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v18 + 1076));
}

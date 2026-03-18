/*
 * XREFs of UsbhFdoWaitWake_IoCompletion @ 0x1C0027270
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhFdoWaitWake_IoCompletion(__int64 DeviceObject, PIRP Irp, PVOID Context)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rbx
  unsigned int v9; // edi

  Log(DeviceObject, 16, 1717000041, 0LL, (__int64)Irp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
  v8 = FdoExt(DeviceObject, v5, v6, v7);
  if ( _InterlockedExchange(v8 + 1221, 7) == 4 )
  {
    v9 = 0;
    v8[640] ^= (v8[640] ^ ((PoGetSystemWake(Irp) != 0) << 26)) & 0x4000000;
  }
  else
  {
    v9 = -1073741802;
  }
  UsbhEtwLogHubIrpEvent(DeviceObject, (__int64)Irp, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, 0x20u);
  return v9;
}

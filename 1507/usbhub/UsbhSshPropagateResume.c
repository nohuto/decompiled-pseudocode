/*
 * XREFs of UsbhSshPropagateResume @ 0x1C0020824
 * Callers:
 *     UsbhSshResumePort @ 0x1C001EC20 (UsbhSshResumePort.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0021590 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C00179CC (UsbhSet_Pdo_Dx.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0021494 (UsbhSendSynchronousUsbIoctlRequest.c)
 */

__int64 __fastcall UsbhSshPropagateResume(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  unsigned int v7; // esi
  _DWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9

  v7 = 0;
  v8 = PdoExt((__int64)a3, a2, (__int64)a3, a4);
  Log(a1, 0x10000, 1400066130, a1, (__int64)a3);
  if ( (v8[353] & 4) != 0 )
  {
    v7 = UsbhSendSynchronousUsbIoctlRequest(a1, a3, 2232227LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PROPAGATE);
    UsbhAcquirePdoStateLock(v9, a2, 26);
    v13 = PdoExt((__int64)a3, v10, v11, v12)[281];
    *(_DWORD *)(a2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    if ( (unsigned int)(v13 - 1) <= 2 )
      UsbhSet_Pdo_Dx(a3, 1LL, v14, v15);
  }
  return v7;
}

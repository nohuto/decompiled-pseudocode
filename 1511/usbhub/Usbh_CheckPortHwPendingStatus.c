/*
 * XREFs of Usbh_CheckPortHwPendingStatus @ 0x1C001E99C
 * Callers:
 *     UsbhResetPort @ 0x1C001E7B8 (UsbhResetPort.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 */

void __fastcall Usbh_CheckPortHwPendingStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // al

  v6 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 1236);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    KeReleaseSpinLock(v6, v7);
    Log(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSuspendEvent(a1, a2);
  }
  else if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    KeReleaseSpinLock(v6, v7);
    Log(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalResumeEvent(a1, a2);
  }
  else
  {
    KeReleaseSpinLock(v6, v7);
  }
}

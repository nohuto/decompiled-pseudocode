/*
 * XREFs of UsbhSetSuspendPending @ 0x1C000AD68
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhSetSuspendPending(__int64 a1, __int64 a2)
{
  int v3; // ebp
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // si

  v3 = a1;
  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = v5;
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    KeReleaseSpinLock(v4, v5);
  }
  else
  {
    *(_DWORD *)(a2 + 696) = 2;
    KeResetEvent((PRKEVENT)(a2 + 744));
    KeReleaseSpinLock(v4, v6);
    Log(v3, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1392) = 10;
  }
}

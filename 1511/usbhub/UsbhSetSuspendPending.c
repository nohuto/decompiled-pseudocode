/*
 * XREFs of UsbhSetSuspendPending @ 0x1C00260AC
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhSetSuspendPending(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // al
  KIRQL v8; // si

  v6 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 1236);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  v8 = v7;
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    KeReleaseSpinLock(v6, v7);
  }
  else
  {
    *(_DWORD *)(a2 + 696) = 2;
    KeResetEvent((PRKEVENT)(a2 + 744));
    KeReleaseSpinLock(v6, v8);
    Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1392) = 10;
  }
}

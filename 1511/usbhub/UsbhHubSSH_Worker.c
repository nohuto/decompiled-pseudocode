/*
 * XREFs of UsbhHubSSH_Worker @ 0x1C000F660
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhHubSSH_Worker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *v4; // rbx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v4 = *(struct _KEVENT **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( v4->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  Usbh_SSH_Event(a1, 1LL, a3);
  return KeSetEvent(v4 + 143, 0, 0);
}

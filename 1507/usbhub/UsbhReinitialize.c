/*
 * XREFs of UsbhReinitialize @ 0x1C003C5CC
 * Callers:
 *     UsbhHubStart @ 0x1C0021B28 (UsbhHubStart.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhConfigureUsbHub @ 0x1C001F340 (UsbhConfigureUsbHub.c)
 *     UsbhInitializeTtHub @ 0x1C002555C (UsbhInitializeTtHub.c)
 *     UsbhLogStartFailure @ 0x1C003C34C (UsbhLogStartFailure.c)
 */

__int64 __fastcall UsbhReinitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  char *Src; // rax
  __int64 v15; // r9

  Log(a1, 8, 1750224457, a2, 0LL);
  v7 = FdoExt(a1, v4, v5, v6);
  v11 = UsbhConfigureUsbHub(a1, v8, v9, v10);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    Src = "ConfigureUsbHub";
    v15 = 5742LL;
LABEL_6:
    UsbhLogStartFailure(a1, v11, 3u, v15, (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return v11;
  }
  if ( (v7[640] & 0x40) != 0 )
  {
    v11 = UsbhInitializeTtHub(a1, a2, v12, v13);
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
      Src = "InitializeTtHub";
      v15 = 5752LL;
      goto LABEL_6;
    }
  }
  return v11;
}

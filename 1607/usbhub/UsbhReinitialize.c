/*
 * XREFs of UsbhReinitialize @ 0x1C003CC1C
 * Callers:
 *     UsbhHubStart @ 0x1C000AFA4 (UsbhHubStart.c)
 * Callees:
 *     UsbhInitializeTtHub @ 0x1C0005090 (UsbhInitializeTtHub.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhConfigureUsbHub @ 0x1C001FAE8 (UsbhConfigureUsbHub.c)
 *     UsbhLogStartFailure @ 0x1C003C998 (UsbhLogStartFailure.c)
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
  char *Src; // rax
  __int64 v13; // r9

  Log(a1, 8, 1750224457, a2, 0LL);
  v7 = FdoExt(a1, v4, v5, v6);
  v11 = UsbhConfigureUsbHub(a1, v8, v9, v10);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    Src = "ConfigureUsbHub";
    v13 = 5742LL;
LABEL_6:
    UsbhLogStartFailure(a1, v11, 3u, v13, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return v11;
  }
  if ( (v7[640] & 0x40) != 0 )
  {
    v11 = UsbhInitializeTtHub(a1, a2);
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
      Src = "InitializeTtHub";
      v13 = 5752LL;
      goto LABEL_6;
    }
  }
  return v11;
}

/*
 * XREFs of UsbhReferenceListOpen @ 0x1C000B4C4
 * Callers:
 *     UsbhAddDevice @ 0x1C000A140 (UsbhAddDevice.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000B670 (UsbhReferenceListAdd.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhReferenceListOpen(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // r10d

  v2 = FdoExt(a1);
  *(_QWORD *)(v2 + 2520) = v2 + 2512;
  *(_QWORD *)(v2 + 2512) = v2 + 2512;
  KeInitializeEvent((PRKEVENT)(v2 + 2488), NotificationEvent, 0);
  *(_BYTE *)(v2 + 2480) = 1;
  v3 = UsbhReferenceListAdd(a1, a1, 1329874536LL);
  if ( (v3 & 0xC0000000) == 0xC0000000 )
    *(_BYTE *)(v2 + 2480) = 0;
  Log(a1, 8, 1919315023, 0, v3);
  return v4;
}

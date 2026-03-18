/*
 * XREFs of UsbhReferenceListOpen @ 0x1C001E3E8
 * Callers:
 *     UsbhAddDevice @ 0x1C001D8F0 (UsbhAddDevice.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 */

__int64 __fastcall UsbhReferenceListOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // r10d

  v5 = FdoExt(a1, a2, a3, a4);
  *((_QWORD *)v5 + 315) = v5 + 628;
  *((_QWORD *)v5 + 314) = v5 + 628;
  KeInitializeEvent((PRKEVENT)(v5 + 622), NotificationEvent, 0);
  *((_BYTE *)v5 + 2480) = 1;
  v6 = UsbhReferenceListAdd(a1, a1, 1329874536LL);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
    *((_BYTE *)v5 + 2480) = 0;
  Log(a1, 8, 1919315023, 0LL, v6);
  return v7;
}

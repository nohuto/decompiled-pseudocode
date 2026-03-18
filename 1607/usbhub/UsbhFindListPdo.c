/*
 * XREFs of UsbhFindListPdo @ 0x1C0043718
 * Callers:
 *     UsbhOnPdoAbsentList @ 0x1C00442EC (UsbhOnPdoAbsentList.c)
 *     UsbhOnPdoRemovedList @ 0x1C0044320 (UsbhOnPdoRemovedList.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

char __fastcall UsbhFindListPdo(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *i; // r10
  _QWORD *v8; // r10
  __int64 v9; // r9

  PdoExt(a2, a2, (__int64)a3, a4);
  for ( i = (_QWORD *)*a3; ; i = (_QWORD *)*v8 )
  {
    if ( i == a3 )
      return 0;
    Log(a1, 4, 1685219121, (__int64)(i - 164), 0LL);
    if ( a2 == *(_QWORD *)(v9 + 840) )
      break;
  }
  return 1;
}

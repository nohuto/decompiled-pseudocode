/*
 * XREFs of UsbhOnPdoAbsentList @ 0x1C00442EC
 * Callers:
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045434 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

char __fastcall UsbhOnPdoAbsentList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r9

  v6 = FdoExt(a1, a2, a3, a4);
  return UsbhFindListPdo(a1, a2, (_QWORD *)v6 + 605, v7);
}

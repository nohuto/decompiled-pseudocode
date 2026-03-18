/*
 * XREFs of UsbhOnPdoRemovedList @ 0x1C0044320
 * Callers:
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

char __fastcall UsbhOnPdoRemovedList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r9

  v6 = FdoExt(a1, a2, a3, a4);
  return UsbhFindListPdo(a1, a2, (_QWORD *)v6 + 603, v7);
}

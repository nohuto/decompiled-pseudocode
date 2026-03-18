/*
 * XREFs of Usbh_HubDeferIrpProcessing @ 0x1C004632C
 * Callers:
 *     UsbhPdoPower @ 0x1C000C830 (UsbhPdoPower.c)
 *     UsbhFdoPower @ 0x1C00246D0 (UsbhFdoPower.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubDeferIrpProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  v7 = 0;
  v8 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)FdoExt(a1, a2, a3, a4) + 599);
  if ( v8 )
    v8(a2, a3, a4);
  else
    return (unsigned int)-1073741822;
  return v7;
}

/*
 * XREFs of ?PanDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0287E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PanDisablePDEV(struct DHPDEV__ *a1)
{
  (*((void (__fastcall **)(_QWORD))a1 + 102))(*((_QWORD *)a1 + 4));
  EngDeleteSemaphore(*((HSEMAPHORE *)a1 + 15));
  Win32FreePool(a1);
}

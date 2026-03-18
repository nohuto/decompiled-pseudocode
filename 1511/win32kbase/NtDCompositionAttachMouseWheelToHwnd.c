/*
 * XREFs of NtDCompositionAttachMouseWheelToHwnd @ 0x1C00045C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RedirectMouseWheelToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@H@Z @ 0x1C0004690 (-RedirectMouseWheelToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@H@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionAttachMouseWheelToHwnd(unsigned int a1, unsigned int a2, HWND a3, int a4)
{
  int v7; // edi
  int v8; // r9d
  DirectComposition::CApplicationChannel *v9; // rbx
  DirectComposition::CApplicationChannel *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11);
  if ( v7 >= 0 )
  {
    v8 = a4;
    v9 = v11;
    v7 = DirectComposition::CApplicationChannel::RedirectMouseWheelToHwnd(v11, a2, a3, v8);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
  }
  return (unsigned int)v7;
}

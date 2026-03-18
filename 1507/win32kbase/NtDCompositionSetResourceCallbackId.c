/*
 * XREFs of NtDCompositionSetResourceCallbackId @ 0x1C00110D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0030CE8 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceCallbackId(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v5; // edi
  unsigned int v6; // r8d
  DirectComposition::CApplicationChannel *v7; // rbx
  DirectComposition::CApplicationChannel *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
  if ( v5 >= 0 )
  {
    v6 = a3;
    v7 = v9;
    v5 = DirectComposition::CApplicationChannel::SetResourceCallbackId(v9, a2, v6);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
  }
  return (unsigned int)v5;
}

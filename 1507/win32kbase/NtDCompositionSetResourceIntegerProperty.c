/*
 * XREFs of NtDCompositionSetResourceIntegerProperty @ 0x1C002D070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C00301F0 (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceIntegerProperty(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  int v7; // edi
  __int64 v8; // r9
  DirectComposition::CApplicationChannel *v9; // rbx
  DirectComposition::CApplicationChannel *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  v6 = a3;
  v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11, a3, a4);
  if ( v7 >= 0 )
  {
    v8 = a4;
    v9 = v11;
    v7 = DirectComposition::CApplicationChannel::SetResourceIntegerProperty(v11, a2, v6, v8);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
  }
  return (unsigned int)v7;
}

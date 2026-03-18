/*
 * XREFs of NtDCompositionReplaceVisualChildren @ 0x1C00D4170
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D53E8 (-ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 */

__int64 __fastcall NtDCompositionReplaceVisualChildren(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v6; // edi
  unsigned int v7; // r8d
  DirectComposition::CApplicationChannel *v8; // rbx
  DirectComposition::CApplicationChannel *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v5 = a3;
  v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10, a3, a4);
  if ( v6 >= 0 )
  {
    v7 = v5;
    v8 = v10;
    v6 = DirectComposition::CApplicationChannel::ReplaceVisualChildren(v10, a2, v7);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v8)(v8);
  }
  return (unsigned int)v6;
}

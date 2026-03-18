/*
 * XREFs of NtDCompositionSetResourceFloatProperty @ 0x1C0019EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C001D518 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceFloatProperty(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v6; // edi
  unsigned int v7; // r8d
  DirectComposition::CApplicationChannel *v8; // rbx
  DirectComposition::CApplicationChannel *v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10);
  if ( v6 >= 0 )
  {
    v7 = a3;
    v8 = v10;
    v6 = DirectComposition::CApplicationChannel::SetResourceFloatProperty(v10, a2, v7, *(float *)&a4);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v8)(v8);
  }
  return (unsigned int)v6;
}

/*
 * XREFs of NtDCompositionAddVisualChild @ 0x1C001E2B0
 * Callers:
 *     NtDCompositionAddCrossDeviceVisualChild @ 0x1C00128E0 (NtDCompositionAddCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001D8D4 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionAddVisualChild(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v8; // edi
  unsigned int v9; // r9d
  DirectComposition::CApplicationChannel *v10; // rbx
  DirectComposition::CApplicationChannel *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v12);
  if ( v8 >= 0 )
  {
    v9 = a4;
    v10 = v12;
    v8 = DirectComposition::CApplicationChannel::AddVisualChild(v12, a2, a3, v9, a5);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v10)(v10);
  }
  return (unsigned int)v8;
}

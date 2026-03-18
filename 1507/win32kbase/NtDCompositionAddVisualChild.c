/*
 * XREFs of NtDCompositionAddVisualChild @ 0x1C002B030
 * Callers:
 *     NtDCompositionAddCrossDeviceVisualChild @ 0x1C0023E40 (NtDCompositionAddCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C003070C (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionAddVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  int v8; // edi
  int v9; // r9d
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

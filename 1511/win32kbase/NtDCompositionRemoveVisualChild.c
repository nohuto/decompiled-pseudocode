/*
 * XREFs of NtDCompositionRemoveVisualChild @ 0x1C001E5F0
 * Callers:
 *     NtDCompositionRemoveCrossDeviceVisualChild @ 0x1C00116A0 (NtDCompositionRemoveCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001D9F8 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRemoveVisualChild(__int64 a1, int a2, int a3)
{
  int v5; // edi
  int v6; // r8d
  DirectComposition::CApplicationChannel *v7; // rbx
  DirectComposition::CApplicationChannel *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
  if ( v5 >= 0 )
  {
    v6 = a3;
    v7 = v9;
    v5 = DirectComposition::CApplicationChannel::RemoveVisualChild(v9, a2, v6);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
  }
  return (unsigned int)v5;
}

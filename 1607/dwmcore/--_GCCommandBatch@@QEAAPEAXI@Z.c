/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180043D84
 * Callers:
 *     ?ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800434E4 (-ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180049B50 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801145D0 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18004BF34 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CCommandBatch *__fastcall CCommandBatch::`scalar deleting destructor'(CCommandBatch *this)
{
  CDataStreamWriter::FreeResources(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCommandBatch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}

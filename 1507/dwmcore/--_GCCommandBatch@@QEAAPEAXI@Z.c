/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1800DEC28
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180050650 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@EEAA@XZ @ 0x1800E1280 (--1CChannel@@EEAA@XZ.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18004F7F0 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CCommandBatch *__fastcall CCommandBatch::`scalar deleting destructor'(CCommandBatch *this)
{
  CDataStreamWriter::FreeResources(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCommandBatch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}

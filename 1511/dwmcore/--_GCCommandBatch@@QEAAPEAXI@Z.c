/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1800FC0C0
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800A0D40 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@EEAA@XZ @ 0x1800FF988 (--1CChannel@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1800A0190 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

CCommandBatch *__fastcall CCommandBatch::`scalar deleting destructor'(CCommandBatch *this)
{
  CDataStreamWriter::FreeResources(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCommandBatch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}

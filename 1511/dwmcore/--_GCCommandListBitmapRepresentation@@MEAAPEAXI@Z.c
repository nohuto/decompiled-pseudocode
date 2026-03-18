/*
 * XREFs of ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x180113260
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x18002C4B8 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 */

CCommandListBitmapRepresentation *__fastcall CCommandListBitmapRepresentation::`scalar deleting destructor'(
        CCommandListBitmapRepresentation *this,
        char a2)
{
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCommandListBitmapRepresentation *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

/*
 * XREFs of ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x180154E90
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x180154EE0 (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CScanPipeline::ResetPipeline(CScanPipeline *this)
{
  *((_DWORD *)this + 8) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 1, 0x30u);
  *((_DWORD *)this + 140) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 67, 8u);
  *((_DWORD *)this + 154) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 74, 8u);
}

/*
 * XREFs of ??_GGeometrySink@CDrawListPrimitiveBuilder@@UEAAPEAXI@Z @ 0x180017420
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CDrawListPrimitiveBuilder::GeometrySink *__fastcall CDrawListPrimitiveBuilder::GeometrySink::`scalar deleting destructor'(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        char a2)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 136);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 40);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDrawListPrimitiveBuilder::GeometrySink *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

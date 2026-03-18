/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C001CB00
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z @ 0x1C001CBC0 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001CED0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00207E0 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(
        DirectComposition::CInteractionMarshaler *this)
{
  CompositionInputObject *v2; // rcx

  v2 = (CompositionInputObject *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    CompositionInputObject::AssociateWithVisual(v2, 0LL);
    ObfDereferenceObject(*((PVOID *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
}

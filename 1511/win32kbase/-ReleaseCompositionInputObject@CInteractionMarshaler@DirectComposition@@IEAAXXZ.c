/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C004EA70
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C004EB30 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004EE50 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C0047C9C (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
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

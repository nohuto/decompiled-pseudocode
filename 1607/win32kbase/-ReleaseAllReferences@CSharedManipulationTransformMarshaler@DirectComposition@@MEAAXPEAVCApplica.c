/*
 * XREFs of ?ReleaseAllReferences@CSharedManipulationTransformMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0048360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedManipulationTransformMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 14) = 0LL;
  }
}

/*
 * XREFs of ?ReleaseAllReferences@CSharedReadMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0073F00
 * Callers:
 *     ?ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0073BD0 (-ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedReadMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedReadMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 5) = 0LL;
  }
}

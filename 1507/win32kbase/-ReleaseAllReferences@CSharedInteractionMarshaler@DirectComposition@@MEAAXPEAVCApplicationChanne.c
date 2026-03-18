/*
 * XREFs of ?ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DE590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedInteractionMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 28) = 0LL;
  }
  DirectComposition::CInteractionMarshaler::ReleaseAllReferences(this, a2);
}

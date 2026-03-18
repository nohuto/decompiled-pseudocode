/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteDesktopTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007BC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 9) = 0LL;
  }
  DirectComposition::CDesktopTargetMarshaler::ReleaseAllReferences(this, a2);
}

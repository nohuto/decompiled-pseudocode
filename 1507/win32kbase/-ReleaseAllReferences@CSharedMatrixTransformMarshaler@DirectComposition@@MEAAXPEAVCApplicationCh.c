/*
 * XREFs of ?ReleaseAllReferences@CSharedMatrixTransformMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0003E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedMatrixTransformMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 8) = 0LL;
  }
}

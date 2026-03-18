/*
 * XREFs of ?EmitDeletionCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedReadMarshaler::EmitDeletionCommand(
        DirectComposition::CSharedReadMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, *((_DWORD *)this + 12), a2);
}

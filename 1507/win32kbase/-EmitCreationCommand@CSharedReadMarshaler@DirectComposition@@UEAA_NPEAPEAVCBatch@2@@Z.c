/*
 * XREFs of ?EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedReadMarshaler::EmitCreationCommand(
        const struct DirectComposition::CSharedSystemResource **this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (DirectComposition::CResourceMarshaler *)this,
           this[5],
           a2);
}

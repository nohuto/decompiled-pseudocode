/*
 * XREFs of ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedInteractionMarshaler::EmitCreationCommand(
        const struct DirectComposition::CSharedSystemResource **this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (DirectComposition::CResourceMarshaler *)this,
           this[28],
           a2);
}

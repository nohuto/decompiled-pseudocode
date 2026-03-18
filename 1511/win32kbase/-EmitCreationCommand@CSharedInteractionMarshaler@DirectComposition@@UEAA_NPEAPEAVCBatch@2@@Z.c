/*
 * XREFs of ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedInteractionMarshaler::EmitCreationCommand(
        const struct DirectComposition::CSharedSystemResource **this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (DirectComposition::CResourceMarshaler *)this,
           this[28],
           a2);
}

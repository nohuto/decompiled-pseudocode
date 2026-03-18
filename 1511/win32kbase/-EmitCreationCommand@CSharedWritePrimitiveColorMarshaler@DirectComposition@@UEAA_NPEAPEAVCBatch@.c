/*
 * XREFs of ?EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DFBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedWritePrimitiveColorMarshaler::EmitCreationCommand(
        const struct DirectComposition::CSharedSystemResource **this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (DirectComposition::CResourceMarshaler *)this,
           this[7],
           a2);
}

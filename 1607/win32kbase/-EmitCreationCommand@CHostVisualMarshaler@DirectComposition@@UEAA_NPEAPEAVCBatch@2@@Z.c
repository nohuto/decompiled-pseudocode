/*
 * XREFs of ?EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00042A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::EmitCreationCommand(
        DirectComposition::CHostVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           this,
           a2,
           *(unsigned int *)(*((_QWORD *)this + 30) + 20LL));
}

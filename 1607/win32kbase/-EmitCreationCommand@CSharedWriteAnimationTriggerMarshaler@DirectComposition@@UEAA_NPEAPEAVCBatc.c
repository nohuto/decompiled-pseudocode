/*
 * XREFs of ?EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F22C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::EmitCreationCommand(
        DirectComposition::CSharedWriteAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           (__int64 *)a2,
           *(_DWORD *)(*((_QWORD *)this + 6) + 20LL));
}

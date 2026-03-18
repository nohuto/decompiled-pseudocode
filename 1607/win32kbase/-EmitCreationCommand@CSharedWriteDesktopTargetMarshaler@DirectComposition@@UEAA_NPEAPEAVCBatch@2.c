/*
 * XREFs of ?EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::EmitCreationCommand(
        DirectComposition::CSharedWriteDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           (__int64 *)a2,
           *(_DWORD *)(*((_QWORD *)this + 9) + 20LL));
}

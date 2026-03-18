/*
 * XREFs of ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044570
 * Callers:
 *     ?EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007F3A0 (-EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CResourceMarshaler::EmitDeletionCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // eax

  v4 = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 16LL))(this);
  return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, v4, a2);
}

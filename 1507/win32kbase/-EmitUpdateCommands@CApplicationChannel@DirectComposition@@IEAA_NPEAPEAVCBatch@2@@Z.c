/*
 * XREFs of ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002EF00
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rbx

  if ( !*((_QWORD *)this + 51) )
    return 1;
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = 0LL;
    DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v4);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v4 + 72LL))(
            v4,
            a2) )
      break;
    *(_DWORD *)(v4 + 16) &= ~4u;
    DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)v4);
    if ( !*((_QWORD *)this + 51) )
      return 1;
  }
  *(_QWORD *)(v4 + 8) = *((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = v4;
  DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)v4);
  return 0;
}

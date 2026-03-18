/*
 * XREFs of ?ReleaseAllReferences@CPencilMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00E5D30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CPencilMarshaler::ReleaseAllReferences(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 15) = 0LL;
  }
}

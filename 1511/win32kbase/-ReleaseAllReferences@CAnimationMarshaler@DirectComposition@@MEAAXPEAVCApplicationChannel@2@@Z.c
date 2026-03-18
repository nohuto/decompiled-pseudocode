/*
 * XREFs of ?ReleaseAllReferences@CAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0018660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[15]);
  v4 = this[8];
  this[15] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[19];
  this[8] = 0LL;
  if ( v5 )
    v5 = (struct DirectComposition::CResourceMarshaler *)((char *)v5 + 16);
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  this[19] = 0LL;
}

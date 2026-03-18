/*
 * XREFs of ?ReleaseAllReferences@CAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002C520
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
  v4 = this[9];
  this[16] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[20];
  this[9] = 0LL;
  if ( v5 )
    v5 = (struct DirectComposition::CResourceMarshaler *)((char *)v5 + 16);
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  this[20] = 0LL;
}

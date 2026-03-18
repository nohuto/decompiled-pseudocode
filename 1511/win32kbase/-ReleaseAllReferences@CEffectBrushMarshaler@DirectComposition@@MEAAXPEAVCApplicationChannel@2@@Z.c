/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D82D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 i; // rdi

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[5]);
  v4 = this[6];
  this[5] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  this[6] = 0LL;
  if ( this[7] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this[7] + i));
    Win32FreePool();
    this[7] = 0LL;
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
  }
}

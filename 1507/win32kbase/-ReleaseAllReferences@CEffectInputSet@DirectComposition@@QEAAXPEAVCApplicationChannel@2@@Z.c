/*
 * XREFs of ?ReleaseAllReferences@CEffectInputSet@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D947C
 * Callers:
 *     ?ReleaseAllReferences@CCompiledEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D8950 (-ReleaseAllReferences@CCompiledEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D8BD0 (-ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CEffectInputSet::ReleaseAllReferences(
        DirectComposition::CEffectInputSet *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi

  if ( *((_QWORD *)this + 1) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)this; i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8 * i));
    Win32FreePool();
    *((_QWORD *)this + 1) = 0LL;
  }
}

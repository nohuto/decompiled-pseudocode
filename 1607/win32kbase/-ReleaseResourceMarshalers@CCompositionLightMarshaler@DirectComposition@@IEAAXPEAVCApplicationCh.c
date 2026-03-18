/*
 * XREFs of ?ReleaseResourceMarshalers@CCompositionLightMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00E9FE0
 * Callers:
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00E9FC0 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 *     ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00EA040 (-SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionLightMarshaler::ReleaseResourceMarshalers(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned int *a4)
{
  __int64 i; // rdi

  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, a3[i]);
    Win32FreePool();
  }
  *a4 = 0;
}

/*
 * XREFs of ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00032E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::SetReferenceProperty(
        DirectComposition::CHostVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 10 )
    return 3221225473LL;
  else
    return DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}

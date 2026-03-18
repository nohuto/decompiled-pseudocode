/*
 * XREFs of ?SetIntegerProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E5F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::SetIntegerProperty(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 9 )
    return DirectComposition::CPencilMarshaler::RemoveSegmentsAtEnd(this, a4, a5);
  else
    return 3221225485LL;
}

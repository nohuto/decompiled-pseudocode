/*
 * XREFs of ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D5FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetIntegerProperty(
        DirectComposition::CInkMarshaler *this,
        int a2,
        unsigned int a3,
        bool *a4)
{
  *a4 = 0;
  if ( a2 == 4 )
    return DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(this, a3, a4);
  else
    return 3221225485LL;
}

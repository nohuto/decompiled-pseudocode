/*
 * XREFs of ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E66E0
 * Callers:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0043F00 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 *     ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0044E50 (-SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
        DirectComposition::CPropertyChangeResourceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 0xFFFF )
    return 3221225485LL;
  if ( *((_DWORD *)this + 12) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 12) = a4;
    *a5 = 1;
  }
  return result;
}

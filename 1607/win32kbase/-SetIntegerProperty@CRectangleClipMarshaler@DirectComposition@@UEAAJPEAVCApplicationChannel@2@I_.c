/*
 * XREFs of ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0044E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetIntegerProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 14 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  if ( *((_BYTE *)this + 112) || !a4 )
    return 3221225485LL;
  *((_BYTE *)this + 112) = 1;
  *a5 = 1;
  *((_DWORD *)this + 4) &= ~0x100u;
  return result;
}

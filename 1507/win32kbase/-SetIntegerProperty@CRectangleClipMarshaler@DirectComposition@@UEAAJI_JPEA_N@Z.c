/*
 * XREFs of ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DB5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetIntegerProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 13 || *((_BYTE *)this + 96) || !a3 )
    return 3221225485LL;
  *((_BYTE *)this + 96) = 1;
  *a4 = 1;
  return result;
}

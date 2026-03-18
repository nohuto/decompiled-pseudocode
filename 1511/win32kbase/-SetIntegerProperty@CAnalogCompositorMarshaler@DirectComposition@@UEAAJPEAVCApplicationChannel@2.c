/*
 * XREFs of ?SetIntegerProperty@CAnalogCompositorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DDC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogCompositorMarshaler::SetIntegerProperty(
        DirectComposition::CAnalogCompositorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x80u;
  *((_DWORD *)this + 10) = a4;
  *a5 = 1;
  return result;
}

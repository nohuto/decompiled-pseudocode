/*
 * XREFs of ?SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00039A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositeEffectMarshaler::SetIntegerProperty(
        DirectComposition::CCompositeEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  if ( a3 )
    return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *a5 = *((_DWORD *)this + 22) != (_DWORD)a4;
  result = 0LL;
  *((_DWORD *)this + 22) = a4;
  return result;
}

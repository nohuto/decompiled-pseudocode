/*
 * XREFs of ?SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositeEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax

  if ( a2 )
    return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
  *a4 = *((_DWORD *)this + 24) != (_DWORD)a3;
  result = 0LL;
  *((_DWORD *)this + 24) = a3;
  return result;
}

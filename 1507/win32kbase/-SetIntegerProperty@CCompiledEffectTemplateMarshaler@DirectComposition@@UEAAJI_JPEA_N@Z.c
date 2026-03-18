/*
 * XREFs of ?SetIntegerProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D86E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetIntegerProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        int a2,
        int a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 3221225485LL;
    *((_DWORD *)this + 15) = a3;
  }
  else
  {
    *((_DWORD *)this + 14) = a3;
  }
  *((_DWORD *)this + 4) &= ~0x80u;
  *a4 = 1;
  return result;
}

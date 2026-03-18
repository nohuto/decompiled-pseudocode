/*
 * XREFs of ?SetIntegerProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E7CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetIntegerProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d
  int v7; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 3221225485LL;
      *((_DWORD *)this + 16) = a4;
    }
    else
    {
      *((_DWORD *)this + 15) = a4;
    }
  }
  else
  {
    *((_DWORD *)this + 14) = a4;
  }
  *((_DWORD *)this + 4) &= ~0x40u;
  *a5 = 1;
  return result;
}

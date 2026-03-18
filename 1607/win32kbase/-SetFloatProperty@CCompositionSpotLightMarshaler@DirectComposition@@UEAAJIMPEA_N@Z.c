/*
 * XREFs of ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00EDB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 14) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x40u;
    *((float *)this + 14) = a3;
    goto LABEL_25;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 15) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 15) = a3;
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 16) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 16) = a3;
    goto LABEL_25;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    if ( *((float *)this + 26) == a3 )
      return result;
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 26) == a3 )
      return result;
    a3 = a3 * 0.017453292;
LABEL_16:
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 26) = a3;
    goto LABEL_25;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    if ( *((float *)this + 27) == a3 )
      return result;
    goto LABEL_11;
  }
  if ( v10 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 27) != a3 )
  {
    a3 = a3 * 0.017453292;
LABEL_11:
    *((_DWORD *)this + 4) |= 0x4000u;
    *((float *)this + 27) = a3;
LABEL_25:
    *a4 = 1;
  }
  return result;
}

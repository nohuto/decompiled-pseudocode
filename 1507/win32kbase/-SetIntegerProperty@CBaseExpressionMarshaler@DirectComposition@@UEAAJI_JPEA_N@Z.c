/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D71C0
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D6B30 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DA190 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r11d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v4 = 0;
  *a4 = 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((_BYTE *)this + 52) == (a3 != 0) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_BYTE *)this + 52) = a3 != 0;
    goto LABEL_18;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((_DWORD *)this + 14) == a3 )
      return v4;
    *((_DWORD *)this + 14) = a3;
LABEL_13:
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 15) == a3 )
      return v4;
    *((_DWORD *)this + 15) = a3;
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 18) == a3 )
      return v4;
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_DWORD *)this + 18) = a3;
    goto LABEL_18;
  }
  if ( v8 == 2 )
  {
    if ( *((_BYTE *)this + 76) == (a3 != 0) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x200u;
    *((_BYTE *)this + 76) = a3 != 0;
LABEL_18:
    *a4 = 1;
    return v4;
  }
  return (unsigned int)-1073741811;
}

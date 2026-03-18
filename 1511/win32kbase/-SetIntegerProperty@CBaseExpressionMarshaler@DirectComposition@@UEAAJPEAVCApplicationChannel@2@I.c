/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D9160
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D8AB0 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DC6B0 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( *((_BYTE *)this + 52) == (a4 != 0) )
      return v5;
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_BYTE *)this + 52) = a4 != 0;
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 14) == a4 )
      return v5;
    *((_DWORD *)this + 14) = a4;
LABEL_17:
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 15) == a4 )
      return v5;
    *((_DWORD *)this + 15) = a4;
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((_DWORD *)this + 18) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_DWORD *)this + 18) = a4;
LABEL_22:
    *a5 = 1;
    return v5;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( *((_BYTE *)this + 76) == (a4 != 0) )
      return v5;
    *((_BYTE *)this + 76) = a4 != 0;
LABEL_10:
    *((_DWORD *)this + 4) &= ~0x200u;
    goto LABEL_22;
  }
  if ( v10 == 1 )
  {
    if ( *((_BYTE *)this + 77) == (a4 != 0) )
      return v5;
    *((_BYTE *)this + 77) = a4 != 0;
    goto LABEL_10;
  }
  return (unsigned int)-1073741811;
}

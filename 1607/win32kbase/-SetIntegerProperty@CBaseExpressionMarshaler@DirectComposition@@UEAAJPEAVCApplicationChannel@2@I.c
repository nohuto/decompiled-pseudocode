/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C003CB70
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C003B850 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C003D560 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00EC790 (-SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
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
  unsigned __int8 v10; // r8
  char v11; // r8
  char v13; // al

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 < 17
      || (int)a4 > 18
      && (_DWORD)a4 != 35
      && (_DWORD)a4 != 52
      && ((int)a4 <= 68 || (_DWORD)a4 != 104 && (_DWORD)a4 != 265 && (int)a4 > 71) )
    {
      return (unsigned int)-1073741811;
    }
    if ( *((_DWORD *)this + 12) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 12) = a4;
LABEL_21:
    *((_DWORD *)this + 4) &= ~0x40u;
    goto LABEL_11;
  }
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        if ( *((_DWORD *)this + 20) == a4 )
          return v5;
        *((_DWORD *)this + 4) &= ~0x80u;
        *((_DWORD *)this + 20) = a4;
        goto LABEL_11;
      }
      v9 = v8 - 2;
      if ( !v9 )
      {
        v10 = *((_BYTE *)this + 84);
        if ( ((v10 >> 1) & 1) == (a4 != 0) )
          return v5;
        v13 = (v10 ^ (2 * (a4 != 0))) & 2;
        goto LABEL_26;
      }
      if ( v9 == 1 )
      {
        v10 = *((_BYTE *)this + 84);
        if ( ((v10 >> 2) & 1) == (a4 != 0) )
          return v5;
        v13 = (v10 ^ (4 * (a4 != 0))) & 4;
LABEL_26:
        *((_DWORD *)this + 4) &= ~0x100u;
        *((_BYTE *)this + 84) = v10 ^ v13;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
    }
    if ( *((_DWORD *)this + 16) == a4 )
      return v5;
    *((_DWORD *)this + 16) = a4;
    goto LABEL_21;
  }
  v11 = *((_BYTE *)this + 84);
  if ( (v11 & 1) != (a4 != 0) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 84) = v11 ^ ((a4 != 0) ^ v11) & 1;
LABEL_11:
    *a5 = 1;
  }
  return v5;
}

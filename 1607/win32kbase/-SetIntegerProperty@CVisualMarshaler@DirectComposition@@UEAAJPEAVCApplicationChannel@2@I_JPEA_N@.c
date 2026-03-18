/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0043F00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1C00E661C (-SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E66E0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // ebx
  char v6; // al
  char v8; // al
  bool v9; // al
  bool v10; // cc
  int v11; // edx
  char v12; // al
  char v13; // al

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x11 )
  {
    switch ( a3 )
    {
      case 0x12u:
        v10 = (unsigned __int64)(a4 + 1) <= 3;
        break;
      case 0x13u:
        v10 = (unsigned __int64)(a4 + 1) <= 2;
        break;
      case 0x18u:
        v6 = *((_BYTE *)this + 232);
        if ( (_DWORD)a4 )
        {
          if ( (v6 & 4) != 0 )
            return v5;
          v13 = v6 | 4;
        }
        else
        {
          if ( (v6 & 4) == 0 )
            return v5;
          v13 = v6 & 0xFB;
        }
        goto LABEL_14;
      case 0x1Fu:
        v8 = *((_BYTE *)this + 232);
        if ( (_DWORD)a4 )
        {
          if ( (v8 & 8) != 0 )
            return v5;
          v13 = v8 | 8;
        }
        else
        {
          if ( (v8 & 8) == 0 )
            return v5;
          v13 = v8 & 0xF7;
        }
LABEL_14:
        *((_DWORD *)this + 4) |= 0x10000u;
LABEL_15:
        *((_BYTE *)this + 232) = v13;
        *a5 = 1;
        return v5;
      case 0x20u:
        DirectComposition::CVisualMarshaler::SetVisible(this, a2, a4 != 0);
        return v5;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    if ( v10 )
    {
      if ( *((_DWORD *)this + 53) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 53) = a4;
LABEL_25:
        v9 = 1;
        goto LABEL_26;
      }
      goto LABEL_20;
    }
    return (unsigned int)-1073741811;
  }
  switch ( a3 )
  {
    case 0x11u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 52) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 52) = a4;
          goto LABEL_25;
        }
        goto LABEL_20;
      }
      return (unsigned int)-1073741811;
    case 7u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 49) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 49) = a4;
          goto LABEL_25;
        }
        goto LABEL_20;
      }
      return (unsigned int)-1073741811;
    case 8u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 48) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 48) = a4;
          goto LABEL_25;
        }
        goto LABEL_20;
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 9 )
  {
    if ( a3 != 14 )
    {
      if ( a3 == 16 )
      {
        v12 = *((_BYTE *)this + 232);
        if ( (_DWORD)a4 )
        {
          if ( (v12 & 2) != 0 )
            return v5;
          v13 = v12 | 2;
        }
        else
        {
          if ( (v12 & 2) == 0 )
            return v5;
          v13 = v12 & 0xFD;
        }
        *((_DWORD *)this + 4) |= 0x40000u;
        goto LABEL_15;
      }
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    }
    if ( (unsigned __int64)(a4 + 1) <= 2 )
    {
      if ( *((_DWORD *)this + 51) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 51) = a4;
        goto LABEL_25;
      }
LABEL_20:
      v9 = 0;
      goto LABEL_26;
    }
    return (unsigned int)-1073741811;
  }
  if ( (unsigned __int64)(a4 + 1) > 3 )
    return (unsigned int)-1073741811;
  v9 = 1;
  if ( (_DWORD)a4 == -1 )
  {
    v11 = 5;
  }
  else if ( (_DWORD)a4 )
  {
    v11 = 2;
    if ( (_DWORD)a4 != 1 )
    {
      if ( (_DWORD)a4 != 2 )
        return (unsigned int)-1073741811;
      v11 = 4;
    }
  }
  else
  {
    v11 = 0;
  }
  if ( *((_DWORD *)this + 50) == v11 )
    goto LABEL_20;
  *((_DWORD *)this + 50) = v11;
LABEL_26:
  *a5 = v9;
  if ( v9 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return v5;
}

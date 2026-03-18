/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00175F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DAEC0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 *     ?SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1C00DB200 (-SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // ebx
  bool v7; // cc
  bool v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  int v12; // edx
  char v13; // al

  v5 = 0;
  *a5 = 0;
  if ( a3 <= 0x12 )
  {
    if ( a3 != 18 )
    {
      switch ( a3 )
      {
        case 7u:
          if ( (unsigned __int64)(a4 + 1) > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 45) != (_DWORD)a4 )
          {
            *((_DWORD *)this + 45) = a4;
LABEL_20:
            v8 = 1;
            goto LABEL_21;
          }
          break;
        case 8u:
          if ( (unsigned __int64)(a4 + 1) > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 44) != (_DWORD)a4 )
          {
            *((_DWORD *)this + 44) = a4;
            goto LABEL_20;
          }
          break;
        case 9u:
          if ( (unsigned __int64)(a4 + 1) > 3 )
            return (unsigned int)-1073741811;
          v8 = 1;
          if ( (_DWORD)a4 == -1 )
          {
            v12 = 5;
          }
          else if ( (_DWORD)a4 )
          {
            v12 = 2;
            if ( (_DWORD)a4 != 1 )
            {
              if ( (_DWORD)a4 != 2 )
                return (unsigned int)-1073741811;
              v12 = 4;
            }
          }
          else
          {
            v12 = 0;
          }
          if ( *((_DWORD *)this + 46) != v12 )
          {
            *((_DWORD *)this + 46) = v12;
LABEL_21:
            *a5 = v8;
            if ( !v8 )
              return v5;
            goto LABEL_9;
          }
          break;
        case 0xEu:
          if ( (unsigned __int64)(a4 + 1) > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 47) != (_DWORD)a4 )
          {
            *((_DWORD *)this + 47) = a4;
            goto LABEL_20;
          }
          break;
        case 0x10u:
          v11 = *((_BYTE *)this + 220);
          if ( (_DWORD)a4 )
          {
            if ( (v11 & 2) != 0 )
              return v5;
            v10 = v11 | 2;
          }
          else
          {
            if ( (v11 & 2) == 0 )
              return v5;
            v10 = v11 & 0xFD;
          }
          *((_DWORD *)this + 4) |= 0x80000u;
          goto LABEL_31;
        case 0x11u:
          if ( (unsigned __int64)(a4 + 1) > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 48) != (_DWORD)a4 )
          {
            *((_DWORD *)this + 48) = a4;
            goto LABEL_20;
          }
          break;
        default:
          return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                                 this,
                                 a2,
                                 a3,
                                 a4,
                                 a5);
      }
LABEL_32:
      v8 = 0;
      goto LABEL_21;
    }
    v7 = (unsigned __int64)(a4 + 1) <= 3;
LABEL_17:
    if ( !v7 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 49) != (_DWORD)a4 )
    {
      *((_DWORD *)this + 49) = a4;
      goto LABEL_20;
    }
    goto LABEL_32;
  }
  switch ( a3 )
  {
    case 0x13u:
      v7 = (unsigned __int64)(a4 + 1) <= 2;
      goto LABEL_17;
    case 0x18u:
      v9 = *((_BYTE *)this + 220);
      if ( (_DWORD)a4 )
      {
        if ( (v9 & 4) != 0 )
          return v5;
        v10 = v9 | 4;
      }
      else
      {
        if ( (v9 & 4) == 0 )
          return v5;
        v10 = v9 & 0xFB;
      }
      goto LABEL_30;
    case 0x1Fu:
      v13 = *((_BYTE *)this + 220);
      if ( (_DWORD)a4 )
      {
        if ( (v13 & 8) != 0 )
          return v5;
        v10 = v13 | 8;
      }
      else
      {
        if ( (v13 & 8) == 0 )
          return v5;
        v10 = v13 & 0xF7;
      }
LABEL_30:
      *((_DWORD *)this + 4) |= 0x20000u;
LABEL_31:
      *((_BYTE *)this + 220) = v10;
      *a5 = 1;
      return v5;
  }
  if ( a3 != 32 )
  {
    if ( a3 == 33 )
    {
      DirectComposition::CVisualMarshaler::SetVisible(this, a2, a4 != 0);
      return v5;
    }
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  if ( (unsigned int)a4 > 1 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 54) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 54) = a4;
    *a5 = 1;
LABEL_9:
    *((_DWORD *)this + 4) |= 0x10000u;
  }
  return v5;
}

/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C0029510
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJI_JPEA_N@Z @ 0x1C00D9EDC (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJI_JPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d
  bool v6; // al
  char v7; // al
  char v8; // al
  int v9; // edx
  char v10; // al
  char v11; // al

  v4 = 0;
  *a4 = 0;
  if ( a2 <= 0x11 )
  {
    switch ( a2 )
    {
      case 0x11u:
        if ( (unsigned __int64)(a3 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 50) != (_DWORD)a3 )
        {
          *((_DWORD *)this + 50) = a3;
          goto LABEL_20;
        }
        break;
      case 7u:
        if ( (unsigned __int64)(a3 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 47) != (_DWORD)a3 )
        {
          *((_DWORD *)this + 47) = a3;
          goto LABEL_20;
        }
        break;
      case 8u:
        if ( (unsigned __int64)(a3 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 46) != (_DWORD)a3 )
        {
          *((_DWORD *)this + 46) = a3;
LABEL_20:
          v6 = 1;
          goto LABEL_21;
        }
        break;
      case 9u:
        if ( (unsigned __int64)(a3 + 1) > 3 )
          return (unsigned int)-1073741811;
        v6 = 1;
        if ( (_DWORD)a3 == -1 )
        {
          v9 = 5;
        }
        else if ( (_DWORD)a3 )
        {
          v9 = 2;
          if ( (_DWORD)a3 != 1 )
          {
            if ( (_DWORD)a3 != 2 )
              return (unsigned int)-1073741811;
            v9 = 4;
          }
        }
        else
        {
          v9 = 0;
        }
        if ( *((_DWORD *)this + 48) != v9 )
        {
          *((_DWORD *)this + 48) = v9;
LABEL_21:
          *a4 = v6;
          if ( !v6 )
            return v4;
          goto LABEL_9;
        }
        break;
      case 0xEu:
        if ( (unsigned __int64)(a3 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 49) != (_DWORD)a3 )
        {
          *((_DWORD *)this + 49) = a3;
          goto LABEL_20;
        }
        break;
      case 0x10u:
        v10 = *((_BYTE *)this + 228);
        if ( (_DWORD)a3 )
        {
          if ( (v10 & 2) != 0 )
            return v4;
          v8 = v10 | 2;
        }
        else
        {
          if ( (v10 & 2) == 0 )
            return v4;
          v8 = v10 & 0xFD;
        }
        *((_DWORD *)this + 4) |= 0x100000u;
LABEL_27:
        *((_BYTE *)this + 228) = v8;
        *a4 = 1;
        return v4;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4);
    }
LABEL_33:
    v6 = 0;
    goto LABEL_21;
  }
  switch ( a2 )
  {
    case 0x12u:
      if ( (unsigned __int64)(a3 + 1) > 3 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 51) != (_DWORD)a3 )
      {
        *((_DWORD *)this + 51) = a3;
        goto LABEL_20;
      }
      goto LABEL_33;
    case 0x17u:
      v7 = *((_BYTE *)this + 228);
      if ( (_DWORD)a3 )
      {
        if ( (v7 & 4) != 0 )
          return v4;
        v8 = v7 | 4;
      }
      else
      {
        if ( (v7 & 4) == 0 )
          return v4;
        v8 = v7 & 0xFB;
      }
      goto LABEL_26;
    case 0x1Eu:
      v11 = *((_BYTE *)this + 228);
      if ( (_DWORD)a3 )
      {
        if ( (v11 & 8) != 0 )
          return v4;
        v8 = v11 | 8;
      }
      else
      {
        if ( (v11 & 8) == 0 )
          return v4;
        v8 = v11 & 0xF7;
      }
LABEL_26:
      *((_DWORD *)this + 4) |= 0x40000u;
      goto LABEL_27;
  }
  if ( a2 != 31 )
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4);
  if ( (unsigned int)a3 > 1 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 56) != (_DWORD)a3 )
  {
    *((_DWORD *)this + 56) = a3;
    *a4 = 1;
LABEL_9:
    *((_DWORD *)this + 4) |= 0x20000u;
  }
  return v4;
}

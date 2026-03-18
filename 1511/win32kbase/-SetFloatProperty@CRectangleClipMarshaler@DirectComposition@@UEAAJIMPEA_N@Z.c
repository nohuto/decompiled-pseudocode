/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00146D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  float v5; // xmm0_4
  float *v6; // rax
  char v7; // al
  bool v8; // cl

  v4 = 0;
  v5 = 0.0;
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7u:
        v6 = (float *)((char *)this + 92);
        break;
      case 8u:
        v6 = (float *)((char *)this + 96);
        break;
      case 9u:
        v6 = (float *)((char *)this + 100);
        break;
      case 0xAu:
        v6 = (float *)((char *)this + 104);
        break;
      case 0xBu:
        v6 = (float *)((char *)this + 108);
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
  else if ( a2 == 6 )
  {
    v6 = (float *)((char *)this + 88);
  }
  else
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v6 = (float *)((char *)this + 68);
      }
      else if ( a2 == 2 )
      {
        v6 = (float *)((char *)this + 72);
      }
      else
      {
        if ( a2 != 3 )
        {
          if ( a2 == 4 )
            v6 = (float *)((char *)this + 80);
          else
            v6 = (float *)((char *)this + 84);
          goto LABEL_8;
        }
        v6 = (float *)((char *)this + 76);
      }
    }
    else
    {
      v6 = (float *)((char *)this + 64);
    }
    v5 = FLOAT_N2097152_0;
  }
LABEL_8:
  if ( v5 > a3 || (v5 = FLOAT_2097152_0, a3 > 2097152.0) )
    a3 = v5;
  if ( *v6 == a3 )
  {
    v7 = 0;
  }
  else
  {
    *v6 = a3;
    v7 = 1;
  }
  v8 = v7;
  if ( a2 <= 3 )
    v8 = 1;
  *a4 = v8;
  return v4;
}

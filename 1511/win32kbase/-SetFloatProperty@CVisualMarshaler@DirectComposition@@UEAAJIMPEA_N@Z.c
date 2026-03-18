/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0017800
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NI@Z @ 0x1C00192EC (-HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NI@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // edi
  int v7; // ebp
  bool v8; // al
  unsigned int v9; // edx
  float v11; // xmm0_4

  v4 = 0;
  if ( a2 > 0x17 )
  {
    switch ( a2 )
    {
      case 0x1Bu:
        v7 = 0x800000;
        if ( *((float *)this + 19) != a3 )
        {
          *((float *)this + 19) = a3;
          goto LABEL_22;
        }
        goto LABEL_11;
      case 0x1Cu:
        v7 = 0x800000;
        if ( *((float *)this + 20) != a3 )
        {
          *((float *)this + 20) = a3;
          goto LABEL_22;
        }
        goto LABEL_11;
      case 0x1Du:
        v7 = 0x1000000;
        if ( *((float *)this + 21) != a3 )
        {
          *((float *)this + 21) = a3;
          goto LABEL_22;
        }
        goto LABEL_11;
      case 0x1Eu:
        v7 = 0x1000000;
        if ( *((float *)this + 22) != a3 )
        {
          *((float *)this + 22) = a3;
          goto LABEL_22;
        }
        goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 23 )
  {
    v11 = 0.0;
    v7 = 0x400000;
    if ( a3 < 0.0 || (v11 = FLOAT_1_0, a3 > 1.0) )
      a3 = v11;
    if ( *((float *)this + 23) != a3 )
    {
      *((float *)this + 23) = a3;
      goto LABEL_22;
    }
    goto LABEL_11;
  }
  if ( !a2 )
  {
    v7 = 256;
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_22;
    }
    goto LABEL_11;
  }
  if ( a2 != 1 )
  {
    switch ( a2 )
    {
      case 2u:
        v7 = 256;
        if ( *((float *)this + 16) != a3 )
        {
          *((float *)this + 16) = a3;
          goto LABEL_22;
        }
        goto LABEL_11;
      case 0x15u:
        v7 = 0x200000;
        if ( *((float *)this + 17) != a3 )
        {
          *((float *)this + 17) = a3;
          goto LABEL_22;
        }
        goto LABEL_11;
      case 0x16u:
        v7 = 0x200000;
        if ( *((float *)this + 18) != a3 )
        {
          *((float *)this + 18) = a3;
LABEL_22:
          v8 = 1;
          goto LABEL_12;
        }
        goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  v7 = 256;
  if ( *((float *)this + 15) != a3 )
  {
    *((float *)this + 15) = a3;
    goto LABEL_22;
  }
LABEL_11:
  v8 = 0;
LABEL_12:
  *a4 = v8;
  if ( DirectComposition::CResourceMarshaler::HasAnimations(this, a2) )
    *a4 = 1;
  if ( v9 <= 2 || v9 - 21 <= 2 )
    *a4 = 1;
  if ( *a4 )
    *((_DWORD *)this + 4) |= v7;
  return v4;
}

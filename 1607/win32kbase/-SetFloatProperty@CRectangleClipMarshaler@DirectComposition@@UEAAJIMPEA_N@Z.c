/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0044F10
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
  unsigned int v4; // r10d
  float v7; // xmm0_4
  float *v8; // rcx
  int v9; // eax
  float v10; // xmm1_4
  bool v11; // dl

  v4 = 0;
  v7 = 0.0;
  if ( a2 > 7 )
  {
    switch ( a2 )
    {
      case 8u:
        v8 = (float *)((char *)this + 92);
        goto LABEL_37;
      case 9u:
        v8 = (float *)((char *)this + 96);
        goto LABEL_37;
      case 0xAu:
        v8 = (float *)((char *)this + 100);
        goto LABEL_37;
      case 0xBu:
        v8 = (float *)((char *)this + 104);
        goto LABEL_37;
      case 0xCu:
        v8 = (float *)((char *)this + 108);
        goto LABEL_37;
    }
    return (unsigned int)-1073741811;
  }
  switch ( a2 )
  {
    case 7u:
      v8 = (float *)((char *)this + 88);
      goto LABEL_37;
    case 1u:
      v7 = FLOAT_N2097152_0;
      v8 = (float *)((char *)this + 64);
      v9 = 512;
      goto LABEL_8;
    case 2u:
      v7 = FLOAT_N2097152_0;
      v8 = (float *)((char *)this + 68);
      v9 = 1024;
      goto LABEL_8;
    case 3u:
      v7 = FLOAT_N2097152_0;
      v8 = (float *)((char *)this + 72);
      v9 = 2048;
      goto LABEL_8;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 5 )
    {
      v8 = (float *)((char *)this + 80);
      goto LABEL_37;
    }
    if ( a2 == 6 )
    {
      v8 = (float *)((char *)this + 84);
LABEL_37:
      v9 = 256;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  v7 = FLOAT_N2097152_0;
  v8 = (float *)((char *)this + 76);
  v9 = 4096;
LABEL_8:
  v10 = FLOAT_2097152_0;
  if ( a3 <= 2097152.0 )
    v10 = fmaxf(a3, v7);
  if ( *v8 == v10 )
  {
    v11 = 0;
  }
  else
  {
    *v8 = v10;
    v11 = 1;
  }
  if ( a2 - 1 <= 3 )
    v11 = 1;
  *a4 = v11;
  if ( v11 )
    *((_DWORD *)this + 4) &= ~v9;
  return v4;
}

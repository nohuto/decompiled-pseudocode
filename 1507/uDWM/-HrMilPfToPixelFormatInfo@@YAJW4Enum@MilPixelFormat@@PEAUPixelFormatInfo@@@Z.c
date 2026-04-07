/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x18003DA58
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18003F398 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, int *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  bool v4; // zf

  v2 = 0;
  if ( a1 > 20 )
  {
    if ( a1 > 27 )
    {
      v3 = 28;
      if ( a1 == 69 )
        goto LABEL_7;
    }
    else if ( a1 != 27 && a1 != 21 && a1 != 22 )
    {
      if ( a1 == 23 )
      {
        v3 = 11;
        goto LABEL_7;
      }
      if ( a1 == 26 )
      {
        v3 = 2;
        goto LABEL_7;
      }
    }
  }
  else
  {
    if ( a1 == 20 )
    {
      v3 = 24;
      goto LABEL_7;
    }
    if ( a1 <= 13 )
    {
      if ( a1 < 12 && a1 >= 8 )
      {
        if ( a1 == 8 )
        {
          v3 = 61;
          goto LABEL_7;
        }
        if ( a1 != 9 && a1 != 10 )
        {
          v3 = 49;
          goto LABEL_7;
        }
      }
    }
    else
    {
      if ( a1 == 14 )
      {
        v3 = 88;
        goto LABEL_7;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        v3 = 87;
        goto LABEL_7;
      }
    }
  }
  v3 = 0;
LABEL_7:
  *a2 = v3;
  if ( !v3 )
  {
    v2 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003292288, 0x31Bu);
    return v2;
  }
  if ( a1 > 21 )
  {
    if ( a1 > 23 && (a1 <= 24 || a1 > 26) )
      goto LABEL_22;
    goto LABEL_23;
  }
  if ( a1 >= 17 || a1 <= 0 )
    goto LABEL_22;
  if ( a1 <= 4 )
  {
LABEL_23:
    v4 = a1 == 16;
    goto LABEL_14;
  }
  if ( a1 <= 14 )
  {
LABEL_22:
    a2[1] = 3;
    goto LABEL_16;
  }
  v4 = a1 == 16;
LABEL_14:
  if ( v4 || a1 == 23 || a1 == 26 )
    a2[1] = 1;
  else
    a2[1] = 2;
LABEL_16:
  if ( a1 > 23 )
  {
    if ( a1 <= 27 )
      goto LABEL_53;
    if ( (unsigned int)(a1 - 68) <= 1 )
      goto LABEL_20;
    goto LABEL_45;
  }
  if ( a1 < 20 )
  {
    if ( a1 > 0 )
    {
      if ( a1 <= 16 )
        goto LABEL_20;
LABEL_53:
      a2[2] = 2;
      return v2;
    }
LABEL_45:
    v2 = -2003292344;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003292344, 0x32Fu);
    return v2;
  }
LABEL_20:
  a2[2] = 1;
  return v2;
}

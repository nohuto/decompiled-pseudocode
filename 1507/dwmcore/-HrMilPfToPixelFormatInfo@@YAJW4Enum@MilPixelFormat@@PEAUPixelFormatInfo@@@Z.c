/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x18005EE10
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x1800700D0 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, int *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  bool v5; // zf

  v2 = 0;
  if ( a1 > 20 )
  {
    if ( a1 > 27 )
    {
      v3 = 28;
      if ( a1 == 69 )
        goto LABEL_6;
    }
    else if ( a1 != 27 && a1 != 21 && a1 != 22 )
    {
      if ( a1 == 23 )
      {
        v3 = 11;
        goto LABEL_6;
      }
      if ( a1 == 26 )
      {
        v3 = 2;
        goto LABEL_6;
      }
    }
  }
  else
  {
    if ( a1 == 20 )
    {
      v3 = 24;
      goto LABEL_6;
    }
    if ( a1 <= 13 )
    {
      if ( a1 < 12 && a1 >= 8 )
      {
        if ( a1 == 8 )
        {
          v3 = 61;
          goto LABEL_6;
        }
        if ( a1 != 9 && a1 != 10 )
        {
          v3 = 49;
          goto LABEL_6;
        }
      }
    }
    else
    {
      if ( a1 == 14 )
      {
        v3 = 88;
        goto LABEL_6;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        v3 = 87;
        goto LABEL_6;
      }
    }
  }
  v3 = 0;
LABEL_6:
  *a2 = v3;
  if ( !v3 )
  {
    v2 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x31Bu);
    return v2;
  }
  if ( a1 > 21 )
  {
    if ( a1 > 23 && (a1 <= 24 || a1 > 26) )
      goto LABEL_12;
LABEL_24:
    v5 = a1 == 16;
    goto LABEL_22;
  }
  if ( a1 >= 17 || a1 <= 0 )
    goto LABEL_12;
  if ( a1 <= 4 )
    goto LABEL_24;
  if ( a1 <= 14 )
  {
LABEL_12:
    a2[1] = 3;
    goto LABEL_13;
  }
  v5 = a1 == 16;
LABEL_22:
  if ( v5 || a1 == 23 || a1 == 26 )
    a2[1] = 1;
  else
    a2[1] = 2;
LABEL_13:
  if ( a1 > 23 )
  {
    if ( a1 <= 27 )
      goto LABEL_53;
    if ( (unsigned int)(a1 - 68) <= 1 )
      goto LABEL_17;
    goto LABEL_45;
  }
  if ( a1 < 20 )
  {
    if ( a1 > 0 )
    {
      if ( a1 <= 16 )
        goto LABEL_17;
LABEL_53:
      a2[2] = 2;
      return v2;
    }
LABEL_45:
    v2 = -2003292344;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292344, 0x32Fu);
    return v2;
  }
LABEL_17:
  a2[2] = 1;
  return v2;
}

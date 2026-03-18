/*
 * XREFs of ?GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z @ 0x180124AF4
 * Callers:
 *     ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180124BC0 (-GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CRectangleGeometry *this, unsigned int a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  v3 = 0;
  if ( a2 > 6 )
  {
    v9 = a2 - 7;
    if ( !v9 )
    {
      *a3 = *((float *)this + 33);
      return v3;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v8 = *((_DWORD *)this + 34);
      goto LABEL_15;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v8 = *((_DWORD *)this + 35);
      goto LABEL_15;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v8 = *((_DWORD *)this + 36);
      goto LABEL_15;
    }
    if ( v12 == 1 )
    {
      v8 = *((_DWORD *)this + 37);
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( a2 == 6 )
  {
    v8 = *((_DWORD *)this + 32);
    goto LABEL_15;
  }
  if ( !a2 )
  {
    v8 = *((_DWORD *)this + 26);
    goto LABEL_15;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = *((_DWORD *)this + 27);
    goto LABEL_15;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((_DWORD *)this + 28);
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *((_DWORD *)this + 29);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = *((_DWORD *)this + 30);
    goto LABEL_15;
  }
  if ( v7 != 1 )
  {
LABEL_22:
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x152u);
    return v3;
  }
  v8 = *((_DWORD *)this + 31);
LABEL_15:
  *(_DWORD *)a3 = v8;
  return v3;
}

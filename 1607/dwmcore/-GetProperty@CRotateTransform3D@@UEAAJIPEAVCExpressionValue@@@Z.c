/*
 * XREFs of ?GetProperty@CRotateTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180157A60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRotateTransform3D::GetProperty(CRotateTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  double v9; // xmm0_8

  v3 = 0;
  if ( !a2 )
  {
    v9 = *((double *)this + 27);
    goto LABEL_16;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *((double *)this + 31);
    goto LABEL_16;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = *((double *)this + 32);
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((double *)this + 33);
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *((double *)this + 28);
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *((double *)this + 29);
    goto LABEL_16;
  }
  if ( v8 == 1 )
  {
    v9 = *((double *)this + 30);
LABEL_16:
    *((_DWORD *)a3 + 16) = 18;
    *((_BYTE *)a3 + 68) = 1;
    *(float *)a3 = v9;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x61u);
  return v3;
}

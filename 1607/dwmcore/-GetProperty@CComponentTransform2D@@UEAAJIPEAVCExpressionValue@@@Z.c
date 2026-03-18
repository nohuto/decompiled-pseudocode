/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18014E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(CComponentTransform2D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // xmm0_8
  float v11; // xmm0_4

  v3 = 0;
  v4 = a2 - 1000;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 17);
    goto LABEL_17;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 18);
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 19);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = *((float *)this + 42);
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = *((float *)this + 42) * 57.295776;
LABEL_12:
    *(float *)a3 = v11;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 20);
LABEL_17:
    *(_QWORD *)a3 = v10;
    goto LABEL_18;
  }
  if ( v9 == 1 )
  {
    *((_DWORD *)a3 + 16) = 104;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 172);
    *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + 188);
LABEL_18:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x19Du);
  return v3;
}

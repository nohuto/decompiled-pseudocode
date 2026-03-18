/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180023C10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // eax
  float v16; // xmm0_4
  _D3DMATRIX v17; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v4 = a2 - 12;
  if ( !v4 )
  {
    v16 = *((float *)this + 69);
    goto LABEL_21;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v16 = *((float *)this + 69) * 57.295776;
LABEL_21:
    *(float *)a3 = v16;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_5;
  }
  v6 = v5 - 4;
  if ( v6 )
  {
    v11 = v6 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        *((_DWORD *)a3 + 16) = 35;
        *(_QWORD *)a3 = *((_QWORD *)this + 27);
        goto LABEL_5;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *((_DWORD *)a3 + 16) = 71;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + 260);
        goto LABEL_5;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E0u);
          return v3;
        }
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *((_QWORD *)this + 31);
        v15 = *((_DWORD *)this + 64);
      }
      else
      {
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + 236);
        v15 = *((_DWORD *)this + 61);
      }
    }
    else
    {
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 28);
      v15 = *((_DWORD *)this + 58);
    }
    *((_DWORD *)a3 + 2) = v15;
  }
  else
  {
    CMILMatrix::GetD3DMatrix((CComponentTransform3D *)((char *)this + 280), &v17);
    v7 = *(_OWORD *)&v17._21;
    *(_OWORD *)a3 = *(_OWORD *)&v17._11;
    *((_DWORD *)a3 + 16) = 265;
    v8 = *(_OWORD *)&v17._31;
    *((_OWORD *)a3 + 1) = v7;
    v9 = *(_OWORD *)&v17._41;
    *((_OWORD *)a3 + 2) = v8;
    *((_OWORD *)a3 + 3) = v9;
  }
LABEL_5:
  *((_BYTE *)a3 + 68) = 1;
  return v3;
}

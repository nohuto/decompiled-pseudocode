/*
 * XREFs of ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01E3AA4
 * Callers:
 *     ValidateInertiaInfo @ 0x1C0239A30 (ValidateInertiaInfo.c)
 * Callees:
 *     sqrtf_0 @ 0x1C015D12C (sqrtf_0.c)
 */

__int64 __fastcall D3DXMatrixDeterminant(float *a1, const struct _D3DMATRIX *a2)
{
  unsigned int v3; // ebx
  float _13; // xmm15_4
  float _14; // xmm7_4
  float _24; // xmm11_4
  float _34; // xmm13_4
  float _43; // xmm14_4
  float _44; // xmm12_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm6_4
  float _22; // [rsp+30h] [rbp-118h]
  float v15; // [rsp+4Ch] [rbp-FCh]
  float v16; // [rsp+50h] [rbp-F8h]
  float v17; // [rsp+58h] [rbp-F0h]
  float _23; // [rsp+160h] [rbp+18h]
  float _33; // [rsp+168h] [rbp+20h]

  v3 = 0;
  _22 = a2->_22;
  _13 = a2->_13;
  _14 = a2->_14;
  _23 = a2->_23;
  _24 = a2->_24;
  _33 = a2->_33;
  _34 = a2->_34;
  _43 = a2->_43;
  _44 = a2->_44;
  v10 = (float)(_13 * _24) - (float)(_23 * _14);
  v11 = (float)(_13 * _34) - (float)(_33 * _14);
  v15 = (float)(_13 * _44) - (float)(_43 * _14);
  v16 = (float)(_23 * _34) - (float)(_33 * _24);
  v17 = (float)(_23 * _44) - (float)(_43 * _24);
  v12 = 1.0
      / sqrtf_0(
          (float)((float)((float)((float)((float)((float)(v11 * _22) - (float)(v10 * a2->_32)) - (float)(v16 * a2->_12))
                                * a2->_41)
                        + (float)((float)((float)((float)(v17 * a2->_12) - (float)(v15 * _22)) + (float)(v10 * a2->_42))
                                * a2->_31))
                + (float)((float)((float)((float)(v15 * a2->_32) - (float)(v11 * a2->_42))
                                - (float)((float)((float)(_33 * _44) - (float)(_43 * _34)) * a2->_12))
                        * a2->_21))
        + (float)((float)((float)((float)((float)((float)(_33 * _44) - (float)(_43 * _34)) * _22)
                                - (float)(v17 * a2->_32))
                        + (float)(v16 * a2->_42))
                * a2->_11));
  if ( _finite(v12) )
  {
    *a1 = v12;
    return 1;
  }
  return v3;
}

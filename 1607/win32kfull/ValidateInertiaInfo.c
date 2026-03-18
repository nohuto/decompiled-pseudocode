/*
 * XREFs of ValidateInertiaInfo @ 0x1C022A2D0
 * Callers:
 *     NtUserReportInertia @ 0x1C000DFA0 (NtUserReportInertia.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     sqrt_0 @ 0x1C0159FFA (sqrt_0.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01DA7E4 (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall ValidateInertiaInfo(__int64 a1, _DWORD *a2, struct _D3DMATRIX *a3, _QWORD *a4)
{
  float *v9; // rcx
  unsigned int v10; // ebx
  float v11; // xmm6_4
  float v12; // xmm7_4
  double v13; // xmm0_8
  double v14; // [rsp+30h] [rbp-58h]
  float v15; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v16; // [rsp+98h] [rbp+10h]
  struct _D3DMATRIX *v17; // [rsp+A0h] [rbp+18h]
  _QWORD *v18; // [rsp+A8h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 1) > 2 )
    return 0LL;
  v10 = NlsNullProc((struct tagKE *)a1);
  if ( v10 )
  {
    v15 = 0.0;
    v11 = v9[1];
    v12 = *v9;
    v13 = sqrt_0(v12 * v12 + v11 * v11);
    v14 = v13;
    if ( v13 <= 0.0 )
    {
      v10 = 0;
    }
    else
    {
      *(float *)a1 = v12 / v13;
      *(float *)(a1 + 4) = v11 / v13;
    }
    if ( !v10 )
      return v10;
    if ( a2 )
    {
      memset(a3, 0, sizeof(struct _D3DMATRIX));
      a3->_11 = (D3DVALUE)a2[4];
      a3->_12 = (D3DVALUE)a2[5];
      a3->_21 = (D3DVALUE)a2[6];
      a3->_22 = (D3DVALUE)a2[7];
      a3->_33 = 1.0;
      a3->_41 = (D3DVALUE)a2[8];
      a3->_42 = (D3DVALUE)a2[9];
      a3->_44 = 1.0;
    }
  }
  if ( v10 )
  {
    if ( a2 )
    {
      if ( !(unsigned int)D3DXMatrixDeterminant((struct tagKE *)&v15, a3) )
        return 0LL;
      *(double *)a4 = v14;
    }
    else
    {
      *a4 = 0LL;
    }
  }
  return v10;
}

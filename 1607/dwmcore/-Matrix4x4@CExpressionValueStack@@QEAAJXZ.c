/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x18001A804
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  const int *v3; // rdx
  CExpressionValueStack *v4; // r9
  int v5; // xmm1_4
  int v7; // r10d
  struct CExpressionValue **v8; // rdi
  struct CExpressionValue *v9; // rax
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // xmm1_4
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-89h]
  __int128 v16; // [rsp+30h] [rbp-79h]
  __int128 v17; // [rsp+30h] [rbp-79h]
  int v18; // [rsp+38h] [rbp-71h]
  int v19; // [rsp+3Ch] [rbp-6Dh]
  __int128 v20; // [rsp+40h] [rbp-69h]
  __int128 v21; // [rsp+40h] [rbp-69h]
  int v22; // [rsp+48h] [rbp-61h]
  int v23; // [rsp+4Ch] [rbp-5Dh]
  __int128 v24; // [rsp+50h] [rbp-59h]
  __int128 v25; // [rsp+60h] [rbp-49h]
  __int128 v26; // [rsp+60h] [rbp-49h]
  int v27; // [rsp+68h] [rbp-41h]
  _QWORD v28[16]; // [rsp+70h] [rbp-39h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v15 = 5878;
LABEL_17:
    v3 = 0LL;
    goto LABEL_18;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, 0);
  v28[0] = v2;
  if ( *((_DWORD *)v2 + 16) == 104 )
  {
    DWORD2(v16) = (unsigned int)v3 & v18;
    HIDWORD(v16) = (unsigned int)v3 & v19;
    DWORD2(v20) = (unsigned int)v3 & v22;
    HIDWORD(v20) = (unsigned int)v3 & v23;
    DWORD2(v25) = (unsigned int)v3 & v27;
    LODWORD(v16) = *(_DWORD *)v2;
    DWORD1(v20) = *((_DWORD *)v2 + 3);
    DWORD1(v16) = *((_DWORD *)v2 + 1);
    LODWORD(v25) = *((_DWORD *)v2 + 4);
    LODWORD(v20) = *((_DWORD *)v2 + 2);
    v5 = *((_DWORD *)v2 + 5);
    *((float *)&v25 + 3) = FLOAT_1_0;
    *(_OWORD *)v2 = v16;
    *((_DWORD *)v2 + 16) = 265;
    DWORD1(v25) = v5;
    *((_OWORD *)v2 + 1) = v20;
    *((_BYTE *)v2 + 68) = 1;
    *((_OWORD *)v2 + 2) = _xmm;
    *((_OWORD *)v2 + 3) = v25;
    return v1;
  }
  if ( *((_DWORD *)v2 + 16) != 18 )
  {
    v15 = 5955;
LABEL_18:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v15);
    return v1;
  }
  if ( *((_DWORD *)v4 + 4) < 0x10u )
  {
    v15 = 5899;
    goto LABEL_18;
  }
  v7 = 0;
  v8 = (struct CExpressionValue **)v28;
  do
  {
    v9 = CExpressionValueStack::PeekStackValue(v4, v7 - 15);
    *v8 = v9;
    if ( *((_DWORD *)v9 + 16) != 18 )
    {
      v15 = 5914;
      goto LABEL_17;
    }
    v7 = v10 + 1;
    ++v8;
  }
  while ( v7 < 16 );
  v11 = v28[0];
  DWORD1(v17) = *(_DWORD *)v28[1];
  LODWORD(v17) = *(_DWORD *)v28[0];
  DWORD2(v17) = *(_DWORD *)v28[2];
  HIDWORD(v17) = *(_DWORD *)v28[3];
  LODWORD(v21) = *(_DWORD *)v28[4];
  DWORD1(v21) = *(_DWORD *)v28[5];
  DWORD2(v21) = *(_DWORD *)v28[6];
  HIDWORD(v21) = *(_DWORD *)v28[7];
  LODWORD(v24) = *(_DWORD *)v28[8];
  DWORD1(v24) = *(_DWORD *)v28[9];
  DWORD2(v24) = *(_DWORD *)v28[10];
  HIDWORD(v24) = *(_DWORD *)v28[11];
  LODWORD(v26) = *(_DWORD *)v28[12];
  DWORD1(v26) = *(_DWORD *)v28[13];
  DWORD2(v26) = *(_DWORD *)v28[14];
  v12 = *(_DWORD *)v28[15];
  *(_OWORD *)v28[0] = v17;
  *(_DWORD *)(v11 + 64) = 265;
  HIDWORD(v26) = v12;
  *(_OWORD *)(v11 + 16) = v21;
  *(_BYTE *)(v11 + 68) = 1;
  *(_OWORD *)(v11 + 32) = v24;
  *(_OWORD *)(v11 + 48) = v26;
  v13 = *((_DWORD *)v4 + 4);
  v14 = 15LL;
  do
  {
    --v13;
    --v14;
  }
  while ( v14 );
  *((_DWORD *)v4 + 4) = v13;
  return v1;
}

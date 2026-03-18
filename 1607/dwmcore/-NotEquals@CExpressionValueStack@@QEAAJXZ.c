/*
 * XREFs of ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18015B6E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::NotEquals(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rax
  int v5; // ecx
  struct CExpressionValue *v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  bool v15; // al
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-38h]
  __m128i v21; // [rsp+30h] [rbp-28h]
  __m128i v22; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    v5 = *((_DWORD *)v3 + 16);
    v6 = v4;
    if ( v5 != *((_DWORD *)v4 + 16) )
    {
      v20 = 1749;
      goto LABEL_3;
    }
    v7 = v5 - 18;
    if ( !v7 )
    {
      v15 = *(float *)v3 != *(float *)v4;
      goto LABEL_37;
    }
    v8 = v7 - 17;
    if ( v8 )
    {
      v9 = v8 - 17;
      if ( v9 )
      {
        v10 = v9 - 17;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
            v21 = _mm_loadu_si128((const __m128i *)v3);
            v22 = _mm_loadu_si128((const __m128i *)v4);
            if ( *(float *)v21.m128i_i32 != *(float *)v22.m128i_i32
              || *(float *)&v21.m128i_i32[1] != *(float *)&v22.m128i_i32[1]
              || *(float *)&v21.m128i_i32[2] != *(float *)&v22.m128i_i32[2] )
            {
              goto LABEL_24;
            }
            v16 = *(float *)&v21.m128i_i32[3] == *(float *)&v22.m128i_i32[3];
            goto LABEL_23;
          }
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 33;
            if ( v13 )
            {
              if ( v13 != 161 )
              {
                v20 = 1820;
                goto LABEL_3;
              }
              v14 = memcmp_0(v3, v4, 0x40uLL) == 0;
              goto LABEL_16;
            }
            if ( *(float *)v3 != *(float *)v4
              || *((float *)v3 + 1) != *((float *)v4 + 1)
              || *((float *)v3 + 2) != *((float *)v4 + 2)
              || *((float *)v3 + 3) != *((float *)v4 + 3)
              || *((float *)v3 + 4) != *((float *)v4 + 4) )
            {
LABEL_24:
              v15 = 1;
              goto LABEL_37;
            }
            v16 = *((float *)v3 + 5) == *((float *)v4 + 5);
LABEL_23:
            v15 = 0;
            if ( v16 )
              goto LABEL_37;
            goto LABEL_24;
          }
        }
        v17 = *(_QWORD *)v3 - *(_QWORD *)v4;
        if ( *(_QWORD *)v3 == *(_QWORD *)v6 )
          v17 = *((_QWORD *)v3 + 1) - *((_QWORD *)v6 + 1);
        v14 = v17 == 0;
      }
      else
      {
        v18 = *(_QWORD *)v3 - *(_QWORD *)v4;
        if ( *(_QWORD *)v3 == *(_QWORD *)v4 )
          v18 = *((unsigned int *)v3 + 2) - (unsigned __int64)*((unsigned int *)v4 + 2);
        v14 = v18 == 0;
      }
    }
    else
    {
      v14 = *(_QWORD *)v3 == *(_QWORD *)v4;
    }
LABEL_16:
    v15 = !v14;
LABEL_37:
    *((_BYTE *)v3 + 68) = 1;
    *(_BYTE *)v3 = v15;
    *((_DWORD *)v3 + 16) = 17;
    --*((_DWORD *)this + 4);
    return v1;
  }
  v20 = 1720;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v20);
  return v1;
}

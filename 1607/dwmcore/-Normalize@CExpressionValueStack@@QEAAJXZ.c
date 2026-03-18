/*
 * XREFs of ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18015B57C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18001AC88 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18018844C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18018890C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x180188AE0 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  const int *v2; // rdx
  struct CExpressionValue *v3; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, 0);
    v4 = *((_DWORD *)v3 + 16);
    if ( v4 == 35 )
    {
      D3DXVec2Normalize((struct D2DVector2 *)&v9, v3);
      *(_QWORD *)v3 = v9;
      *((_DWORD *)v3 + 16) = 35;
    }
    else if ( v4 == 52 )
    {
      D3DXVec3Normalize((struct D2DVector3 *)&v8, v3);
      v5 = DWORD2(v8);
      *(_QWORD *)v3 = v8;
      *((_DWORD *)v3 + 2) = v5;
      *((_DWORD *)v3 + 16) = 52;
    }
    else
    {
      if ( v4 == 69 )
      {
        D3DXVec4Normalize((struct D2DVector4 *)&v8, v3);
        *((_DWORD *)v3 + 16) = 69;
      }
      else
      {
        if ( v4 != 71 )
        {
          v7 = 4019;
          goto LABEL_3;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v8, v3);
        *((_DWORD *)v3 + 16) = 71;
      }
      *(_OWORD *)v3 = v8;
    }
    *((_BYTE *)v3 + 68) = 1;
    return v1;
  }
  v7 = 3961;
  v2 = 0LL;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v7);
  return v1;
}

/*
 * XREFs of ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18011D51C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800125A4 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180157700 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x180157BC8 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x180157D9C (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)v3 == 35 )
    {
      D3DXVec2Normalize((struct D2DVector2 *)&v8, (const struct D2DVector2 *)(v3 + 8));
      CExpressionValue::SetDataType(v3);
      *(_QWORD *)(v3 + 8) = v8;
    }
    else if ( *(_DWORD *)v3 == 52 )
    {
      D3DXVec3Normalize((struct D2DVector3 *)&v7, (const struct D2DVector3 *)(v3 + 8));
      CExpressionValue::SetDataType(v3);
      v4 = DWORD2(v7);
      *(_QWORD *)(v3 + 8) = v7;
      *(_DWORD *)(v3 + 16) = v4;
    }
    else
    {
      if ( *(_DWORD *)v3 == 69 )
      {
        D3DXVec4Normalize((struct D2DVector4 *)&v7, (const struct D2DVector4 *)(v3 + 8));
      }
      else
      {
        if ( *(_DWORD *)v3 != 71 )
        {
          v6 = 4407;
          goto LABEL_8;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v7, (const struct D2DQuaternion *)(v3 + 8));
      }
      CExpressionValue::SetDataType(v3);
      *(_OWORD *)(v3 + 8) = v7;
    }
    *(_BYTE *)(v3 + 4) = 1;
    return v2;
  }
  v6 = 4349;
LABEL_8:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v6);
  return v2;
}

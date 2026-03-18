/*
 * XREFs of ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800DCEA0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x180100728 (-Absolute@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801008E8 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180100AA8 (-AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x180100BCC (-Clamp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180100CF0 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x180100FE4 (-Matrix3x2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801010D0 (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Max@CExpressionValueStack@@QEAAJXZ @ 0x1801011C0 (-Max@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Min@CExpressionValueStack@@QEAAJXZ @ 0x180101278 (-Min@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x180101334 (-Modulus@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180101420 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180101658 (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180101850 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x180101A04 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180101A80 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180101B00 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x180101B88 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180101C08 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180101D00 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ScaleMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102498 (-ScaleMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180102594 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180102A04 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?TranslateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102BB8 (-TranslateMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector2@CExpressionValueStack@@QEAAJXZ @ 0x180102DA4 (-Vector2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x180102E5C (-Vector3@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x180102F48 (-Vector4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18010F2C8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CExpression::CalculateValueWorker(
        CSharedSection **this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v7; // r15d
  unsigned int v8; // r8d
  char *v9; // r12
  unsigned int v10; // ebx
  int v11; // ebp
  unsigned int v12; // r8d
  char *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // r9d
  unsigned int v39; // [rsp+20h] [rbp-38h]

  v7 = 0;
  v9 = (char *)CSharedSection::ResolveAllocation(this[17], *((unsigned int *)this + 37), *((unsigned int *)this + 36));
  if ( !v9 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF6u);
    return v10;
  }
  if ( !v8 )
  {
LABEL_105:
    v10 = 0;
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_417631546_58681304_FeatureDescriptorDetails) )
      LOBYTE(v10) = *((_DWORD *)a2 + 4) == 0;
    return v10;
  }
  while ( 1 )
  {
    v11 = 4;
    v12 = v8 - v7;
    if ( v12 < 4 )
    {
      v39 = 259;
      goto LABEL_116;
    }
    v13 = &v9[v7];
    v14 = *(_DWORD *)v13;
    if ( *(int *)v13 > 14 )
    {
      if ( v14 > 22 )
      {
        v32 = v14 - 24;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                v36 = v35 - 1;
                if ( v36 )
                {
                  if ( v36 != 1 )
                  {
LABEL_115:
                    v39 = 547;
                    goto LABEL_116;
                  }
                  v20 = CExpressionValueStack::Matrix3x2(a2);
                  v10 = v20;
                  if ( v20 < 0 )
                  {
                    v39 = 482;
                    goto LABEL_95;
                  }
                }
                else
                {
                  v11 = 24;
                  if ( v12 < 0x18 )
                  {
                    v39 = 532;
                    goto LABEL_116;
                  }
                  v20 = CExpressionValueStack::Swizzle(a2, (struct ExpressionNode *)v13);
                  v10 = v20;
                  if ( v20 < 0 )
                  {
                    v39 = 537;
                    goto LABEL_95;
                  }
                }
              }
              else
              {
                v11 = 16;
                if ( v12 < 0x10 )
                {
                  v39 = 512;
                  goto LABEL_116;
                }
                v20 = CExpressionValueStack::Swizzle(a2, (struct ExpressionNode *)v13);
                v10 = v20;
                if ( v20 < 0 )
                {
                  v39 = 517;
                  goto LABEL_95;
                }
              }
            }
            else
            {
              v20 = CExpressionValueStack::AxisAngleRotateMatrix(a2);
              v10 = v20;
              if ( v20 < 0 )
              {
                v39 = 498;
                goto LABEL_95;
              }
            }
          }
          else
          {
            v20 = CExpressionValueStack::ScaleMatrix(a2);
            v10 = v20;
            if ( v20 < 0 )
            {
              v39 = 494;
              goto LABEL_95;
            }
          }
        }
        else
        {
          v20 = CExpressionValueStack::TranslateMatrix(a2);
          v10 = v20;
          if ( v20 < 0 )
          {
            v39 = 490;
            goto LABEL_95;
          }
        }
      }
      else if ( v14 == 22 )
      {
        v20 = CExpressionValueStack::Matrix4x4(a2);
        v10 = v20;
        if ( v20 < 0 )
        {
          v39 = 486;
          goto LABEL_95;
        }
      }
      else
      {
        v26 = v14 - 15;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  v31 = v30 - 1;
                  if ( v31 )
                  {
                    if ( v31 != 1 )
                      goto LABEL_115;
                    v20 = CExpressionValueStack::Vector4(a2);
                    v10 = v20;
                    if ( v20 < 0 )
                    {
                      v39 = 478;
                      goto LABEL_95;
                    }
                  }
                  else
                  {
                    v20 = CExpressionValueStack::Vector3(a2);
                    v10 = v20;
                    if ( v20 < 0 )
                    {
                      v39 = 474;
                      goto LABEL_95;
                    }
                  }
                }
                else
                {
                  v20 = CExpressionValueStack::Vector2(a2);
                  v10 = v20;
                  if ( v20 < 0 )
                  {
                    v39 = 470;
                    goto LABEL_95;
                  }
                }
              }
              else
              {
                v20 = CExpressionValueStack::Transform(a2);
                v10 = v20;
                if ( v20 < 0 )
                {
                  v39 = 466;
                  goto LABEL_95;
                }
              }
            }
            else
            {
              v20 = CExpressionValueStack::Scale(a2);
              v10 = v20;
              if ( v20 < 0 )
              {
                v39 = 462;
                goto LABEL_95;
              }
            }
          }
          else
          {
            v20 = CExpressionValueStack::Clamp(a2);
            v10 = v20;
            if ( v20 < 0 )
            {
              v39 = 458;
              goto LABEL_95;
            }
          }
        }
        else
        {
          v20 = CExpressionValueStack::Max(a2);
          v10 = v20;
          if ( v20 < 0 )
          {
            v39 = 454;
            goto LABEL_95;
          }
        }
      }
      goto LABEL_104;
    }
    if ( v14 == 14 )
    {
      v20 = CExpressionValueStack::Min(a2);
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 450;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    if ( v14 > 7 )
    {
      v21 = v14 - 8;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 != 1 )
                  goto LABEL_115;
                v20 = CExpressionValueStack::Modulus(a2);
                v10 = v20;
                if ( v20 < 0 )
                {
                  v39 = 446;
                  goto LABEL_95;
                }
              }
              else
              {
                v20 = CExpressionValueStack::Divide(a2);
                v10 = v20;
                if ( v20 < 0 )
                {
                  v39 = 442;
                  goto LABEL_95;
                }
              }
            }
            else
            {
              v20 = CExpressionValueStack::Multiply(a2);
              v10 = v20;
              if ( v20 < 0 )
              {
                v39 = 438;
                goto LABEL_95;
              }
            }
          }
          else
          {
            v20 = CExpressionValueStack::Subtract(a2);
            v10 = v20;
            if ( v20 < 0 )
            {
              v39 = 434;
              goto LABEL_95;
            }
          }
        }
        else
        {
          v20 = CExpressionValueStack::Add(a2);
          v10 = v20;
          if ( v20 < 0 )
          {
            v39 = 430;
            goto LABEL_95;
          }
        }
      }
      else
      {
        v20 = CExpressionValueStack::Negate(a2);
        v10 = v20;
        if ( v20 < 0 )
        {
          v39 = 426;
          goto LABEL_95;
        }
      }
      goto LABEL_104;
    }
    if ( v14 == 7 )
    {
      v20 = CExpressionValueStack::Absolute(a2);
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 422;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    if ( !v14 )
    {
      v11 = 8;
      if ( v12 < 8 )
      {
        v39 = 277;
        goto LABEL_116;
      }
      v20 = CExpressionValueStack::PushConstant(a2, *((float *)v13 + 1));
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 282;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v11 = 12;
      if ( v12 < 0xC )
      {
        v39 = 297;
        goto LABEL_116;
      }
      v20 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector2 *)(v13 + 4));
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 302;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v11 = 16;
      if ( v12 < 0x10 )
      {
        v39 = 318;
        goto LABEL_116;
      }
      v20 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector3 *)(v13 + 4));
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 323;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v11 = 20;
      if ( v12 < 0x14 )
      {
        v39 = 339;
        goto LABEL_116;
      }
      v20 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector4 *)(v13 + 4));
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 344;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v11 = 28;
      if ( v12 < 0x1C )
      {
        v39 = 360;
        goto LABEL_116;
      }
      v20 = CExpressionValueStack::PushConstant(a2, (const struct D2D_MATRIX_3X2_F *)(v13 + 4));
      v10 = v20;
      if ( v20 < 0 )
      {
        v39 = 365;
        goto LABEL_95;
      }
      goto LABEL_104;
    }
    v19 = v18 - 1;
    if ( v19 )
      break;
    v11 = 68;
    if ( v12 < 0x44 )
    {
      v39 = 381;
      goto LABEL_116;
    }
    v20 = CExpressionValueStack::PushConstant(a2, (const struct D2DMatrix *)(v13 + 4));
    v10 = v20;
    if ( v20 < 0 )
    {
      v39 = 386;
      goto LABEL_95;
    }
LABEL_104:
    v8 = *((_DWORD *)this + 36);
    v7 += v11;
    if ( v7 >= v8 )
      goto LABEL_105;
  }
  if ( v19 != 1 )
    goto LABEL_115;
  v11 = 28;
  if ( v12 >= 0x1C )
  {
    v20 = CExpressionValueStack::ProcessReferenceNode(
            a2,
            (struct CExpression *)this,
            (struct ExpressionReferenceNode *)&v9[v7],
            a3);
    v10 = v20;
    if ( v20 < 0 )
    {
      v39 = 417;
LABEL_95:
      v37 = v20;
      goto LABEL_117;
    }
    goto LABEL_104;
  }
  v39 = 402;
LABEL_116:
  v37 = -2147467259;
  v10 = -2147467259;
LABEL_117:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, v39);
  return v10;
}

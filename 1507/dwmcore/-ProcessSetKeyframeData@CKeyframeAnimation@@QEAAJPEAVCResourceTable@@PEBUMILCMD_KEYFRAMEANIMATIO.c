/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180110FA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800DCEA0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18010E4C4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x180110628 (-ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x180153810 (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x180153A60 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x180153B94 (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z @ 0x180154388 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z.c)
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180154414 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x1801544E0 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z @ 0x18015457C (-ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z @ 0x1801545B4 (-ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180154624 (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x1801546D0 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180154798 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  char v3; // r12
  Components::Animations::Animation **v4; // rsi
  unsigned int v8; // edx
  CBitmapOfDeviceBitmaps *Resource; // rbx
  int v10; // r15d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  CMILCOMBase *v13; // rcx
  int v14; // eax
  int v15; // ebx
  int Animation; // eax
  int v17; // eax
  float *v18; // r12
  __int64 i; // r13
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  bool v23; // r8
  Components::Animations::Animation *v24; // rcx
  __m128 v25; // xmm1
  Components::Animations::Animation *v26; // rcx
  float v27; // ecx
  float v28; // xmm3_4
  float v29; // xmm0_4
  int v30; // eax
  float v31; // xmm1_4
  unsigned int v32; // ecx
  CMILCOMBase *v33; // rcx
  unsigned int v35; // [rsp+28h] [rbp-49h]
  unsigned int v36; // [rsp+28h] [rbp-49h]
  unsigned int v37; // [rsp+28h] [rbp-49h]
  unsigned __int64 v38; // [rsp+48h] [rbp-29h] BYREF
  float v39; // [rsp+50h] [rbp-21h]
  float v40; // [rsp+60h] [rbp-11h]
  __int128 v41; // [rsp+68h] [rbp-9h] BYREF

  v3 = 0;
  v4 = (Components::Animations::Animation **)((char *)this + 216);
  if ( *((_QWORD *)this + 27) )
  {
    v35 = 120;
LABEL_74:
    v15 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v35);
    goto LABEL_75;
  }
  v8 = *((_DWORD *)a3 + 4);
  if ( !v8 )
  {
    v35 = 126;
    goto LABEL_74;
  }
  if ( !*((_DWORD *)a3 + 3) )
  {
    v35 = 132;
    goto LABEL_74;
  }
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource((__int64)a2, v8, 82LL);
  if ( !Resource )
  {
    v35 = 138;
    goto LABEL_74;
  }
  if ( *((unsigned int *)a3 + 6) < 48 * (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    v35 = 144;
    goto LABEL_74;
  }
  v10 = *((_DWORD *)a3 + 2);
  v11 = (unsigned int)(v10 - 17);
  if ( (unsigned int)v11 > 0x33 || (v12 = 0x8000400020001LL, !_bittest64(&v12, v11)) )
  {
    v35 = 153;
    goto LABEL_74;
  }
  v13 = (CMILCOMBase *)*((_QWORD *)this + 18);
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  *((_QWORD *)this + 18) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 18) = v10;
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA4u);
    goto LABEL_67;
  }
  v3 = 1;
  Animation = AnCreateAnimation(*((unsigned int *)this + 18), (char *)this + 136, v4);
  v15 = Animation;
  if ( Animation < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Animation, 0xB1u);
    goto LABEL_67;
  }
  v17 = Components::Animations::Animation::ApiSetKeyframeCount(*v4, *((_DWORD *)this + 40));
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB5u);
    goto LABEL_67;
  }
  v18 = (float *)CSharedSection::ResolveAllocation(
                   *((CSharedSection **)this + 18),
                   *((unsigned int *)this + 39),
                   *((unsigned int *)this + 38));
  if ( !v18 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB9u);
LABEL_72:
    AnDestroyAnimation(*v4);
    *v4 = 0LL;
    goto LABEL_75;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
  {
    v20 = Components::Animations::Math::Round(v18[12 * i] * 1000.0);
    *(_DWORD *)(*(_QWORD *)(v21 + 16) + 24LL * (int)i) = v20;
    *(_BYTE *)(v21 + 244) |= 4u;
    switch ( LODWORD(v18[12 * i + 6]) )
    {
      case 1:
        v22 = Components::Animations::Animation::ApiSetFloat(*v4, i, v18[12 * i + 8]);
        v15 = v22;
        if ( v22 < 0 )
        {
          v36 = 199;
          goto LABEL_31;
        }
        break;
      case 2:
        v22 = Components::Animations::Animation::ApiSetVector2(*v4, (unsigned int)i, *(_QWORD *)&v18[12 * i + 8]);
        v15 = v22;
        if ( v22 < 0 )
        {
          v36 = 209;
          goto LABEL_31;
        }
        break;
      case 3:
        v25 = (__m128)LODWORD(v18[12 * i + 9]);
        v26 = *v4;
        v40 = v18[12 * i + 10];
        v38 = _mm_unpacklo_ps((__m128)LODWORD(v18[12 * i + 8]), v25).m128_u64[0];
        v39 = v40;
        v22 = Components::Animations::Animation::ApiSetVector3(v26, (unsigned int)i, &v38);
        v15 = v22;
        if ( v22 < 0 )
        {
          v36 = 220;
          goto LABEL_31;
        }
        break;
      case 4:
        v24 = *v4;
        v41 = *(_OWORD *)&v18[12 * i + 8];
        v22 = Components::Animations::Animation::ApiSetVector4(v24, (unsigned int)i, &v41);
        v15 = v22;
        if ( v22 < 0 )
        {
          v36 = 232;
          goto LABEL_31;
        }
        break;
      case 5:
        v22 = Components::Animations::Animation::ApiSetExpression(
                *v4,
                (unsigned int)i,
                (char *)this + 136,
                LODWORD(v18[12 * i + 8]),
                *((_DWORD *)this + 18));
        v15 = v22;
        if ( v22 < 0 )
        {
          v36 = 239;
          goto LABEL_31;
        }
        break;
      default:
        v37 = 246;
        goto LABEL_71;
    }
    v27 = v18[12 * i + 1];
    if ( v27 == 0.0 )
    {
      v22 = Components::Animations::Animation::ApiSetLinear(*v4, i, v23);
      v15 = v22;
      if ( v22 < 0 )
      {
        v36 = 290;
        goto LABEL_31;
      }
    }
    else
    {
      if ( LODWORD(v27) != 1 )
      {
        v37 = 297;
        goto LABEL_71;
      }
      v28 = v18[12 * i + 2];
      v29 = v18[12 * i + 4];
      if ( v28 >= 0.0 )
      {
        if ( v28 > 1.0 )
          v28 = FLOAT_1_0;
      }
      else
      {
        v28 = 0.0;
      }
      if ( v29 >= 0.0 )
      {
        if ( v29 > 1.0 )
          v29 = FLOAT_1_0;
      }
      else
      {
        v29 = 0.0;
      }
      v22 = Components::Animations::Animation::ApiSetCubicBezier(
              *v4,
              i,
              v23,
              v28,
              v18[12 * i + 3],
              v29,
              v18[12 * i + 5]);
      v15 = v22;
      if ( v22 < 0 )
      {
        v36 = 284;
        goto LABEL_31;
      }
    }
  }
  v30 = *((_DWORD *)a3 + 8);
  if ( v30 )
  {
    if ( (*((_BYTE *)*v4 + 252) & 4) != 0 )
    {
      v15 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x131u);
      goto LABEL_66;
    }
    *((_DWORD *)*v4 + 54) = v30;
  }
  v31 = *((float *)a3 + 7);
  if ( v31 <= 0.0 || (v22 = Components::Animations::Animation::ApiSetInitialDelay(*v4, v31), v15 = v22, v22 >= 0) )
  {
    v32 = *((_DWORD *)a3 + 9);
    if ( v32 > 2 )
    {
      v37 = 326;
LABEL_71:
      v15 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v37);
      goto LABEL_72;
    }
    *((_DWORD *)*v4 + 60) = v32;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_DWORD *)this + 63) = 0;
    *((_DWORD *)this + 64) = 0;
    v15 = 0;
  }
  else
  {
    v36 = 310;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v36);
  }
LABEL_66:
  v3 = 1;
LABEL_67:
  if ( v15 >= 0 )
    return (unsigned int)v15;
  if ( v3 )
    goto LABEL_72;
LABEL_75:
  v33 = (CMILCOMBase *)*((_QWORD *)this + 18);
  if ( v33 )
  {
    CMILCOMBase::InternalRelease(v33);
    *((_QWORD *)this + 18) = 0LL;
  }
  return (unsigned int)v15;
}

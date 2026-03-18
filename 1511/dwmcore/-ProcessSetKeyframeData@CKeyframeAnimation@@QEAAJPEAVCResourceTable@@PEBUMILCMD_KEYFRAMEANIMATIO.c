/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800B497C (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800F92C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180129618 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x18012BA28 (-ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x1801607D0 (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x180160A20 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x180160B7C (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x180161480 (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18016152C (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180161628 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x1801616F4 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z @ 0x180161790 (-ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x1801617C8 (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x1801618EC (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x1801619BC (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180161A68 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180161B30 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  char v3; // r12
  Components::Animations::Animation **v4; // r15
  unsigned int v8; // edx
  CBitmapOfDeviceBitmaps *Resource; // rbx
  int v10; // r14d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  CMILCOMBase *v13; // rcx
  int v14; // eax
  int v15; // ebx
  int Animation; // eax
  int v17; // eax
  int v18; // eax
  __m128 *v19; // r12
  __int64 i; // r13
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  Components::Animations::Animation *v24; // rcx
  Components::Animations::Animation *v25; // rcx
  Components::Animations::Animation *v26; // rcx
  __m128 v27; // xmm1
  Components::Animations::Animation *v28; // rcx
  __int32 v29; // ecx
  int v30; // eax
  float v31; // xmm1_4
  unsigned int v32; // ecx
  CMILCOMBase *v33; // rcx
  unsigned int v35; // [rsp+28h] [rbp-69h]
  unsigned int v36; // [rsp+28h] [rbp-69h]
  unsigned int v37; // [rsp+28h] [rbp-69h]
  unsigned __int64 v38; // [rsp+58h] [rbp-39h] BYREF
  __int32 v39; // [rsp+60h] [rbp-31h]
  __int32 v40; // [rsp+70h] [rbp-21h]
  __m128 v41; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v42[3]; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v43; // [rsp+110h] [rbp+7Fh]

  v3 = 0;
  v4 = (Components::Animations::Animation **)((char *)this + 216);
  if ( *((_QWORD *)this + 27) )
  {
    v35 = 120;
LABEL_86:
    v15 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v35);
    goto LABEL_87;
  }
  v8 = *((_DWORD *)a3 + 4);
  if ( !v8 )
  {
    v35 = 126;
    goto LABEL_86;
  }
  if ( !*((_DWORD *)a3 + 3) )
  {
    v35 = 132;
    goto LABEL_86;
  }
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource((__int64)a2, v8, 0x5Au);
  if ( !Resource )
  {
    v35 = 138;
    goto LABEL_86;
  }
  if ( *((unsigned int *)a3 + 6) < 48 * (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    v35 = 144;
    goto LABEL_86;
  }
  v10 = *((_DWORD *)a3 + 2);
  v11 = (unsigned int)(v10 - 18);
  if ( (unsigned int)v11 > 0x35 || (v12 = 0x38000400020001LL, !_bittest64(&v12, v11)) )
  {
    v35 = 155;
    goto LABEL_86;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA6u);
    goto LABEL_79;
  }
  v3 = 1;
  Animation = AnCreateAnimation(*((unsigned int *)this + 18), (char *)this + 136, v4);
  v15 = Animation;
  if ( Animation < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Animation, 0xB3u);
    goto LABEL_79;
  }
  v17 = Components::Animations::Animation::ApiSetKeyframeCount(*v4, *((_DWORD *)this + 40));
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB7u);
    goto LABEL_79;
  }
  if ( *((_DWORD *)a3 + 2) == 18 || *((_DWORD *)a3 + 2) == 35 || *((_DWORD *)a3 + 2) == 52 || *((_DWORD *)a3 + 2) == 69 )
    goto LABEL_32;
  if ( *((_DWORD *)a3 + 2) == 70 )
  {
    v18 = *((_DWORD *)a3 + 10);
    if ( v18 < 0 )
      goto LABEL_36;
    if ( v18 <= 1 )
    {
      v43 = 2;
      goto LABEL_33;
    }
    if ( v18 != 2 )
    {
LABEL_36:
      v36 = 221;
      goto LABEL_83;
    }
LABEL_32:
    v43 = 0;
    goto LABEL_33;
  }
  if ( *((_DWORD *)a3 + 2) != 71 )
  {
    v36 = 237;
LABEL_83:
    v15 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v36);
    goto LABEL_84;
  }
  v43 = 1;
LABEL_33:
  v19 = (__m128 *)CSharedSection::ResolveAllocation(
                    *((CSharedSection **)this + 18),
                    *((unsigned int *)this + 39),
                    *((unsigned int *)this + 38));
  if ( !v19 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF4u);
LABEL_84:
    AnDestroyAnimation(*v4);
    *v4 = 0LL;
    goto LABEL_87;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
  {
    v21 = Components::Animations::Math::Round(v19[3 * i].m128_f32[0] * 1000.0);
    *(_DWORD *)(*(_QWORD *)(v22 + 16) + 24LL * (int)i) = v21;
    *(_BYTE *)(v22 + 244) |= 4u;
    switch ( v19[3 * i + 1].m128_i32[2] )
    {
      case 1:
        v23 = Components::Animations::Animation::ApiSetFloat(*v4, i, v19[3 * i + 2].m128_f32[0]);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 258;
          goto LABEL_47;
        }
        break;
      case 2:
        v23 = Components::Animations::Animation::ApiSetVector2(*v4, (unsigned int)i, v19[3 * i + 2].m128_u64[0]);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 268;
          goto LABEL_47;
        }
        break;
      case 3:
        v27 = (__m128)v19[3 * i + 2].m128_u32[1];
        v28 = *v4;
        v40 = v19[3 * i + 2].m128_i32[2];
        v38 = _mm_unpacklo_ps((__m128)v19[3 * i + 2].m128_u32[0], v27).m128_u64[0];
        v39 = v40;
        v23 = Components::Animations::Animation::ApiSetVector3(v28, (unsigned int)i, &v38);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 279;
          goto LABEL_47;
        }
        break;
      case 4:
        v26 = *v4;
        v42[0] = v19[3 * i + 2];
        v23 = Components::Animations::Animation::ApiSetVector4(v26, (unsigned int)i, v42);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 291;
          goto LABEL_47;
        }
        break;
      case 5:
        v25 = *v4;
        v42[0] = v19[3 * i + 2];
        v23 = Components::Animations::Animation::ApiSetColor(v25, (unsigned int)i, v42);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 303;
          goto LABEL_47;
        }
        break;
      case 6:
        v41 = v19[3 * i + 2];
        Components::Animations::Quaternion::Normalize(&v41);
        v24 = *v4;
        v42[0] = v41;
        v23 = Components::Animations::Animation::ApiSetQuaternion(v24, (unsigned int)i, v42);
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 315;
          goto LABEL_47;
        }
        break;
      case 7:
        v23 = Components::Animations::Animation::ApiSetExpression(
                *v4,
                (unsigned int)i,
                (char *)this + 136,
                v19[3 * i + 2].m128_u32[0],
                *((_DWORD *)this + 18));
        v15 = v23;
        if ( v23 < 0 )
        {
          v37 = 322;
          goto LABEL_47;
        }
        break;
      default:
        v36 = 329;
        goto LABEL_83;
    }
    v29 = v19[3 * i].m128_i32[1];
    if ( v29 )
    {
      if ( v29 != 1 )
      {
        v36 = 380;
        goto LABEL_83;
      }
      v23 = Components::Animations::Animation::ApiSetCubicBezier(*v4, (unsigned int)i, v43);
      v15 = v23;
      if ( v23 < 0 )
      {
        v37 = 367;
        goto LABEL_47;
      }
    }
    else
    {
      v23 = Components::Animations::Animation::ApiSetLinear(*v4, (unsigned int)i, v43);
      v15 = v23;
      if ( v23 < 0 )
      {
        v37 = 373;
        goto LABEL_47;
      }
    }
  }
  v30 = *((_DWORD *)a3 + 8);
  if ( v30 )
  {
    if ( (*((_BYTE *)*v4 + 252) & 4) != 0 )
    {
      v15 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x184u);
      goto LABEL_78;
    }
    *((_DWORD *)*v4 + 54) = v30;
  }
  v31 = *((float *)a3 + 7);
  if ( v31 <= 0.0 || (v23 = Components::Animations::Animation::ApiSetInitialDelay(*v4, v31), v15 = v23, v23 >= 0) )
  {
    v32 = *((_DWORD *)a3 + 9);
    if ( v32 > 2 )
    {
      v36 = 409;
      goto LABEL_83;
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
    v37 = 393;
LABEL_47:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v37);
  }
LABEL_78:
  v3 = 1;
LABEL_79:
  if ( v15 >= 0 )
    return (unsigned int)v15;
  if ( v3 )
    goto LABEL_84;
LABEL_87:
  v33 = (CMILCOMBase *)*((_QWORD *)this + 18);
  if ( v33 )
  {
    CMILCOMBase::InternalRelease(v33);
    *((_QWORD *)this + 18) = 0LL;
  }
  return (unsigned int)v15;
}

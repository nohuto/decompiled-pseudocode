/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18003A788 (--1CAnimation@@UEAA@XZ.c)
 *     ?UpdateAnimateResources@CComposition@@IEAAIXZ @ 0x18003B5CC (-UpdateAnimateResources@CComposition@@IEAAIXZ.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B02F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180019470 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetPrimitive@CPayloadedAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18001F160 (-GetPrimitive@CPayloadedAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18001FCEC (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022950 (-SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023260 (-SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x180039670 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180039970 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x1800399B0 (-GetQPCFrequency@CAnimation@@UEAA_KXZ.c)
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x180039A40 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180039BB8 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180056060 (-SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B0780 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x1800B63D0 (-GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxxqf @ 0x1801415E0 (Template_xxxqf.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180189A7C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this, struct FRAME_TIME_INFO *a2)
{
  CAnimation *v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v5; // r12
  CAnimation **v6; // r13
  CPayloadedAnimationPrimitiveBuffer *v7; // rcx
  char v8; // r15
  unsigned __int64 (__fastcall **v9)(CAnimation *); // rax
  float v10; // xmm7_4
  unsigned __int64 (__fastcall *v11)(CAnimation *); // rax
  int Count; // eax
  CPayloadedAnimationPrimitiveBuffer *v13; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v14)(CPayloadedAnimationPrimitiveBuffer *, unsigned int); // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  const struct DwmAnimationPrimitive *Primitive; // r14
  __int64 (*v20)(void); // rax
  CPayloadedAnimationPrimitiveBuffer *v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  unsigned __int64 (__fastcall *v24)(CAnimation *); // rax
  CPayloadedAnimationPrimitiveBuffer *v25; // rcx
  unsigned int v26; // eax
  unsigned __int64 (__fastcall ***v27)(CAnimation *); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v28)(CAnimation *, unsigned int); // rax
  unsigned __int64 (__fastcall **v29)(CAnimation *); // r9
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 (__fastcall *v32)(CAnimation *); // rax
  __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned __int64 (__fastcall *v35)(CAnimation *); // rax
  CPayloadedAnimationPrimitiveBuffer *v36; // rcx
  unsigned int v37; // eax
  unsigned __int64 (__fastcall ***v38)(CAnimation *); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v39)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  CPayloadedAnimationPrimitiveBuffer *v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  const struct DwmAnimationPrimitive *v45; // rax
  unsigned int i; // ebx
  unsigned __int64 (__fastcall *v47)(CAnimation *); // rax
  unsigned int *v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 (__fastcall *v50)(CAnimation *); // rax
  unsigned int v51; // eax
  CAnimation *v52; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v53)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v54; // rax
  unsigned int v55; // eax
  char v56; // r12
  const struct DwmAnimationPrimitive *v57; // rbx
  __int64 v58; // r15
  int v59; // ecx
  unsigned __int64 v60; // r15
  __int64 v61; // rsi
  unsigned __int64 (__fastcall *v62)(CAnimation *); // rax
  CAnimation *v64; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v65)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v66; // r8
  unsigned __int64 v67; // rcx
  __int64 (*v68)(void); // rax
  __int64 QPCFrequency; // rax
  __int64 v70; // r15
  double v71; // xmm0_8
  double v72; // xmm3_8
  float v73; // xmm6_4
  CAnimation *v74; // rcx
  bool (__fastcall *v75)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rax
  char HandoffData; // al
  signed __int64 v77; // r14
  unsigned int v78; // ebx
  __int64 v79; // rax
  double *v80; // rcx
  __int64 v81; // rdx
  void (__fastcall *v82)(double *, __int64, __int64, float *); // rax
  int v83; // edx
  char *v84; // rbx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  char AdjustedHandoffValue; // al
  __int64 v90; // rsi
  __int64 v91; // r9
  signed __int64 v92; // [rsp+40h] [rbp-39h]
  int v93; // [rsp+48h] [rbp-31h] BYREF
  float v94; // [rsp+4Ch] [rbp-2Dh] BYREF
  float v95; // [rsp+50h] [rbp-29h] BYREF
  const struct DwmAnimationPrimitive *v96; // [rsp+58h] [rbp-21h]
  const struct DwmAnimationPrimitive *v97; // [rsp+60h] [rbp-19h]
  __int64 v98; // [rsp+68h] [rbp-11h]
  unsigned __int64 v99[2]; // [rsp+70h] [rbp-9h] BYREF
  char v101; // [rsp+F0h] [rbp+77h]
  double v102; // [rsp+F0h] [rbp+77h]
  float v103; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = this;
  v3 = *(_QWORD *)(*((_QWORD *)this - 12) + 472LL);
  if ( v3 < *((_QWORD *)v2 + 11) || !*((_DWORD *)v2 + 8) )
    return 1;
  *((_BYTE *)v2 + 64) |= 1u;
  v5 = *((_QWORD *)v2 + 19);
  v92 = v5;
  if ( (*((_BYTE *)v2 + 64) & 0x10) == 0 )
  {
    v5 += v3 - *((_QWORD *)v2 + 20);
    v92 = v5;
  }
  v103 = 0.0;
  v6 = (CAnimation **)((char *)v2 + 216);
  v94 = 0.0;
  v7 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v2 + 27);
  v99[0] = 0LL;
  v93 = 0;
  v8 = 0;
  v98 = v5;
  v9 = *(unsigned __int64 (__fastcall ***)(CAnimation *))v7;
  v10 = 0.0;
  v95 = 0.0;
  v11 = *v9;
  if ( v11 != CAnimation::GetPrimitivesCount )
    goto LABEL_126;
  v7 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v7 + 2);
  v11 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v7 + 32LL);
  if ( v11 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    Count = *((_DWORD *)v7 + 6) >> 5;
    goto LABEL_9;
  }
  if ( v11 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    Count = CPayloadedAnimationPrimitiveBuffer::GetCount(v7);
  else
LABEL_126:
    Count = ((__int64 (__fastcall *)(CPayloadedAnimationPrimitiveBuffer *, unsigned __int64 (__fastcall *)(CPayloadedAnimationPrimitiveBuffer *__hidden)))v11)(
              v7,
              CPayloadedAnimationPrimitiveBuffer::GetCount);
LABEL_9:
  if ( !Count )
  {
LABEL_164:
    v96 = 0LL;
    Primitive = 0LL;
    goto LABEL_16;
  }
  v13 = *v6;
  v14 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CPayloadedAnimationPrimitiveBuffer *, unsigned int))(*(_QWORD *)*v6 + 8LL);
  if ( v14 != CAnimation::GetPrimitive )
  {
LABEL_124:
    Primitive = (const struct DwmAnimationPrimitive *)((__int64 (__fastcall *)(CPayloadedAnimationPrimitiveBuffer *, _QWORD, const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int)))v14)(
                                                        v13,
                                                        0LL,
                                                        CAnimation::GetPrimitive);
    v96 = Primitive;
    goto LABEL_16;
  }
  v13 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v13 + 2);
  v14 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CPayloadedAnimationPrimitiveBuffer *, unsigned int))(*(_QWORD *)v13 + 24LL);
  if ( v14 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    if ( v14 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
    {
      Primitive = CPayloadedAnimationPrimitiveBuffer::GetPrimitive(v13, 0);
      v96 = Primitive;
      goto LABEL_16;
    }
    goto LABEL_124;
  }
  v15 = *((_QWORD *)v13 + 2);
  v16 = *((unsigned int *)v13 + 7);
  v17 = *(unsigned int *)(v15 + 120);
  if ( v16 >= v17 )
    goto LABEL_164;
  if ( *((unsigned int *)v13 + 6) > v17 - v16 )
    goto LABEL_164;
  v18 = *(_QWORD *)(v15 + 128);
  if ( !v18 )
    goto LABEL_164;
  Primitive = (const struct DwmAnimationPrimitive *)(v18 + v16);
  v96 = (const struct DwmAnimationPrimitive *)(v18 + v16);
  if ( !(v18 + v16) )
    goto LABEL_164;
LABEL_16:
  v20 = **(__int64 (***)(void))*v6;
  if ( (char *)v20 != (char *)CAnimation::GetPrimitivesCount )
  {
LABEL_128:
    v22 = v20();
    goto LABEL_19;
  }
  v21 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)*v6 + 2);
  v20 = *(__int64 (**)(void))(*(_QWORD *)v21 + 32LL);
  if ( (char *)v20 != (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    if ( (char *)v20 == (char *)CPayloadedAnimationPrimitiveBuffer::GetCount )
    {
      v22 = CPayloadedAnimationPrimitiveBuffer::GetCount(v21);
      goto LABEL_19;
    }
    goto LABEL_128;
  }
  v22 = *((_DWORD *)v21 + 6) >> 5;
LABEL_19:
  v23 = v22 - 1;
  v24 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
  if ( v24 != CAnimation::GetPrimitivesCount )
    goto LABEL_130;
  v25 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)*v6 + 2);
  v24 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v25 + 32LL);
  if ( v24 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    v26 = *((_DWORD *)v25 + 6) >> 5;
    goto LABEL_22;
  }
  if ( v24 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    v26 = CPayloadedAnimationPrimitiveBuffer::GetCount(v25);
  else
LABEL_130:
    v26 = ((__int64 (*)(void))v24)();
LABEL_22:
  if ( v23 >= v26 )
  {
LABEL_165:
    v33 = 0LL;
    goto LABEL_30;
  }
  v27 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
  v28 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
  if ( v28 != CAnimation::GetPrimitive )
  {
    v87 = v23;
    goto LABEL_141;
  }
  v27 = (unsigned __int64 (__fastcall ***)(CAnimation *))v27[2];
  v28 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v27)[3];
  if ( v28 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    v87 = v23;
    if ( v28 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
    {
      v97 = CPayloadedAnimationPrimitiveBuffer::GetPrimitive((CPayloadedAnimationPrimitiveBuffer *)v27, v23);
      goto LABEL_31;
    }
LABEL_141:
    v97 = v28((CAnimation *)v27, v87);
    goto LABEL_31;
  }
  v29 = v27[2];
  v30 = *((unsigned int *)v27 + 7);
  v31 = *((unsigned int *)v29 + 30);
  if ( v30 >= v31 )
    goto LABEL_165;
  if ( *((unsigned int *)v27 + 6) > v31 - v30 )
    goto LABEL_165;
  v32 = v29[16];
  if ( !v32 || !(unsigned __int64 (__fastcall *)(CAnimation *))((char *)v32 + v30) )
    goto LABEL_165;
  v33 = (__int64)v32 + 32 * v23 + v30;
LABEL_30:
  v97 = (const struct DwmAnimationPrimitive *)v33;
LABEL_31:
  v101 = 0;
  if ( !Primitive )
  {
LABEL_148:
    v56 = 0;
    goto LABEL_87;
  }
  v34 = *((unsigned int *)v2 + 56);
  if ( (_DWORD)v34 == -1 )
    goto LABEL_46;
  v35 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
  if ( v35 != CAnimation::GetPrimitivesCount )
    goto LABEL_132;
  v36 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)*v6 + 2);
  v35 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v36 + 32LL);
  if ( v35 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    v37 = *((_DWORD *)v36 + 6) >> 5;
    goto LABEL_36;
  }
  if ( v35 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    v37 = CPayloadedAnimationPrimitiveBuffer::GetCount(v36);
  else
LABEL_132:
    v37 = ((__int64 (*)(void))v35)();
LABEL_36:
  if ( (unsigned int)v34 < v37 )
  {
    v38 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
    v39 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)*v6 + 8LL);
    if ( v39 == CAnimation::GetPrimitive )
    {
      v40 = (CPayloadedAnimationPrimitiveBuffer *)v38[2];
      v39 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v40 + 24LL);
      if ( v39 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v41 = *((_QWORD *)v40 + 2);
        v42 = *((unsigned int *)v40 + 7);
        v43 = *(unsigned int *)(v41 + 120);
        if ( v42 < v43 && *((unsigned int *)v40 + 6) <= v43 - v42 )
        {
          v44 = *(_QWORD *)(v41 + 128);
          if ( v44 )
          {
            if ( v44 + v42 )
            {
              v45 = (const struct DwmAnimationPrimitive *)(v44 + v42 + 32 * v34);
              goto LABEL_44;
            }
          }
        }
        goto LABEL_166;
      }
      v88 = (unsigned int)v34;
      v38 = (unsigned __int64 (__fastcall ***)(CAnimation *))v38[2];
      if ( v39 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
      {
        v45 = CPayloadedAnimationPrimitiveBuffer::GetPrimitive(v40, v34);
        goto LABEL_44;
      }
    }
    else
    {
      v88 = (unsigned int)v34;
    }
    v45 = v39((CSharedSectionAnimationPrimitiveBuffer *)v38, v88);
    goto LABEL_44;
  }
LABEL_166:
  v45 = 0LL;
LABEL_44:
  if ( *((_QWORD *)v45 + 1) > v5 )
    *((_DWORD *)v2 + 56) = -1;
LABEL_46:
  for ( i = *((_DWORD *)v2 + 56); ; *((_DWORD *)v2 + 56) = i )
  {
    ++i;
    v47 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
    if ( v47 != CAnimation::GetPrimitivesCount )
      goto LABEL_122;
    v48 = (unsigned int *)*((_QWORD *)*v6 + 2);
    v47 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v48 + 32LL);
    if ( v47 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
    {
      if ( v47 == CPayloadedAnimationPrimitiveBuffer::GetCount )
      {
        v49 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v48);
        goto LABEL_50;
      }
LABEL_122:
      v49 = ((__int64 (*)(void))v47)();
      goto LABEL_50;
    }
    v49 = (unsigned __int64)v48[6] >> 5;
LABEL_50:
    if ( i >= v49 )
      break;
    v50 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
    v51 = v50 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v6) : ((__int64 (*)(void))v50)();
    if ( i >= v51 )
    {
      v54 = 0LL;
    }
    else
    {
      v52 = *v6;
      v53 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
      v54 = v53 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v52, i) : v53(v52, i);
    }
    if ( *((_QWORD *)v54 + 1) > v5 )
      break;
  }
  v55 = *((_DWORD *)v2 + 56);
  v8 = 0;
  v2 = this;
  if ( v55 == -1 )
    goto LABEL_148;
  v56 = 1;
  v57 = (const struct DwmAnimationPrimitive *)((char *)v96 + 32 * v55);
  if ( *(_DWORD *)v57 == 4 || *(_DWORD *)v57 == 6 && v57 == v97 )
    v101 = 1;
  v58 = v98;
LABEL_61:
  while ( 1 )
  {
    v59 = *(_DWORD *)v57;
    if ( ((*(_DWORD *)v57 - 3) & 0xFFFFFFFC) != 0 || v59 == 4 )
      break;
    if ( v96 == v57 )
      goto LABEL_172;
    v60 = 0LL;
    v61 = 0LL;
    v62 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
    if ( v62 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v6) : ((unsigned int (*)(void))v62)() )
    {
      v64 = *v6;
      v65 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
      v66 = v65 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v64, 0) : v65(v64, 0);
    }
    else
    {
      v66 = 0LL;
    }
    switch ( *(_DWORD *)v57 )
    {
      case 3:
        v67 = *((_QWORD *)v57 + 2);
        if ( v67 )
          v60 = (v98 - *((_QWORD *)v57 + 1)) % v67;
        v61 = v60 + *((_QWORD *)v57 + 1) - v67;
        if ( v61 < *((_QWORD *)v66 + 1) )
          v61 = *((_QWORD *)v57 + 1);
        break;
      case 5:
        v90 = *((_QWORD *)v57 + 1);
        v91 = v98 - v90;
        if ( v98 - v90 > v90 - *((_QWORD *)v66 + 1) )
          v91 = *((_QWORD *)v57 + 1) - *((_QWORD *)v66 + 1);
        v61 = v90 - v91;
        break;
      case 6:
        v61 = *((_QWORD *)v57 + 1);
        break;
    }
    v58 = v61;
    v98 = v61;
    if ( *((_QWORD *)v57 + 1) < v61 )
    {
LABEL_172:
      v56 = 0;
      v8 = 0;
      goto LABEL_149;
    }
    v57 = (const struct DwmAnimationPrimitive *)((char *)v57 - 32);
    if ( *((_QWORD *)v57 + 1) > v61 )
    {
      while ( v57 != v96 )
      {
        v57 = (const struct DwmAnimationPrimitive *)((char *)v57 - 32);
        if ( *((_QWORD *)v57 + 1) <= v61 )
          goto LABEL_61;
      }
      goto LABEL_175;
    }
  }
  switch ( v59 )
  {
    case 1:
      v68 = *(__int64 (**)(void))(*(_QWORD *)*v6 + 24LL);
      if ( (char *)v68 == (char *)CAnimation::GetQPCFrequency )
        QPCFrequency = CAnimation::GetQPCFrequency(*v6);
      else
        QPCFrequency = v68();
      v70 = v58 - *((_QWORD *)v57 + 1);
      v71 = (double)(int)QPCFrequency;
      if ( QPCFrequency < 0 )
        v71 = v71 + 1.844674407370955e19;
      v72 = (double)(int)v70 / v71;
      v73 = *((float *)v57 + 4) * (v72 * v72) * v72
          + *((float *)v57 + 5) * (v72 * v72)
          + *((float *)v57 + 6) * v72
          + *((float *)v57 + 7);
      break;
    case 4:
      v73 = *((float *)v57 + 4);
      break;
    case 2:
      v73 = CAnimationInterpolator::InterpolateSinusoidal((CAnimationInterpolator *)v6, v57, v58);
      break;
    default:
LABEL_175:
      v56 = 0;
      v8 = 0;
      goto LABEL_87;
  }
  if ( _finite(v73) )
  {
    v8 = v101;
    v10 = v73;
    v95 = v73;
  }
  else
  {
    v56 = 0;
    v8 = 0;
  }
LABEL_87:
  if ( v56
    && ((v74 = *v6,
         v75 = *(bool (__fastcall **)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(*(_QWORD *)*v6 + 16LL),
         v75 != CAnimation::GetHandoffData)
      ? (HandoffData = v75(v74, (enum DwmAnimationHandoffType::Enum *)&v93, &v94, v99))
      : (HandoffData = CAnimation::GetHandoffData(v74, (enum DwmAnimationHandoffType::Enum *)&v93, &v94, v99)),
        (v56 = HandoffData) != 0) )
  {
    v77 = v92;
    if ( v93 )
    {
      AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue(
                               (__int64)v6,
                               v92,
                               v10,
                               v93,
                               v94,
                               v99[0],
                               &v95);
      v10 = v95;
      v56 = AdjustedHandoffValue;
    }
    if ( v56 )
      v103 = v10;
  }
  else
  {
LABEL_149:
    v77 = v92;
  }
  *((_BYTE *)v2 + 64) &= ~4u;
  *((_BYTE *)v2 + 64) |= 4 * (v8 & 1);
  if ( v56 )
  {
    v78 = 0;
    v102 = (double)(int)v77 / (double)(int)*(_QWORD *)(*((_QWORD *)v2 - 12) + 312LL);
    if ( *((_DWORD *)v2 + 8) )
    {
      do
      {
        v79 = *((_QWORD *)v2 + 1);
        v80 = *(double **)(v79 + 16LL * v78);
        v81 = *(unsigned int *)(v79 + 16LL * v78 + 8);
        v82 = *(void (__fastcall **)(double *, __int64, __int64, float *))(*(_QWORD *)v80 + 80LL);
        if ( (char *)v82 == (char *)CEffectGroup::SetProperty )
        {
          CEffectGroup::SetProperty(v80, v81, 18LL, &v103);
        }
        else if ( (char *)v82 == (char *)CKeyframeAnimation::SetProperty )
        {
          CKeyframeAnimation::SetProperty((__int64)v80, v81, 18, &v103);
        }
        else if ( (char *)v82 == (char *)CRotateTransform::SetProperty )
        {
          CRotateTransform::SetProperty(v80, v81, 18, &v103);
        }
        else if ( (char *)v82 == (char *)CPrimitiveColor::SetProperty )
        {
          CPrimitiveColor::SetProperty(v80, v81, 18LL, &v103);
        }
        else if ( (char *)v82 == (char *)CTranslateTransform::SetProperty )
        {
          CTranslateTransform::SetProperty((__int64)v80, v81, 18, &v103);
        }
        else
        {
          v82(v80, v81, 18LL, &v103);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxqf(
            *((_QWORD *)v2 + 1),
            v83,
            LODWORD(v102),
            (_DWORD)v2 - 112,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL * v78),
            *(_DWORD *)(*((_QWORD *)v2 + 1) + 16LL * v78 + 8),
            SLOBYTE(v103));
        ++v78;
      }
      while ( v78 < *((_DWORD *)v2 + 8) );
      v77 = v92;
    }
  }
  v84 = (char *)v2 - 112;
  if ( *((_DWORD *)v2 + 63) && *((_DWORD *)v84 + 90) && *((_DWORD *)v84 + 62) < *((_DWORD *)v84 + 60) )
  {
    do
    {
      v85 = *((_QWORD *)v84 + 27);
      v86 = 2LL * *((unsigned int *)v84 + 62);
      if ( *(_QWORD *)(v85 + 16LL * *((unsigned int *)v84 + 62)) > v77 )
        break;
      v99[0] = *((unsigned int *)v84 + 91);
      v99[1] = *((unsigned int *)v84 + 90);
      CoreUICallSend(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v84 + 2) + 1232LL) + 56LL),
        v99,
        2LL,
        1LL,
        0,
        &unk_1801AD39E,
        *(_DWORD *)(v85 + 8 * v86 + 8));
      ++*((_DWORD *)v84 + 62);
    }
    while ( *((_DWORD *)v84 + 62) < *((_DWORD *)v84 + 60) );
    v2 = this;
  }
  if ( (*((_BYTE *)v2 + 64) & 0xC) == 4 )
    CAnimation::EndAnimation((CAnimation *)v84);
  return 1;
}

/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180047C94 (--1CAnimation@@UEAA@XZ.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x18005CE68 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ?SetProperty@CTranslateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000E4F0 (-SetProperty@CTranslateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18000F44C (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180016A50 (-SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001A6E0 (-SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003C770 (-SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x180046CE0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180046D90 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180046FB8 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x180060E40 (-GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180097B40 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xxxqf @ 0x180107A1C (Template_xxxqf.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18014A0B4 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this, struct FRAME_TIME_INFO *a2)
{
  CAnimation *v2; // rdi
  unsigned __int64 v3; // rcx
  bool v5; // zf
  __int64 v6; // rax
  CAnimation **v7; // r15
  CPayloadedAnimationPrimitiveBuffer *v8; // rbx
  char v9; // r13
  unsigned __int64 (__fastcall **v10)(CSharedSectionAnimationPrimitiveBuffer *__hidden); // rax
  float v11; // xmm7_4
  unsigned __int64 (__fastcall *v12)(CSharedSectionAnimationPrimitiveBuffer *__hidden); // rsi
  int Count; // eax
  CAnimation *v14; // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v15)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rsi
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  CPayloadedAnimationPrimitiveBuffer *v20; // rbx
  unsigned __int64 (__fastcall *v21)(CAnimation *); // rsi
  int v22; // eax
  unsigned __int64 (__fastcall ***v23)(CAnimation *); // rbx
  unsigned int v24; // r14d
  unsigned __int64 (__fastcall *v25)(CAnimation *); // rsi
  unsigned int v26; // eax
  unsigned __int64 (__fastcall ***v27)(CAnimation *); // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v28)(CAnimation *, unsigned int); // rsi
  unsigned __int64 (__fastcall **v29)(CAnimation *); // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 (__fastcall *v32)(CAnimation *); // rax
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  unsigned __int64 (__fastcall ***v36)(CAnimation *); // rbx
  unsigned __int64 (__fastcall *v37)(CAnimation *); // r14
  unsigned int v38; // eax
  unsigned __int64 (__fastcall ***v39)(CAnimation *); // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v40)(CAnimation *, unsigned int); // r14
  unsigned __int64 (__fastcall **v41)(CAnimation *); // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 (__fastcall *v43)(CAnimation *); // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  signed __int64 v46; // r13
  unsigned int *v47; // rsi
  unsigned __int64 (__fastcall *v48)(CAnimation *); // r14
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rdx
  char AnimationValue; // r14
  __int64 v53; // rbx
  __int64 v54; // r13
  int v55; // ecx
  CPayloadedAnimationPrimitiveBuffer *v56; // r12
  __int64 v57; // rsi
  unsigned __int64 (__fastcall *v58)(CAnimation *); // r13
  int v59; // eax
  CAnimation *v60; // r12
  const struct DwmAnimationPrimitive *(__fastcall *v61)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // r13
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r8
  unsigned __int64 v67; // rcx
  int v68; // ecx
  int v69; // ecx
  float v70; // xmm6_4
  CAnimation *v71; // rsi
  _BOOL8 (__fastcall *v72)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rbx
  __int64 v73; // rcx
  signed __int64 v74; // rsi
  unsigned int v75; // ebx
  __int64 v76; // rax
  double *v77; // r15
  unsigned int v78; // r12d
  void (__fastcall *v79)(double *, _QWORD, __int64, float *); // r14
  double *v80; // rax
  char *v81; // rbx
  unsigned __int64 (__fastcall *v82)(CAnimation *); // r12
  __int64 v83; // rax
  __int64 v84; // r13
  double v85; // xmm0_8
  double v86; // xmm3_8
  unsigned __int64 (__fastcall *v87)(CAnimation *); // r14
  unsigned int v88; // eax
  const struct DwmAnimationPrimitive *(__fastcall *v89)(CAnimation *, unsigned int); // r14
  const struct DwmAnimationPrimitive *v90; // rax
  __int64 v91; // r8
  __int64 v92; // rdx
  int v93; // ecx
  float v94; // xmm0_4
  __int64 v95; // rax
  __int64 v96; // rax
  char AdjustedHandoffValue; // al
  __int64 v98; // rsi
  __int64 v99; // r9
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r12
  __int64 v103; // [rsp+28h] [rbp-51h]
  int v104; // [rsp+40h] [rbp-39h] BYREF
  float v105; // [rsp+44h] [rbp-35h] BYREF
  float v106; // [rsp+48h] [rbp-31h] BYREF
  __int64 v107; // [rsp+50h] [rbp-29h]
  signed __int64 v108; // [rsp+58h] [rbp-21h]
  unsigned __int64 v109; // [rsp+60h] [rbp-19h]
  __int64 v110; // [rsp+68h] [rbp-11h]
  signed __int64 v111; // [rsp+70h] [rbp-9h] BYREF
  double v113; // [rsp+F0h] [rbp+77h] BYREF
  float v114; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = this;
  v3 = *(_QWORD *)(*((_QWORD *)this - 3) + 472LL);
  if ( v3 < *((_QWORD *)v2 + 10) || !*((_DWORD *)v2 + 8) )
    return 1;
  *((_BYTE *)v2 + 56) |= 1u;
  v5 = (*((_BYTE *)v2 + 56) & 0x10) == 0;
  v6 = *((_QWORD *)v2 + 18);
  v108 = v6;
  if ( v5 )
  {
    v6 += v3 - *((_QWORD *)v2 + 19);
    v108 = v6;
  }
  v114 = 0.0;
  v7 = (CAnimation **)((char *)v2 + 208);
  v105 = 0.0;
  v8 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v2 + 26);
  v111 = 0LL;
  v104 = 0;
  v110 = v6;
  v9 = 0;
  v10 = *(unsigned __int64 (__fastcall ***)(CSharedSectionAnimationPrimitiveBuffer *__hidden))v8;
  v11 = 0.0;
  v106 = 0.0;
  v12 = *v10;
  if ( *v10 != CAnimation::GetPrimitivesCount )
    goto LABEL_163;
  v8 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v8 + 2);
  v12 = *(unsigned __int64 (__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden))(*(_QWORD *)v8 + 32LL);
  if ( v12 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    Count = *((_DWORD *)v8 + 6) >> 5;
    goto LABEL_9;
  }
  if ( v12 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    Count = CPayloadedAnimationPrimitiveBuffer::GetCount(v8);
  else
LABEL_163:
    Count = ((__int64 (__fastcall *)(CPayloadedAnimationPrimitiveBuffer *, struct FRAME_TIME_INFO *))v12)(v8, a2);
LABEL_9:
  if ( !Count )
  {
LABEL_164:
    v107 = 0LL;
    goto LABEL_16;
  }
  v14 = *v7;
  v15 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)*v7 + 8LL);
  if ( v15 == CAnimation::GetPrimitive )
  {
    v14 = (CAnimation *)*((_QWORD *)v14 + 2);
    v15 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v14 + 24LL);
    if ( v15 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v16 = *((_QWORD *)v14 + 2);
      v17 = *((unsigned int *)v14 + 7);
      v18 = *(unsigned int *)(v16 + 48);
      if ( v17 < v18 && *((unsigned int *)v14 + 6) <= v18 - v17 )
      {
        v19 = *(_QWORD *)(v16 + 56);
        if ( v19 )
        {
          v107 = v19 + v17;
          if ( v19 + v17 )
            goto LABEL_16;
        }
      }
      goto LABEL_164;
    }
  }
  v107 = (__int64)v15(v14, 0);
LABEL_16:
  v20 = *v7;
  v21 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
  if ( v21 != CAnimation::GetPrimitivesCount )
    goto LABEL_165;
  v20 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v20 + 2);
  v21 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v20 + 32LL);
  if ( v21 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    v22 = *((_DWORD *)v20 + 6) >> 5;
    goto LABEL_19;
  }
  if ( v21 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    v22 = CPayloadedAnimationPrimitiveBuffer::GetCount(v20);
  else
LABEL_165:
    v22 = v21(v20);
LABEL_19:
  v23 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
  v24 = v22 - 1;
  v25 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
  if ( v25 != CAnimation::GetPrimitivesCount )
    goto LABEL_166;
  v23 = (unsigned __int64 (__fastcall ***)(CAnimation *))v23[2];
  v25 = (*v23)[4];
  if ( v25 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    if ( v25 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    {
      v26 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v23);
      goto LABEL_22;
    }
LABEL_166:
    v26 = v25((CAnimation *)v23);
    goto LABEL_22;
  }
  v26 = *((_DWORD *)v23 + 6) >> 5;
LABEL_22:
  if ( v24 >= v26 )
    goto LABEL_167;
  v27 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
  v28 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v7 + 8LL);
  if ( v28 != CAnimation::GetPrimitive
    || (v27 = (unsigned __int64 (__fastcall ***)(CAnimation *))v27[2],
        v28 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v27)[3],
        v28 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive) )
  {
    v109 = (__int64)v28((CAnimation *)v27, v24);
    goto LABEL_31;
  }
  v29 = v27[2];
  v30 = *((unsigned int *)v27 + 7);
  v31 = *((unsigned int *)v29 + 12);
  if ( v30 < v31
    && *((unsigned int *)v27 + 6) <= v31 - v30
    && (v32 = v29[7]) != 0LL
    && (unsigned __int64 (__fastcall *)(CAnimation *))((char *)v32 + v30) )
  {
    v33 = (__int64)v32 + 32 * v24 + v30;
  }
  else
  {
LABEL_167:
    v33 = 0LL;
  }
  v109 = v33;
LABEL_31:
  v34 = 1LL;
  LOBYTE(v113) = 0;
  if ( !v107 )
  {
LABEL_184:
    AnimationValue = 0;
    goto LABEL_84;
  }
  v35 = *((unsigned int *)v2 + 54);
  if ( (_DWORD)v35 == -1 )
    goto LABEL_46;
  v36 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
  v37 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
  if ( v37 != CAnimation::GetPrimitivesCount )
    goto LABEL_168;
  v36 = (unsigned __int64 (__fastcall ***)(CAnimation *))v36[2];
  v37 = (*v36)[4];
  if ( v37 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    v38 = *((_DWORD *)v36 + 6) >> 5;
    goto LABEL_36;
  }
  if ( v37 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    v38 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v36);
  else
LABEL_168:
    v38 = ((__int64 (__fastcall *)(unsigned __int64 (__fastcall ***)(CAnimation *), __int64))v37)(v36, 1LL);
LABEL_36:
  if ( (unsigned int)v35 < v38 )
  {
    v39 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
    v40 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v7 + 8LL);
    if ( v40 != CAnimation::GetPrimitive
      || (v39 = (unsigned __int64 (__fastcall ***)(CAnimation *))v39[2],
          v40 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v39)[3],
          v40 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive) )
    {
      v44 = (__int64)v40((CAnimation *)v39, v35);
      goto LABEL_44;
    }
    v41 = v39[2];
    v34 = *((unsigned int *)v39 + 7);
    v42 = *((unsigned int *)v41 + 12);
    if ( v34 < v42 && *((unsigned int *)v39 + 6) <= v42 - v34 )
    {
      v43 = v41[7];
      if ( v43 )
      {
        if ( (unsigned __int64 (__fastcall *)(CAnimation *))((char *)v43 + v34) )
        {
          v44 = (__int64)v43 + 32 * v35 + v34;
          goto LABEL_44;
        }
      }
    }
  }
  v44 = 0LL;
LABEL_44:
  if ( *(_QWORD *)(v44 + 8) > v108 )
    *((_DWORD *)v2 + 54) = -1;
LABEL_46:
  v45 = *((_DWORD *)v2 + 54);
  v46 = v108;
  while ( 1 )
  {
    v47 = (unsigned int *)*v7;
    ++v45;
    v48 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
    if ( v48 != CAnimation::GetPrimitivesCount )
      goto LABEL_170;
    v47 = (unsigned int *)*((_QWORD *)v47 + 2);
    v48 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v47 + 32LL);
    if ( v48 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
    {
      if ( v48 == CPayloadedAnimationPrimitiveBuffer::GetCount )
        v96 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v47);
      else
LABEL_170:
        v96 = ((__int64 (__fastcall *)(unsigned int *, unsigned __int64))v48)(v47, v34);
      v49 = v96;
      goto LABEL_50;
    }
    v49 = (unsigned __int64)v47[6] >> 5;
LABEL_50:
    if ( v45 >= v49 )
      break;
    v87 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v7;
    v88 = v87 == CAnimation::GetPrimitivesCount
        ? CAnimation::GetPrimitivesCount(*v7)
        : ((__int64 (__fastcall *)(CAnimation *, unsigned __int64))v87)(*v7, v34);
    if ( v45 >= v88 )
    {
      v90 = 0LL;
    }
    else
    {
      v89 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v7 + 8LL);
      v90 = v89 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(*v7, v45) : v89(*v7, v45);
    }
    if ( *((_QWORD *)v90 + 1) > v46 )
      break;
    *((_DWORD *)v2 + 54) = v45;
  }
  v50 = *((_DWORD *)v2 + 54);
  v9 = 0;
  v2 = this;
  if ( v50 == -1 )
    goto LABEL_184;
  v51 = v107;
  AnimationValue = 1;
  v53 = v107 + 32LL * v50;
  if ( *(_DWORD *)v53 == 4 || *(_DWORD *)v53 == 6 && v53 == v109 )
    LOBYTE(v113) = 1;
  v54 = v110;
LABEL_55:
  while ( 1 )
  {
    v55 = *(_DWORD *)v53;
    if ( ((*(_DWORD *)v53 - 3) & 0xFFFFFFFC) != 0 || v55 == 4 )
      break;
    if ( v51 == v53 )
      goto LABEL_179;
    v56 = *v7;
    v109 = 0LL;
    v57 = 0LL;
    v58 = **(unsigned __int64 (__fastcall ***)(CAnimation *))v56;
    if ( v58 != CAnimation::GetPrimitivesCount )
      goto LABEL_174;
    v56 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v56 + 2);
    v58 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v56 + 32LL);
    if ( v58 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
    {
      v59 = *((_DWORD *)v56 + 6) >> 5;
      goto LABEL_61;
    }
    if ( v58 == CPayloadedAnimationPrimitiveBuffer::GetCount )
      v59 = CPayloadedAnimationPrimitiveBuffer::GetCount(v56);
    else
LABEL_174:
      v59 = v58(v56);
LABEL_61:
    if ( !v59 )
      goto LABEL_175;
    v60 = *v7;
    v61 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)*v7 + 8LL);
    if ( v61 == CAnimation::GetPrimitive )
    {
      v60 = (CAnimation *)*((_QWORD *)v60 + 2);
      v61 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v60 + 24LL);
      if ( v61 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v62 = *((_QWORD *)v60 + 2);
        v63 = *((unsigned int *)v60 + 7);
        v64 = *(unsigned int *)(v62 + 48);
        if ( v63 < v64 && *((unsigned int *)v60 + 6) <= v64 - v63 )
        {
          v65 = *(_QWORD *)(v62 + 56);
          if ( v65 )
          {
            v66 = v65 + v63;
            if ( v65 + v63 )
              goto LABEL_68;
          }
        }
LABEL_175:
        v66 = 0LL;
        goto LABEL_68;
      }
    }
    v66 = (__int64)v61(v60, 0);
LABEL_68:
    switch ( *(_DWORD *)v53 )
    {
      case 3:
        v67 = *(_QWORD *)(v53 + 16);
        if ( v67 )
          v109 = (v110 - *(_QWORD *)(v53 + 8)) % v67;
        v57 = v109 + *(_QWORD *)(v53 + 8) - v67;
        if ( v57 < *(_QWORD *)(v66 + 8) )
          v57 = *(_QWORD *)(v53 + 8);
        break;
      case 5:
        v98 = *(_QWORD *)(v53 + 8);
        v99 = v110 - v98;
        if ( v110 - v98 > v98 - *(_QWORD *)(v66 + 8) )
          v99 = *(_QWORD *)(v53 + 8) - *(_QWORD *)(v66 + 8);
        v57 = v98 - v99;
        break;
      case 6:
        v57 = *(_QWORD *)(v53 + 8);
        break;
    }
    v54 = v57;
    v110 = v57;
    if ( *(_QWORD *)(v53 + 8) < v57 )
    {
LABEL_179:
      AnimationValue = 0;
      v9 = 0;
      goto LABEL_93;
    }
    v51 = v107;
    v53 -= 32LL;
    if ( *(_QWORD *)(v53 + 8) > v57 )
    {
      while ( v53 != v107 )
      {
        v53 -= 32LL;
        if ( *(_QWORD *)(v53 + 8) <= v57 )
          goto LABEL_55;
      }
      goto LABEL_180;
    }
  }
  v68 = v55 - 1;
  if ( v68 )
  {
    v69 = v68 - 1;
    if ( v69 )
    {
      if ( v69 != 2 )
      {
LABEL_180:
        AnimationValue = 0;
        v9 = 0;
        goto LABEL_84;
      }
      v70 = *(float *)(v53 + 16);
    }
    else
    {
      v70 = CAnimationInterpolator::InterpolateSinusoidal(
              (CAnimationInterpolator *)v7,
              (const struct DwmAnimationPrimitive *)v53,
              v54);
    }
  }
  else
  {
    v82 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)*v7 + 24LL);
    if ( v82 == CAnimation::GetQPCFrequency )
      v83 = *(_QWORD *)(*((_QWORD *)*v7 - 9) + 312LL);
    else
      v83 = v82(*v7);
    v84 = v54 - *(_QWORD *)(v53 + 8);
    v85 = (double)(int)v83;
    if ( v83 < 0 )
      v85 = v85 + 1.844674407370955e19;
    v86 = (double)(int)v84 / v85;
    v70 = *(float *)(v53 + 16) * (v86 * v86) * v86
        + *(float *)(v53 + 20) * (v86 * v86)
        + *(float *)(v53 + 24) * v86
        + *(float *)(v53 + 28);
  }
  if ( _finite(v70) )
  {
    v9 = LOBYTE(v113);
    v11 = v70;
    v106 = v70;
  }
  else
  {
    AnimationValue = 0;
    v9 = 0;
  }
LABEL_84:
  if ( AnimationValue )
  {
    v71 = *v7;
    v72 = *(_BOOL8 (__fastcall **)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(*(_QWORD *)*v7 + 16LL);
    if ( v72 == CAnimation::GetHandoffData )
    {
      v73 = *((_QWORD *)v71 + 16);
      AnimationValue = 1;
      if ( !v73 )
        goto LABEL_87;
      v100 = *((_QWORD *)v71 + 4);
      if ( *(_QWORD *)(v73 + 120) > v100 )
        goto LABEL_87;
      v101 = *((_QWORD *)v71 + 18);
      if ( (*((_BYTE *)v71 + 8) & 0x20) == 0 )
        v101 += v100 - *((_QWORD *)v71 + 19);
      AnimationValue = CAnimationInterpolator::GetAnimationValue(
                         (CAnimationInterpolator *)(v73 + 248),
                         v101,
                         (float *)v71 + 34,
                         0LL);
      if ( AnimationValue )
      {
        v102 = *((_QWORD *)v71 + 16);
        if ( v102 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v102 + 16LL))(*((_QWORD *)v71 + 16));
          *((_QWORD *)v71 + 16) = 0LL;
        }
LABEL_87:
        v104 = *((_DWORD *)v71 + 28);
        v105 = *((float *)v71 + 34);
        v111 = *((_QWORD *)v71 + 15);
        if ( (*((_BYTE *)v71 + 8) & 0x40) == 0 )
        {
          if ( *((_DWORD *)v71 + 49) )
          {
            v93 = *((_DWORD *)v71 + 48);
            if ( v93 )
            {
              v94 = *((float *)v71 + 34);
              LODWORD(v113) = *((_DWORD *)v71 + 49);
              v95 = *((_QWORD *)v71 - 9);
              HIDWORD(v113) = v93;
              CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v95 + 1160) + 56LL), &v113, 1LL, 1LL, &unk_180162B46, v94);
              *((_BYTE *)v71 + 8) |= 0x40u;
            }
          }
        }
      }
    }
    else
    {
      AnimationValue = v72(*v7, (enum DwmAnimationHandoffType::Enum *)&v104, &v105, (unsigned __int64 *)&v111);
    }
    if ( AnimationValue )
    {
      if ( v104 )
      {
        AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue(
                                 (__int64)v7,
                                 v108,
                                 v11,
                                 v104,
                                 v105,
                                 v111,
                                 &v106);
        v11 = v106;
        AnimationValue = AdjustedHandoffValue;
      }
      if ( AnimationValue )
        v114 = v11;
    }
  }
LABEL_93:
  *((_BYTE *)v2 + 56) &= ~4u;
  v74 = v108;
  *((_BYTE *)v2 + 56) |= 4 * (v9 & 1);
  if ( AnimationValue )
  {
    v75 = 0;
    v113 = (double)(int)v74 / (double)(int)*(_QWORD *)(*((_QWORD *)v2 - 3) + 312LL);
    if ( *((_DWORD *)v2 + 8) )
    {
      while ( 2 )
      {
        v76 = *((_QWORD *)v2 + 1);
        v77 = *(double **)(v76 + 16LL * v75);
        v78 = *(_DWORD *)(v76 + 16LL * v75 + 8);
        v79 = *(void (__fastcall **)(double *, _QWORD, __int64, float *))(*(_QWORD *)v77 + 80LL);
        if ( (char *)v79 == (char *)CTranslateTransform::SetProperty )
        {
          if ( !v78 )
          {
            v80 = v77 + 13;
            goto LABEL_98;
          }
          if ( v78 != 1 )
            goto LABEL_193;
          v80 = v77 + 14;
LABEL_98:
          if ( v80 )
          {
            if ( *v80 != v114 )
            {
              *v80 = v114;
              CResource::NotifyOnChanged(v77, 0LL, 0LL);
            }
          }
          else
          {
LABEL_193:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xAB8u);
          }
        }
        else if ( (char *)v79 == (char *)CEffectGroup::SetProperty )
        {
          CEffectGroup::SetProperty((__int64)v77, v78, 17, &v114);
        }
        else if ( (char *)v79 == (char *)CRotateTransform::SetProperty )
        {
          CRotateTransform::SetProperty(v77, v78, 17, &v114);
        }
        else if ( (char *)v79 == (char *)CScaleTransform::SetProperty )
        {
          CScaleTransform::SetProperty(v77, v78, 17, &v114);
        }
        else if ( (char *)v79 == (char *)CTranslateTransform3D::SetProperty )
        {
          CTranslateTransform3D::SetProperty(v77, v78, 17, &v114);
        }
        else
        {
          v79(v77, v78, 17LL, &v114);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxqf(
            *((_QWORD *)v2 + 1),
            (unsigned int)CRotateTransform::SetProperty,
            LODWORD(v113),
            (_DWORD)v2 - 40,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL * v75),
            *(_DWORD *)(*((_QWORD *)v2 + 1) + 16LL * v75 + 8),
            SLOBYTE(v114));
        if ( ++v75 >= *((_DWORD *)v2 + 8) )
        {
          v74 = v108;
          break;
        }
        continue;
      }
    }
  }
  v81 = (char *)v2 - 40;
  if ( *((_DWORD *)v2 + 61) && *((_DWORD *)v81 + 70) && *((_DWORD *)v81 + 42) < *((_DWORD *)v81 + 40) )
  {
    do
    {
      v91 = *((_QWORD *)v81 + 17);
      v92 = 2LL * *((unsigned int *)v81 + 42);
      if ( *(_QWORD *)(v91 + 16LL * *((unsigned int *)v81 + 42)) > v74 )
        break;
      LODWORD(v113) = *((_DWORD *)v81 + 71);
      HIDWORD(v113) = *((_DWORD *)v81 + 70);
      LODWORD(v103) = *(_DWORD *)(v91 + 8 * v92 + 8);
      CoreUICallSend(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v81 + 2) + 1160LL) + 56LL),
        &v113,
        1LL,
        0LL,
        &unk_180162B42,
        v103);
      ++*((_DWORD *)v81 + 42);
    }
    while ( *((_DWORD *)v81 + 42) < *((_DWORD *)v81 + 40) );
    v2 = this;
  }
  if ( (*((_BYTE *)v2 + 56) & 0xC) == 4 )
    CAnimation::EndAnimation((CAnimation *)v81);
  return 1;
}

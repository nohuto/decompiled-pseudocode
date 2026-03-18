/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180084F44 (--1CAnimation@@UEAA@XZ.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800AB9D0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1800160DC (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800161C8 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetPrimitive@CPayloadedAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18001C300 (-GetPrimitive@CPayloadedAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800661F0 (-SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CRotateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180066460 (-SetProperty@CRotateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180066F00 (-SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180083E88 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800860B0 (-SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AC580 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x1800B3080 (-GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ.c)
 *     Template_xxxqf @ 0x180124CB8 (Template_xxxqf.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180158664 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this, struct FRAME_TIME_INFO *a2)
{
  CAnimation *v2; // rdi
  unsigned __int64 v3; // rcx
  bool v5; // zf
  __int64 v6; // rax
  CAnimationInterpolator *v7; // r12
  CPayloadedAnimationPrimitiveBuffer *v8; // rbx
  float v9; // xmm7_4
  unsigned __int64 (__fastcall **v10)(CSharedSectionAnimationPrimitiveBuffer *__hidden); // rax
  unsigned __int64 (__fastcall *v11)(CSharedSectionAnimationPrimitiveBuffer *__hidden); // rsi
  int Count; // eax
  CPayloadedAnimationPrimitiveBuffer *v13; // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v14)(CAnimation *, unsigned int); // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  const struct DwmAnimationPrimitive *Primitive; // r15
  CAnimation *v20; // rbx
  unsigned __int64 (__fastcall *v21)(CAnimation *); // rsi
  int v22; // eax
  CPayloadedAnimationPrimitiveBuffer *v23; // rbx
  unsigned int v24; // r14d
  unsigned __int64 (__fastcall *v25)(CAnimation *); // rsi
  unsigned int v26; // eax
  unsigned __int64 (__fastcall ***v27)(CAnimation *); // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v28)(CAnimation *, unsigned int); // rsi
  unsigned __int64 (__fastcall **v29)(CAnimation *); // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 (__fastcall *v32)(CAnimation *); // rax
  __int64 v33; // r13
  __int64 v34; // rsi
  unsigned __int64 (__fastcall ***v35)(CAnimation *); // rbx
  unsigned __int64 (__fastcall *v36)(CAnimation *); // r14
  unsigned int v37; // eax
  unsigned __int64 (__fastcall ***v38)(CAnimation *); // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v39)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // r14
  unsigned __int64 (__fastcall **v40)(CAnimation *); // r8
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned __int64 (__fastcall *v43)(CAnimation *); // rax
  const struct DwmAnimationPrimitive *v44; // rax
  unsigned int v45; // ebx
  signed __int64 v46; // r13
  unsigned int *v47; // rsi
  unsigned __int64 (__fastcall *v48)(CAnimation *); // r14
  unsigned __int64 v49; // rax
  unsigned __int64 (__fastcall ***v50)(CAnimation *); // r14
  unsigned __int64 (__fastcall *v51)(CAnimation *); // r15
  unsigned int v52; // eax
  unsigned __int64 (__fastcall ***v53)(CAnimation *); // r14
  const struct DwmAnimationPrimitive *(__fastcall *v54)(CAnimation *, unsigned int); // r15
  unsigned __int64 (__fastcall **v55)(CAnimation *); // r8
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 (__fastcall *v58)(CAnimation *); // rax
  const struct DwmAnimationPrimitive *v59; // rsi
  unsigned int v60; // eax
  unsigned __int64 v61; // rdx
  char AnimationValue; // r15
  unsigned __int64 v63; // rbx
  __int64 v64; // r13
  int v65; // ecx
  unsigned __int64 (__fastcall ***v66)(CAnimation *); // r14
  __int64 v67; // rsi
  unsigned __int64 (__fastcall *v68)(CAnimation *); // r13
  int v69; // eax
  unsigned __int64 (__fastcall ***v70)(CAnimation *); // r14
  const struct DwmAnimationPrimitive *(__fastcall *v71)(CAnimation *, unsigned int); // r13
  unsigned __int64 (__fastcall **v72)(CAnimation *); // r8
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  unsigned __int64 (__fastcall *v75)(CAnimation *); // rax
  const struct DwmAnimationPrimitive *v76; // r8
  unsigned __int64 (__fastcall *v77)(CAnimation *); // r14
  __int64 v78; // rax
  __int64 v79; // r13
  double v80; // xmm0_8
  double v81; // xmm3_8
  float v82; // xmm6_4
  char v83; // r14
  CPayloadedAnimationPrimitiveBuffer *v84; // rsi
  char (__fastcall *v85)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rbx
  __int64 v86; // rcx
  signed __int64 v87; // r14
  __int64 v88; // rax
  unsigned int v89; // esi
  __int64 (__fastcall *v90)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 (__fastcall *v91)(double *, int, int, float *); // r8
  __int64 (__fastcall *v92)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  __int64 v93; // rax
  __int64 v94; // r14
  double *v95; // r15
  unsigned int v96; // r12d
  __int64 (__fastcall *v97)(double *, int, int, float *); // rbx
  double *v98; // rax
  int v99; // ecx
  unsigned int v100; // eax
  unsigned __int64 v101; // rbx
  __int64 v102; // r12
  unsigned __int64 v103; // r13
  char *v104; // rbx
  __int64 v105; // r8
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  int v109; // ecx
  int v110; // xmm0_4
  __int64 v111; // rax
  char AdjustedHandoffValue; // al
  unsigned __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r14
  __int64 v116; // rsi
  __int64 v117; // r9
  float v118; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v119; // [rsp+48h] [rbp-31h]
  const struct DwmAnimationPrimitive *v120; // [rsp+50h] [rbp-29h]
  signed __int64 v121; // [rsp+58h] [rbp-21h]
  float v122; // [rsp+60h] [rbp-19h] BYREF
  int v123; // [rsp+64h] [rbp-15h] BYREF
  float v124; // [rsp+68h] [rbp-11h] BYREF
  __int64 v125; // [rsp+70h] [rbp-9h]
  signed __int64 v126; // [rsp+78h] [rbp-1h] BYREF
  int v128; // [rsp+F0h] [rbp+77h] BYREF
  int v129; // [rsp+F4h] [rbp+7Bh]
  void (__fastcall *v130)(double *, unsigned __int64, _QWORD, _QWORD); // [rsp+F8h] [rbp+7Fh]

  v2 = this;
  v3 = *(_QWORD *)(*((_QWORD *)this - 3) + 472LL);
  if ( v3 < *((_QWORD *)v2 + 10) || !*((_DWORD *)v2 + 8) )
    return 1;
  *((_BYTE *)v2 + 56) |= 1u;
  v5 = (*((_BYTE *)v2 + 56) & 0x10) == 0;
  v6 = *((__int64 *)v2 + 18);
  v121 = v6;
  if ( v5 )
  {
    v6 += v3 - *((_QWORD *)v2 + 19);
    v121 = v6;
  }
  v118 = 0.0;
  v7 = (CAnimation *)((char *)v2 + 208);
  v124 = 0.0;
  v8 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v2 + 26);
  v126 = 0LL;
  v123 = 0;
  v125 = v6;
  v9 = 0.0;
  v10 = *(unsigned __int64 (__fastcall ***)(CSharedSectionAnimationPrimitiveBuffer *__hidden))v8;
  v122 = 0.0;
  LOBYTE(v128) = 0;
  v11 = *v10;
  if ( *v10 != CAnimation::GetPrimitivesCount )
    goto LABEL_160;
  v8 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v8 + 2);
  v11 = *(unsigned __int64 (__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden))(*(_QWORD *)v8 + 32LL);
  if ( v11 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    Count = *((_DWORD *)v8 + 6) >> 5;
    goto LABEL_9;
  }
  if ( v11 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    Count = CPayloadedAnimationPrimitiveBuffer::GetCount(v8);
  else
LABEL_160:
    Count = ((__int64 (__fastcall *)(CPayloadedAnimationPrimitiveBuffer *, struct FRAME_TIME_INFO *))v11)(v8, a2);
LABEL_9:
  if ( !Count )
  {
LABEL_207:
    v119 = 0LL;
    Primitive = 0LL;
    goto LABEL_16;
  }
  v13 = *(CPayloadedAnimationPrimitiveBuffer **)v7;
  v14 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(**(_QWORD **)v7 + 8LL);
  if ( v14 != CAnimation::GetPrimitive )
  {
LABEL_156:
    Primitive = (const struct DwmAnimationPrimitive *)((__int64 (__fastcall *)(CPayloadedAnimationPrimitiveBuffer *, _QWORD, const struct DwmAnimationPrimitive *(__fastcall *)(CPayloadedAnimationPrimitiveBuffer *, unsigned int)))v14)(
                                                        v13,
                                                        0LL,
                                                        CPayloadedAnimationPrimitiveBuffer::GetPrimitive);
    v119 = (unsigned __int64)Primitive;
    goto LABEL_16;
  }
  v13 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v13 + 2);
  v14 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)v13 + 24LL);
  if ( v14 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    if ( v14 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
    {
      Primitive = CPayloadedAnimationPrimitiveBuffer::GetPrimitive(v13, 0);
      v119 = (unsigned __int64)Primitive;
      goto LABEL_16;
    }
    goto LABEL_156;
  }
  v15 = *((_QWORD *)v13 + 2);
  v16 = *((unsigned int *)v13 + 7);
  v17 = *(unsigned int *)(v15 + 48);
  if ( v16 >= v17 )
    goto LABEL_207;
  if ( *((unsigned int *)v13 + 6) > v17 - v16 )
    goto LABEL_207;
  v18 = *(_QWORD *)(v15 + 56);
  if ( !v18 )
    goto LABEL_207;
  Primitive = (const struct DwmAnimationPrimitive *)(v18 + v16);
  v119 = v18 + v16;
  if ( !(v18 + v16) )
    goto LABEL_207;
LABEL_16:
  v20 = *(CAnimation **)v7;
  v21 = ***(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
  if ( v21 != CAnimation::GetPrimitivesCount )
  {
LABEL_162:
    v22 = v21(v20);
    goto LABEL_19;
  }
  v20 = (CAnimation *)*((_QWORD *)v20 + 2);
  v21 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v20 + 32LL);
  if ( v21 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    if ( v21 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    {
      v22 = CPayloadedAnimationPrimitiveBuffer::GetCount(v20);
      goto LABEL_19;
    }
    goto LABEL_162;
  }
  v22 = *((_DWORD *)v20 + 6) >> 5;
LABEL_19:
  v23 = *(CPayloadedAnimationPrimitiveBuffer **)v7;
  v24 = v22 - 1;
  v25 = ***(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
  if ( v25 != CAnimation::GetPrimitivesCount )
    goto LABEL_164;
  v23 = (CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v23 + 2);
  v25 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v23 + 32LL);
  if ( v25 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    v26 = *((_DWORD *)v23 + 6) >> 5;
    goto LABEL_22;
  }
  if ( v25 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    v26 = CPayloadedAnimationPrimitiveBuffer::GetCount(v23);
  else
LABEL_164:
    v26 = v25(v23);
LABEL_22:
  if ( v24 >= v26 )
  {
LABEL_208:
    v33 = 0LL;
    goto LABEL_30;
  }
  v27 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
  v28 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(**(_QWORD **)v7 + 8LL);
  if ( v28 != CAnimation::GetPrimitive )
  {
LABEL_158:
    v120 = v28((CAnimation *)v27, v24);
    goto LABEL_31;
  }
  v27 = (unsigned __int64 (__fastcall ***)(CAnimation *))v27[2];
  v28 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v27)[3];
  if ( v28 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    if ( v28 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
    {
      v120 = CPayloadedAnimationPrimitiveBuffer::GetPrimitive((CPayloadedAnimationPrimitiveBuffer *)v27, v24);
      goto LABEL_31;
    }
    goto LABEL_158;
  }
  v29 = v27[2];
  v30 = *((unsigned int *)v27 + 7);
  v31 = *((unsigned int *)v29 + 12);
  if ( v30 >= v31 )
    goto LABEL_208;
  if ( *((unsigned int *)v27 + 6) > v31 - v30 )
    goto LABEL_208;
  v32 = v29[7];
  if ( !v32 || !(unsigned __int64 (__fastcall *)(CAnimation *))((char *)v32 + v30) )
    goto LABEL_208;
  v33 = (__int64)v32 + 32 * v24 + v30;
LABEL_30:
  v120 = (const struct DwmAnimationPrimitive *)v33;
LABEL_31:
  LOBYTE(v130) = 0;
  if ( !Primitive )
  {
LABEL_218:
    AnimationValue = 0;
    v83 = 0;
    goto LABEL_97;
  }
  v34 = *((unsigned int *)v2 + 54);
  if ( (_DWORD)v34 == -1 )
    goto LABEL_46;
  v35 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
  v36 = ***(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
  if ( v36 != CAnimation::GetPrimitivesCount )
    goto LABEL_168;
  v35 = (unsigned __int64 (__fastcall ***)(CAnimation *))v35[2];
  v36 = (*v35)[4];
  if ( v36 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
  {
    v37 = *((_DWORD *)v35 + 6) >> 5;
    goto LABEL_36;
  }
  if ( v36 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    v37 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v35);
  else
LABEL_168:
    v37 = v36((CAnimation *)v35);
LABEL_36:
  if ( (unsigned int)v34 < v37 )
  {
    v38 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    v39 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**(_QWORD **)v7 + 8LL);
    if ( v39 == CAnimation::GetPrimitive )
    {
      v38 = (unsigned __int64 (__fastcall ***)(CAnimation *))v38[2];
      v39 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v38)[3];
      if ( v39 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v40 = v38[2];
        v41 = *((unsigned int *)v38 + 7);
        v42 = *((unsigned int *)v40 + 12);
        if ( v41 < v42 && *((unsigned int *)v38 + 6) <= v42 - v41 )
        {
          v43 = v40[7];
          if ( v43 )
          {
            if ( (unsigned __int64 (__fastcall *)(CAnimation *))((char *)v43 + v41) )
            {
              v44 = (const struct DwmAnimationPrimitive *)((char *)v43 + 32 * v34 + v41);
              goto LABEL_44;
            }
          }
        }
        goto LABEL_209;
      }
      if ( v39 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
      {
        v44 = CPayloadedAnimationPrimitiveBuffer::GetPrimitive((CPayloadedAnimationPrimitiveBuffer *)v38, v34);
        goto LABEL_44;
      }
    }
    v44 = v39((CSharedSectionAnimationPrimitiveBuffer *)v38, v34);
    goto LABEL_44;
  }
LABEL_209:
  v44 = 0LL;
LABEL_44:
  if ( *((_QWORD *)v44 + 1) > v121 )
    *((_DWORD *)v2 + 54) = -1;
LABEL_46:
  v45 = *((_DWORD *)v2 + 54);
  v46 = v121;
  while ( 1 )
  {
    v47 = *(unsigned int **)v7;
    ++v45;
    v48 = ***(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    if ( v48 != CAnimation::GetPrimitivesCount )
      goto LABEL_154;
    v47 = (unsigned int *)*((_QWORD *)v47 + 2);
    v48 = *(unsigned __int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v47 + 32LL);
    if ( v48 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
    {
      if ( v48 == CPayloadedAnimationPrimitiveBuffer::GetCount )
      {
        v49 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v47);
        goto LABEL_50;
      }
LABEL_154:
      v49 = v48((CAnimation *)v47);
      goto LABEL_50;
    }
    v49 = (unsigned __int64)v47[6] >> 5;
LABEL_50:
    if ( v45 >= v49 )
      break;
    v50 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    v51 = ***(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    if ( v51 != CAnimation::GetPrimitivesCount )
      goto LABEL_181;
    v50 = (unsigned __int64 (__fastcall ***)(CAnimation *))v50[2];
    v51 = (*v50)[4];
    if ( v51 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
    {
      v52 = *((_DWORD *)v50 + 6) >> 5;
      goto LABEL_54;
    }
    if ( v51 == CPayloadedAnimationPrimitiveBuffer::GetCount )
      v52 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v50);
    else
LABEL_181:
      v52 = v51((CAnimation *)v50);
LABEL_54:
    if ( v45 >= v52 )
      goto LABEL_210;
    v53 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    v54 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(**(_QWORD **)v7 + 8LL);
    if ( v54 != CAnimation::GetPrimitive )
      goto LABEL_178;
    v53 = (unsigned __int64 (__fastcall ***)(CAnimation *))v53[2];
    v54 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v53)[3];
    if ( v54 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v55 = v53[2];
      v56 = *((unsigned int *)v53 + 7);
      v57 = *((unsigned int *)v55 + 12);
      if ( v56 < v57 && *((unsigned int *)v53 + 6) <= v57 - v56 )
      {
        v58 = v55[7];
        if ( v58 )
        {
          if ( (unsigned __int64 (__fastcall *)(CAnimation *))((char *)v58 + v56) )
          {
            v59 = (const struct DwmAnimationPrimitive *)((char *)v58 + 32 * v45 + v56);
            goto LABEL_62;
          }
        }
      }
LABEL_210:
      v59 = 0LL;
      goto LABEL_62;
    }
    if ( v54 != CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
    {
LABEL_178:
      v59 = v54((CAnimation *)v53, v45);
      goto LABEL_62;
    }
    v59 = CPayloadedAnimationPrimitiveBuffer::GetPrimitive((CPayloadedAnimationPrimitiveBuffer *)v53, v45);
LABEL_62:
    if ( *((_QWORD *)v59 + 1) > v46 )
      break;
    *((_DWORD *)v2 + 54) = v45;
  }
  v60 = *((_DWORD *)v2 + 54);
  v2 = this;
  if ( v60 == -1 )
    goto LABEL_218;
  v61 = v119;
  AnimationValue = 1;
  v63 = v119 + 32LL * v60;
  if ( *(_DWORD *)v63 == 4 || *(_DWORD *)v63 == 6 && (const struct DwmAnimationPrimitive *)v63 == v120 )
    LOBYTE(v130) = 1;
  v64 = v125;
LABEL_67:
  while ( 1 )
  {
    v65 = *(_DWORD *)v63;
    if ( ((*(_DWORD *)v63 - 3) & 0xFFFFFFFC) != 0 || v65 == 4 )
      break;
    if ( v61 == v63 )
      goto LABEL_216;
    v66 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    *(double *)&v67 = 0.0;
    v68 = ***(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    if ( v68 != CAnimation::GetPrimitivesCount )
      goto LABEL_172;
    v66 = (unsigned __int64 (__fastcall ***)(CAnimation *))v66[2];
    v68 = (*v66)[4];
    if ( v68 != CSharedSectionAnimationPrimitiveBuffer::GetCount )
    {
      if ( v68 == CPayloadedAnimationPrimitiveBuffer::GetCount )
      {
        v69 = CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v66);
        goto LABEL_73;
      }
LABEL_172:
      v69 = v68((CAnimation *)v66);
      goto LABEL_73;
    }
    v69 = *((_DWORD *)v66 + 6) >> 5;
LABEL_73:
    if ( !v69 )
      goto LABEL_211;
    v70 = *(unsigned __int64 (__fastcall ****)(CAnimation *))v7;
    v71 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(**(_QWORD **)v7 + 8LL);
    if ( v71 != CAnimation::GetPrimitive )
      goto LABEL_170;
    v70 = (unsigned __int64 (__fastcall ***)(CAnimation *))v70[2];
    v71 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v70)[3];
    if ( v71 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    {
      v72 = v70[2];
      v73 = *((unsigned int *)v70 + 7);
      v74 = *((unsigned int *)v72 + 12);
      if ( v73 < v74 && *((unsigned int *)v70 + 6) <= v74 - v73 )
      {
        v75 = v72[7];
        if ( v75 )
        {
          v76 = (const struct DwmAnimationPrimitive *)((char *)v75 + v73);
          if ( (unsigned __int64 (__fastcall *)(CAnimation *))((char *)v75 + v73) )
            goto LABEL_80;
        }
      }
LABEL_211:
      v76 = 0LL;
      goto LABEL_80;
    }
    if ( v71 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
      v76 = CPayloadedAnimationPrimitiveBuffer::GetPrimitive((CPayloadedAnimationPrimitiveBuffer *)v70, 0);
    else
LABEL_170:
      v76 = v71((CAnimation *)v70, 0);
LABEL_80:
    switch ( *(_DWORD *)v63 )
    {
      case 3:
        v107 = *(_QWORD *)(v63 + 16);
        if ( v107 )
          v108 = (v125 - *(_QWORD *)(v63 + 8)) % v107;
        else
          v108 = 0LL;
        v67 = *(_QWORD *)(v63 + 8) + v108 - v107;
        if ( v67 < *((_QWORD *)v76 + 1) )
          v67 = *(__int64 *)(v63 + 8);
        break;
      case 5:
        v116 = *(_QWORD *)(v63 + 8);
        v117 = v125 - v116;
        if ( v125 - v116 > v116 - *((_QWORD *)v76 + 1) )
          v117 = *(_QWORD *)(v63 + 8) - *((_QWORD *)v76 + 1);
        v67 = v116 - v117;
        break;
      case 6:
        v67 = *(__int64 *)(v63 + 8);
        break;
    }
    v64 = v67;
    v125 = v67;
    if ( *(_QWORD *)(v63 + 8) < v67 )
    {
LABEL_216:
      AnimationValue = 0;
      v83 = 0;
      goto LABEL_106;
    }
    v61 = v119;
    v63 -= 32LL;
    if ( *(_QWORD *)(v63 + 8) > v67 )
    {
      while ( v63 != v119 )
      {
        v63 -= 32LL;
        if ( *(_QWORD *)(v63 + 8) <= v67 )
          goto LABEL_67;
      }
      goto LABEL_218;
    }
  }
  switch ( v65 )
  {
    case 1:
      v77 = *(unsigned __int64 (__fastcall **)(CAnimation *))(**(_QWORD **)v7 + 24LL);
      if ( v77 == CAnimation::GetQPCFrequency )
        v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 - 72LL) + 312LL);
      else
        v78 = v77(*(CAnimation **)v7);
      v79 = v64 - *(_QWORD *)(v63 + 8);
      v80 = (double)(int)v78;
      if ( v78 < 0 )
        v80 = v80 + 1.844674407370955e19;
      v81 = (double)(int)v79 / v80;
      v82 = *(float *)(v63 + 16) * (v81 * v81) * v81
          + *(float *)(v63 + 20) * (v81 * v81)
          + *(float *)(v63 + 24) * v81
          + *(float *)(v63 + 28);
      break;
    case 2:
      v82 = CAnimationInterpolator::InterpolateSinusoidal(v7, (const struct DwmAnimationPrimitive *)v63, v64);
      break;
    case 4:
      v82 = *(float *)(v63 + 16);
      break;
    default:
      goto LABEL_218;
  }
  if ( !_finite(v82) )
    goto LABEL_218;
  v83 = (char)v130;
  v9 = v82;
  v122 = v82;
  LOBYTE(v128) = (_BYTE)v130;
LABEL_97:
  if ( AnimationValue )
  {
    v84 = *(CPayloadedAnimationPrimitiveBuffer **)v7;
    v85 = *(char (__fastcall **)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(**(_QWORD **)v7 + 16LL);
    if ( v85 == CAnimation::GetHandoffData )
    {
      v86 = *((_QWORD *)v84 + 16);
      AnimationValue = 1;
      if ( !v86 )
        goto LABEL_100;
      v113 = *((_QWORD *)v84 + 4);
      if ( *(_QWORD *)(v86 + 120) > v113 )
        goto LABEL_100;
      v114 = *((_QWORD *)v84 + 18);
      if ( (*((_BYTE *)v84 + 8) & 0x20) == 0 )
        v114 += v113 - *((_QWORD *)v84 + 19);
      AnimationValue = CAnimationInterpolator::GetAnimationValue(
                         (CAnimationInterpolator *)(v86 + 248),
                         v114,
                         (float *)v84 + 34,
                         0LL);
      if ( AnimationValue )
      {
        v115 = *((_QWORD *)v84 + 16);
        if ( v115 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v115 + 16LL))(*((_QWORD *)v84 + 16));
          *((_QWORD *)v84 + 16) = 0LL;
        }
        v83 = v128;
LABEL_100:
        v123 = *((_DWORD *)v84 + 28);
        v124 = *((float *)v84 + 34);
        v126 = *((_QWORD *)v84 + 15);
        if ( (*((_BYTE *)v84 + 8) & 0x40) == 0 )
        {
          if ( *((_DWORD *)v84 + 49) )
          {
            v109 = *((_DWORD *)v84 + 48);
            if ( v109 )
            {
              v110 = *((_DWORD *)v84 + 34);
              v128 = *((_DWORD *)v84 + 49);
              v111 = *((_QWORD *)v84 - 9);
              v129 = v109;
              CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v111 + 1128) + 56LL), &v128, 1LL, 1LL, &unk_18016DC12, v110);
              *((_BYTE *)v84 + 8) |= 0x40u;
            }
          }
        }
      }
    }
    else
    {
      AnimationValue = v85(
                         *(CAnimation **)v7,
                         (enum DwmAnimationHandoffType::Enum *)&v123,
                         &v124,
                         (unsigned __int64 *)&v126);
    }
    if ( AnimationValue )
    {
      if ( v123 )
      {
        AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue(
                                 (__int64)v7,
                                 v121,
                                 v9,
                                 v123,
                                 v124,
                                 v126,
                                 &v122);
        v9 = v122;
        AnimationValue = AdjustedHandoffValue;
      }
      if ( AnimationValue )
        v118 = v9;
    }
  }
LABEL_106:
  *((_BYTE *)v2 + 56) &= ~4u;
  *((_BYTE *)v2 + 56) |= 4 * (v83 & 1);
  v87 = v121;
  if ( AnimationValue )
  {
    v88 = *((_QWORD *)v2 - 3);
    v89 = 0;
    v128 = 0;
    *(double *)&v125 = (double)(int)v121 / (double)(int)*(_QWORD *)(v88 + 312);
    if ( *((_DWORD *)v2 + 8) )
    {
      v90 = CTranslateTransform::SetProperty;
      v91 = CRotateTransform::SetProperty;
      v92 = CPrimitiveColor::SetProperty;
      while ( 1 )
      {
        v93 = *((_QWORD *)v2 + 1);
        v94 = 16LL * v89;
        v95 = *(double **)(v94 + v93);
        v96 = *(_DWORD *)(v94 + v93 + 8);
        v97 = *(__int64 (__fastcall **)(double *, int, int, float *))(*(_QWORD *)v95 + 80LL);
        if ( v97 != CEffectGroup::SetProperty )
          break;
        if ( v96 || (v98 = v95 + 7, v95 == (double *)-56LL) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x67u);
LABEL_124:
          v92 = CPrimitiveColor::SetProperty;
          v91 = CRotateTransform::SetProperty;
          v90 = CTranslateTransform::SetProperty;
          goto LABEL_125;
        }
        if ( *v98 != v118 )
        {
          *v98 = v118;
          v99 = *((_DWORD *)v95 + 8) ^ ((unsigned __int8)*((_DWORD *)v95 + 8) ^ (unsigned __int8)(((_DWORD)v95[4] & 0xFE)
                                                                                                + 2)) & 6;
          *((_DWORD *)v95 + 8) = v99;
          if ( (v99 & 6) == 2 )
          {
            if ( (*(unsigned int (__fastcall **)(double *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v95 + 96LL))(
                   v95,
                   0LL,
                   0LL,
                   CPrimitiveColor::SetProperty) )
            {
              v100 = CPtrArrayBase::GetCount((CPtrArrayBase *)(v95 + 3));
              if ( v100 )
              {
                v101 = 0LL;
                v102 = v100;
                do
                {
                  v103 = CPtrArrayBase::operator[]((__int64 *)v95 + 3, v101);
                  v130 = *(void (__fastcall **)(double *, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v95 + 64LL);
                  if ( (char *)v130 == (char *)CResource::NotifyListenerOfChange )
                    CResource::NotifyListenerOfChange(v95, v103, 0LL, 0LL);
                  else
                    v130(v95, v103, 0LL, 0LL);
                  ++v101;
                  --v102;
                }
                while ( v102 );
                v89 = v128;
              }
            }
          }
          (*(void (__fastcall **)(double *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64 (__fastcall *)(double *, int, int, float *), __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(*(_QWORD *)v95 + 72LL))(
            v95,
            v90,
            v91,
            v92);
          *((_DWORD *)v95 + 8) ^= ((unsigned __int8)*((_DWORD *)v95 + 8) ^ (unsigned __int8)(2
                                                                                           * (*((_DWORD *)v95 + 8) >> 1)
                                                                                           - 2)) & 6;
          goto LABEL_124;
        }
LABEL_125:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          Template_xxxqf(
            *((_QWORD *)v2 + 1),
            (unsigned int)CTranslateTransform::SetProperty,
            v125,
            (_DWORD)v2 - 40,
            *(_QWORD *)(v94 + *((_QWORD *)v2 + 1)),
            *(_DWORD *)(v94 + *((_QWORD *)v2 + 1) + 8),
            SLOBYTE(v118));
          v90 = CTranslateTransform::SetProperty;
          v91 = CRotateTransform::SetProperty;
          v92 = CPrimitiveColor::SetProperty;
        }
        v128 = ++v89;
        if ( v89 >= *((_DWORD *)v2 + 8) )
        {
          v87 = v121;
          goto LABEL_129;
        }
      }
      if ( (char *)v97 == (char *)CTranslateTransform::SetProperty )
      {
        CTranslateTransform::SetProperty(v95, v96, 18LL, &v118);
      }
      else if ( v97 == CRotateTransform::SetProperty )
      {
        CRotateTransform::SetProperty(v95, v96, 18, &v118);
      }
      else if ( (char *)v97 == (char *)CPrimitiveColor::SetProperty )
      {
        CPrimitiveColor::SetProperty(v95, v96, 18LL, &v118);
      }
      else if ( v97 == CScaleTransform::SetProperty )
      {
        CScaleTransform::SetProperty(v95, v96, 18, &v118);
      }
      else if ( v97 == CRotateTransform3D::SetProperty )
      {
        CRotateTransform3D::SetProperty(v95, v96, 18, &v118);
      }
      else
      {
        v97(v95, v96, 18, &v118);
      }
      goto LABEL_124;
    }
  }
LABEL_129:
  v104 = (char *)v2 - 40;
  if ( *((_DWORD *)v2 + 61) && *((_DWORD *)v104 + 70) && *((_DWORD *)v104 + 42) < *((_DWORD *)v104 + 40) )
  {
    do
    {
      v105 = *((_QWORD *)v104 + 17);
      v106 = 2LL * *((unsigned int *)v104 + 42);
      if ( *(_QWORD *)(v105 + 16LL * *((unsigned int *)v104 + 42)) > v87 )
        break;
      v128 = *((_DWORD *)v104 + 71);
      v129 = *((_DWORD *)v104 + 70);
      CoreUICallSend(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v104 + 2) + 1128LL) + 56LL),
        &v128,
        1LL,
        0LL,
        &unk_18016DC0E,
        *(_DWORD *)(v105 + 8 * v106 + 8));
      ++*((_DWORD *)v104 + 42);
    }
    while ( *((_DWORD *)v104 + 42) < *((_DWORD *)v104 + 40) );
    v2 = this;
  }
  if ( (*((_BYTE *)v2 + 56) & 0xC) == 4 )
    CAnimation::EndAnimation((CAnimation *)v104);
  return 1;
}

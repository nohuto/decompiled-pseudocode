/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00408B8
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00189C0 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C004121C (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C004349C (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00435A8 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00436B0 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C003EBB8 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00405E0 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@I@Z @ 0x1C004BA08 (--0CInteractionMarshaler@DirectComposition@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00E7DEC (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  char *v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  void **v12; // rax
  int v13; // edi
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  struct DirectComposition::CResourceMarshaler *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  char *v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  char *v30; // rax
  char *v31; // rax
  struct DirectComposition::CResourceMarshaler *v32; // rax
  char *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  unsigned int v37; // edx
  struct DirectComposition::CResourceMarshaler *v38; // rax
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // edx
  struct DirectComposition::CResourceMarshaler *v44; // rax
  struct DirectComposition::CResourceMarshaler *v45; // rax
  unsigned int v46; // edx
  unsigned int v47; // edx
  struct DirectComposition::CResourceMarshaler *v48; // rax
  struct DirectComposition::CResourceMarshaler *v49; // rax
  struct DirectComposition::CResourceMarshaler *v50; // rax
  struct DirectComposition::CResourceMarshaler *v51; // rax
  unsigned int v52; // edx
  struct DirectComposition::CResourceMarshaler *v53; // rax
  struct DirectComposition::CResourceMarshaler *v54; // rax
  unsigned int v55; // edx
  unsigned int v56; // edx
  struct DirectComposition::CResourceMarshaler *v57; // rax
  DirectComposition::CInteractionMarshaler *v58; // rax
  __int64 v59; // rax
  struct DirectComposition::CResourceMarshaler *v60; // rax
  struct DirectComposition::CResourceMarshaler *v61; // rax
  unsigned int v62; // edx
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  struct DirectComposition::CResourceMarshaler *v67; // rax
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // edx
  struct DirectComposition::CResourceMarshaler *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // edx
  struct DirectComposition::CResourceMarshaler *v77; // rax
  struct DirectComposition::CResourceMarshaler *v78; // rax
  char *v79; // rax
  void **v80; // rax
  char *v81; // rax
  struct DirectComposition::CResourceMarshaler *v82; // rax
  unsigned int v83; // edx
  unsigned int v84; // edx
  struct DirectComposition::CResourceMarshaler *v85; // rax
  struct DirectComposition::CResourceMarshaler *v86; // rax
  struct DirectComposition::CResourceMarshaler *v87; // rax
  struct DirectComposition::CResourceMarshaler *v88; // rax
  struct DirectComposition::CResourceMarshaler *v89; // rax
  struct DirectComposition::CResourceMarshaler *v90; // rax
  struct DirectComposition::CResourceMarshaler *v91; // rax
  struct DirectComposition::CResourceMarshaler *v92; // rax
  unsigned int v93; // edx
  unsigned int v94; // edx
  struct DirectComposition::CResourceMarshaler *v95; // rax
  struct DirectComposition::CResourceMarshaler *v96; // rax
  struct DirectComposition::CResourceMarshaler *v97; // rax
  struct DirectComposition::CResourceMarshaler *v98; // rax
  struct DirectComposition::CResourceMarshaler *v99; // rax
  struct DirectComposition::CResourceMarshaler *v100; // rax
  struct DirectComposition::CResourceMarshaler *v101; // rax
  struct DirectComposition::CResourceMarshaler *v102; // rax
  struct DirectComposition::CResourceMarshaler *v103; // rax
  struct DirectComposition::CResourceMarshaler *v104; // rax
  struct DirectComposition::CResourceMarshaler *v105; // rax
  char *v106; // rax
  char *v107; // rax
  unsigned int v108; // edx
  unsigned int v109; // edx
  unsigned int v110; // edx
  unsigned int v111; // edx
  unsigned int v112; // edx
  unsigned int v113; // edx
  struct DirectComposition::CResourceMarshaler *v114; // rax
  struct DirectComposition::CResourceMarshaler *v115; // rax
  struct DirectComposition::CResourceMarshaler *v116; // rax
  char *v117; // rax
  struct DirectComposition::CResourceMarshaler *v118; // rax
  struct DirectComposition::CResourceMarshaler *v119; // rax
  char *v120; // rax
  struct DirectComposition::CResourceMarshaler *v121; // rax
  struct DirectComposition::CResourceMarshaler *v122; // rax
  struct DirectComposition::CResourceMarshaler *v123; // rax
  _QWORD *v124; // rax
  _QWORD *v125; // rbx
  struct DirectComposition::CResourceMarshaler *v126; // rax
  DirectComposition::CInteractionTrackerMarshaler *v127; // rax
  struct DirectComposition::CResourceMarshaler *v128; // rax
  char *v129; // rax
  struct DirectComposition::CResourceMarshaler *v130; // rax
  char *v131; // rax
  unsigned int v132; // edx
  unsigned int v133; // edx
  unsigned int v134; // edx
  unsigned int v135; // edx
  unsigned int v136; // edx
  unsigned int v137; // edx
  unsigned int v138; // edx
  struct DirectComposition::CResourceMarshaler *v139; // rax
  struct DirectComposition::CResourceMarshaler *v140; // rax
  struct DirectComposition::CResourceMarshaler *v141; // rax
  struct DirectComposition::CResourceMarshaler *v142; // rax
  char *v143; // rax
  char *v144; // rax
  char *v145; // rax
  char *v146; // rax

  v5 = 0LL;
  if ( a2 <= 0x41 )
  {
    if ( a2 == 65 )
    {
      v49 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
      v11 = v49;
      if ( !v49 )
        return (unsigned int)-1073741801;
      memset(v49, 0, 0x70uLL);
      v12 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
      *(_QWORD *)((char *)v11 + 20) = 1LL;
      goto LABEL_11;
    }
    if ( a2 <= 0x1C )
    {
      if ( a2 == 28 )
      {
        v60 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = v60;
        if ( !v60 )
          return (unsigned int)-1073741801;
        memset(v60, 0, 0x68uLL);
        v12 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      if ( a2 > 0x12 )
      {
        v62 = a2 - 19;
        if ( v62 )
        {
          v63 = v62 - 1;
          if ( v63 )
          {
            v64 = v63 - 1;
            if ( v64 )
            {
              v65 = v64 - 1;
              if ( v65 )
              {
                v66 = v65 - 1;
                if ( v66 )
                {
                  v93 = v66 - 2;
                  if ( v93 )
                  {
                    v94 = v93 - 1;
                    if ( v94 )
                    {
                      if ( v94 != 1 )
                        return (unsigned int)-1073741811;
                      v95 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL);
                      v11 = v95;
                      if ( !v95 )
                        return (unsigned int)-1073741801;
                      memset(v95, 0, 0x58uLL);
                      v12 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
                      *(_QWORD *)((char *)v11 + 20) = 1LL;
                    }
                    else
                    {
                      v96 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
                      v11 = v96;
                      if ( !v96 )
                        return (unsigned int)-1073741801;
                      memset(v96, 0, 0x50uLL);
                      v12 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
                      *(_QWORD *)((char *)v11 + 20) = 1LL;
                    }
                  }
                  else
                  {
                    v97 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                    v11 = v97;
                    if ( !v97 )
                      return (unsigned int)-1073741801;
                    memset(v97, 0, 0x48uLL);
                    v12 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
                    *(_QWORD *)((char *)v11 + 20) = 1LL;
                  }
                  goto LABEL_11;
                }
                v67 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
                v11 = v67;
                if ( !v67 )
                  return (unsigned int)-1073741801;
                memset(v67, 0, 0x88uLL);
                v12 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
              }
              else
              {
                v98 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
                v11 = v98;
                if ( !v98 )
                  return (unsigned int)-1073741801;
                memset(v98, 0, 0x68uLL);
                v12 = &DirectComposition::CBlendEffectMarshaler::`vftable';
              }
            }
            else
            {
              v78 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
              v11 = v78;
              if ( !v78 )
                return (unsigned int)-1073741801;
              memset(v78, 0, 0x68uLL);
              v12 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
            }
          }
          else
          {
            v99 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xA8uLL);
            v11 = v99;
            if ( !v99 )
              return (unsigned int)-1073741801;
            memset(v99, 0, 0xA8uLL);
            v12 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
          }
        }
        else
        {
          v100 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
          v11 = v100;
          if ( !v100 )
            return (unsigned int)-1073741801;
          memset(v100, 0, 0x88uLL);
          v12 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
        }
      }
      else if ( a2 == 18 )
      {
        v92 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL);
        v11 = v92;
        if ( !v92 )
          return (unsigned int)-1073741801;
        memset(v92, 0, 0x78uLL);
        v12 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
      }
      else
      {
        v52 = a2 - 8;
        if ( !v52 )
        {
          v53 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = v53;
          if ( !v53 )
            return (unsigned int)-1073741801;
          memset(v53, 0, 0x38uLL);
          v12 = &DirectComposition::CEffectGroupMarshaler::`vftable';
          *(_QWORD *)((char *)v11 + 20) = 1LL;
          goto LABEL_11;
        }
        v68 = v52 - 2;
        if ( v68 )
        {
          v69 = v68 - 1;
          if ( v69 )
          {
            v70 = v69 - 1;
            if ( v70 )
            {
              v71 = v70 - 1;
              if ( v71 )
              {
                v72 = v71 - 1;
                if ( v72 )
                {
                  v83 = v72 - 1;
                  if ( v83 )
                  {
                    v84 = v83 - 1;
                    if ( v84 )
                    {
                      if ( v84 != 1 )
                        return (unsigned int)-1073741811;
                      v85 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
                      v11 = v85;
                      if ( !v85 )
                        return (unsigned int)-1073741801;
                      memset(v85, 0, 0x70uLL);
                      v12 = &DirectComposition::CFloodEffectMarshaler::`vftable';
                    }
                    else
                    {
                      v86 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
                      v11 = v86;
                      if ( !v86 )
                        return (unsigned int)-1073741801;
                      memset(v86, 0, 0x88uLL);
                      v12 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
                    }
                  }
                  else
                  {
                    v87 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
                    v11 = v87;
                    if ( !v87 )
                      return (unsigned int)-1073741801;
                    memset(v87, 0, 0x68uLL);
                    v12 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
                  }
                }
                else
                {
                  v73 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL);
                  v11 = v73;
                  if ( !v73 )
                    return (unsigned int)-1073741801;
                  memset(v73, 0, 0x78uLL);
                  v12 = &DirectComposition::CShadowEffectMarshaler::`vftable';
                }
              }
              else
              {
                v88 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
                v11 = v88;
                if ( !v88 )
                  return (unsigned int)-1073741801;
                memset(v88, 0, 0x68uLL);
                v12 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
              }
            }
            else
            {
              v89 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
              v11 = v89;
              if ( !v89 )
                return (unsigned int)-1073741801;
              memset(v89, 0, 0xB8uLL);
              v12 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
            }
          }
          else
          {
            v90 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
            v11 = v90;
            if ( !v90 )
              return (unsigned int)-1073741801;
            memset(v90, 0, 0x70uLL);
            v12 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
          }
        }
        else
        {
          v91 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
          v11 = v91;
          if ( !v91 )
            return (unsigned int)-1073741801;
          memset(v91, 0, 0x70uLL);
          v12 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
        }
      }
      *(_QWORD *)((char *)v11 + 20) = 1LL;
      *((_QWORD *)v11 + 5) = 0LL;
      *((_BYTE *)v11 + 48) = 0;
      *((_DWORD *)v11 + 22) = 0;
      *((_QWORD *)v11 + 10) = 0LL;
      *((_QWORD *)v11 + 9) = 0LL;
      *((_QWORD *)v11 + 8) = 0LL;
      *((_DWORD *)v11 + 14) = 0;
      goto LABEL_11;
    }
    if ( a2 > 0x2A )
    {
      v39 = a2 - 44;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 14;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                v55 = v43 - 1;
                if ( v55 )
                {
                  v56 = v55 - 1;
                  if ( v56 )
                  {
                    if ( v56 != 1 )
                      return (unsigned int)-1073741811;
                    v57 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
                    v11 = v57;
                    if ( !v57 )
                      return (unsigned int)-1073741801;
                    memset(v57, 0, 0x50uLL);
                    v12 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
                    *(_QWORD *)((char *)v11 + 20) = 1LL;
                  }
                  else
                  {
                    v105 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                    v11 = v105;
                    if ( !v105 )
                      return (unsigned int)-1073741801;
                    memset(v105, 0, 0x48uLL);
                    v12 = &DirectComposition::CSkewTransformMarshaler::`vftable';
                    *(_QWORD *)((char *)v11 + 20) = 1LL;
                  }
                }
                else
                {
                  v61 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                  v11 = v61;
                  if ( !v61 )
                    return (unsigned int)-1073741801;
                  memset(v61, 0, 0x48uLL);
                  v12 = &DirectComposition::CRotateTransformMarshaler::`vftable';
                  *(_QWORD *)((char *)v11 + 20) = 1LL;
                }
              }
              else
              {
                v44 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                v11 = v44;
                if ( !v44 )
                  return (unsigned int)-1073741801;
                memset(v44, 0, 0x48uLL);
                v12 = &DirectComposition::CScaleTransformMarshaler::`vftable';
                *(_QWORD *)((char *)v11 + 20) = 1LL;
              }
            }
            else
            {
              v50 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL);
              v11 = v50;
              if ( !v50 )
                return (unsigned int)-1073741801;
              memset(v50, 0, 0x40uLL);
              v12 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
              *(_QWORD *)((char *)v11 + 20) = 1LL;
            }
          }
          else
          {
            v54 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
            v11 = v54;
            if ( !v54 )
              return (unsigned int)-1073741801;
            memset(v54, 0, 0x48uLL);
            v12 = &DirectComposition::CTransformGroupMarshaler::`vftable';
            *(_QWORD *)((char *)v11 + 20) = 1LL;
          }
LABEL_11:
          *(_QWORD *)v11 = v12;
          goto LABEL_12;
        }
        v106 = (char *)Win32AllocPoolWithQuotaZInit(0x40uLL);
        v11 = (struct DirectComposition::CResourceMarshaler *)v106;
        if ( !v106 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v106 + 20) = 1LL;
        v80 = &DirectComposition::CAnalogTextureTargetMarshaler::`vftable';
      }
      else
      {
        v107 = (char *)Win32AllocPoolWithQuotaZInit(0x40uLL);
        v11 = (struct DirectComposition::CResourceMarshaler *)v107;
        if ( !v107 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v107 + 20) = 1LL;
        v80 = &DirectComposition::CAnalogExclusiveViewMarshaler::`vftable';
      }
    }
    else
    {
      if ( a2 == 42 )
      {
        v104 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
        v11 = v104;
        if ( !v104 )
          return (unsigned int)-1073741801;
        memset(v104, 0, 0x30uLL);
        v12 = &DirectComposition::CAnalogCompositorMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      v15 = a2 - 29;
      if ( !v15 )
      {
        v103 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = v103;
        if ( !v103 )
          return (unsigned int)-1073741801;
        memset(v103, 0, 0x68uLL);
        v12 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v32 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xB8uLL);
        v11 = v32;
        if ( !v32 )
          return (unsigned int)-1073741801;
        memset(v32, 0, 0xB8uLL);
        v12 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v102 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v11 = v102;
        if ( !v102 )
          return (unsigned int)-1073741801;
        memset(v102, 0, 0x48uLL);
        v12 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v19 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xF0uLL);
        v11 = v19;
        if ( !v19 )
          return (unsigned int)-1073741801;
        memset(v19, 0, 0xF0uLL);
        v12 = &DirectComposition::CVisualMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      v74 = v18 - 1;
      if ( !v74 )
      {
        v101 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x100uLL);
        v11 = v101;
        if ( !v101 )
          return (unsigned int)-1073741801;
        memset(v101, 0, 0x100uLL);
        v12 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
        goto LABEL_11;
      }
      v75 = v74 - 6;
      if ( v75 )
      {
        v76 = v75 - 1;
        if ( v76 )
        {
          if ( v76 != 1 )
            return (unsigned int)-1073741811;
          v77 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = v77;
          if ( !v77 )
            return (unsigned int)-1073741801;
          memset(v77, 0, 0x38uLL);
          v12 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
          *(_QWORD *)((char *)v11 + 20) = 1LL;
          goto LABEL_11;
        }
        v79 = (char *)Win32AllocPoolWithQuotaZInit(0x70uLL);
        v11 = (struct DirectComposition::CResourceMarshaler *)v79;
        if ( !v79 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v79 + 20) = 1LL;
        v80 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
      }
      else
      {
        v81 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v11 = (struct DirectComposition::CResourceMarshaler *)v81;
        if ( !v81 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v81 + 20) = 1LL;
        v80 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
      }
    }
    *(_QWORD *)v11 = v80;
    *((_DWORD *)v11 + 4) |= 0x20u;
    goto LABEL_12;
  }
  if ( a2 <= 0x64 )
  {
    if ( a2 == 100 )
    {
      v126 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x40uLL);
      v11 = v126;
      if ( !v126 )
        return (unsigned int)-1073741801;
      memset(v126, 0, 0x40uLL);
      v12 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
      *(_QWORD *)((char *)v11 + 20) = 1LL;
    }
    else if ( a2 <= 0x58 )
    {
      if ( a2 == 88 )
      {
        v33 = (char *)Win32AllocPoolWithQuotaZInit(0x100uLL);
        v5 = v33;
        if ( v33 )
        {
          memset(v33, 0, 0x100uLL);
          *(_QWORD *)(v5 + 36) = 1LL;
          *((_QWORD *)v5 + 7) = 0LL;
          v5[64] = 0;
          *(_QWORD *)v5 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
          *((_QWORD *)v5 + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
        }
        else
        {
          v5 = 0LL;
        }
        if ( !v5 )
          return (unsigned int)-1073741801;
        v34 = (_QWORD *)((char *)this + 344);
        v35 = *((_QWORD *)this + 43);
        v36 = v5 + 128;
        if ( *(DirectComposition::CApplicationChannel **)(v35 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 344) )
          __fastfail(3u);
        *v36 = v35;
        v11 = (struct DirectComposition::CResourceMarshaler *)(v5 + 16);
        *((_QWORD *)v5 + 17) = v34;
        *(_QWORD *)(v35 + 8) = v36;
        *v34 = v36;
        goto LABEL_12;
      }
      v46 = a2 - 67;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( v47 )
        {
          v108 = v47 - 10;
          if ( v108 )
          {
            v109 = v108 - 1;
            if ( v109 )
            {
              v110 = v109 - 1;
              if ( v110 )
              {
                v111 = v110 - 1;
                if ( v111 )
                {
                  v112 = v111 - 1;
                  if ( v112 )
                  {
                    v113 = v112 - 1;
                    if ( v113 )
                    {
                      if ( v113 != 1 )
                        return (unsigned int)-1073741811;
                      v114 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL);
                      v11 = v114;
                      if ( !v114 )
                        return (unsigned int)-1073741801;
                      memset(v114, 0, 0x58uLL);
                      v12 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
                      *(_QWORD *)((char *)v11 + 20) = 1LL;
                    }
                    else
                    {
                      v115 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
                      v11 = v115;
                      if ( !v115 )
                        return (unsigned int)-1073741801;
                      memset(v115, 0, 0x70uLL);
                      v12 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
                      *(_QWORD *)((char *)v11 + 20) = 1LL;
                    }
                  }
                  else
                  {
                    v116 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
                    v11 = v116;
                    if ( !v116 )
                      return (unsigned int)-1073741801;
                    memset(v116, 0, 0x38uLL);
                    v12 = &DirectComposition::CMaskBrushMarshaler::`vftable';
                    *(_QWORD *)((char *)v11 + 20) = 1LL;
                  }
                }
                else
                {
                  v117 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL);
                  v11 = (struct DirectComposition::CResourceMarshaler *)v117;
                  if ( !v117 )
                    return (unsigned int)-1073741801;
                  *(_QWORD *)(v117 + 20) = 1LL;
                  v12 = &DirectComposition::CEffectBrushMarshaler::`vftable';
                }
              }
              else
              {
                v118 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL);
                v11 = v118;
                if ( !v118 )
                  return (unsigned int)-1073741801;
                memset(v118, 0, 0x58uLL);
                v12 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
                *(_QWORD *)((char *)v11 + 20) = 1LL;
              }
            }
            else
            {
              v119 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x28uLL);
              v11 = v119;
              if ( !v119 )
                return (unsigned int)-1073741801;
              memset(v119, 0, 0x28uLL);
              v12 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
              *(_QWORD *)((char *)v11 + 20) = 1LL;
            }
          }
          else
          {
            v120 = (char *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v11 = (struct DirectComposition::CResourceMarshaler *)v120;
            if ( !v120 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v120 + 20) = 1LL;
            v12 = &DirectComposition::CColorBrushMarshaler::`vftable';
          }
        }
        else
        {
          v48 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL);
          v11 = v48;
          if ( !v48 )
            return (unsigned int)-1073741801;
          memset(v48, 0, 0x78uLL);
          v12 = &DirectComposition::CRectangleClipMarshaler::`vftable';
          *(_QWORD *)((char *)v11 + 20) = 1LL;
        }
      }
      else
      {
        v121 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
        v11 = v121;
        if ( !v121 )
          return (unsigned int)-1073741801;
        memset(v121, 0, 0x50uLL);
        v12 = &DirectComposition::CClipGroupMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
      }
    }
    else
    {
      v24 = a2 - 89;
      if ( !v24 )
      {
        v124 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v125 = v124;
        if ( v124 )
        {
          memset(v124, 0, 0x40uLL);
          *(_QWORD *)((char *)v125 + 36) = 1LL;
          *v125 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
          v125[2] = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
        }
        else
        {
          v125 = 0LL;
        }
        if ( !v125 )
          return (unsigned int)-1073741801;
        v11 = (struct DirectComposition::CResourceMarshaler *)(v125 + 2);
        goto LABEL_12;
      }
      v25 = v24 - 3;
      if ( v25 )
      {
        v26 = v25 - 2;
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
                v37 = v29 - 1;
                if ( v37 )
                {
                  if ( v37 != 1 )
                    return (unsigned int)-1073741811;
                  v122 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
                  v11 = v122;
                  if ( !v122 )
                    return (unsigned int)-1073741801;
                  memset(v122, 0, 0x38uLL);
                  v12 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
                  *(_QWORD *)((char *)v11 + 20) = 1LL;
                }
                else
                {
                  v38 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xC8uLL);
                  v11 = v38;
                  if ( !v38 )
                    return (unsigned int)-1073741801;
                  memset(v38, 0, 0xC8uLL);
                  v12 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
                  *(_QWORD *)((char *)v11 + 20) = 1LL;
                  *((_QWORD *)v11 + 5) = 0LL;
                  *((_BYTE *)v11 + 48) = 0;
                }
              }
              else
              {
                v30 = (char *)Win32AllocPoolWithQuotaZInit(0xC8uLL);
                v11 = (struct DirectComposition::CResourceMarshaler *)v30;
                if ( !v30 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(v30 + 20) = 1LL;
                *((_QWORD *)v30 + 5) = 0LL;
                v30[48] = 0;
                v12 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
              }
            }
            else
            {
              v82 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
              v11 = v82;
              if ( !v82 )
                return (unsigned int)-1073741801;
              memset(v82, 0, 0x30uLL);
              v12 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
              *(_QWORD *)((char *)v11 + 20) = 1LL;
            }
          }
          else
          {
            v51 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
            v11 = v51;
            if ( !v51 )
              return (unsigned int)-1073741801;
            memset(v51, 0, 0x38uLL);
            v12 = &DirectComposition::CSharedSectionMarshaler::`vftable';
            *(_QWORD *)((char *)v11 + 20) = 1LL;
          }
        }
        else
        {
          v123 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x30uLL);
          v11 = v123;
          if ( !v123 )
            return (unsigned int)-1073741801;
          memset(v123, 0, 0x30uLL);
          v12 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
          *(_QWORD *)((char *)v11 + 20) = 1LL;
        }
      }
      else
      {
        v45 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
        v11 = v45;
        if ( !v45 )
          return (unsigned int)-1073741801;
        memset(v45, 0, 0x38uLL);
        v12 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
        *(_QWORD *)((char *)v11 + 20) = 1LL;
      }
    }
    goto LABEL_11;
  }
  if ( a2 > 0x72 )
  {
    v132 = a2 - 115;
    if ( !v132 )
    {
      v146 = (char *)Win32AllocPoolWithQuotaZInit(0xC8uLL);
      v11 = (struct DirectComposition::CResourceMarshaler *)v146;
      if ( v146 )
      {
        *(_QWORD *)(v146 + 20) = 1LL;
        *(_QWORD *)v146 = &DirectComposition::CPencilMarshaler::`vftable';
        *((_QWORD *)v146 + 12) = 0LL;
        *((_QWORD *)v146 + 15) = 0LL;
        *((_QWORD *)v146 + 18) = &DirectComposition::CDCompDynamicArray<D2D1_PENCIL_SEGMENT>::`vftable';
        v146[160] = 1;
        *((_QWORD *)v146 + 23) = 20LL;
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_12;
    }
    v133 = v132 - 1;
    if ( v133 )
    {
      v134 = v133 - 2;
      if ( !v134 )
      {
        v144 = (char *)Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = (struct DirectComposition::CResourceMarshaler *)v144;
        if ( !v144 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v144 + 20) = 1LL;
        *(_QWORD *)v144 = &DirectComposition::CDropShadowMarshaler::`vftable';
        *((_DWORD *)v144 + 20) = 1091567616;
        *((_DWORD *)v144 + 24) = 1065353216;
        *((_DWORD *)v144 + 19) = 1065353216;
        goto LABEL_12;
      }
      v135 = v134 - 1;
      if ( v135 )
      {
        v136 = v135 - 1;
        if ( v136 )
        {
          v137 = v136 - 1;
          if ( v137 )
          {
            v138 = v137 - 1;
            if ( v138 )
            {
              if ( v138 != 1 )
                return (unsigned int)-1073741811;
              v139 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x90uLL);
              v11 = v139;
              if ( !v139 )
                return (unsigned int)-1073741801;
              memset(v139, 0, 0x90uLL);
              v12 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
              *(_QWORD *)((char *)v11 + 20) = 1LL;
            }
            else
            {
              v140 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
              v11 = v140;
              if ( !v140 )
                return (unsigned int)-1073741801;
              memset(v140, 0, 0x70uLL);
              v12 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
              *(_QWORD *)((char *)v11 + 20) = 1LL;
            }
          }
          else
          {
            v141 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x60uLL);
            v11 = v141;
            if ( !v141 )
              return (unsigned int)-1073741801;
            memset(v141, 0, 0x60uLL);
            v12 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
            *(_QWORD *)((char *)v11 + 20) = 1LL;
          }
        }
        else
        {
          v142 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
          v11 = v142;
          if ( !v142 )
            return (unsigned int)-1073741801;
          memset(v142, 0, 0x48uLL);
          v12 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
          *(_QWORD *)((char *)v11 + 20) = 1LL;
        }
      }
      else
      {
        v143 = (char *)Win32AllocPoolWithQuotaZInit(0x38uLL);
        v11 = (struct DirectComposition::CResourceMarshaler *)v143;
        if ( !v143 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v143 + 20) = 1LL;
        v12 = &DirectComposition::CCompositionLightMarshaler::`vftable';
      }
    }
    else
    {
      v145 = (char *)Win32AllocPoolWithQuotaZInit(0x48uLL);
      v11 = (struct DirectComposition::CResourceMarshaler *)v145;
      if ( !v145 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v145 + 20) = 1LL;
      v12 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
    }
    goto LABEL_11;
  }
  if ( a2 == 114 )
  {
    v131 = (char *)Win32AllocPoolWithQuotaZInit(0x98uLL);
    v11 = (struct DirectComposition::CResourceMarshaler *)v131;
    if ( !v131 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v131 + 20) = 1LL;
    *(_QWORD *)v131 = &DirectComposition::CInkMarshaler::`vftable';
    *((_QWORD *)v131 + 12) = &DirectComposition::CDCompDynamicArray<D2D1_INK_BEZIER_SEGMENT>::`vftable';
    v131[112] = 1;
    *((_QWORD *)v131 + 17) = 36LL;
    goto LABEL_12;
  }
  v6 = a2 - 101;
  if ( !v6 )
  {
    v130 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x80uLL);
    v11 = v130;
    if ( !v130 )
      return (unsigned int)-1073741801;
    memset(v130, 0, 0x80uLL);
    v12 = &DirectComposition::CSnapshotMarshaler::`vftable';
    *(_QWORD *)((char *)v11 + 20) = 1LL;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v58 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0xF8uLL);
    if ( !v58 )
      return (unsigned int)-1073741801;
    v59 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v58, *((_DWORD *)this + 7));
    goto LABEL_92;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v129 = (char *)Win32AllocPoolWithQuotaZInit(0x30uLL);
    v11 = (struct DirectComposition::CResourceMarshaler *)v129;
    if ( !v129 )
      return (unsigned int)-1073741801;
    v129[44] &= 0xC0u;
    *(_QWORD *)(v129 + 20) = 1LL;
    *(_QWORD *)v129 = &DirectComposition::CManipulationMarshaler::`vftable';
    goto LABEL_12;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    v10 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xD0uLL);
    v11 = v10;
    if ( !v10 )
      return (unsigned int)-1073741801;
    memset(v10, 0, 0xD0uLL);
    v12 = &DirectComposition::CExpressionMarshaler::`vftable';
    *(_QWORD *)((char *)v11 + 20) = 1LL;
    goto LABEL_11;
  }
  v20 = v9 - 1;
  if ( !v20 )
  {
    v31 = (char *)Win32AllocPoolWithQuotaZInit(0x108uLL);
    v11 = (struct DirectComposition::CResourceMarshaler *)v31;
    if ( !v31 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v31 + 20) = 1LL;
    *(_QWORD *)v31 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
    *((_DWORD *)v31 + 47) = 1065353216;
    goto LABEL_12;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v128 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
    v11 = v128;
    if ( !v128 )
      return (unsigned int)-1073741801;
    memset(v128, 0, 0x88uLL);
    v12 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
    *(_QWORD *)((char *)v11 + 20) = 1LL;
    goto LABEL_11;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v127 = (DirectComposition::CInteractionTrackerMarshaler *)Win32AllocPoolWithQuotaZInit(0x148uLL);
    if ( !v127 )
      return (unsigned int)-1073741801;
    v59 = DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v127);
LABEL_92:
    v11 = (struct DirectComposition::CResourceMarshaler *)v59;
    goto LABEL_12;
  }
  if ( v22 != 4 )
    return (unsigned int)-1073741811;
  v23 = (char *)Win32AllocPoolWithQuotaZInit(0x78uLL);
  v11 = (struct DirectComposition::CResourceMarshaler *)v23;
  if ( !v23 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(v23 + 20) = 1LL;
  *(_QWORD *)v23 = &DirectComposition::CPropertyBagMarshaler::`vftable';
  *((_QWORD *)v23 + 8) = &DirectComposition::CDCompDynamicArray<PropertyUpdate>::`vftable';
  v23[80] = 1;
  *((_QWORD *)v23 + 13) = 16LL;
LABEL_12:
  if ( !v11 )
    return (unsigned int)-1073741801;
  v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)v11 + 8LL))(
          v11,
          (char *)this + 480);
  if ( v13 < 0 || (v13 = DirectComposition::CApplicationChannel::RegisterResource(this, v11), v13 < 0) )
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v11 + 96LL))(v11, 1LL);
  }
  else
  {
    if ( v5 )
      DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        this,
        *((struct DirectComposition::CAnimationTimeList **)v5 + 10));
    *a3 = v11;
  }
  return (unsigned int)v13;
}

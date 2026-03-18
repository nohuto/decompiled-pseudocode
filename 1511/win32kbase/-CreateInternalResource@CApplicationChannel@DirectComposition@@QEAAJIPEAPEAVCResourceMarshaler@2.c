/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B9E4
 * Callers:
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C0016E60 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C0016F60 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEA.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0017030 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     NtDCompositionCreateResource @ 0x1C0019C90 (NtDCompositionCreateResource.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C001D2F4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z.c)
 * Callees:
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C001ABA4 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DF84 (-InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@I@Z @ 0x1C004EDA4 (--0CInteractionMarshaler@DirectComposition@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  __int64 v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // edx
  __int64 v8; // rax
  _DWORD *v9; // rbx
  void **v10; // rax
  __int64 v11; // rax
  int inserted; // edi
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // edx
  DirectComposition::CInteractionMarshaler *v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // edx
  unsigned int v54; // edx
  __int64 v55; // rax
  void **v56; // rax
  unsigned int v57; // edx
  unsigned int v58; // edx
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // edx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned int v103; // edx
  unsigned int v104; // edx
  unsigned int v105; // edx
  unsigned int v106; // edx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( a2 <= 0x2C )
  {
    if ( a2 == 44 )
    {
      v91 = Win32AllocPoolWithQuotaZInit(0x40uLL);
      v9 = (_DWORD *)v91;
      if ( !v91 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v91 + 20) = 1;
      v56 = &DirectComposition::CAnalogTextureTargetMarshaler::`vftable';
    }
    else
    {
      if ( a2 <= 0x17 )
      {
        if ( a2 == 23 )
        {
          v69 = Win32AllocPoolWithQuotaZInit(0x80uLL);
          v9 = (_DWORD *)v69;
          if ( !v69 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v69 + 20) = 1;
          *(_QWORD *)(v69 + 40) = 0LL;
          *(_DWORD *)(v69 + 48) = 0;
          *(_QWORD *)(v69 + 56) = 0LL;
          *(_QWORD *)(v69 + 64) = 0LL;
          *(_QWORD *)(v69 + 72) = 0LL;
          *(_DWORD *)(v69 + 80) = 0;
          v10 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
          goto LABEL_16;
        }
        if ( a2 > 0x10 )
        {
          v63 = a2 - 17;
          if ( !v63 )
          {
            v84 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v9 = (_DWORD *)v84;
            if ( !v84 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v84 + 20) = 1;
            *(_QWORD *)(v84 + 40) = 0LL;
            *(_DWORD *)(v84 + 48) = 0;
            *(_QWORD *)(v84 + 56) = 0LL;
            *(_QWORD *)(v84 + 64) = 0LL;
            *(_QWORD *)(v84 + 72) = 0LL;
            *(_DWORD *)(v84 + 80) = 0;
            v10 = &DirectComposition::CFloodEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v64 = v63 - 1;
          if ( !v64 )
          {
            v83 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v9 = (_DWORD *)v83;
            if ( !v83 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v83 + 20) = 1;
            *(_QWORD *)(v83 + 40) = 0LL;
            *(_DWORD *)(v83 + 48) = 0;
            *(_QWORD *)(v83 + 56) = 0LL;
            *(_QWORD *)(v83 + 64) = 0LL;
            *(_QWORD *)(v83 + 72) = 0LL;
            *(_DWORD *)(v83 + 80) = 0;
            v10 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v65 = v64 - 1;
          if ( !v65 )
          {
            v82 = Win32AllocPoolWithQuotaZInit(0x80uLL);
            v9 = (_DWORD *)v82;
            if ( !v82 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v82 + 20) = 1;
            *(_QWORD *)(v82 + 40) = 0LL;
            *(_DWORD *)(v82 + 48) = 0;
            *(_QWORD *)(v82 + 56) = 0LL;
            *(_QWORD *)(v82 + 64) = 0LL;
            *(_QWORD *)(v82 + 72) = 0LL;
            *(_DWORD *)(v82 + 80) = 0;
            v10 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v66 = v65 - 1;
          if ( !v66 )
          {
            v81 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
            v9 = (_DWORD *)v81;
            if ( !v81 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v81 + 20) = 1;
            *(_QWORD *)(v81 + 40) = 0LL;
            *(_DWORD *)(v81 + 48) = 0;
            *(_QWORD *)(v81 + 56) = 0LL;
            *(_QWORD *)(v81 + 64) = 0LL;
            *(_QWORD *)(v81 + 72) = 0LL;
            *(_DWORD *)(v81 + 80) = 0;
            v10 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v67 = v66 - 1;
          if ( !v67 )
          {
            v68 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v9 = (_DWORD *)v68;
            if ( !v68 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v68 + 20) = 1;
            *(_QWORD *)(v68 + 40) = 0LL;
            *(_DWORD *)(v68 + 48) = 0;
            *(_QWORD *)(v68 + 56) = 0LL;
            *(_QWORD *)(v68 + 64) = 0LL;
            *(_QWORD *)(v68 + 72) = 0LL;
            *(_DWORD *)(v68 + 80) = 0;
            v10 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          if ( v67 == 1 )
          {
            v80 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v9 = (_DWORD *)v80;
            if ( !v80 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v80 + 20) = 1;
            *(_QWORD *)(v80 + 40) = 0LL;
            *(_DWORD *)(v80 + 48) = 0;
            *(_QWORD *)(v80 + 56) = 0LL;
            *(_QWORD *)(v80 + 64) = 0LL;
            *(_QWORD *)(v80 + 72) = 0LL;
            *(_DWORD *)(v80 + 80) = 0;
            v10 = &DirectComposition::CBlendEffectMarshaler::`vftable';
            goto LABEL_16;
          }
        }
        else
        {
          if ( a2 == 16 )
          {
            v79 = Win32AllocPoolWithQuotaZInit(0x80uLL);
            v9 = (_DWORD *)v79;
            if ( !v79 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v79 + 20) = 1;
            *(_QWORD *)(v79 + 40) = 0LL;
            *(_DWORD *)(v79 + 48) = 0;
            *(_QWORD *)(v79 + 56) = 0LL;
            *(_QWORD *)(v79 + 64) = 0LL;
            *(_QWORD *)(v79 + 72) = 0LL;
            *(_DWORD *)(v79 + 80) = 0;
            v10 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v33 = a2 - 8;
          if ( !v33 )
          {
            v34 = Win32AllocPoolWithQuotaZInit(0x38uLL);
            v9 = (_DWORD *)v34;
            if ( !v34 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v34 + 20) = 1;
            v10 = &DirectComposition::CEffectGroupMarshaler::`vftable';
            goto LABEL_16;
          }
          v57 = v33 - 2;
          if ( !v57 )
          {
            v78 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v9 = (_DWORD *)v78;
            if ( !v78 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v78 + 20) = 1;
            *(_QWORD *)(v78 + 40) = 0LL;
            *(_DWORD *)(v78 + 48) = 0;
            *(_QWORD *)(v78 + 56) = 0LL;
            *(_QWORD *)(v78 + 64) = 0LL;
            *(_QWORD *)(v78 + 72) = 0LL;
            *(_DWORD *)(v78 + 80) = 0;
            v10 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v58 = v57 - 1;
          if ( !v58 )
          {
            v77 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v9 = (_DWORD *)v77;
            if ( !v77 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v77 + 20) = 1;
            *(_QWORD *)(v77 + 40) = 0LL;
            *(_DWORD *)(v77 + 48) = 0;
            *(_QWORD *)(v77 + 56) = 0LL;
            *(_QWORD *)(v77 + 64) = 0LL;
            *(_QWORD *)(v77 + 72) = 0LL;
            *(_DWORD *)(v77 + 80) = 0;
            v10 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v59 = v58 - 1;
          if ( !v59 )
          {
            v76 = Win32AllocPoolWithQuotaZInit(0xB0uLL);
            v9 = (_DWORD *)v76;
            if ( !v76 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v76 + 20) = 1;
            *(_QWORD *)(v76 + 40) = 0LL;
            *(_DWORD *)(v76 + 48) = 0;
            *(_QWORD *)(v76 + 56) = 0LL;
            *(_QWORD *)(v76 + 64) = 0LL;
            *(_QWORD *)(v76 + 72) = 0LL;
            *(_DWORD *)(v76 + 80) = 0;
            v10 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v60 = v59 - 1;
          if ( !v60 )
          {
            v75 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v9 = (_DWORD *)v75;
            if ( !v75 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v75 + 20) = 1;
            *(_QWORD *)(v75 + 40) = 0LL;
            *(_DWORD *)(v75 + 48) = 0;
            *(_QWORD *)(v75 + 56) = 0LL;
            *(_QWORD *)(v75 + 64) = 0LL;
            *(_QWORD *)(v75 + 72) = 0LL;
            *(_DWORD *)(v75 + 80) = 0;
            v10 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          v61 = v60 - 1;
          if ( !v61 )
          {
            v62 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v9 = (_DWORD *)v62;
            if ( !v62 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v62 + 20) = 1;
            *(_QWORD *)(v62 + 40) = 0LL;
            *(_DWORD *)(v62 + 48) = 0;
            *(_QWORD *)(v62 + 56) = 0LL;
            *(_QWORD *)(v62 + 64) = 0LL;
            *(_QWORD *)(v62 + 72) = 0LL;
            *(_DWORD *)(v62 + 80) = 0;
            v10 = &DirectComposition::CShadowEffectMarshaler::`vftable';
            goto LABEL_16;
          }
          if ( v61 == 1 )
          {
            v74 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v9 = (_DWORD *)v74;
            if ( !v74 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v74 + 20) = 1;
            *(_QWORD *)(v74 + 40) = 0LL;
            *(_DWORD *)(v74 + 48) = 0;
            *(_QWORD *)(v74 + 56) = 0LL;
            *(_QWORD *)(v74 + 64) = 0LL;
            *(_QWORD *)(v74 + 72) = 0LL;
            *(_DWORD *)(v74 + 80) = 0;
            v10 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
            goto LABEL_16;
          }
        }
        return (unsigned int)-1073741811;
      }
      if ( a2 <= 0x1F )
      {
        if ( a2 == 31 )
        {
          v11 = Win32AllocPoolWithQuotaZInit(0xE0uLL);
          v9 = (_DWORD *)v11;
          if ( v11 )
          {
            *(_DWORD *)(v11 + 20) = 1;
            v10 = &DirectComposition::CVisualMarshaler::`vftable';
            goto LABEL_16;
          }
          return (unsigned int)-1073741801;
        }
        v37 = a2 - 25;
        if ( !v37 )
        {
          v45 = Win32AllocPoolWithQuotaZInit(0x48uLL);
          v9 = (_DWORD *)v45;
          if ( !v45 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v45 + 20) = 1;
          v10 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
          goto LABEL_16;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
          v86 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v9 = (_DWORD *)v86;
          if ( !v86 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v86 + 20) = 1;
          v10 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
          goto LABEL_16;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          v48 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v9 = (_DWORD *)v48;
          if ( !v48 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v48 + 20) = 1;
          v10 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
          goto LABEL_16;
        }
        v40 = v39 - 1;
        if ( !v40 )
        {
          v41 = Win32AllocPoolWithQuotaZInit(0x68uLL);
          v9 = (_DWORD *)v41;
          if ( !v41 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v41 + 20) = 1;
          v10 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
          goto LABEL_16;
        }
        v46 = v40 - 1;
        if ( !v46 )
        {
          v85 = Win32AllocPoolWithQuotaZInit(0xB8uLL);
          v9 = (_DWORD *)v85;
          if ( !v85 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v85 + 20) = 1;
          v10 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
          goto LABEL_16;
        }
        if ( v46 == 1 )
        {
          v47 = Win32AllocPoolWithQuotaZInit(0x48uLL);
          v9 = (_DWORD *)v47;
          if ( !v47 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v47 + 20) = 1;
          v10 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
          goto LABEL_16;
        }
        return (unsigned int)-1073741811;
      }
      v52 = a2 - 32;
      if ( !v52 )
      {
        v90 = Win32AllocPoolWithQuotaZInit(0xE8uLL);
        v9 = (_DWORD *)v90;
        if ( !v90 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v90 + 20) = 1;
        v10 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
        goto LABEL_16;
      }
      v53 = v52 - 6;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          v70 = v54 - 1;
          if ( !v70 )
          {
            v71 = Win32AllocPoolWithQuotaZInit(0x38uLL);
            v9 = (_DWORD *)v71;
            if ( !v71 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v71 + 20) = 1;
            v10 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
            goto LABEL_16;
          }
          v87 = v70 - 1;
          if ( !v87 )
          {
            v89 = Win32AllocPoolWithQuotaZInit(0x30uLL);
            v9 = (_DWORD *)v89;
            if ( !v89 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v89 + 20) = 1;
            v10 = &DirectComposition::CAnalogCompositorMarshaler::`vftable';
            goto LABEL_16;
          }
          if ( v87 != 2 )
            return (unsigned int)-1073741811;
          v88 = Win32AllocPoolWithQuotaZInit(0x40uLL);
          v9 = (_DWORD *)v88;
          if ( !v88 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v88 + 20) = 1;
          v56 = &DirectComposition::CAnalogExclusiveViewMarshaler::`vftable';
        }
        else
        {
          v55 = Win32AllocPoolWithQuotaZInit(0x40uLL);
          v9 = (_DWORD *)v55;
          if ( !v55 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v55 + 20) = 1;
          v56 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
        }
      }
      else
      {
        v72 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v9 = (_DWORD *)v72;
        if ( !v72 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v72 + 20) = 1;
        v56 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
      }
    }
    *(_QWORD *)v9 = v56;
    v9[4] |= 0x40u;
  }
  else if ( a2 > 0x57 )
  {
    if ( a2 <= 0x5F )
    {
      if ( a2 == 95 )
      {
        v102 = Win32AllocPoolWithQuotaZInit(0x38uLL);
        v9 = (_DWORD *)v102;
        if ( !v102 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v102 + 20) = 1;
        v10 = &DirectComposition::CSnapshotMarshaler::`vftable';
        goto LABEL_16;
      }
      v14 = a2 - 89;
      if ( !v14 )
      {
        v101 = Win32AllocPoolWithQuotaZInit(0x30uLL);
        v9 = (_DWORD *)v101;
        if ( !v101 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v101 + 20) = 1;
        v10 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
        goto LABEL_16;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v43 = Win32AllocPoolWithQuotaZInit(0x38uLL);
        v9 = (_DWORD *)v43;
        if ( !v43 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v43 + 20) = 1;
        v10 = &DirectComposition::CSharedSectionMarshaler::`vftable';
        goto LABEL_16;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v73 = Win32AllocPoolWithQuotaZInit(0x30uLL);
        v9 = (_DWORD *)v73;
        if ( !v73 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v73 + 20) = 1;
        v10 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
        goto LABEL_16;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = Win32AllocPoolWithQuotaZInit(0xC0uLL);
        v9 = (_DWORD *)v18;
        if ( !v18 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v18 + 20) = 1;
        *(_QWORD *)(v18 + 40) = 0LL;
        v10 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
        goto LABEL_16;
      }
      v98 = v17 - 1;
      if ( !v98 )
      {
        v100 = Win32AllocPoolWithQuotaZInit(0x38uLL);
        v9 = (_DWORD *)v100;
        if ( !v100 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v100 + 20) = 1;
        v10 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
        goto LABEL_16;
      }
      if ( v98 == 1 )
      {
        v99 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v9 = (_DWORD *)v99;
        if ( !v99 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v99 + 20) = 1;
        v10 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
        goto LABEL_16;
      }
      return (unsigned int)-1073741811;
    }
    v50 = a2 - 96;
    if ( v50 )
    {
      v103 = v50 - 2;
      if ( !v103 )
      {
        v111 = Win32AllocPoolWithQuotaZInit(0x98uLL);
        v9 = (_DWORD *)v111;
        if ( !v111 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v111 + 20) = 1;
        v10 = &DirectComposition::CExpressionMarshaler::`vftable';
        goto LABEL_16;
      }
      v104 = v103 - 1;
      if ( !v104 )
      {
        v110 = Win32AllocPoolWithQuotaZInit(0xB0uLL);
        v9 = (_DWORD *)v110;
        if ( !v110 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v110 + 20) = 1;
        v10 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
        goto LABEL_16;
      }
      v105 = v104 - 4;
      if ( v105 )
      {
        v106 = v105 - 2;
        if ( v106 )
        {
          if ( v106 == 1 )
          {
            v107 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v9 = (_DWORD *)v107;
            if ( !v107 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v107 + 20) = 1;
            v10 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
            goto LABEL_16;
          }
          return (unsigned int)-1073741811;
        }
        v108 = Win32AllocPoolWithQuotaZInit(0x98uLL);
        v9 = (_DWORD *)v108;
        if ( !v108 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v108 + 20) = 1;
        *(_QWORD *)v108 = &DirectComposition::CInkMarshaler::`vftable';
        *(_QWORD *)(v108 + 96) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
        *(_BYTE *)(v108 + 112) = 1;
        *(_QWORD *)(v108 + 136) = 36LL;
      }
      else
      {
        v109 = Win32AllocPoolWithQuotaZInit(0x80uLL);
        v9 = (_DWORD *)v109;
        if ( !v109 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v109 + 20) = 1;
        *(_QWORD *)v109 = &DirectComposition::CPropertyBagMarshaler::`vftable';
        *(_QWORD *)(v109 + 72) = &DirectComposition::CDCompDynamicArray<PropertyUpdate>::`vftable';
        *(_BYTE *)(v109 + 88) = 1;
        *(_QWORD *)(v109 + 112) = 16LL;
      }
    }
    else
    {
      v51 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0xE0uLL);
      if ( v51 )
        v9 = (_DWORD *)DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v51, *((_DWORD *)this + 7));
      else
        v9 = 0LL;
    }
  }
  else
  {
    if ( a2 == 87 )
    {
      v35 = Win32AllocPoolWithQuotaZInit(0x38uLL);
      v9 = (_DWORD *)v35;
      if ( !v35 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v35 + 20) = 1;
      v10 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
      goto LABEL_16;
    }
    if ( a2 <= 0x42 )
    {
      if ( a2 == 66 )
      {
        v93 = Win32AllocPoolWithQuotaZInit(0x50uLL);
        v9 = (_DWORD *)v93;
        if ( !v93 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v93 + 20) = 1;
        v10 = &DirectComposition::CClipGroupMarshaler::`vftable';
        goto LABEL_16;
      }
      v6 = a2 - 58;
      if ( !v6 )
      {
        v27 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v9 = (_DWORD *)v27;
        if ( !v27 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v27 + 20) = 1;
        v10 = &DirectComposition::CTransformGroupMarshaler::`vftable';
        goto LABEL_16;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        v8 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v9 = (_DWORD *)v8;
        if ( v8 )
        {
          *(_DWORD *)(v8 + 20) = 1;
          v10 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
LABEL_16:
          *(_QWORD *)v9 = v10;
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
      v28 = v7 - 1;
      if ( !v28 )
      {
        v42 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v9 = (_DWORD *)v42;
        if ( !v42 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v42 + 20) = 1;
        v10 = &DirectComposition::CScaleTransformMarshaler::`vftable';
        goto LABEL_16;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        v49 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v9 = (_DWORD *)v49;
        if ( !v49 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v49 + 20) = 1;
        v10 = &DirectComposition::CRotateTransformMarshaler::`vftable';
        goto LABEL_16;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        v92 = Win32AllocPoolWithQuotaZInit(0x48uLL);
        v9 = (_DWORD *)v92;
        if ( !v92 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v92 + 20) = 1;
        v10 = &DirectComposition::CSkewTransformMarshaler::`vftable';
        goto LABEL_16;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        v32 = Win32AllocPoolWithQuotaZInit(0x50uLL);
        v9 = (_DWORD *)v32;
        if ( !v32 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v32 + 20) = 1;
        v10 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
        goto LABEL_16;
      }
      if ( v31 == 1 )
      {
        v44 = Win32AllocPoolWithQuotaZInit(0x70uLL);
        v9 = (_DWORD *)v44;
        if ( !v44 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v44 + 20) = 1;
        v10 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
        goto LABEL_16;
      }
      return (unsigned int)-1073741811;
    }
    v19 = a2 - 67;
    if ( !v19 )
    {
      v36 = Win32AllocPoolWithQuotaZInit(0x78uLL);
      v9 = (_DWORD *)v36;
      if ( !v36 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v36 + 20) = 1;
      v10 = &DirectComposition::CRectangleClipMarshaler::`vftable';
      goto LABEL_16;
    }
    v20 = v19 - 10;
    if ( !v20 )
    {
      v97 = Win32AllocPoolWithQuotaZInit(0x38uLL);
      v9 = (_DWORD *)v97;
      if ( !v97 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v97 + 20) = 1;
      v10 = &DirectComposition::CColorBrushMarshaler::`vftable';
      goto LABEL_16;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v96 = Win32AllocPoolWithQuotaZInit(0x50uLL);
      v9 = (_DWORD *)v96;
      if ( !v96 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v96 + 20) = 1;
      v10 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
      goto LABEL_16;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v95 = Win32AllocPoolWithQuotaZInit(0x48uLL);
      v9 = (_DWORD *)v95;
      if ( !v95 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v95 + 20) = 1;
      v10 = &DirectComposition::CEffectBrushMarshaler::`vftable';
      goto LABEL_16;
    }
    v23 = v22 - 4;
    if ( v23 )
    {
      if ( v23 != 1 )
        return (unsigned int)-1073741811;
      v94 = Win32AllocPoolWithQuotaZInit(0x40uLL);
      if ( v94 )
      {
        *(_DWORD *)(v94 + 36) = 1;
        *(_QWORD *)v94 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
        *(_QWORD *)(v94 + 16) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
      }
      else
      {
        v94 = 0LL;
      }
      if ( !v94 )
        return (unsigned int)-1073741801;
      v9 = (_DWORD *)(v94 + 16);
    }
    else
    {
      v24 = Win32AllocPoolWithQuotaZInit(0xF8uLL);
      v5 = v24;
      if ( v24 )
      {
        *(_DWORD *)(v24 + 36) = 1;
        *(_QWORD *)(v24 + 56) = 0LL;
        *(_QWORD *)v24 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
        *(_QWORD *)(v24 + 16) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
      }
      else
      {
        v5 = 0LL;
      }
      if ( !v5 )
        return (unsigned int)-1073741801;
      v25 = *((_QWORD *)this + 42);
      v26 = v5 + 120;
      *(_QWORD *)(v5 + 120) = v25;
      *(_QWORD *)(v5 + 128) = (char *)this + 336;
      if ( *(DirectComposition::CApplicationChannel **)(v25 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
        __fastfail(3u);
      *(_QWORD *)(v25 + 8) = v26;
      v9 = (_DWORD *)(v5 + 16);
      *((_QWORD *)this + 42) = v26;
    }
  }
LABEL_17:
  if ( !v9 )
    return (unsigned int)-1073741801;
  inserted = (*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v9 + 8LL))(v9, (char *)this + 472);
  if ( inserted < 0 )
    goto LABEL_202;
  inserted = DirectComposition::CLinearHandleTableBase::InsertObject(
               (DirectComposition::CApplicationChannel *)((char *)this + 56),
               v9,
               &v112);
  if ( inserted >= 0 )
  {
    v9[6] = v112;
    if ( *((int *)this + 6) <= 2 )
    {
      *((_QWORD *)v9 + 1) = *((_QWORD *)this + 50);
      *((_QWORD *)this + 50) = v9;
    }
  }
  if ( inserted < 0 )
  {
LABEL_202:
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v9 + 96LL))(v9, 1LL);
  }
  else
  {
    if ( v5 )
      DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        this,
        *(struct DirectComposition::CAnimationTimeList **)(v5 + 72));
    *a3 = (struct DirectComposition::CResourceMarshaler *)v9;
  }
  return (unsigned int)inserted;
}

/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E7C0
 * Callers:
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C0029FE0 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C002A0D8 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEA.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAPEAVCInteractionMarshaler@2@@Z @ 0x1C002A1A0 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAPEAVCIn.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C00300F4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z.c)
 * Callees:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@I@Z @ 0x1C001CE24 (--0CInteractionMarshaler@DirectComposition@@QEAA@I@Z.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C002D9DC (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C002E3F8 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rdx
  __int64 v10; // rax
  DirectComposition::CInteractionMarshaler *v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // rax
  void **v14; // rax
  int v15; // edi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // edx
  DirectComposition::CInteractionMarshaler *v48; // rax
  unsigned int v49; // edx
  unsigned int v50; // edx
  __int64 v51; // rax
  void **v52; // rax
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // edx
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
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned int v95; // edx
  unsigned int v96; // edx
  unsigned int v97; // edx
  unsigned int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax

  v5 = 0LL;
  if ( a2 <= 0x36 )
  {
    if ( a2 == 54 )
    {
      v19 = Win32AllocPoolWithQuotaZInit(0x38uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v19;
      if ( !v19 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v19 + 20) = 1;
      v14 = &DirectComposition::CTransformGroupMarshaler::`vftable';
      goto LABEL_18;
    }
    if ( a2 <= 0x16 )
    {
      if ( a2 == 22 )
      {
        v80 = Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v80;
        if ( !v80 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v80 + 20) = 1;
        *(_QWORD *)(v80 + 40) = 0LL;
        *(_BYTE *)(v80 + 48) = 0;
        *(_DWORD *)(v80 + 56) = 0;
        *(_QWORD *)(v80 + 64) = 0LL;
        *(_QWORD *)(v80 + 72) = 0LL;
        *(_QWORD *)(v80 + 80) = 0LL;
        *(_DWORD *)(v80 + 88) = 0;
        v14 = &DirectComposition::CBlendEffectMarshaler::`vftable';
      }
      else if ( a2 > 0xF )
      {
        v69 = a2 - 16;
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
                v73 = v72 - 1;
                if ( v73 )
                {
                  if ( v73 != 1 )
                    return (unsigned int)-1073741811;
                  v74 = Win32AllocPoolWithQuotaZInit(0x68uLL);
                  v11 = (DirectComposition::CInteractionMarshaler *)v74;
                  if ( !v74 )
                    return (unsigned int)-1073741801;
                  *(_DWORD *)(v74 + 20) = 1;
                  *(_QWORD *)(v74 + 40) = 0LL;
                  *(_BYTE *)(v74 + 48) = 0;
                  *(_DWORD *)(v74 + 56) = 0;
                  *(_QWORD *)(v74 + 64) = 0LL;
                  *(_QWORD *)(v74 + 72) = 0LL;
                  *(_QWORD *)(v74 + 80) = 0LL;
                  *(_DWORD *)(v74 + 88) = 0;
                  v14 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
                }
                else
                {
                  v75 = Win32AllocPoolWithQuotaZInit(0xA8uLL);
                  v11 = (DirectComposition::CInteractionMarshaler *)v75;
                  if ( !v75 )
                    return (unsigned int)-1073741801;
                  *(_DWORD *)(v75 + 20) = 1;
                  *(_QWORD *)(v75 + 40) = 0LL;
                  *(_BYTE *)(v75 + 48) = 0;
                  *(_DWORD *)(v75 + 56) = 0;
                  *(_QWORD *)(v75 + 64) = 0LL;
                  *(_QWORD *)(v75 + 72) = 0LL;
                  *(_QWORD *)(v75 + 80) = 0LL;
                  *(_DWORD *)(v75 + 88) = 0;
                  v14 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
                }
              }
              else
              {
                v76 = Win32AllocPoolWithQuotaZInit(0x88uLL);
                v11 = (DirectComposition::CInteractionMarshaler *)v76;
                if ( !v76 )
                  return (unsigned int)-1073741801;
                *(_DWORD *)(v76 + 20) = 1;
                *(_QWORD *)(v76 + 40) = 0LL;
                *(_BYTE *)(v76 + 48) = 0;
                *(_DWORD *)(v76 + 56) = 0;
                *(_QWORD *)(v76 + 64) = 0LL;
                *(_QWORD *)(v76 + 72) = 0LL;
                *(_QWORD *)(v76 + 80) = 0LL;
                *(_DWORD *)(v76 + 88) = 0;
                v14 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
              }
            }
            else
            {
              v77 = Win32AllocPoolWithQuotaZInit(0x78uLL);
              v11 = (DirectComposition::CInteractionMarshaler *)v77;
              if ( !v77 )
                return (unsigned int)-1073741801;
              *(_DWORD *)(v77 + 20) = 1;
              *(_QWORD *)(v77 + 40) = 0LL;
              *(_BYTE *)(v77 + 48) = 0;
              *(_DWORD *)(v77 + 56) = 0;
              *(_QWORD *)(v77 + 64) = 0LL;
              *(_QWORD *)(v77 + 72) = 0LL;
              *(_QWORD *)(v77 + 80) = 0LL;
              *(_DWORD *)(v77 + 88) = 0;
              v14 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
            }
          }
          else
          {
            v78 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v11 = (DirectComposition::CInteractionMarshaler *)v78;
            if ( !v78 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v78 + 20) = 1;
            *(_QWORD *)(v78 + 40) = 0LL;
            *(_BYTE *)(v78 + 48) = 0;
            *(_DWORD *)(v78 + 56) = 0;
            *(_QWORD *)(v78 + 64) = 0LL;
            *(_QWORD *)(v78 + 72) = 0LL;
            *(_QWORD *)(v78 + 80) = 0LL;
            *(_DWORD *)(v78 + 88) = 0;
            v14 = &DirectComposition::CFloodEffectMarshaler::`vftable';
          }
        }
        else
        {
          v79 = Win32AllocPoolWithQuotaZInit(0x88uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v79;
          if ( !v79 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v79 + 20) = 1;
          *(_QWORD *)(v79 + 40) = 0LL;
          *(_BYTE *)(v79 + 48) = 0;
          *(_DWORD *)(v79 + 56) = 0;
          *(_QWORD *)(v79 + 64) = 0LL;
          *(_QWORD *)(v79 + 72) = 0LL;
          *(_QWORD *)(v79 + 80) = 0LL;
          *(_DWORD *)(v79 + 88) = 0;
          v14 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
        }
      }
      else if ( a2 == 15 )
      {
        v68 = Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v68;
        if ( !v68 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v68 + 20) = 1;
        *(_QWORD *)(v68 + 40) = 0LL;
        *(_BYTE *)(v68 + 48) = 0;
        *(_DWORD *)(v68 + 56) = 0;
        *(_QWORD *)(v68 + 64) = 0LL;
        *(_QWORD *)(v68 + 72) = 0LL;
        *(_QWORD *)(v68 + 80) = 0LL;
        *(_DWORD *)(v68 + 88) = 0;
        v14 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
      }
      else
      {
        v30 = a2 - 8;
        if ( !v30 )
        {
          v31 = Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v31;
          if ( !v31 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v31 + 20) = 1;
          v14 = &DirectComposition::CEffectGroupMarshaler::`vftable';
          goto LABEL_18;
        }
        v59 = v30 - 2;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( v60 )
          {
            v61 = v60 - 1;
            if ( v61 )
            {
              v62 = v61 - 1;
              if ( v62 )
              {
                if ( v62 != 1 )
                  return (unsigned int)-1073741811;
                v63 = Win32AllocPoolWithQuotaZInit(0x78uLL);
                v11 = (DirectComposition::CInteractionMarshaler *)v63;
                if ( !v63 )
                  return (unsigned int)-1073741801;
                *(_DWORD *)(v63 + 20) = 1;
                *(_QWORD *)(v63 + 40) = 0LL;
                *(_BYTE *)(v63 + 48) = 0;
                *(_DWORD *)(v63 + 56) = 0;
                *(_QWORD *)(v63 + 64) = 0LL;
                *(_QWORD *)(v63 + 72) = 0LL;
                *(_QWORD *)(v63 + 80) = 0LL;
                *(_DWORD *)(v63 + 88) = 0;
                v14 = &DirectComposition::CShadowEffectMarshaler::`vftable';
              }
              else
              {
                v64 = Win32AllocPoolWithQuotaZInit(0x68uLL);
                v11 = (DirectComposition::CInteractionMarshaler *)v64;
                if ( !v64 )
                  return (unsigned int)-1073741801;
                *(_DWORD *)(v64 + 20) = 1;
                *(_QWORD *)(v64 + 40) = 0LL;
                *(_BYTE *)(v64 + 48) = 0;
                *(_DWORD *)(v64 + 56) = 0;
                *(_QWORD *)(v64 + 64) = 0LL;
                *(_QWORD *)(v64 + 72) = 0LL;
                *(_QWORD *)(v64 + 80) = 0LL;
                *(_DWORD *)(v64 + 88) = 0;
                v14 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
              }
            }
            else
            {
              v65 = Win32AllocPoolWithQuotaZInit(0xB8uLL);
              v11 = (DirectComposition::CInteractionMarshaler *)v65;
              if ( !v65 )
                return (unsigned int)-1073741801;
              *(_DWORD *)(v65 + 20) = 1;
              *(_QWORD *)(v65 + 40) = 0LL;
              *(_BYTE *)(v65 + 48) = 0;
              *(_DWORD *)(v65 + 56) = 0;
              *(_QWORD *)(v65 + 64) = 0LL;
              *(_QWORD *)(v65 + 72) = 0LL;
              *(_QWORD *)(v65 + 80) = 0LL;
              *(_DWORD *)(v65 + 88) = 0;
              v14 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
            }
          }
          else
          {
            v66 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v11 = (DirectComposition::CInteractionMarshaler *)v66;
            if ( !v66 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v66 + 20) = 1;
            *(_QWORD *)(v66 + 40) = 0LL;
            *(_BYTE *)(v66 + 48) = 0;
            *(_DWORD *)(v66 + 56) = 0;
            *(_QWORD *)(v66 + 64) = 0LL;
            *(_QWORD *)(v66 + 72) = 0LL;
            *(_QWORD *)(v66 + 80) = 0LL;
            *(_DWORD *)(v66 + 88) = 0;
            v14 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
          }
        }
        else
        {
          v67 = Win32AllocPoolWithQuotaZInit(0x70uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v67;
          if ( !v67 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v67 + 20) = 1;
          *(_QWORD *)(v67 + 40) = 0LL;
          *(_BYTE *)(v67 + 48) = 0;
          *(_DWORD *)(v67 + 56) = 0;
          *(_QWORD *)(v67 + 64) = 0LL;
          *(_QWORD *)(v67 + 72) = 0LL;
          *(_QWORD *)(v67 + 80) = 0LL;
          *(_DWORD *)(v67 + 88) = 0;
          v14 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
        }
      }
    }
    else
    {
      if ( a2 > 0x1E )
      {
        v12 = a2 - 31;
        if ( !v12 )
        {
          v13 = Win32AllocPoolWithQuotaZInit(0xE8uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v13;
          if ( !v13 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v13 + 20) = 1;
          v14 = &DirectComposition::CVisualMarshaler::`vftable';
          goto LABEL_18;
        }
        v49 = v12 - 6;
        if ( v49 )
        {
          v50 = v49 - 1;
          if ( v50 )
          {
            v54 = v50 - 1;
            if ( v54 )
            {
              if ( v54 != 1 )
                return (unsigned int)-1073741811;
              v85 = Win32AllocPoolWithQuotaZInit(0x50uLL);
              v11 = (DirectComposition::CInteractionMarshaler *)v85;
              if ( !v85 )
                return (unsigned int)-1073741801;
              *(_DWORD *)(v85 + 20) = 1;
              v14 = &DirectComposition::CAnalogTargetMarshaler::`vftable';
            }
            else
            {
              v55 = Win32AllocPoolWithQuotaZInit(0x38uLL);
              v11 = (DirectComposition::CInteractionMarshaler *)v55;
              if ( !v55 )
                return (unsigned int)-1073741801;
              *(_DWORD *)(v55 + 20) = 1;
              v14 = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
            }
            goto LABEL_18;
          }
          v51 = Win32AllocPoolWithQuotaZInit(0x40uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v51;
          if ( !v51 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v51 + 20) = 1;
          v52 = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
        }
        else
        {
          v58 = Win32AllocPoolWithQuotaZInit(0x48uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v58;
          if ( !v58 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v58 + 20) = 1;
          v52 = &DirectComposition::CDesktopTargetMarshaler::`vftable';
        }
        *(_QWORD *)v11 = v52;
        *((_DWORD *)v11 + 4) |= 0x40u;
        goto LABEL_19;
      }
      if ( a2 == 30 )
      {
        v56 = Win32AllocPoolWithQuotaZInit(0x38uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v56;
        if ( !v56 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v56 + 20) = 1;
        v14 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
      }
      else
      {
        v37 = a2 - 23;
        if ( v37 )
        {
          v38 = v37 - 2;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  if ( v41 != 1 )
                    return (unsigned int)-1073741811;
                  v81 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
                  v11 = (DirectComposition::CInteractionMarshaler *)v81;
                  if ( !v81 )
                    return (unsigned int)-1073741801;
                  *(_DWORD *)(v81 + 20) = 1;
                  v14 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
                }
                else
                {
                  v42 = Win32AllocPoolWithQuotaZInit(0x68uLL);
                  v11 = (DirectComposition::CInteractionMarshaler *)v42;
                  if ( !v42 )
                    return (unsigned int)-1073741801;
                  *(_DWORD *)(v42 + 20) = 1;
                  v14 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
                }
              }
              else
              {
                v82 = Win32AllocPoolWithQuotaZInit(0x48uLL);
                v11 = (DirectComposition::CInteractionMarshaler *)v82;
                if ( !v82 )
                  return (unsigned int)-1073741801;
                *(_DWORD *)(v82 + 20) = 1;
                v14 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
              }
            }
            else
            {
              v83 = Win32AllocPoolWithQuotaZInit(0x40uLL);
              v11 = (DirectComposition::CInteractionMarshaler *)v83;
              if ( !v83 )
                return (unsigned int)-1073741801;
              *(_DWORD *)(v83 + 20) = 1;
              v14 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
            }
          }
          else
          {
            v53 = Win32AllocPoolWithQuotaZInit(0x38uLL);
            v11 = (DirectComposition::CInteractionMarshaler *)v53;
            if ( !v53 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v53 + 20) = 1;
            v14 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
          }
        }
        else
        {
          v84 = Win32AllocPoolWithQuotaZInit(0x88uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v84;
          if ( !v84 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v84 + 20) = 1;
          *(_QWORD *)(v84 + 40) = 0LL;
          *(_BYTE *)(v84 + 48) = 0;
          *(_DWORD *)(v84 + 56) = 0;
          *(_QWORD *)(v84 + 64) = 0LL;
          *(_QWORD *)(v84 + 72) = 0LL;
          *(_QWORD *)(v84 + 80) = 0LL;
          *(_DWORD *)(v84 + 88) = 0;
          v14 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
        }
      }
    }
LABEL_18:
    *(_QWORD *)v11 = v14;
    goto LABEL_19;
  }
  if ( a2 <= 0x53 )
  {
    if ( a2 == 83 )
    {
      v57 = Win32AllocPoolWithQuotaZInit(0x30uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v57;
      if ( !v57 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v57 + 20) = 1;
      v14 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
    }
    else if ( a2 <= 0x3E )
    {
      if ( a2 == 62 )
      {
        v87 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v87;
        if ( !v87 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v87 + 20) = 1;
        v14 = &DirectComposition::CClipGroupMarshaler::`vftable';
      }
      else
      {
        v20 = a2 - 55;
        if ( !v20 )
        {
          v21 = Win32AllocPoolWithQuotaZInit(0x30uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v21;
          if ( !v21 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v21 + 20) = 1;
          v14 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
          goto LABEL_18;
        }
        v22 = v20 - 1;
        if ( !v22 )
        {
          v33 = Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v33;
          if ( !v33 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v33 + 20) = 1;
          v14 = &DirectComposition::CScaleTransformMarshaler::`vftable';
          goto LABEL_18;
        }
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              v26 = Win32AllocPoolWithQuotaZInit(0x40uLL);
              v11 = (DirectComposition::CInteractionMarshaler *)v26;
              if ( !v26 )
                return (unsigned int)-1073741801;
              *(_DWORD *)(v26 + 20) = 1;
              v14 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
              goto LABEL_18;
            }
            if ( v25 != 1 )
              return (unsigned int)-1073741811;
            v36 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v11 = (DirectComposition::CInteractionMarshaler *)v36;
            if ( !v36 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v36 + 20) = 1;
            v14 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
          }
          else
          {
            v86 = Win32AllocPoolWithQuotaZInit(0x38uLL);
            v11 = (DirectComposition::CInteractionMarshaler *)v86;
            if ( !v86 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v86 + 20) = 1;
            v14 = &DirectComposition::CSkewTransformMarshaler::`vftable';
          }
        }
        else
        {
          v43 = Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v43;
          if ( !v43 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v43 + 20) = 1;
          v14 = &DirectComposition::CRotateTransformMarshaler::`vftable';
        }
      }
    }
    else
    {
      v6 = a2 - 63;
      if ( !v6 )
      {
        v32 = Win32AllocPoolWithQuotaZInit(0x68uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v32;
        if ( !v32 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v32 + 20) = 1;
        v14 = &DirectComposition::CRectangleClipMarshaler::`vftable';
        goto LABEL_18;
      }
      v7 = v6 - 12;
      if ( !v7 )
      {
        v8 = Win32AllocPoolWithQuotaZInit(0x100uLL);
        v5 = v8;
        if ( v8 )
        {
          *(_DWORD *)(v8 + 36) = 1;
          *(_QWORD *)(v8 + 56) = 0LL;
          *(_BYTE *)(v8 + 64) = 0;
          *(_QWORD *)v8 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
          *(_QWORD *)(v8 + 16) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
        }
        else
        {
          v5 = 0LL;
        }
        if ( !v5 )
          return (unsigned int)-1073741801;
        v9 = *((_QWORD *)this + 42);
        v10 = v5 + 128;
        *(_QWORD *)(v5 + 128) = v9;
        *(_QWORD *)(v5 + 136) = (char *)this + 336;
        if ( *(DirectComposition::CApplicationChannel **)(v9 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
          __fastfail(3u);
        *(_QWORD *)(v9 + 8) = v10;
        v11 = (DirectComposition::CInteractionMarshaler *)(v5 + 16);
        *((_QWORD *)this + 42) = v10;
        goto LABEL_19;
      }
      v27 = v7 - 1;
      if ( !v27 )
      {
        v89 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        if ( v89 )
        {
          *(_DWORD *)(v89 + 36) = 1;
          *(_QWORD *)v89 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
          *(_QWORD *)(v89 + 16) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
        }
        else
        {
          v89 = 0LL;
        }
        if ( !v89 )
          return (unsigned int)-1073741801;
        v11 = (DirectComposition::CInteractionMarshaler *)(v89 + 16);
        goto LABEL_19;
      }
      v28 = v27 - 3;
      if ( !v28 )
      {
        v29 = Win32AllocPoolWithQuotaZInit(0x38uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v29;
        if ( !v29 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v29 + 20) = 1;
        v14 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
        goto LABEL_18;
      }
      v34 = v28 - 2;
      if ( v34 )
      {
        if ( v34 == 1 )
        {
          v35 = Win32AllocPoolWithQuotaZInit(0x38uLL);
          v11 = (DirectComposition::CInteractionMarshaler *)v35;
          if ( !v35 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v35 + 20) = 1;
          v14 = &DirectComposition::CSharedSectionMarshaler::`vftable';
          goto LABEL_18;
        }
        return (unsigned int)-1073741811;
      }
      v88 = Win32AllocPoolWithQuotaZInit(0x30uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v88;
      if ( !v88 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v88 + 20) = 1;
      v14 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
    }
    goto LABEL_18;
  }
  if ( a2 > 0x5B )
  {
    v95 = a2 - 95;
    if ( !v95 )
    {
      v103 = Win32AllocPoolWithQuotaZInit(0x80uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v103;
      if ( v103 )
      {
        *(_DWORD *)(v103 + 20) = 1;
        *(_QWORD *)v103 = &DirectComposition::CPropertyBagMarshaler::`vftable';
        *(_QWORD *)(v103 + 72) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
        *(_BYTE *)(v103 + 88) = 1;
        *(_QWORD *)(v103 + 112) = 16LL;
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_19;
    }
    v96 = v95 - 2;
    if ( v96 )
    {
      v97 = v96 - 1;
      if ( !v97 )
      {
        v101 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v101;
        if ( !v101 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v101 + 20) = 1;
        v14 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
        goto LABEL_18;
      }
      v98 = v97 - 1;
      if ( v98 )
      {
        if ( v98 != 1 )
          return (unsigned int)-1073741811;
        v99 = Win32AllocPoolWithQuotaZInit(0x90uLL);
        v11 = (DirectComposition::CInteractionMarshaler *)v99;
        if ( !v99 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v99 + 20) = 1;
        v14 = &DirectComposition::CPrimitiveMarshaler::`vftable';
        goto LABEL_18;
      }
      v100 = Win32AllocPoolWithQuotaZInit(0x60uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v100;
      if ( !v100 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v100 + 20) = 1;
      *(_QWORD *)v100 = &DirectComposition::CCompiledEffectMarshaler::`vftable';
      *(_DWORD *)(v100 + 56) = 0;
      *(_QWORD *)(v100 + 64) = 0LL;
      *(_QWORD *)(v100 + 72) = 0LL;
      *(_QWORD *)(v100 + 80) = 0LL;
      *(_DWORD *)(v100 + 88) = 0;
    }
    else
    {
      v102 = Win32AllocPoolWithQuotaZInit(0x98uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v102;
      if ( !v102 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v102 + 20) = 1;
      *(_QWORD *)v102 = &DirectComposition::CInkMarshaler::`vftable';
      *(_QWORD *)(v102 + 96) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
      *(_BYTE *)(v102 + 112) = 1;
      *(_QWORD *)(v102 + 136) = 36LL;
    }
  }
  else
  {
    if ( a2 == 91 )
    {
      v94 = Win32AllocPoolWithQuotaZInit(0xB0uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v94;
      if ( !v94 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v94 + 20) = 1;
      v14 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
      goto LABEL_18;
    }
    v17 = a2 - 84;
    if ( !v17 )
    {
      v18 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v18;
      if ( !v18 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v18 + 20) = 1;
      *(_QWORD *)(v18 + 40) = 0LL;
      *(_BYTE *)(v18 + 48) = 0;
      v14 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
      goto LABEL_18;
    }
    v44 = v17 - 1;
    if ( !v44 )
    {
      v93 = Win32AllocPoolWithQuotaZInit(0x38uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v93;
      if ( !v93 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v93 + 20) = 1;
      v14 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
      goto LABEL_18;
    }
    v45 = v44 - 1;
    if ( !v45 )
    {
      v92 = Win32AllocPoolWithQuotaZInit(0x40uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v92;
      if ( !v92 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v92 + 20) = 1;
      v14 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
      goto LABEL_18;
    }
    v46 = v45 - 1;
    if ( !v46 )
    {
      v91 = Win32AllocPoolWithQuotaZInit(0x38uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v91;
      if ( !v91 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v91 + 20) = 1;
      v14 = &DirectComposition::CSnapshotMarshaler::`vftable';
      goto LABEL_18;
    }
    v47 = v46 - 1;
    if ( v47 )
    {
      if ( v47 != 2 )
        return (unsigned int)-1073741811;
      v90 = Win32AllocPoolWithQuotaZInit(0x98uLL);
      v11 = (DirectComposition::CInteractionMarshaler *)v90;
      if ( !v90 )
        return (unsigned int)-1073741801;
      *(_DWORD *)(v90 + 20) = 1;
      v14 = &DirectComposition::CExpressionMarshaler::`vftable';
      goto LABEL_18;
    }
    v48 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0xE0uLL);
    if ( !v48 )
      return (unsigned int)-1073741801;
    v11 = DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v48, *((_DWORD *)this + 7));
  }
LABEL_19:
  if ( !v11 )
    return (unsigned int)-1073741801;
  v15 = (*(__int64 (__fastcall **)(DirectComposition::CInteractionMarshaler *, char *))(*(_QWORD *)v11 + 8LL))(
          v11,
          (char *)this + 472);
  if ( v15 < 0 || (v15 = DirectComposition::CApplicationChannel::RegisterResource(this, v11), v15 < 0) )
  {
    (*(void (__fastcall **)(DirectComposition::CInteractionMarshaler *, __int64))(*(_QWORD *)v11 + 96LL))(v11, 1LL);
  }
  else
  {
    if ( v5 )
      DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        this,
        *(struct DirectComposition::CAnimationTimeList **)(v5 + 80));
    *a3 = v11;
  }
  return (unsigned int)v15;
}

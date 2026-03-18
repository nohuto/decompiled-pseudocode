/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01769E4 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C017DF80 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00067F0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000819C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C00087DC (--0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009F58 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000BA80 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000FB54 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000FB78 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000FB9C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C002B1CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C008F33C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0177AA8 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C0177BC4 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v9; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // r15
  unsigned __int8 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 Container; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int NumPathsFromSource; // eax
  int v32; // eax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v37; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v38; // r8d
  _QWORD *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  DMMVIDPNTARGETMODESET *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  DMMVIDPNTARGETMODESET *v46; // rdi
  DMMVIDPNSOURCEMODE *v47; // rcx
  UINT cx; // ecx
  struct D3DKMDT_HVIDPN__ *v49; // rdx
  int v50; // eax
  __int64 v51; // r14
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  struct DMMVIDPNSOURCEMODESET *v57; // rsi
  _QWORD *v58; // rdi
  __int64 v59; // rdi
  struct DMMVIDPNSOURCEMODESET *v60; // rdi
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  struct DMMVIDPNTARGETMODESET *v67; // rdi
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v76; // [rsp+20h] [rbp-E0h]
  char v77; // [rsp+40h] [rbp-C0h]
  char v78; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v79; // [rsp+44h] [rbp-BCh]
  unsigned int v80; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v81; // [rsp+4Ch] [rbp-B4h]
  struct DMMVIDPNTARGETMODESET *v82; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPNSOURCEMODESET *v83; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v84; // [rsp+60h] [rbp-A0h]
  DMMVIDPNTARGETMODESET *v85; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v86[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  DMMVIDPNTARGETMODESET *v88; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v89[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v90; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v91[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v92[72]; // [rsp+118h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = a4;
  v84 = a4;
  v77 = 0;
  v78 = 0;
  v9 = (unsigned int)a3;
  Path = 0LL;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v91, 0LL, a3);
  v12 = 254LL;
  v79 = D3DKMDT_VPPR_UNPINNED;
  v81 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(254LL);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(1LL);
    WdLogEvent5_WdAssertion(v16);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v89,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v11,
    v76,
    1uLL);
  v17 = DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v6, 0LL);
  v22 = v17;
  if ( v17 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    v23[3] = v9;
    v23[4] = v6;
    v23[5] = a2;
    v23[6] = v22;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v89);
    return (unsigned int)v22;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v89);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( g_Win32kSupportsPathIndependentRotation )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = *((_QWORD *)this + 1);
    v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 1984LL);
    if ( *(_BYTE *)(v28 + 157) )
    {
      if ( !v27 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      v27 = *((_QWORD *)this + 1);
      v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 1984LL);
      if ( *(_BYTE *)(v28 + 158) )
        goto LABEL_21;
    }
    if ( !v27 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v30);
    }
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v24 + 40) + 28LL) >= 0x4003u )
    {
LABEL_21:
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v9, &v87);
      v22 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v87 = 0LL;
      }
      else
      {
        if ( NumPathsFromSource < 0 )
          goto LABEL_26;
        if ( v87 != 1 )
          goto LABEL_54;
        v32 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v9, 0LL, &v80);
        v22 = v32;
        if ( v32 < 0 )
        {
LABEL_26:
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v33[3] = v9;
          if ( Container != -88 )
            v5 = Container;
          v33[4] = v5;
          v34 = v33;
          v33[5] = v22;
          goto LABEL_97;
        }
        if ( v80 == -1 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v35);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(a2, v9, v80);
        if ( !Path )
        {
          v36 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v36);
        }
        v37 = *((_DWORD *)Path + 29);
        if ( v37 == D3DKMDT_VPPR_UNPINNED || ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(v37) - 2) & 0xFFFFFFFD) != 0 )
        {
          v79 = D3DKMDT_VPPR_UNPINNED;
        }
        else
        {
          if ( !a5 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            v39[3] = v9;
            if ( Container != -88 )
              v5 = Container;
            LODWORD(v22) = -1071774970;
            v39[4] = v5;
            v39[5] = -1071774970LL;
LABEL_96:
            v34 = v39;
LABEL_97:
            WdLogEvent5_WdError(v34);
            return (unsigned int)v22;
          }
          v79 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v38);
          DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
          v81 = *((_DWORD *)Path + 28);
          if ( v81 != D3DKMDT_VPPS_UNPINNED )
            DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
          v40 = *((_QWORD *)Path + 12);
          v41 = *(_QWORD *)(v40 + 104);
          if ( v41 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v41 + 96), 1u);
            v42 = *(DMMVIDPNTARGETMODESET **)(v40 + 104);
            v85 = v42;
            if ( v42 )
            {
              v43 = *((_QWORD *)v42 + 18);
              if ( v43 )
              {
                v78 = 1;
                DMMVIDEOSIGNALMODE::Initialize(
                  (DMMVIDEOSIGNALMODE *)v92,
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v43 + 72));
                DMMVIDPNTARGETMODESET::UnpinMode(v42);
              }
            }
          }
          else
          {
            v85 = 0LL;
          }
          v44 = *((_QWORD *)Path + 11);
          v45 = *(_QWORD *)(v44 + 104);
          if ( v45 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v45 + 96), 1u);
            v46 = *(DMMVIDPNTARGETMODESET **)(v44 + 104);
            v88 = v46;
            if ( v46 )
            {
              v47 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v46 + 18);
              if ( v47 )
              {
                v77 = 1;
                DMMVIDPNSOURCEMODE::Serialize(v47, &v90);
                DMMVIDPNTARGETMODESET::UnpinMode(v46);
                if ( v90.Type != D3DKMDT_RMT_TEXT )
                {
                  v90.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                         v90.Format.Graphics.PrimSurfSize.cx,
                                                                         v90.Format.Graphics.PrimSurfSize.cy);
                  cx = v90.Format.Graphics.VisibleRegionSize.cx;
                  v90.Format.Graphics.VisibleRegionSize.cx = v90.Format.Graphics.VisibleRegionSize.cy;
                  *(_QWORD *)(&v90.Format.Text + 3) = cx;
                }
              }
            }
          }
          else
          {
            v88 = 0LL;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v85, 0LL);
        }
      }
    }
  }
LABEL_54:
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) == (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    goto LABEL_61;
  v86[0] = -1;
  v86[1] = -1;
  v49 = (struct D3DKMDT_HVIDPN__ *)Container;
  if ( Container == -88 )
    v49 = 0LL;
  v50 = VIDPN_MGR::FormalizeVidPnChange(this, v49, 2, 1, v86);
  v51 = v50;
  if ( v50 >= 0 )
  {
LABEL_61:
    if ( v77 )
    {
      v54 = *((_QWORD *)Path + 11);
      v55 = *(_QWORD *)(v54 + 104);
      if ( !v55 )
      {
        v83 = 0LL;
LABEL_64:
        v56 = WdLogNewEntry5_WdError(v24);
        WdLogEvent5_WdError(v56);
        LODWORD(v22) = -1071774958;
LABEL_65:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v83, 0LL);
        return (unsigned int)v22;
      }
      _InterlockedAdd((volatile signed __int32 *)(v55 + 96), 1u);
      v57 = *(struct DMMVIDPNSOURCEMODESET **)(v54 + 104);
      v83 = v57;
      if ( !v57 )
        goto LABEL_64;
      v58 = (_QWORD *)((char *)v57 + 48);
      if ( (_QWORD *)*v58 == v58 )
        goto LABEL_64;
      v59 = *v58 - 8LL;
      if ( !v59 )
        goto LABEL_64;
      do
      {
        if ( v90.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v59 + 72) != 2 )
          v90.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v59)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v59, (__int64)&v90) )
          break;
        v60 = *(struct DMMVIDPNSOURCEMODESET **)(v59 + 8);
        v59 = v60 == (struct DMMVIDPNSOURCEMODESET *)((char *)v57 + 48) ? 0LL : (__int64)v60 - 8;
      }
      while ( v59 );
      if ( !v59 )
        goto LABEL_64;
      v61 = VIDPN_MGR::PinVidPnSourceMode(this, v57, *(_DWORD *)(v59 + 24), 1);
      v22 = v61;
      if ( v61 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(v62);
        *(_QWORD *)(v63 + 24) = v22;
        WdLogEvent5_WdError(v63);
        goto LABEL_65;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v83, 0LL);
    }
    if ( v78 )
    {
      v64 = *((_QWORD *)Path + 12);
      v65 = *(_QWORD *)(v64 + 104);
      if ( !v65 )
      {
        v82 = 0LL;
LABEL_84:
        v66 = WdLogNewEntry5_WdError(v24);
        WdLogEvent5_WdError(v66);
        LODWORD(v22) = -1071774958;
LABEL_85:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v82, 0LL);
        return (unsigned int)v22;
      }
      _InterlockedAdd((volatile signed __int32 *)(v65 + 96), 1u);
      v67 = *(struct DMMVIDPNTARGETMODESET **)(v64 + 104);
      v82 = v67;
      if ( !v67 )
        goto LABEL_84;
      v68 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v67 + 24, (__int64)v91);
      if ( !v68 )
        goto LABEL_84;
      v69 = VIDPN_MGR::PinVidPnTargetMode(this, v67, *(_DWORD *)(v68 + 24), 1);
      v22 = v69;
      if ( v69 < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v70);
        *(_QWORD *)(v71 + 24) = v22;
        WdLogEvent5_WdError(v71);
        goto LABEL_85;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v82, 0LL);
    }
    if ( v81 == D3DKMDT_VPPS_UNPINNED || (v72 = VIDPN_MGR::PinPathContentScaling(this, Path, v81), v22 = v72, v72 >= 0) )
    {
      if ( v79 == D3DKMDT_VPPR_UNPINNED
        || (v74 = VIDPN_MGR::PinPathContentRotation(this, Path, v79), v22 = v74, v74 >= 0) )
      {
        LODWORD(v22) = 0;
        return (unsigned int)v22;
      }
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v73);
    v39[3] = v22;
    goto LABEL_96;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdError(v24);
  v53 = v84;
  v52[3] = v9;
  v52[4] = v53;
  if ( Container != -88 )
    v5 = Container;
  v52[5] = v5;
  v52[6] = v51;
  WdLogEvent5_WdError(v52);
  LODWORD(v22) = v51;
  return (unsigned int)v22;
}

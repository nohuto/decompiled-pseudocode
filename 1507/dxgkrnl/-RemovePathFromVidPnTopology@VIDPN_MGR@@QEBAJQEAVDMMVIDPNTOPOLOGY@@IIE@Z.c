/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C0179B20 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C0007DB8 (--0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007E3C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00081CC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000D744 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE48 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000DEF8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C002B4EC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0096710 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C017327C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01734A0 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        enum _D3DKMDT_MODE_PREFERENCE a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v9; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 Container; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int NumPathsFromSource; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v46; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v47; // r8d
  _QWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rcx
  DMMVIDPNTARGETMODESET *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rax
  DMMVIDPNTARGETMODESET *v55; // rdi
  DMMVIDPNSOURCEMODE *v56; // rcx
  UINT cx; // ecx
  struct D3DKMDT_HVIDPN__ *v58; // rdx
  int v59; // eax
  __int64 v60; // r15
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  struct DMMVIDPNSOURCEMODESET *v66; // rsi
  _QWORD *v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // r9
  struct DMMVIDPNSOURCEMODESET *v70; // rdi
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r11
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r11
  __int64 v78; // rax
  __int64 v79; // r9
  struct DMMVIDPNTARGETMODESET *v80; // r11
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rcx
  int v86; // eax
  __int64 v88; // [rsp+20h] [rbp-E0h]
  char v89; // [rsp+40h] [rbp-C0h]
  char v90; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v91; // [rsp+44h] [rbp-BCh]
  unsigned int v92; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v93; // [rsp+4Ch] [rbp-B4h]
  __int64 v94; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPNSOURCEMODESET *v95; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v96; // [rsp+60h] [rbp-A0h]
  DMMVIDPNTARGETMODESET *v97; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v98[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v99; // [rsp+78h] [rbp-88h] BYREF
  DMMVIDPNTARGETMODESET *v100; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v101[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v102; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v103[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v104[72]; // [rsp+118h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = a4;
  v96 = a4;
  v89 = 0;
  v90 = 0;
  v9 = (unsigned int)a3;
  Path = 0LL;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v103, 0, a3);
  v14 = 254LL;
  v91 = D3DKMDT_VPPR_UNPINNED;
  v93 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(254LL, v11, v12, v13);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v11, v12, v13);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v11, v12, v13);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(1LL, v11, v12, v13);
    WdLogEvent5_WdAssertion(v18);
  }
  LOBYTE(v12) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v101,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    v12,
    v13,
    v88,
    1uLL);
  v19 = DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v6, 0LL);
  v24 = v19;
  if ( v19 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
    v25[3] = v9;
    v25[4] = v6;
    v25[5] = a2;
    v25[6] = v24;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v101);
    return (unsigned int)v24;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v101);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( g_Win32kSupportsPathIndependentRotation )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v31);
    }
    v32 = *((_QWORD *)this + 1);
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 1976LL);
    if ( *(_BYTE *)(v33 + 133) )
      goto LABEL_18;
    if ( !v32 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, 0LL, v28, v29);
      WdLogEvent5_WdAssertion(v34);
    }
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v27 + 40) + 28LL) >= 0x4003u )
    {
LABEL_18:
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v9, &v99);
      v24 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v99 = 0LL;
      }
      else
      {
        if ( NumPathsFromSource < 0 )
          goto LABEL_23;
        if ( v99 != 1 )
          goto LABEL_51;
        v36 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, (unsigned int)v9, 0LL, &v92);
        v24 = v36;
        if ( v36 < 0 )
        {
LABEL_23:
          v40 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v40[3] = v9;
          if ( Container != -88 )
            v5 = Container;
          v40[4] = v5;
          v41 = v40;
          v40[5] = v24;
          goto LABEL_94;
        }
        if ( v92 == -1 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v27, v37, v38, v39);
          WdLogEvent5_WdAssertion(v42);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(a2, v9, v92);
        if ( !Path )
        {
          v45 = WdLogNewEntry5_WdAssertion(v27, v43, v44, v29);
          WdLogEvent5_WdAssertion(v45);
        }
        v46 = *((_DWORD *)Path + 29);
        if ( v46 == D3DKMDT_VPPR_UNPINNED || ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(v46) - 2) & 0xFFFFFFFD) != 0 )
        {
          v91 = D3DKMDT_VPPR_UNPINNED;
        }
        else
        {
          if ( !a5 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v27);
            v48[3] = v9;
            if ( Container != -88 )
              v5 = Container;
            LODWORD(v24) = -1071774970;
            v48[4] = v5;
            v48[5] = -1071774970LL;
LABEL_93:
            v41 = v48;
LABEL_94:
            WdLogEvent5_WdError(v41);
            return (unsigned int)v24;
          }
          v91 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v47);
          DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
          v93 = *((_DWORD *)Path + 28);
          if ( v93 != D3DKMDT_VPPS_UNPINNED )
            DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
          v49 = *((_QWORD *)Path + 12);
          v50 = *(_QWORD *)(v49 + 104);
          if ( v50 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v50 + 96), 1u);
            v51 = *(DMMVIDPNTARGETMODESET **)(v49 + 104);
            v97 = v51;
            if ( v51 )
            {
              v52 = *((_QWORD *)v51 + 18);
              if ( v52 )
              {
                v90 = 1;
                DMMVIDEOSIGNALMODE::Initialize(
                  (DMMVIDEOSIGNALMODE *)v104,
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v52 + 72));
                DMMVIDPNTARGETMODESET::UnpinMode(v51);
              }
            }
          }
          else
          {
            v97 = 0LL;
          }
          v53 = *((_QWORD *)Path + 11);
          v54 = *(_QWORD *)(v53 + 104);
          if ( v54 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v54 + 96), 1u);
            v55 = *(DMMVIDPNTARGETMODESET **)(v53 + 104);
            v100 = v55;
            if ( v55 )
            {
              v56 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v55 + 18);
              if ( v56 )
              {
                v89 = 1;
                DMMVIDPNSOURCEMODE::Serialize(v56, &v102);
                DMMVIDPNTARGETMODESET::UnpinMode(v55);
                if ( v102.Type != D3DKMDT_RMT_TEXT )
                {
                  v102.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                          v102.Format.Graphics.PrimSurfSize.cx,
                                                                          v102.Format.Graphics.PrimSurfSize.cy);
                  cx = v102.Format.Graphics.VisibleRegionSize.cx;
                  v102.Format.Graphics.VisibleRegionSize.cx = v102.Format.Graphics.VisibleRegionSize.cy;
                  *(_QWORD *)(&v102.Format.Text + 3) = cx;
                }
              }
            }
          }
          else
          {
            v100 = 0LL;
          }
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v100, 0LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v97, 0LL);
        }
      }
    }
  }
LABEL_51:
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) == (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    goto LABEL_58;
  v98[0] = -1;
  v98[1] = -1;
  v58 = (struct D3DKMDT_HVIDPN__ *)Container;
  if ( Container == -88 )
    v58 = 0LL;
  LOBYTE(v29) = 1;
  v59 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)this, v58, 2LL, v29, v98);
  v60 = v59;
  if ( v59 >= 0 )
  {
LABEL_58:
    if ( v89 )
    {
      v63 = *((_QWORD *)Path + 11);
      v64 = *(_QWORD *)(v63 + 104);
      if ( !v64 )
      {
        v95 = 0LL;
LABEL_61:
        v65 = WdLogNewEntry5_WdError(v27);
        WdLogEvent5_WdError(v65);
        LODWORD(v24) = -1071774958;
LABEL_62:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v95, 0LL);
        return (unsigned int)v24;
      }
      _InterlockedAdd((volatile signed __int32 *)(v64 + 96), 1u);
      v66 = *(struct DMMVIDPNSOURCEMODESET **)(v63 + 104);
      v95 = v66;
      if ( !v66 )
        goto LABEL_61;
      v67 = (_QWORD *)((char *)v66 + 48);
      if ( (_QWORD *)*v67 == v67 )
        goto LABEL_61;
      v68 = *v67 - 8LL;
      if ( !v68 )
        goto LABEL_61;
      do
      {
        if ( v102.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v68 + 72) != 2 )
          v102.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v68)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v68, (__int64)&v102) )
          break;
        v70 = *(struct DMMVIDPNSOURCEMODESET **)(v68 + 8);
        v68 = v70 == (struct DMMVIDPNSOURCEMODESET *)((char *)v66 + 48) ? 0LL : (__int64)v70 - 8;
      }
      while ( v68 );
      if ( !v68 )
        goto LABEL_61;
      LOBYTE(v69) = 1;
      v71 = VIDPN_MGR::PinVidPnSourceMode(this, v66, *(unsigned int *)(v68 + 24), v69);
      v24 = v71;
      if ( v71 < 0 )
      {
        v73 = WdLogNewEntry5_WdError(v72);
        *(_QWORD *)(v73 + 24) = v24;
        WdLogEvent5_WdError(v73);
        goto LABEL_62;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v95, 0LL);
    }
    if ( v90 )
    {
      v74 = *((_QWORD *)Path + 12);
      v75 = *(_QWORD *)(v74 + 104);
      if ( !v75 )
      {
        v94 = 0LL;
LABEL_81:
        v76 = WdLogNewEntry5_WdError(v27);
        WdLogEvent5_WdError(v76);
        LODWORD(v24) = -1071774958;
LABEL_82:
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v94, 0LL);
        return (unsigned int)v24;
      }
      _InterlockedAdd((volatile signed __int32 *)(v75 + 96), 1u);
      v77 = *(_QWORD *)(v74 + 104);
      v94 = v77;
      if ( !v77 )
        goto LABEL_81;
      v78 = Set<DMMVIDPNTARGETMODE>::FindByValue(v77 + 24, (__int64)v103);
      if ( !v78 )
        goto LABEL_81;
      LOBYTE(v79) = 1;
      v81 = VIDPN_MGR::PinVidPnTargetMode(this, v80, *(unsigned int *)(v78 + 24), v79);
      v24 = v81;
      if ( v81 < 0 )
      {
        v83 = WdLogNewEntry5_WdError(v82);
        *(_QWORD *)(v83 + 24) = v24;
        WdLogEvent5_WdError(v83);
        goto LABEL_82;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v94, 0LL);
    }
    if ( v93 == D3DKMDT_VPPS_UNPINNED
      || (v84 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, (unsigned int)v93, v29),
          v24 = v84,
          v84 >= 0) )
    {
      if ( v91 == D3DKMDT_VPPR_UNPINNED
        || (v86 = VIDPN_MGR::PinPathContentRotation((ADAPTER_DISPLAY **)this, Path, (unsigned int)v91, v29),
            v24 = v86,
            v86 >= 0) )
      {
        LODWORD(v24) = 0;
        return (unsigned int)v24;
      }
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v85);
    v48[3] = v24;
    goto LABEL_93;
  }
  v61 = (_QWORD *)WdLogNewEntry5_WdError(v27);
  v62 = v96;
  v61[3] = v9;
  v61[4] = v62;
  if ( Container != -88 )
    v5 = Container;
  v61[5] = v5;
  v61[6] = v60;
  WdLogEvent5_WdError(v61);
  LODWORD(v24) = v60;
  return (unsigned int)v24;
}

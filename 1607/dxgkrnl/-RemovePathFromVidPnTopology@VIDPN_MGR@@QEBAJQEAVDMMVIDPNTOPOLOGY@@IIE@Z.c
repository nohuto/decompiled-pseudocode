/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01A1A24
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01A029C (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C01A72F0 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0001BE8 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C0002448 (--0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00033F4 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00034F4 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0004248 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00042C0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FD0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FF4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0005A90 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0032CF0 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00844C8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01A1478 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A1594 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // r15
  enum _D3DKMDT_MODE_PREFERENCE v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 Container; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int NumPathsFromSource; // eax
  int v36; // eax
  _QWORD *v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v41; // r8d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v42; // r8d
  _QWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  DMMVIDPNTARGETMODESET *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  DMMVIDPNSOURCEMODESET *v50; // rdi
  DMMVIDPNSOURCEMODE *v51; // rcx
  UINT cx; // ecx
  struct D3DKMDT_HVIDPN__ *v53; // rdx
  int v54; // eax
  __int64 v55; // r14
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  struct DMMVIDPNSOURCEMODESET *v61; // rsi
  _QWORD *v62; // rdi
  __int64 v63; // rdi
  struct DMMVIDPNSOURCEMODESET *v64; // rdi
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  struct DMMVIDPNTARGETMODESET *v71; // rdi
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+40h] [rbp-C0h]
  char v82; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v83; // [rsp+44h] [rbp-BCh]
  unsigned int v84; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v85; // [rsp+4Ch] [rbp-B4h]
  unsigned int v86; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPNSOURCEMODESET *v87; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v88; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v89; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNSOURCEMODESET *v90; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v91; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v92[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v93[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v94; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v95[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v96[72]; // [rsp+118h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = a4;
  v7 = a3;
  v86 = a4;
  v81 = 0;
  v82 = 0;
  Path = 0LL;
  memset(&v94, 0, sizeof(v94));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v95, 0, v11);
  v13 = 254LL;
  v83 = D3DKMDT_VPPR_UNPINNED;
  v85 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(254LL);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v7 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(1LL);
    WdLogEvent5_WdAssertion(v17);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v93,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v12,
    v80,
    1uLL);
  v18 = DMMVIDPNTOPOLOGY::RemovePath(a2, v7, v6, 0LL);
  v23 = v18;
  if ( v18 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
    v24[3] = v7;
    v24[4] = v6;
    v24[5] = a2;
    v24[6] = v23;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v93,
      v25,
      v26,
      v27);
    return (unsigned int)v23;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v93, v19, v21, v22);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( g_Win32kSupportsPathIndependentRotation )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = *((_QWORD *)this + 1);
    v32 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 2128LL);
    if ( *(_BYTE *)(v32 + 133) )
    {
      if ( !v31 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v32);
        WdLogEvent5_WdAssertion(v33);
      }
      v31 = *((_QWORD *)this + 1);
      v32 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 2128LL);
      if ( *(_BYTE *)(v32 + 134) )
        goto LABEL_21;
    }
    if ( !v31 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v34);
    }
    v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v28 + 40) + 28LL) >= 0x4003u )
    {
LABEL_21:
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v89);
      v23 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v89 = 0LL;
      }
      else
      {
        if ( NumPathsFromSource < 0 )
          goto LABEL_26;
        if ( v89 != 1 )
          goto LABEL_54;
        v36 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v7, 0LL, &v84);
        v23 = v36;
        if ( v36 < 0 )
        {
LABEL_26:
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v37[3] = v7;
          if ( Container != -88 )
            v5 = Container;
          v37[4] = v5;
          v38 = v37;
          v37[5] = v23;
          goto LABEL_97;
        }
        if ( v84 == -1 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v39);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v84);
        if ( !Path )
        {
          v40 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v40);
        }
        v41 = *((_DWORD *)Path + 29);
        if ( v41 == D3DKMDT_VPPR_UNPINNED || ((D3DKMDT_VPPR_GET_OFFSET_ROTATION(v41) - 2) & 0xFFFFFFFD) != 0 )
        {
          v83 = D3DKMDT_VPPR_UNPINNED;
        }
        else
        {
          if ( !a5 )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v28);
            v43[3] = v7;
            if ( Container != -88 )
              v5 = Container;
            LODWORD(v23) = -1071774970;
            v43[4] = v5;
            v43[5] = -1071774970LL;
LABEL_96:
            v38 = v43;
LABEL_97:
            WdLogEvent5_WdError(v38);
            return (unsigned int)v23;
          }
          v83 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v42);
          DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
          v85 = *((_DWORD *)Path + 28);
          if ( v85 != D3DKMDT_VPPS_UNPINNED )
            DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
          v44 = *((_QWORD *)Path + 12);
          v45 = *(_QWORD *)(v44 + 104);
          if ( v45 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v45 + 96), 1u);
            v46 = *(DMMVIDPNTARGETMODESET **)(v44 + 104);
            v91 = v46;
            if ( v46 )
            {
              v47 = *((_QWORD *)v46 + 18);
              if ( v47 )
              {
                v82 = 1;
                DMMVIDEOSIGNALMODE::Initialize(
                  (DMMVIDEOSIGNALMODE *)v96,
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v47 + 72));
                DMMVIDPNTARGETMODESET::UnpinMode(v46);
              }
            }
          }
          else
          {
            v91 = 0LL;
          }
          v48 = *((_QWORD *)Path + 11);
          v49 = *(_QWORD *)(v48 + 104);
          if ( v49 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v49 + 96), 1u);
            v50 = *(DMMVIDPNSOURCEMODESET **)(v48 + 104);
            v90 = v50;
            if ( v50 )
            {
              v51 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v50 + 18);
              if ( v51 )
              {
                v81 = 1;
                DMMVIDPNSOURCEMODE::Serialize(v51, &v94);
                DMMVIDPNSOURCEMODESET::UnpinMode(v50);
                if ( v94.Type != D3DKMDT_RMT_TEXT )
                {
                  v94.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                         v94.Format.Graphics.PrimSurfSize.cx,
                                                                         v94.Format.Graphics.PrimSurfSize.cy);
                  cx = v94.Format.Graphics.VisibleRegionSize.cx;
                  v94.Format.Graphics.VisibleRegionSize.cx = v94.Format.Graphics.VisibleRegionSize.cy;
                  *(_QWORD *)(&v94.Format.Text + 3) = cx;
                }
              }
            }
          }
          else
          {
            v90 = 0LL;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v91, 0LL);
        }
      }
    }
  }
LABEL_54:
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) == (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    goto LABEL_61;
  v92[0] = -1;
  v92[1] = -1;
  v53 = (struct D3DKMDT_HVIDPN__ *)Container;
  if ( Container == -88 )
    v53 = 0LL;
  v54 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)this, v53, 2, 1, v92);
  v55 = v54;
  if ( v54 >= 0 )
  {
LABEL_61:
    if ( v81 )
    {
      v58 = *((_QWORD *)Path + 11);
      v59 = *(_QWORD *)(v58 + 104);
      if ( !v59 )
      {
        v87 = 0LL;
LABEL_64:
        v60 = WdLogNewEntry5_WdError(v28);
        WdLogEvent5_WdError(v60);
        LODWORD(v23) = -1071774958;
LABEL_65:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v87, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedAdd((volatile signed __int32 *)(v59 + 96), 1u);
      v61 = *(struct DMMVIDPNSOURCEMODESET **)(v58 + 104);
      v87 = v61;
      if ( !v61 )
        goto LABEL_64;
      v62 = (_QWORD *)((char *)v61 + 48);
      if ( (_QWORD *)*v62 == v62 )
        goto LABEL_64;
      v63 = *v62 - 8LL;
      if ( !v63 )
        goto LABEL_64;
      do
      {
        if ( v94.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v63 + 72) != 2 )
          v94.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v63)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v63, (__int64)&v94) )
          break;
        v64 = *(struct DMMVIDPNSOURCEMODESET **)(v63 + 8);
        v63 = v64 == (struct DMMVIDPNSOURCEMODESET *)((char *)v61 + 48) ? 0LL : (__int64)v64 - 8;
      }
      while ( v63 );
      if ( !v63 )
        goto LABEL_64;
      v65 = VIDPN_MGR::PinVidPnSourceMode(this, v61, *(_DWORD *)(v63 + 24), 1);
      v23 = v65;
      if ( v65 < 0 )
      {
        v67 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v67 + 24) = v23;
        WdLogEvent5_WdError(v67);
        goto LABEL_65;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v87, 0LL);
    }
    if ( v82 )
    {
      v68 = *((_QWORD *)Path + 12);
      v69 = *(_QWORD *)(v68 + 104);
      if ( !v69 )
      {
        v88 = 0LL;
LABEL_84:
        v70 = WdLogNewEntry5_WdError(v28);
        WdLogEvent5_WdError(v70);
        LODWORD(v23) = -1071774958;
LABEL_85:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedAdd((volatile signed __int32 *)(v69 + 96), 1u);
      v71 = *(struct DMMVIDPNTARGETMODESET **)(v68 + 104);
      v88 = v71;
      if ( !v71 )
        goto LABEL_84;
      v72 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v71 + 24, (__int64)v95);
      if ( !v72 )
        goto LABEL_84;
      v73 = VIDPN_MGR::PinVidPnTargetMode(this, v71, *(_DWORD *)(v72 + 24), 1);
      v23 = v73;
      if ( v73 < 0 )
      {
        v75 = WdLogNewEntry5_WdError(v74);
        *(_QWORD *)(v75 + 24) = v23;
        WdLogEvent5_WdError(v75);
        goto LABEL_85;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
    }
    if ( v85 == D3DKMDT_VPPS_UNPINNED || (v76 = VIDPN_MGR::PinPathContentScaling(this, Path, v85), v23 = v76, v76 >= 0) )
    {
      if ( v83 == D3DKMDT_VPPR_UNPINNED
        || (v78 = VIDPN_MGR::PinPathContentRotation(this, Path, v83), v23 = v78, v78 >= 0) )
      {
        LODWORD(v23) = 0;
        return (unsigned int)v23;
      }
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v77);
    v43[3] = v23;
    goto LABEL_96;
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdError(v28);
  v57 = v86;
  v56[3] = v7;
  v56[4] = v57;
  if ( Container != -88 )
    v5 = Container;
  v56[5] = v5;
  v56[6] = v55;
  WdLogEvent5_WdError(v56);
  LODWORD(v23) = v55;
  return (unsigned int)v23;
}

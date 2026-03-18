/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00A1E9C
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00A1DEC (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00075BC (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009310 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C0099F34 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C009C02C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00A4768 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  unsigned __int16 v5; // di
  bool IsCoreResourceSharedOwner; // al
  unsigned int v11; // edx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  char v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r9d
  CCD_TOPOLOGY *v19; // rcx
  char v20; // dl
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v21; // r10d
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  DMMVIDPNSOURCEMODE *v37; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v38; // edx
  int **SessionViewOwner; // rax
  int **v40; // rsi
  const struct tagRECT *DwmClipBox; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // r8
  __int64 v45; // rax
  bool v46; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v47; // [rsp+48h] [rbp-28h] BYREF
  struct _LUID v48; // [rsp+50h] [rbp-20h] BYREF
  __int64 v49; // [rsp+58h] [rbp-18h] BYREF
  __int64 v50; // [rsp+60h] [rbp-10h] BYREF
  bool v51; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 396LL) )
    return 0LL;
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29);
    v42[3] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
    v42[4] = *((unsigned int *)a2 + 63);
    v42[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v42[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v42[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v42);
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v11 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( IsCoreResourceSharedOwner )
    IsVirtualizationDisabledForTarget = ::IsVirtualizationDisabledForTarget(a2, v11, &v51, &v46);
  else
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(_QWORD *)((char *)a2 + 252),
                                          v11,
                                          (unsigned int)&v51,
                                          (unsigned int)&v46,
                                          0LL);
  v14 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget >= 0 )
  {
    v47 = 0LL;
    if ( !v51 || (v15 = 0, !v46) )
      v15 = 1;
    v16 = *((_QWORD *)a3 + 12);
    v17 = *(_QWORD *)(v16 + 96);
    v18 = *(_DWORD *)(v16 + 24);
    v19 = *(CCD_TOPOLOGY **)this;
    v20 = *(_BYTE *)(v17 + 396);
    v21 = *(_DWORD *)(v17 + 72);
    v22 = *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL);
    v48 = *(struct _LUID *)((char *)a2 + 252);
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(v19, &v48, v22, v18, v15, v21, &v47, v20) == -1073741789 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v44[3] = this;
      v44[4] = *(_QWORD *)this;
      v44[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v45 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v45 )
        v5 = *(_WORD *)(v45 + 22);
      v44[6] = v5;
      v44[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v44);
    }
    else
    {
      v27 = v47;
      *((_DWORD *)v47 + 46) = *((unsigned __int16 *)a3 + 54);
      *((_DWORD *)v27 + 20) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 72LL);
      *(_DWORD *)v27 |= 0x8000u;
      if ( a4 )
      {
        *(_DWORD *)v27 |= 0x80000000;
        v30 = *((_QWORD *)a3 + 12);
        v31 = *(_QWORD *)(v30 + 104);
        if ( v31 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v31 + 96), 1u);
          v32 = *(_QWORD *)(v30 + 104);
          v27 = v47;
        }
        else
        {
          v32 = 0LL;
        }
        v50 = v32;
        v33 = *(_QWORD *)(v32 + 144);
        if ( v33 )
        {
          *(_OWORD *)((char *)v27 + 24) = *(_OWORD *)(v33 + 72);
          *(_OWORD *)((char *)v27 + 40) = *(_OWORD *)(v33 + 88);
          *(_OWORD *)((char *)v27 + 56) = *(_OWORD *)(v33 + 104);
          *((_QWORD *)v27 + 9) = *(_QWORD *)(v33 + 120);
          *(_DWORD *)v27 |= 0x87u;
        }
        v34 = *((_QWORD *)a3 + 11);
        v35 = *(_QWORD *)(v34 + 104);
        if ( v35 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v35 + 96), 1u);
          v36 = *(_QWORD *)(v34 + 104);
          v27 = v47;
        }
        else
        {
          v36 = 0LL;
        }
        v37 = *(DMMVIDPNSOURCEMODE **)(v36 + 144);
        v49 = v36;
        if ( v37 )
        {
          *((_BYTE *)v27 + 116) = (unsigned int)(*((_DWORD *)v37 + 18) - 3) <= 1;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)((char *)v27 + 84) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v37);
          *(_DWORD *)v27 |= 0x100u;
          v38 = *((_DWORD *)a3 + 29);
          *((_DWORD *)v27 + 30) = v38;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *((_DWORD *)v27 + 30) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                      *((ADAPTER_DISPLAY **)a2 + 248),
                                      v38,
                                      *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *((_DWORD *)v27 + 31) = *((_DWORD *)a3 + 28);
          *(_DWORD *)v27 |= 0x600u;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 248),
                                 *((_DWORD *)v27 + 4));
            *((_QWORD *)v27 + 24) = SessionViewOwner;
            v40 = SessionViewOwner;
            if ( SessionViewOwner )
            {
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 248), *((_DWORD *)v27 + 4));
              *((_DWORD *)v27 + 35) = *((_DWORD *)v40 + 8) - *((_DWORD *)v40 + 6);
              *((_DWORD *)v27 + 36) = *((_DWORD *)v40 + 9) - *((_DWORD *)v40 + 7);
              *((_DWORD *)v27 + 33) = *((_DWORD *)v40 + 6);
              *((_DWORD *)v27 + 34) = *((_DWORD *)v40 + 7);
              *(struct tagRECT *)((char *)v27 + 156) = *DwmClipBox;
              *(_DWORD *)v27 |= 0x820800u;
            }
          }
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v49, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v50, 0LL);
      }
    }
    return 0LL;
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v43[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  v43[4] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
  v43[5] = *((unsigned int *)a2 + 63);
  WdLogEvent5_WdError(v43);
  return v14;
}

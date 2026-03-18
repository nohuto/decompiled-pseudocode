/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C008D6CC
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C008D61C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DA8E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0004248 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00051F0 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006278 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C0086954 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0088C0C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C008CB74 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  unsigned __int16 v5; // di
  char v10; // r12
  bool IsCoreResourceSharedOwner; // al
  unsigned int v12; // edx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  DMMVIDPNSOURCEMODE *v30; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v31; // edx
  int **SessionViewOwner; // rax
  int **v33; // rsi
  const struct tagRECT *DwmClipBox; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // r8
  __int64 v38; // rax
  bool v39; // [rsp+50h] [rbp-20h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h] BYREF
  __int64 v42; // [rsp+68h] [rbp-8h] BYREF
  bool v43; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v10 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 396LL) )
    return 0LL;
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22);
    v35[3] = *((int *)a2 + 68);
    v35[4] = *((unsigned int *)a2 + 67);
    v35[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v35[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v35[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v35);
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v12 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( IsCoreResourceSharedOwner )
    IsVirtualizationDisabledForTarget = ::IsVirtualizationDisabledForTarget((__int64)a2, v12, &v43, &v39);
  else
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(_QWORD *)((char *)a2 + 268),
                                          v12,
                                          (unsigned int)&v43,
                                          (unsigned int)&v39,
                                          0LL,
                                          0LL);
  v15 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget >= 0 )
  {
    v40 = 0LL;
    if ( v43 && v39 )
      v10 = 0;
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         *(void ***)this,
                         (const struct _LUID *)((char *)a2 + 268),
                         *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL),
                         *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                         v10,
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL)
                                                                          + 72LL),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL)
                                                                          + 76LL),
                         &v40,
                         *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 396LL)) == -1073741789 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v37[3] = this;
      v37[4] = *(_QWORD *)this;
      v37[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v38 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v38 )
        v5 = *(_WORD *)(v38 + 22);
      v37[6] = v5;
      v37[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v37);
    }
    else
    {
      v20 = v40;
      *((_DWORD *)v40 + 46) = *((unsigned __int16 *)a3 + 54);
      *((_DWORD *)v20 + 20) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 72LL);
      *((_DWORD *)v20 + 21) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 76LL);
      *(_DWORD *)v20 |= 0x8000u;
      if ( a4 )
      {
        *(_DWORD *)v20 |= 0x80000000;
        v23 = *((_QWORD *)a3 + 12);
        v24 = *(_QWORD *)(v23 + 104);
        if ( v24 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
          v25 = *(_QWORD *)(v23 + 104);
          v20 = v40;
        }
        else
        {
          v25 = 0LL;
        }
        v42 = v25;
        v26 = *(_QWORD *)(v25 + 144);
        if ( v26 )
        {
          *(_OWORD *)((char *)v20 + 24) = *(_OWORD *)(v26 + 72);
          *(_OWORD *)((char *)v20 + 40) = *(_OWORD *)(v26 + 88);
          *(_OWORD *)((char *)v20 + 56) = *(_OWORD *)(v26 + 104);
          *((_QWORD *)v20 + 9) = *(_QWORD *)(v26 + 120);
          *(_DWORD *)v20 |= 0x87u;
        }
        v27 = *((_QWORD *)a3 + 11);
        v28 = *(_QWORD *)(v27 + 104);
        if ( v28 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
          v29 = *(_QWORD *)(v27 + 104);
          v20 = v40;
        }
        else
        {
          v29 = 0LL;
        }
        v30 = *(DMMVIDPNSOURCEMODE **)(v29 + 144);
        v41 = v29;
        if ( v30 )
        {
          *((_BYTE *)v20 + 120) = (unsigned int)(*((_DWORD *)v30 + 18) - 3) <= 1;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)((char *)v20 + 88) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v30);
          *(_DWORD *)v20 |= 0x100u;
          v31 = *((_DWORD *)a3 + 29);
          *((_DWORD *)v20 + 31) = v31;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *((_DWORD *)v20 + 31) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                      *((ADAPTER_DISPLAY **)a2 + 266),
                                      v31,
                                      *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *((_DWORD *)v20 + 32) = *((_DWORD *)a3 + 28);
          *(_DWORD *)v20 |= 0x600u;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 266),
                                 *((_DWORD *)v20 + 4));
            *((_QWORD *)v20 + 24) = SessionViewOwner;
            v33 = SessionViewOwner;
            if ( SessionViewOwner )
            {
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 266), *((_DWORD *)v20 + 4));
              *((_DWORD *)v20 + 36) = *((_DWORD *)v33 + 8) - *((_DWORD *)v33 + 6);
              *((_DWORD *)v20 + 37) = *((_DWORD *)v33 + 9) - *((_DWORD *)v33 + 7);
              *((_DWORD *)v20 + 34) = *((_DWORD *)v33 + 6);
              *((_DWORD *)v20 + 35) = *((_DWORD *)v33 + 7);
              *((struct tagRECT *)v20 + 10) = *DwmClipBox;
              *(_DWORD *)v20 |= 0x820800u;
            }
          }
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v41, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
      }
    }
    return 0LL;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v14);
  v36[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  v36[4] = *((int *)a2 + 68);
  v36[5] = *((unsigned int *)a2 + 67);
  WdLogEvent5_WdError(v36);
  return v15;
}

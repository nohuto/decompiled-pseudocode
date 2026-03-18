/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0063918
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0063868 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006128 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006570 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0065FAC (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0095E00 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  unsigned __int16 v5; // bp
  __int64 v10; // rax
  DMMVIDEOPRESENTTARGET *v11; // rcx
  unsigned int v12; // esi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v13; // edi
  unsigned int v14; // ebx
  char IsTargetSupportVirtualMode; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  DMMVIDPNSOURCEMODE *v33; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  struct SESSION_VIEW *v35; // rdi
  const struct tagRECT *DwmClipBox; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // r8
  __int64 v39; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // [rsp+40h] [rbp-48h] BYREF
  struct _LUID v41; // [rsp+48h] [rbp-40h] BYREF
  __int64 v42; // [rsp+50h] [rbp-38h] BYREF
  __int64 v43; // [rsp+58h] [rbp-30h] BYREF

  v5 = 0;
  if ( !a4 || DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v40 = 0LL;
    ++*((_WORD *)this + 4);
    v10 = *((_QWORD *)a3 + 12);
    v11 = *(DMMVIDEOPRESENTTARGET **)(v10 + 96);
    v12 = *(_DWORD *)(v10 + 24);
    v13 = *((_DWORD *)v11 + 18);
    v14 = *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL);
    v41 = *(struct _LUID *)((char *)a2 + 252);
    IsTargetSupportVirtualMode = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(v11);
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         *(CCD_TOPOLOGY **)this,
                         &v41,
                         v14,
                         v12,
                         IsTargetSupportVirtualMode,
                         v13,
                         &v40) == -1073741789 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v38[3] = this;
      v38[4] = *(_QWORD *)this;
      v38[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v39 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v39 )
        v5 = *(_WORD *)(v39 + 22);
      v38[6] = v5;
      v38[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v38);
    }
    else
    {
      v20 = v40;
      *((_DWORD *)v40 + 46) = *((unsigned __int16 *)a3 + 54);
      *((_DWORD *)v20 + 20) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 72LL);
      *(_DWORD *)v20 |= 0x8000u;
      if ( a4 )
      {
        *(_DWORD *)v20 |= 0x80000000;
        v26 = *((_QWORD *)a3 + 12);
        v27 = *(_QWORD *)(v26 + 104);
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
          v28 = *(_QWORD *)(v26 + 104);
          v20 = v40;
        }
        else
        {
          v28 = 0LL;
        }
        v43 = v28;
        v29 = *(_QWORD *)(v28 + 144);
        if ( v29 )
        {
          *(_OWORD *)((char *)v20 + 24) = *(_OWORD *)(v29 + 72);
          *(_OWORD *)((char *)v20 + 40) = *(_OWORD *)(v29 + 88);
          *(_OWORD *)((char *)v20 + 56) = *(_OWORD *)(v29 + 104);
          *((_QWORD *)v20 + 9) = *(_QWORD *)(v29 + 120);
          *(_DWORD *)v20 |= 0x87u;
        }
        v30 = *((_QWORD *)a3 + 11);
        v31 = *(_QWORD *)(v30 + 104);
        if ( v31 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 96));
          v32 = *(_QWORD *)(v30 + 104);
          v20 = v40;
        }
        else
        {
          v32 = 0LL;
        }
        v33 = *(DMMVIDPNSOURCEMODE **)(v32 + 144);
        v42 = v32;
        if ( v33 )
        {
          *((_BYTE *)v20 + 116) = (unsigned int)(*((_DWORD *)v33 + 18) - 3) <= 1;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)((char *)v20 + 84) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v33);
          *(_DWORD *)v20 |= 0x100u;
          *((_DWORD *)v20 + 30) = *((_DWORD *)a3 + 29);
          *((_DWORD *)v20 + 31) = *((_DWORD *)a3 + 28);
          *(_DWORD *)v20 |= 0x600u;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 247),
                                 *((_DWORD *)v20 + 4));
            *((_QWORD *)v20 + 24) = SessionViewOwner;
            v35 = SessionViewOwner;
            if ( SessionViewOwner )
            {
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 247), *((_DWORD *)v20 + 4));
              *((_DWORD *)v20 + 35) = *((_DWORD *)v35 + 8) - *((_DWORD *)v35 + 6);
              *((_DWORD *)v20 + 36) = *((_DWORD *)v35 + 9) - *((_DWORD *)v35 + 7);
              *((_DWORD *)v20 + 33) = *((_DWORD *)v35 + 6);
              *((_DWORD *)v20 + 34) = *((_DWORD *)v35 + 7);
              *(struct tagRECT *)((char *)v20 + 156) = *DwmClipBox;
              *(_DWORD *)v20 |= 0x820800u;
            }
          }
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v42, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v43, 0LL);
      }
    }
  }
  else
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    v37[3] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
    v37[4] = *((unsigned int *)a2 + 63);
    v37[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v37[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v37[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v37);
  }
  return 0LL;
}

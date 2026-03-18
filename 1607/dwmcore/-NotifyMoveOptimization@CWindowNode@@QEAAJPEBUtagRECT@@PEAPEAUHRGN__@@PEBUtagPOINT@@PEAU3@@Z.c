/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801403AC
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029DD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800B1A2C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18013044C (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18013051C (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 *     Template_xn @ 0x180140EDC (Template_xn.c)
 *     Template_xnn @ 0x180140F50 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CComposition **this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4,
        HRGN hrgn)
{
  unsigned int v9; // esi
  struct _RGNDATA *v10; // rdi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // r15
  bool v12; // zf
  int v13; // ecx
  int v14; // r9d
  int v15; // eax
  unsigned int *v16; // r8
  CComposition *v17; // rcx
  HRGN v18; // rbp
  int v19; // eax
  int v20; // ecx
  int v21; // r9d
  char *Buffer; // r14
  __int64 nCount; // r15
  int v24; // eax
  int v25; // ecx
  int v26; // r9d
  char *v27; // rbp
  __int64 v28; // r14
  struct _RGNDATA *v30; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0;
  v10 = 0LL;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[2]);
  v12 = *((_BYTE *)this + 153) >= 0;
  v30 = 0LL;
  if ( !v12 )
  {
    *((_DWORD *)this + 154) = 0;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 155) = 1;
    *((_BYTE *)this + 153) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CDwmMetaRegion *)(this + 132));
  }
  if ( !*((_BYTE *)this + 1045)
    && qword_1801EFD28
    && CDisplaySet::NeedsDesktopMoves(qword_1801EFD28)
    && PrimaryDesktopRenderTargetNoRef )
  {
    if ( a2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_12;
      Template_xnn(
        v13,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
        (unsigned int)this[79],
        v14,
        (__int64)a2);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xn(
        v13,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_POINT,
        (unsigned int)this[79],
        8,
        (__int64)a4);
LABEL_12:
    v15 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, CComposition **))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                    + 224LL))(
            PrimaryDesktopRenderTargetNoRef,
            this);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x21Du);
LABEL_38:
      if ( v10 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v10);
      return v9;
    }
    *((_BYTE *)this + 1044) = 1;
    if ( a3 )
    {
      CDwmMetaRegion::AddMoveRegion((CDwmMetaRegion *)(this + 132), a3, a4);
    }
    else if ( a2 )
    {
      CDwmMetaRegion::AddMoveRectangle((CDwmMetaRegion *)(this + 132), a2, a4);
    }
    v17 = this[131];
    if ( v17 )
      DeleteObject(v17);
    v18 = hrgn;
    this[131] = (CComposition *)hrgn;
    if ( v18 )
    {
      v19 = HrgnToRgnData(v18, &v30, v16);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x238u);
LABEL_35:
        v10 = v30;
        goto LABEL_38;
      }
      v10 = v30;
      Buffer = v30->Buffer;
      if ( (int)v30->rdh.nCount > 0 )
      {
        nCount = v30->rdh.nCount;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xnn(
              v20,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_CLIP,
              (unsigned int)this[79],
              v21,
              (__int64)Buffer);
          Buffer += 16;
          --nCount;
        }
        while ( nCount );
      }
    }
    this[131] = (CComposition *)v18;
    if ( !v18 )
      goto LABEL_38;
    v24 = HrgnToRgnData(v18, &v30, v16);
    v9 = v24;
    if ( v24 >= 0 )
    {
      v10 = v30;
      v27 = v30->Buffer;
      if ( (int)v30->rdh.nCount > 0 )
      {
        v28 = v30->rdh.nCount;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xnn(
              v25,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_CLIP,
              (unsigned int)this[79],
              v26,
              (__int64)v27);
          v27 += 16;
          --v28;
        }
        while ( v28 );
      }
      goto LABEL_38;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x250u);
    goto LABEL_35;
  }
  return v9;
}

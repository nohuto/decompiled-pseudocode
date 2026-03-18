/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18005D808 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x1800FD154 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x1800FD224 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 *     Template_xn @ 0x180106B1C (Template_xn.c)
 *     Template_xnn @ 0x180106B90 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CComposition **this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4,
        HRGN hrgn)
{
  unsigned int v9; // ebp
  struct _RGNDATA *v10; // rsi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // r12
  int v12; // ecx
  int v13; // r9d
  int v14; // eax
  unsigned int *v15; // r8
  CComposition *v16; // rcx
  HRGN v17; // rbx
  int v18; // eax
  int v19; // ecx
  int v20; // r9d
  char *Buffer; // r14
  __int64 nCount; // r15
  int v23; // eax
  int v24; // ecx
  int v25; // r9d
  char *v26; // rbx
  __int64 v27; // r14
  struct _RGNDATA *v29; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0;
  v10 = 0LL;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[2]);
  v29 = 0LL;
  if ( (*((_BYTE *)this + 90) & 2) != 0 )
  {
    *((_DWORD *)this + 214) = 0;
    *((_DWORD *)this + 216) = 0;
    *((_DWORD *)this + 215) = 1;
    *((_BYTE *)this + 90) &= ~2u;
    CDwmMetaRegion::ClearAllData((CDwmMetaRegion *)(this + 162));
  }
  if ( !*((_BYTE *)this + 1285)
    && qword_1801930E8
    && CDisplaySet::NeedsDesktopMoves(qword_1801930E8)
    && PrimaryDesktopRenderTargetNoRef )
  {
    if ( a2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_12;
      Template_xnn(
        v12,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
        (unsigned int)this[109],
        v13,
        (__int64)a2);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xn(
        v12,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_POINT,
        (unsigned int)this[109],
        8,
        (__int64)a4);
LABEL_12:
    v14 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, CComposition **))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                    + 240LL))(
            PrimaryDesktopRenderTargetNoRef,
            this);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x21Cu);
      return v9;
    }
    *((_BYTE *)this + 1284) = 1;
    if ( a3 )
    {
      CDwmMetaRegion::AddMoveRegion((CDwmMetaRegion *)(this + 162), a3, a4);
    }
    else if ( a2 )
    {
      CDwmMetaRegion::AddMoveRectangle((CDwmMetaRegion *)(this + 162), a2, a4);
    }
    v16 = this[161];
    if ( v16 )
      DeleteObject(v16);
    v17 = hrgn;
    this[161] = (CComposition *)hrgn;
    if ( v17 )
    {
      v18 = HrgnToRgnData(v17, &v29, v15);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x237u);
        goto LABEL_31;
      }
      v10 = v29;
      Buffer = v29->Buffer;
      if ( (int)v29->rdh.nCount > 0 )
      {
        nCount = v29->rdh.nCount;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xnn(
              v19,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_CLIP,
              (unsigned int)this[109],
              v20,
              (__int64)Buffer);
          Buffer += 16;
          --nCount;
        }
        while ( nCount );
      }
    }
    this[161] = (CComposition *)v17;
    if ( !v17 )
      goto LABEL_37;
    v23 = HrgnToRgnData(v17, &v29, v15);
    v9 = v23;
    if ( v23 >= 0 )
    {
      v10 = v29;
      v26 = v29->Buffer;
      if ( (int)v29->rdh.nCount > 0 )
      {
        v27 = v29->rdh.nCount;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xnn(
              v24,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_CLIP,
              (unsigned int)this[109],
              v25,
              (__int64)v26);
          v26 += 16;
          --v27;
        }
        while ( v27 );
      }
      goto LABEL_37;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x24Fu);
LABEL_31:
    v10 = v29;
LABEL_37:
    if ( v10 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v10);
  }
  return v9;
}

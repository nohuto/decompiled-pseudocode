/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180123A8C
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x180064A40 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x180116218 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x1801162E8 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 *     Template_xn @ 0x180124620 (Template_xn.c)
 *     Template_xnn @ 0x180124694 (Template_xnn.c)
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
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r8d
  int v18; // eax
  unsigned int *v19; // r8
  CComposition *v20; // rcx
  HRGN v21; // rbx
  int v22; // eax
  int v23; // ecx
  int v24; // r9d
  char *Buffer; // r14
  __int64 nCount; // r15
  int v27; // eax
  int v28; // ecx
  int v29; // r9d
  char *v30; // rbx
  __int64 v31; // r14
  struct _RGNDATA *v33; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0;
  v10 = 0LL;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[2]);
  v12 = *((_BYTE *)this + 73) >= 0;
  v33 = 0LL;
  if ( !v12 )
  {
    *((_DWORD *)this + 202) = 0;
    *((_DWORD *)this + 204) = 0;
    *((_DWORD *)this + 203) = 1;
    *((_BYTE *)this + 73) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CDwmMetaRegion *)(this + 156));
  }
  if ( !*((_BYTE *)this + 1237) )
  {
    if ( qword_1801A39E8 )
    {
      v13 = 0LL;
      if ( *((_DWORD *)qword_1801A39E8 + 18) )
      {
        v14 = *((_QWORD *)qword_1801A39E8 + 6);
        while ( !(unsigned __int8)CDisplay::NeedsDesktopMoves(*(CDisplay **)(v14 + 8 * v13)) )
        {
          v13 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v13 >= v17 )
            return v9;
        }
        if ( PrimaryDesktopRenderTargetNoRef )
        {
          if ( a2 )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
              goto LABEL_16;
            Template_xnn(
              v16,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
              (unsigned int)this[103],
              v14,
              (__int64)a2);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xn(
              v16,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_POINT,
              (unsigned int)this[103],
              8,
              (__int64)a4);
LABEL_16:
          v18 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, CComposition **))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                          + 232LL))(
                  PrimaryDesktopRenderTargetNoRef,
                  this);
          v9 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x21Du);
            return v9;
          }
          *((_BYTE *)this + 1236) = 1;
          if ( a3 )
          {
            CDwmMetaRegion::AddMoveRegion((CDwmMetaRegion *)(this + 156), a3, a4);
          }
          else if ( a2 )
          {
            CDwmMetaRegion::AddMoveRectangle((CDwmMetaRegion *)(this + 156), a2, a4);
          }
          v20 = this[155];
          if ( v20 )
            DeleteObject(v20);
          v21 = hrgn;
          this[155] = (CComposition *)hrgn;
          if ( v21 )
          {
            v22 = HrgnToRgnData(v21, &v33, v19);
            v9 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x238u);
              goto LABEL_35;
            }
            v10 = v33;
            Buffer = v33->Buffer;
            if ( (int)v33->rdh.nCount > 0 )
            {
              nCount = v33->rdh.nCount;
              do
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  Template_xnn(
                    v23,
                    (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_CLIP,
                    (unsigned int)this[103],
                    v24,
                    (__int64)Buffer);
                Buffer += 16;
                --nCount;
              }
              while ( nCount );
            }
          }
          this[155] = (CComposition *)v21;
          if ( !v21 )
            goto LABEL_41;
          v27 = HrgnToRgnData(v21, &v33, v19);
          v9 = v27;
          if ( v27 >= 0 )
          {
            v10 = v33;
            v30 = v33->Buffer;
            if ( (int)v33->rdh.nCount > 0 )
            {
              v31 = v33->rdh.nCount;
              do
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  Template_xnn(
                    v28,
                    (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_CLIP,
                    (unsigned int)this[103],
                    v29,
                    (__int64)v30);
                v30 += 16;
                --v31;
              }
              while ( v31 );
            }
            goto LABEL_41;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x250u);
LABEL_35:
          v10 = v33;
LABEL_41:
          if ( v10 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v10);
        }
      }
    }
  }
  return v9;
}

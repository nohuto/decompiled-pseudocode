/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180029650
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002F63C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047664 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x180073E50 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029864 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

struct CVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(CWindowList *this, unsigned __int64 a2, char a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  int v9; // eax
  int v10; // r14d
  volatile signed __int32 *v11; // rbx
  int inserted; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v14; // rcx
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  char v19; // [rsp+68h] [rbp-18h]
  struct CVisual *v20; // [rsp+A0h] [rbp+20h] BYREF

  v18 = -1LL;
  v3 = 0LL;
  Buffer[0] = a2;
  v20 = 0LL;
  Buffer[1] = 0LL;
  v16 = 0LL;
  v19 = 0;
  v17 = 0LL;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  v7 = v6;
  if ( a3 )
  {
    if ( !v6 )
      return (struct CVisual *)v3;
    if ( !v6[5] )
    {
      v9 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v20);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x4C8u);
      }
      else
      {
        v11 = (volatile signed __int32 *)v20;
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v7[1] + 32LL), v20, 0LL, 0, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x4C9u);
          goto LABEL_12;
        }
        v7[5] = v11;
        if ( !v11 )
        {
LABEL_12:
          if ( v10 < 0 )
          {
            if ( v11 )
            {
              VisualCollection::RemoveAll((VisualCollection *)(v11 + 8));
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                                   a2);
              VisualCollection::Remove(
                (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                (struct CVisual *)v11);
            }
            v14 = (CBaseObject *)v7[5];
            if ( v14 )
            {
              CBaseObject::Release(v14);
              v7[5] = 0LL;
            }
          }
          if ( v11 )
            CBaseObject::Release((CBaseObject *)v11);
          goto LABEL_2;
        }
        _InterlockedIncrement(v11 + 2);
      }
      v11 = (volatile signed __int32 *)v20;
      goto LABEL_12;
    }
  }
LABEL_2:
  if ( v7 )
    return (struct CVisual *)v7[5];
  return (struct CVisual *)v3;
}

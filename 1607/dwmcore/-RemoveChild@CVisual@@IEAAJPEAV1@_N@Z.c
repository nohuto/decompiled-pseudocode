/*
 * XREFs of ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC
 * Callers:
 *     ?ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x18004F5C0 (-ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18004F6E0 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180125A10 (-RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800507B0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180050ED0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800A25CC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, char a3)
{
  unsigned int v3; // edi
  char v4; // bp
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CVisual *); // rax
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  if ( (*((_BYTE *)this + 152) & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 40) || *((float *)a2 + 55) == 0.0 && *((float *)a2 + 54) == 0.0 )
    {
      v13 = *(_OWORD *)((char *)a2 + 200);
      v8 = CVisual::AddAdditionalDirtyRects(this, (const struct MilRectF *)&v13);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2BAu);
        return v3;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 136), (unsigned __int64)a2) )
  {
    if ( qword_1801EFD28 && CDisplaySet::NeedsDesktopMoves(qword_1801EFD28) )
      CVisual::ClearAllMoveTransformsInSubtree(a2);
    if ( !a3 )
    {
      v9 = CVisual::DestroyRenderTargetForRemoteApp(a2);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2D3u);
      CVisual::NotifyMidManipulationUpdate(this, 3LL, a2);
    }
    v10 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 18) = 0LL;
    v11 = *(__int64 (__fastcall **)(CVisual *))(v10 + 16);
    if ( v11 == CVisual::Release )
      CVisual::Release(a2);
    else
      v11(a2);
  }
  CVisual::PropagateFlags(this, 1, v4, 0, 0, 0, 0);
  return v3;
}

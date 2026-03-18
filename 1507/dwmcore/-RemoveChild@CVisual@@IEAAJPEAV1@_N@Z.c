/*
 * XREFs of ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180035960 (-ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180035A10 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x1800F5860 (-RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18001B1E0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180034D20 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800362EC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180037148 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x18008D4D0 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, char a3)
{
  unsigned int v3; // edi
  bool v4; // r14
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  unsigned int (__fastcall *v11)(CVisual *__hidden); // rsi
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  if ( (*((_BYTE *)this + 88) & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 25) || *((float *)a2 + 44) == 0.0 && *((float *)a2 + 43) == 0.0 )
    {
      v13 = *(_OWORD *)((char *)a2 + 156);
      v8 = CVisual::AddAdditionalDirtyRects(this, (const struct MilRectF *)&v13);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2DBu);
        return v3;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 72), (__int64)a2) )
  {
    if ( qword_1801930E8 && CDisplaySet::NeedsDesktopMoves(qword_1801930E8) )
      CVisual::ClearAllMoveTransformsInSubtree(a2);
    if ( !a3 )
    {
      v9 = CVisual::DestroyRenderTargetForRemoteApp(a2);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2F4u);
      CVisual::NotifyMidManipulationUpdate(this, 3LL, a2);
    }
    v10 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = 0LL;
    v11 = *(unsigned int (__fastcall **)(CVisual *__hidden))(v10 + 16);
    if ( v11 == CVisual::Release )
      CVisual::Release(a2);
    else
      v11(a2);
  }
  CVisual::PropagateFlags(this, 1, v4, 0, 0, 0, 0);
  return v3;
}

/*
 * XREFs of ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180
 * Callers:
 *     ?ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180048330 (-ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180048480 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x18010F500 (-RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048CFC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049C60 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x18004D6F0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180067E18 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B6058 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, char a3)
{
  unsigned int v3; // edi
  bool v4; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  unsigned int (__fastcall *v15)(CVisual *__hidden); // rsi
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  if ( (*((_BYTE *)this + 72) & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 21) || *((float *)a2 + 40) == 0.0 && *((float *)a2 + 39) == 0.0 )
    {
      v17 = *(_OWORD *)((char *)a2 + 140);
      v8 = CVisual::AddAdditionalDirtyRects(this, (const struct MilRectF *)&v17);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x291u);
        return v3;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 56), (unsigned __int64)a2) )
  {
    if ( qword_1801A39E8 )
    {
      v9 = 0LL;
      if ( *((_DWORD *)qword_1801A39E8 + 18) )
      {
        v10 = *((_QWORD *)qword_1801A39E8 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v10 + 8 * v9)) )
        {
          v9 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v9 >= v12 )
            goto LABEL_10;
        }
        CVisual::ClearAllMoveTransformsInSubtree(a2);
      }
    }
LABEL_10:
    if ( !a3 )
    {
      v13 = CVisual::DestroyRenderTargetForRemoteApp(a2);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2AAu);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, (__int64)a2);
    }
    v14 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 8) = 0LL;
    v15 = *(unsigned int (__fastcall **)(CVisual *__hidden))(v14 + 16);
    if ( v15 == CVisual::Release )
      CVisual::Release(a2);
    else
      ((void (__fastcall *)(struct CVisual *, __int64))v15)(a2, v9);
  }
  CVisual::PropagateFlags(this, 1, v4, 0, 0, 0, 0);
  return v3;
}

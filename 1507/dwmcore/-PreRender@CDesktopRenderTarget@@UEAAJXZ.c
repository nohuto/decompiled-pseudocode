/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800493D0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  int v1; // ebx
  struct CVisualTree *v3; // rcx
  int v4; // eax
  __int64 v6; // rbp
  int v7; // eax

  v1 = 0;
  *((_BYTE *)this + 166) = 0;
  if ( *((_DWORD *)this + 8) )
  {
    if ( *(int *)(*((_QWORD *)this - 8) + 1032LL) >= 2 && (v6 = 0LL, *((_DWORD *)this + 20)) )
    {
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 8 * v6) + 184LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v6));
        v1 = v7;
        if ( v7 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x725u);
    }
    else
    {
LABEL_3:
      v3 = (struct CVisualTree *)*((_QWORD *)this - 3);
      if ( v3 )
      {
        v4 = CVisualTree::PreCompute(v3, (__int128 *)((char *)this + 120));
        v1 = v4;
        if ( v4 >= 0 )
          return (unsigned int)v1;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x734u);
      }
    }
    if ( v1 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v1, 0x599u);
  }
  return (unsigned int)v1;
}

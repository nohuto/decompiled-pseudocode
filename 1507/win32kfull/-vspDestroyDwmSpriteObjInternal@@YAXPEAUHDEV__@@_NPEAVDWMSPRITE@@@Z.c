/*
 * XREFs of ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0261F20
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 *     ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C0261F14 (-vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0262414 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C000CCD8 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C000E2B8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C000F65C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C00117E4 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0011A24 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

void __fastcall vspDestroyDwmSpriteObjInternal(HDEV a1, char a2, struct DWMSPRITE *a3)
{
  __int64 v3; // rdi
  REGION *v7; // rcx
  HDEV v8; // rdx
  char v9; // al
  int v10; // esi
  int v11; // eax
  char v12; // [rsp+20h] [rbp-18h]

  if ( a3 )
  {
    v3 = *((_QWORD *)a3 + 16);
    REGION::vDeleteREGION(*((REGION **)a3 + 11));
    v7 = (REGION *)*((_QWORD *)a3 + 13);
    *((_QWORD *)a3 + 11) = 0LL;
    REGION::vDeleteREGION(v7);
    v9 = *((_BYTE *)a3 + 136);
    *((_QWORD *)a3 + 13) = 0LL;
    v10 = ((unsigned __int8)~v9 >> 4) & 1;
    if ( v3 )
    {
      DWMSPRITE::SetLogicalSurface(a3, v8, 0LL);
      SFMLOGICALSURFACE::CleanupRegions((REGION **)v3);
      v11 = *(_DWORD *)(v3 + 248);
      if ( (v11 & 0x80u) != 0 && (v11 & 8) != 0 && (v11 & 0x10) != 0 )
      {
        *(_DWORD *)(v3 + 248) = v11 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)v3, a1, gpSfmState);
      }
      bhLSurfDestroyLogicalSurfaceObject((__int64 *)v3, 1, 0);
    }
    if ( v10 )
      vspRemoveStateReferencesForSprite(a3);
    if ( !*(_QWORD *)a3
      || (EtwDwmSpriteDestroyEvent(0LL), v12 = 15, HmgRemoveObject(*(_QWORD *)a3, a2 != 0, 0LL, 1LL, v12, 0LL)) )
    {
      FreeObject(a3, 15LL);
    }
    --*((_DWORD *)g_pDwmState + 24);
  }
}

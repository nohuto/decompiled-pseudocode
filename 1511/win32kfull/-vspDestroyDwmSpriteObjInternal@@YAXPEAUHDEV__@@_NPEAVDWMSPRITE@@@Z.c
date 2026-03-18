/*
 * XREFs of ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C02608D0
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00D3560 (GreTransferDwmStateToSpriteState.c)
 *     ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C02608C4 (-vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0260C74 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C007992C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF78 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C007B174 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C007B37C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00FC944 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
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

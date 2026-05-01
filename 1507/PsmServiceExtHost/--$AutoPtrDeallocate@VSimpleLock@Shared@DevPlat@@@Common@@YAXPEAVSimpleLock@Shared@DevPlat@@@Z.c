/*
 * XREFs of ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0
 * Callers:
 *     GcsSrv_GetGameIdByAUMID @ 0x180002A60 (GcsSrv_GetGameIdByAUMID.c)
 *     GcsSrv_GetGlobalProperty @ 0x180006E90 (GcsSrv_GetGlobalProperty.c)
 *     GcsSrv_SetGlobalProperty @ 0x18001B2D0 (GcsSrv_SetGlobalProperty.c)
 *     GcsSrv_AddGameConfig @ 0x18001B450 (GcsSrv_AddGameConfig.c)
 *     GcsSrv_GetAllGameIds @ 0x180042F90 (GcsSrv_GetAllGameIds.c)
 *     GcsSrv_GetGameConfig @ 0x180043020 (GcsSrv_GetGameConfig.c)
 *     GcsSrv_GetGameConfigForClientProcess @ 0x1800430E0 (GcsSrv_GetGameConfigForClientProcess.c)
 *     GcsSrv_GetGameConfigSize @ 0x1800431E0 (GcsSrv_GetGameConfigSize.c)
 *     GcsSrv_GetGameConfigSizeForClientProcess @ 0x180043280 (GcsSrv_GetGameConfigSizeForClientProcess.c)
 *     GcsSrv_GetGameIdCount @ 0x180043380 (GcsSrv_GetGameIdCount.c)
 *     GcsSrv_GetGameIdsByExeName @ 0x180043400 (GcsSrv_GetGameIdsByExeName.c)
 *     GcsSrv_GetGameIdsByExeNameCount @ 0x1800434A0 (GcsSrv_GetGameIdsByExeNameCount.c)
 *     GcsSrv_GetGameProperty @ 0x180043530 (GcsSrv_GetGameProperty.c)
 *     GcsSrv_GetGamePropertySize @ 0x1800435D0 (GcsSrv_GetGamePropertySize.c)
 *     GcsSrv_GetGlobalPropertySize @ 0x180043670 (GcsSrv_GetGlobalPropertySize.c)
 *     GcsSrv_ModifyGameConfig @ 0x180043700 (GcsSrv_ModifyGameConfig.c)
 *     GcsSrv_RemoveGameConfig @ 0x1800437A0 (GcsSrv_RemoveGameConfig.c)
 *     GcsSrv_SetGameProperty @ 0x180043820 (GcsSrv_SetGameProperty.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

void __fastcall Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>(LPCRITICAL_SECTION *Block)
{
  if ( Block )
  {
    if ( !*((_BYTE *)Block + 8) )
      LeaveCriticalSection(*Block);
    operator delete(Block);
  }
}

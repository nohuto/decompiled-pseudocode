/*
 * XREFs of ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030
 * Callers:
 *     GcsSrv_GetGameIdByAUMID @ 0x180005640 (GcsSrv_GetGameIdByAUMID.c)
 *     GcsSrv_GetGlobalProperty @ 0x18001CFA0 (GcsSrv_GetGlobalProperty.c)
 *     GcsSrv_GetGameIdByPID @ 0x18001D040 (GcsSrv_GetGameIdByPID.c)
 *     GcsSrv_GetGameConfigSizeForClientProcess @ 0x18001D0E0 (GcsSrv_GetGameConfigSizeForClientProcess.c)
 *     GcsSrv_SetGlobalProperty @ 0x180025B90 (GcsSrv_SetGlobalProperty.c)
 *     GcsSrv_AddGameConfig @ 0x180047F50 (GcsSrv_AddGameConfig.c)
 *     GcsSrv_GetAllGameIds @ 0x180048010 (GcsSrv_GetAllGameIds.c)
 *     GcsSrv_GetGameConfig @ 0x1800480A0 (GcsSrv_GetGameConfig.c)
 *     GcsSrv_GetGameConfigForClientProcess @ 0x180048160 (GcsSrv_GetGameConfigForClientProcess.c)
 *     GcsSrv_GetGameConfigSize @ 0x180048260 (GcsSrv_GetGameConfigSize.c)
 *     GcsSrv_GetGameIdCount @ 0x180048300 (GcsSrv_GetGameIdCount.c)
 *     GcsSrv_GetGameIdsByExeName @ 0x180048380 (GcsSrv_GetGameIdsByExeName.c)
 *     GcsSrv_GetGameIdsByExeNameCount @ 0x180048420 (GcsSrv_GetGameIdsByExeNameCount.c)
 *     GcsSrv_GetGameProperty @ 0x1800484B0 (GcsSrv_GetGameProperty.c)
 *     GcsSrv_GetGamePropertySize @ 0x180048550 (GcsSrv_GetGamePropertySize.c)
 *     GcsSrv_GetGlobalPropertySize @ 0x1800485F0 (GcsSrv_GetGlobalPropertySize.c)
 *     GcsSrv_ModifyGameConfig @ 0x180048680 (GcsSrv_ModifyGameConfig.c)
 *     GcsSrv_RemoveGameConfig @ 0x180048740 (GcsSrv_RemoveGameConfig.c)
 *     GcsSrv_SetGameProperty @ 0x1800487C0 (GcsSrv_SetGameProperty.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
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

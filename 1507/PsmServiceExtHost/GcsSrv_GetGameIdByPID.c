/*
 * XREFs of GcsSrv_GetGameIdByPID @ 0x1800073E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x180007EF0 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameIdByPID(ExecutionModel::Internal *a1, void *a2, struct _GUID *a3)
{
  unsigned int v4; // ebp
  int v5; // edi
  ExecutionModel::GameConfigStoreServer *v6; // rbx
  __int64 (__fastcall *v7)(ExecutionModel::GameConfigStoreServer *__hidden, unsigned int, struct _GUID *); // rdi
  int GameIdByPID; // eax
  void *v9; // rbx
  void *Block; // [rsp+20h] [rbp-18h] BYREF
  ExecutionModel::GameConfigStoreServer *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = (unsigned int)a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, (bool)&Block, &v12, 0LL);
  if ( v5 >= 0 )
  {
    v6 = v12;
    *a3 = (struct _GUID)xmmword_180052890;
    v7 = *(__int64 (__fastcall **)(ExecutionModel::GameConfigStoreServer *__hidden, unsigned int, struct _GUID *))(*(_QWORD *)v6 + 32LL);
    if ( v7 == ExecutionModel::GameConfigStoreServer::GetGameIdByPID )
      GameIdByPID = ExecutionModel::GameConfigStoreServer::GetGameIdByPID(v6, v4, a3);
    else
      GameIdByPID = v7(v6, v4, a3);
    v5 = GameIdByPID;
  }
  v9 = Block;
  if ( Block )
  {
    if ( !*((_BYTE *)Block + 8) )
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)Block);
    operator delete(v9);
  }
  return (unsigned int)v5;
}

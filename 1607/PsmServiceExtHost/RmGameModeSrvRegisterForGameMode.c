/*
 * XREFs of RmGameModeSrvRegisterForGameMode @ 0x18002E640
 * Callers:
 *     <none>
 * Callees:
 *     RmpQueryRpcClientInformation @ 0x18001A044 (RmpQueryRpcClientInformation.c)
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 */

__int64 __fastcall RmGameModeSrvRegisterForGameMode(void *a1, struct _WNF_STATE_NAME *a2, __int64 a3)
{
  __int64 result; // rax
  struct _RM_SERVICE_GLOBALS *v5; // rcx
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  result = RmpQueryRpcClientInformation(a1, 0LL, a3, 0LL, &v6);
  if ( (int)result >= 0 )
  {
    result = RmSrvGameModeEnableForHost(v5, v6, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

/*
 * XREFs of RmGameModeSrvUnregisterForGameMode @ 0x18002E690
 * Callers:
 *     <none>
 * Callees:
 *     RmpQueryRpcClientInformation @ 0x18001A044 (RmpQueryRpcClientInformation.c)
 *     ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974 (-RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 */

__int64 __fastcall RmGameModeSrvUnregisterForGameMode(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _RM_SERVICE_GLOBALS *v4; // rcx
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = RmpQueryRpcClientInformation(a1, 0LL, a3, 0LL, &v5);
  if ( (int)result >= 0 )
  {
    result = RmSrvGameModeDisableForHost(v4, v5);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

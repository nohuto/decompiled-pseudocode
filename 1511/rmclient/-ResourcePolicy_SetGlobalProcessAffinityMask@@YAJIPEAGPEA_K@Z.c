/*
 * XREFs of ?ResourcePolicy_SetGlobalProcessAffinityMask@@YAJIPEAGPEA_K@Z @ 0x1800105F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXIPEAGPEA_K@ZPEAXIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAXIPEAGPEA_K@Z0I12@Z @ 0x180010370 (--$RpcCall@P6AJPEAXIPEAGPEA_K@ZPEAXIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAXIPEAGPEA_K@Z0I12@Z.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ResourcePolicy_SetGlobalProcessAffinityMask(int a1, void **a2, unsigned __int64 *a3)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    result.Simple = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)&v8, a2);
    if ( SLODWORD(result.Simple) >= 0 )
      return DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned short *,unsigned __int64 *),void *,unsigned int,unsigned short *,unsigned __int64 *>(
               v7,
               v8,
               a1,
               (__int64)a2,
               (__int64)a3);
  }
  else
  {
    return (CLIENT_CALL_RETURN)2147942487LL;
  }
  return result;
}

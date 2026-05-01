/*
 * XREFs of ?ResourcePolicy_GetProcessAffinityMask@@YAJPEAXPEAIPEAGPEA_K@Z @ 0x180010510
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX0PEAI@ZPEAXPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAX0PEAI@Z001@Z @ 0x180010288 (--$RpcCall@P6AJPEAX0PEAI@ZPEAXPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAX0PEAI@Z001@Z.c)
 *     ??$RpcCall@P6AJPEAX0PEAIPEAGPEA_K@ZPEAXPEAXPEAIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAX0PEAIPEAGPEA_K@Z00123@Z @ 0x1800102F0 (--$RpcCall@P6AJPEAX0PEAIPEAGPEA_K@ZPEAXPEAXPEAIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAX0PEAIPEAGPEA.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ResourcePolicy_GetProcessAffinityMask(
        __int64 a1,
        void **a2,
        unsigned __int16 *a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  CLIENT_CALL_RETURN result; // rax
  __int64 v10; // rcx
  int RPCBindingHandle; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
    return (CLIENT_CALL_RETURN)2147942487LL;
  if ( !a3 )
  {
    if ( !a4 )
    {
      result.Simple = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)&v13, a2);
      if ( SLODWORD(result.Simple) >= 0 )
        return DevPlat::Shared::RpcCall<long (*)(void *,void *,unsigned int *),void *,void *,unsigned int *>(
                 v10,
                 v13,
                 a1,
                 (__int64)a2);
      return result;
    }
    return (CLIENT_CALL_RETURN)2147942487LL;
  }
  if ( !a4 )
    return (CLIENT_CALL_RETURN)2147942487LL;
  RPCBindingHandle = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)&v13, a2);
  if ( RPCBindingHandle < 0 )
    return (CLIENT_CALL_RETURN)(unsigned int)RPCBindingHandle;
  RPCBindingHandle = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,void *,unsigned int *,unsigned short *,unsigned __int64 *),void *,void *,unsigned int *,unsigned short *,unsigned __int64 *>(
                                     v12,
                                     v13,
                                     a1,
                                     (__int64)a2,
                                     (__int64)a3,
                                     (__int64)a4).Pointer;
  if ( RPCBindingHandle < 0 )
    return (CLIENT_CALL_RETURN)(unsigned int)RPCBindingHandle;
  return (CLIENT_CALL_RETURN)v4;
}

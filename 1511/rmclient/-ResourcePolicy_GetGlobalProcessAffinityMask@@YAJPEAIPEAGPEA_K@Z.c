/*
 * XREFs of ?ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z @ 0x180010460
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z @ 0x1800073A4 (--$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z.c)
 *     ??$RpcCall@P6AJPEAXPEAIPEAGPEA_K@ZPEAXPEAIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAGPEA_K@Z0123@Z @ 0x1800103E4 (--$RpcCall@P6AJPEAXPEAIPEAGPEA_K@ZPEAXPEAIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAGPEA_K@Z01.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall ResourcePolicy_GetGlobalProcessAffinityMask(unsigned int *a1, void **a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  int RPCBindingHandle; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return 2147942487LL;
  if ( !a2 )
  {
    if ( !a3 )
    {
      result = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)&v10, 0LL);
      if ( (int)result >= 0 )
        return DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *),void *,unsigned int *>(
                 (__int64 (__fastcall *)(__int64, __int64))Clt_ResourcePolicy_GetGlobalGroupCount,
                 v10,
                 (__int64)a1);
      return result;
    }
    return 2147942487LL;
  }
  if ( !a3 )
    return 2147942487LL;
  RPCBindingHandle = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)&v10, a2);
  if ( RPCBindingHandle < 0 )
    return (unsigned int)RPCBindingHandle;
  RPCBindingHandle = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,unsigned short *,unsigned __int64 *),void *,unsigned int *,unsigned short *,unsigned __int64 *>(
                                     v9,
                                     v10,
                                     (__int64)a1,
                                     (__int64)a2,
                                     (__int64)a3).Pointer;
  if ( RPCBindingHandle < 0 )
    return (unsigned int)RPCBindingHandle;
  return v3;
}

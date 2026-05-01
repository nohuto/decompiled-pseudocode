/*
 * XREFs of ?ResourcePolicy_RevertProcessAffinityMask@@YAJPEAX@Z @ 0x1800105C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX0@ZPEAXPEAX@Shared@DevPlat@@YAJP6AJPEAX0@Z00@Z @ 0x1800101A4 (--$RpcCall@P6AJPEAX0@ZPEAXPEAX@Shared@DevPlat@@YAJP6AJPEAX0@Z00@Z.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ResourcePolicy_RevertProcessAffinityMask(__int64 a1, void **a2)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result.Simple = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)&v5, a2);
  if ( SLODWORD(result.Simple) >= 0 )
    return DevPlat::Shared::RpcCall<long (*)(void *,void *),void *,void *>(v4, v5, a1);
  return result;
}

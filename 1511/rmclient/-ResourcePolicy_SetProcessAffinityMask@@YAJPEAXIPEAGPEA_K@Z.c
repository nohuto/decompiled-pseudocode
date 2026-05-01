/*
 * XREFs of ?ResourcePolicy_SetProcessAffinityMask@@YAJPEAXIPEAGPEA_K@Z @ 0x180010660
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX0IPEAGPEA_K@ZPEAXPEAXIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAX0IPEAGPEA_K@Z00I12@Z @ 0x180010208 (--$RpcCall@P6AJPEAX0IPEAGPEA_K@ZPEAXPEAXIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAX0IPEAGPEA_K@Z00I12.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ResourcePolicy_SetProcessAffinityMask(
        __int64 a1,
        void **a2,
        unsigned __int16 *a3,
        unsigned __int64 *a4)
{
  int v6; // esi
  CLIENT_CALL_RETURN result; // rax
  __int64 v9; // rcx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = (int)a2;
  if ( (_DWORD)a2 && a3 && a4 )
  {
    result.Simple = ExecutionModel::Internal::GetRPCBindingHandle((ExecutionModel::Internal *)v10, a2);
    if ( SLODWORD(result.Simple) >= 0 )
      return DevPlat::Shared::RpcCall<long (*)(void *,void *,unsigned int,unsigned short *,unsigned __int64 *),void *,void *,unsigned int,unsigned short *,unsigned __int64 *>(
               v9,
               v10[0],
               a1,
               v6,
               (__int64)a3,
               (__int64)a4);
  }
  else
  {
    return (CLIENT_CALL_RETURN)2147942487LL;
  }
  return result;
}

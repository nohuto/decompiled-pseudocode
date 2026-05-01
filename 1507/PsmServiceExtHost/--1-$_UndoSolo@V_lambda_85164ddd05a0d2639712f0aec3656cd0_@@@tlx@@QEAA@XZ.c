/*
 * XREFs of ??1?$_UndoSolo@V_lambda_85164ddd05a0d2639712f0aec3656cd0_@@@tlx@@QEAA@XZ @ 0x180006CCC
 * Callers:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall tlx::_UndoSolo<_lambda_85164ddd05a0d2639712f0aec3656cd0_>::~_UndoSolo<_lambda_85164ddd05a0d2639712f0aec3656cd0_>(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return RpcRevertToSelfEx(**(RPC_BINDING_HANDLE **)a1);
  return result;
}

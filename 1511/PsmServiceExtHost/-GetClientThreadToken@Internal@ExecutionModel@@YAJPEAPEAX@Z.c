/*
 * XREFs of ?GetClientThreadToken@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x18001C43C
 * Callers:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 * Callees:
 *     <none>
 */

signed int __fastcall ExecutionModel::Internal::GetClientThreadToken(PHANDLE TokenHandle, void **a2)
{
  HANDLE CurrentThread; // rax
  signed int result; // eax

  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 1, TokenHandle) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}

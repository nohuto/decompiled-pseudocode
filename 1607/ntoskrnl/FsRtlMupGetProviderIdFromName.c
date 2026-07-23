/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x14061E4F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( pFsRtlpMupCalls )
    return (*(__int64 (__fastcall **)(PCUNICODE_STRING, PULONG32))(pFsRtlpMupCalls + 8))(pProviderName, pProviderId);
  else
    return -1073741637;
}

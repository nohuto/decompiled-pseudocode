/*
 * XREFs of FsRtlMupGetProviderInfoFromFileObject @ 0x14061E50C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlMupGetProviderInfoFromFileObject(
        PFILE_OBJECT pFileObject,
        ULONG Level,
        PVOID pBuffer,
        PULONG pBufferSize)
{
  if ( pFsRtlpMupCalls )
    return (*(__int64 (__fastcall **)(PFILE_OBJECT, ULONG, PVOID, PULONG))pFsRtlpMupCalls)(
             pFileObject,
             Level,
             pBuffer,
             pBufferSize);
  else
    return -1073741637;
}

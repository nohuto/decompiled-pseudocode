/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x14046B6C4
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007B9B4 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}

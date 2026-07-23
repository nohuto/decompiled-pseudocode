/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x14046A594
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}

/*
 * XREFs of CmpReparseToVirtualPath @ 0x1405E2990
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmpVirtualPathPresent @ 0x1405E2D38 (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  if ( *(char *)(a1 + 186) < 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3) >= 0 )
  {
    if ( (unsigned __int8)CmpVirtualPathPresent(a3) )
      return 1;
    RtlFreeAnsiString(a3);
  }
  return 0;
}

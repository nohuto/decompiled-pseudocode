/*
 * XREFs of CmpReparseToVirtualPath @ 0x140658F0C
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpVirtualPathPresent @ 0x1406591BC (CmpVirtualPathPresent.c)
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

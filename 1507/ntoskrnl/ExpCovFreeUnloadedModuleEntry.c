/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x1406F8B30
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406F880C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406F8ABC (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

__int64 __fastcall ExpCovFreeUnloadedModuleEntry(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx

  if ( !P )
    return 3221225485LL;
  if ( P[1].Buffer )
    RtlFreeAnsiString(P + 1);
  if ( P[2].Buffer )
    RtlFreeAnsiString(P + 2);
  Buffer = P[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}

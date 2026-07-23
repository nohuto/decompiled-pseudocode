/*
 * XREFs of PsGetSiloIdentifier @ 0x1405815C4
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x1406E613C (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 */

__int64 __fastcall PsGetSiloIdentifier(__int64 a1)
{
  __int64 CurrentSilo; // rax
  unsigned int v2; // ecx

  CurrentSilo = a1;
  if ( a1 == -1 )
    CurrentSilo = PsGetCurrentSilo();
  v2 = 0;
  if ( CurrentSilo )
    return *(unsigned int *)(CurrentSilo + 1236);
  return v2;
}

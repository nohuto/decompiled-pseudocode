/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x180083DD0
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpValidPathComponentsMask @ 0x1800D1CE8 (LdrpValidPathComponentsMask.c)
 */

__int64 __fastcall LdrSetDefaultDllDirectories(__int64 a1)
{
  int valid; // eax
  int v2; // edx

  if ( !(_DWORD)a1 )
    return 3221225485LL;
  valid = LdrpValidPathComponentsMask(a1, (unsigned int)a1);
  if ( ((~valid | 0x100) & v2) != 0 )
    return 3221225485LL;
  LdrpDefaultDllDirectories = v2;
  return 0LL;
}

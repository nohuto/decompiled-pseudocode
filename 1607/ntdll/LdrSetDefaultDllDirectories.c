/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18005E8A0
 * Callers:
 *     LdrpInitializePolicy @ 0x18005DE2C (LdrpInitializePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrSetDefaultDllDirectories(int a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  v1 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v1 = 31488;
  if ( ((~v1 | 0x100) & a1) != 0 )
    return 3221225485LL;
  LdrpDefaultDllDirectories = a1;
  return 0LL;
}

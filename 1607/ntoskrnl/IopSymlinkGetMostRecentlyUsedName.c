/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14012ED68
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x140540AD0 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}

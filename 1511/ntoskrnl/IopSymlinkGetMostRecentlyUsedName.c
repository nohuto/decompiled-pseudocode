/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x1400F1694
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
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

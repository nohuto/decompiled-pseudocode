/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1404C0C94
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkCleanupECP @ 0x1404C0B50 (IopSymlinkCleanupECP.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}

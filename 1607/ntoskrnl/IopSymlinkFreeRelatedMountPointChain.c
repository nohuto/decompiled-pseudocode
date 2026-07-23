/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x14054124C
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x140541010 (IopSymlinkRememberJunction.c)
 *     IopSymlinkCleanupECP @ 0x140541108 (IopSymlinkCleanupECP.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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

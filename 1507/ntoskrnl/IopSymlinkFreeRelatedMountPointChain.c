/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x140548C04
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCleanupECP @ 0x140548BFC (IopSymlinkCleanupECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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

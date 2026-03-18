/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C0134FD0
 * Callers:
 *     DXGDEVICE_CompleteAsynchronousUnpin @ 0x1C001D050 (DXGDEVICE_CompleteAsynchronousUnpin.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, a4);
}

/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C0139BCC
 * Callers:
 *     DXGDEVICE_CompleteAsynchronousUnpin @ 0x1C001D260 (DXGDEVICE_CompleteAsynchronousUnpin.c)
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

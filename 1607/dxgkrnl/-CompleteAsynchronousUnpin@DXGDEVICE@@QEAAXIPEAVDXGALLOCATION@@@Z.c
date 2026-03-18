/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C015D024
 * Callers:
 *     DXGDEVICE_CompleteAsynchronousUnpin @ 0x1C0022170 (DXGDEVICE_CompleteAsynchronousUnpin.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, a4);
}

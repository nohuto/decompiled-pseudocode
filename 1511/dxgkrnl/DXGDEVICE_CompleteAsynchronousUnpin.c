/*
 * XREFs of DXGDEVICE_CompleteAsynchronousUnpin @ 0x1C001D260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE_CompleteAsynchronousUnpin(unsigned int a1, DXGDEVICE **a2)
{
  DXGDEVICE::CompleteAsynchronousUnpin(a2[1], a1, (struct DXGALLOCATION *)a2);
}

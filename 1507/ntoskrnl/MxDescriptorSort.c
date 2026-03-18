/*
 * XREFs of MxDescriptorSort @ 0x1407B5D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MxDescriptorSort(_QWORD **a1, _QWORD **a2)
{
  return **a1 < **a2 ? -1 : 1;
}

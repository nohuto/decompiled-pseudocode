/*
 * XREFs of rimUserMemAllocNodeAlloc @ 0x1C00C2F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall rimUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPool();
}

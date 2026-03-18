/*
 * XREFs of KiGetHalExtensionList @ 0x1407E9174
 * Callers:
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2232LL;
}

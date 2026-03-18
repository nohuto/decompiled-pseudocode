/*
 * XREFs of KiGetHalExtensionList @ 0x1407CFB40
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2232LL;
}

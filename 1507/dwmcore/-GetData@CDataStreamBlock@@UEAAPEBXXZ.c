/*
 * XREFs of ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180050500
 * Callers:
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800515EC (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C630 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall CDataStreamBlock::GetData(CDataStreamBlock *this)
{
  return (char *)this + 32;
}

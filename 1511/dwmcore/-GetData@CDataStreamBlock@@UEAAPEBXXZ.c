/*
 * XREFs of ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x1800A0BE0
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800A1618 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall CDataStreamBlock::GetData(CDataStreamBlock *this)
{
  return (char *)this + 32;
}

/*
 * XREFs of ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18004C540
 * Callers:
 *     ?ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800434E4 (-ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18004BC8C (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18004BFC8 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800AE6A0 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CDataStreamBlock::GetWrittenSize(CDataStreamBlock *this)
{
  return (unsigned int *)((char *)this + 28);
}

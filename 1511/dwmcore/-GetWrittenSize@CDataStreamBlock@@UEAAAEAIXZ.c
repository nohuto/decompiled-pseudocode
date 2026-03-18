/*
 * XREFs of ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800A0BA0
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z @ 0x18009F500 (-MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18009FE6C (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800A1618 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CDataStreamBlock::GetWrittenSize(CDataStreamBlock *this)
{
  return (unsigned int *)((char *)this + 28);
}

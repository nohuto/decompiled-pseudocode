/*
 * XREFs of ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800504E0
 * Callers:
 *     ?MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z @ 0x18004E300 (-MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004F8AC (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004F9A0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004FAE0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800500A0 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall CDataStreamBlock::GetWritePointer(CDataStreamBlock *this)
{
  return (unsigned __int8 *)this + *((unsigned int *)this + 7) + 32;
}

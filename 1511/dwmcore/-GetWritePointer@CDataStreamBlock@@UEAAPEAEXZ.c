/*
 * XREFs of ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x1800A0BC0
 * Callers:
 *     ?MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z @ 0x18009F500 (-MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009F970 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall CDataStreamBlock::GetWritePointer(CDataStreamBlock *this)
{
  return (unsigned __int8 *)this + *((unsigned int *)this + 7) + 32;
}

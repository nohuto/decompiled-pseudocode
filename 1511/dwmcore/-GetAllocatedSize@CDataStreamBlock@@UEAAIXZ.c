/*
 * XREFs of ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800A0BB0
 * Callers:
 *     ?MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z @ 0x18009F500 (-MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDataStreamBlock::GetAllocatedSize(CDataStreamBlock *this)
{
  return *((unsigned int *)this + 6);
}

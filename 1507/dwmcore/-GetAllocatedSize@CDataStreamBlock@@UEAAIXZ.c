/*
 * XREFs of ?GetAllocatedSize@CDataStreamBlock@@UEAAIXZ @ 0x1800504D0
 * Callers:
 *     ?MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z @ 0x18004E300 (-MilChannel_AppendCommandData@@YAJPEAUMIL_CHANNEL__@@PEAXI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004F6E4 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004F9A0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004FAE0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800500A0 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDataStreamBlock::GetAllocatedSize(CDataStreamBlock *this)
{
  return *((unsigned int *)this + 6);
}

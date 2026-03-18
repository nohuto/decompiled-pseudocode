/*
 * XREFs of ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C1BC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C001C128 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  if ( (*((_BYTE *)this + 184) & 0x20) != 0
    && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, a2, 0) )
  {
    *((_BYTE *)this + 184) &= ~0x20u;
  }
  if ( (*((_BYTE *)this + 184) & 0x40) != 0
    && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, a2, 1u) )
  {
    *((_BYTE *)this + 184) &= ~0x40u;
  }
  return (*((_BYTE *)this + 184) & 0x60) == 0;
}

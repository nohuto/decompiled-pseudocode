/*
 * XREFs of ?HasPendingBatches@CApplicationChannel@DirectComposition@@QEBA_NXZ @ 0x1C00D5BA4
 * Callers:
 *     NtDCompositionWaitForChannel @ 0x1C0079B50 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CApplicationChannel::HasPendingBatches(
        DirectComposition::CApplicationChannel *this)
{
  return *((_DWORD *)this + 43) > 0;
}

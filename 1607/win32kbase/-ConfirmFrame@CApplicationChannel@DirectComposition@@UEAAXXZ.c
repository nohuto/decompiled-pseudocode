/*
 * XREFs of ?ConfirmFrame@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C003E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::ConfirmFrame(DirectComposition::CApplicationChannel *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 97);
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 98) = v1;
}

/*
 * XREFs of ?IsStartOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18004A1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCClickerProcessor::IsStartOfCapture(MPCClickerProcessor *this, struct InputInfo *a2)
{
  return *((_DWORD *)a2 + 177) == 2;
}

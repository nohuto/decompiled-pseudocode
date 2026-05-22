/*
 * XREFs of ?IsEndOfCapture@MPCMouseProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180042950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::IsEndOfCapture(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*((_BYTE *)a2 + 708) & 0x15) == 0;
}

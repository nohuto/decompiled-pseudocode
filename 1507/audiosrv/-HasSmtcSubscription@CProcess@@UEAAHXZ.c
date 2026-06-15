/*
 * XREFs of ?HasSmtcSubscription@CProcess@@UEAAHXZ @ 0x1800039B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::HasSmtcSubscription(CProcess *this)
{
  return *((_DWORD *)this + 112) != 0;
}

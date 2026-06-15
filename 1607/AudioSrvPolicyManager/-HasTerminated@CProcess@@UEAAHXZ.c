/*
 * XREFs of ?HasTerminated@CProcess@@UEAAHXZ @ 0x180010E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::HasTerminated(CProcess *this)
{
  return *((_DWORD *)this + 100) != 0;
}

/*
 * XREFs of ?IsMuted@CProcess@@UEAAHXZ @ 0x180010B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsMuted(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 26) + 120LL) == 0;
}

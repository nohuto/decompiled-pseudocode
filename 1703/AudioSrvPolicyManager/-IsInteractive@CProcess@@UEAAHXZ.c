/*
 * XREFs of ?IsInteractive@CProcess@@UEAAHXZ @ 0x180010200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsInteractive(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 26) + 168LL) != 0;
}

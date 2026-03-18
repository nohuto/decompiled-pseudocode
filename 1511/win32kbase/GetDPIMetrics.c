/*
 * XREFs of GetDPIMetrics @ 0x1C0075F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HFONT *__fastcall GetDPIMetrics(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // zf
  HFONT *result; // rax

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0 )
    return &gdpiSystem;
  v2 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x4000) == 0;
  result = &gdpi96;
  if ( !v2 )
    return &gdpiSystem;
  return result;
}

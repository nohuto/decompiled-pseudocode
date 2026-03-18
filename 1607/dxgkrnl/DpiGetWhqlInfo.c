/*
 * XREFs of DpiGetWhqlInfo @ 0x1C00128F0
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetWhqlInfo(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 2584LL);
  return result;
}

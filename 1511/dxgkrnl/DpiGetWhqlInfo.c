/*
 * XREFs of DpiGetWhqlInfo @ 0x1C0012590
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetWhqlInfo(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  return result;
}

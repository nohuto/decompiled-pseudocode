/*
 * XREFs of DpiGetWhqlInfo @ 0x1C0010E20
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetWhqlInfo(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1464LL);
  return result;
}

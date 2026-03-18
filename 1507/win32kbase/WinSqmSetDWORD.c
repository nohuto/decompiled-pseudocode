/*
 * XREFs of WinSqmSetDWORD @ 0x1C0083F80
 * Callers:
 *     ?W32kCddSqmSetDWORD@@YAXKK@Z @ 0x1C00B5F30 (-W32kCddSqmSetDWORD@@YAXKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinSqmSetDWORD(struct _GUID *a1, int a2, int a3)
{
  _WinSqmDWORDEvent(&SQM_SET_DWORD, a1, a2, a3);
}

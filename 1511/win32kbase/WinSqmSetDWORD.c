/*
 * XREFs of WinSqmSetDWORD @ 0x1C0063010
 * Callers:
 *     ?W32kCddSqmSetDWORD@@YAXKK@Z @ 0x1C00B86E0 (-W32kCddSqmSetDWORD@@YAXKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinSqmSetDWORD(struct _GUID *a1, unsigned int a2, unsigned int a3)
{
  _WinSqmDWORDEvent(&SQM_SET_DWORD, a1, a2, a3);
}

/*
 * XREFs of ?W32kCddSqmSetIfMaxDWORD@@YAXKK@Z @ 0x1C00B5F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmSetIfMaxDWORD(int a1, int a2)
{
  _WinSqmDWORDEvent(&SQM_SETIFMAX_DWORD, &SqmGlobalSessionGuid, a1, a2);
}

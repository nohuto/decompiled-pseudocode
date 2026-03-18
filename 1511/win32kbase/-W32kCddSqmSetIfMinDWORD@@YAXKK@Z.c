/*
 * XREFs of ?W32kCddSqmSetIfMinDWORD@@YAXKK@Z @ 0x1C00B8720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmSetIfMinDWORD(int a1, int a2)
{
  _WinSqmDWORDEvent(&SQM_SETIFMIN_DWORD, &SqmGlobalSessionGuid, a1, a2);
}

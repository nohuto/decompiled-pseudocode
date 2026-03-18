/*
 * XREFs of WinSqmIncrementDWORD @ 0x1C0066F00
 * Callers:
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     ?W32kCddSqmIncrementDWORD@@YAXKK@Z @ 0x1C00B5F10 (-W32kCddSqmIncrementDWORD@@YAXKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinSqmIncrementDWORD(struct _GUID *a1, unsigned int a2, unsigned int a3)
{
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, a1, a2, a3);
}

/*
 * XREFs of WinSqmAddToAverageDWORD @ 0x1C00B23A0
 * Callers:
 *     ?W32kCddSqmAddToAverageDWORD@@YAXKK@Z @ 0x1C00B8680 (-W32kCddSqmAddToAverageDWORD@@YAXKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinSqmAddToAverageDWORD(struct _GUID *a1, int a2, int a3)
{
  _WinSqmDWORDEvent(&SQM_ADDTOAVERAGE_DWORD, a1, a2, a3);
}

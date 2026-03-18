/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1C0088330
 * Callers:
 *     ACPIBuildFilter @ 0x1C0021A84 (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 736) + 48LL) & 0x2000000) != 0;
}

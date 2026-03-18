/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1C006ACE0
 * Callers:
 *     ACPIBuildFilter @ 0x1C00198DC (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 728) + 48LL) & 0x2000000) != 0;
}

/*
 * XREFs of WdipSemUpdateProviderEntriesForScenario @ 0x140565F84
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemUpdateProviderEntryForEvent @ 0x140565FD0 (WdipSemUpdateProviderEntryForEvent.c)
 */

__int64 __fastcall WdipSemUpdateProviderEntriesForScenario(__int64 a1, __int64 a2)
{
  bool v3; // di
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rcx
  int v8; // r11d

  v3 = *(_DWORD *)(a1 + 52) != 0;
  LOBYTE(a2) = v3;
  result = WdipSemUpdateProviderEntryForEvent(a1, a2);
  if ( *(_DWORD *)(v7 + 52) > (unsigned int)v6 )
  {
    do
    {
      LOBYTE(v5) = v3;
      result = WdipSemUpdateProviderEntryForEvent(*(_QWORD *)(a1 + 8 * v6 + 1048), v5);
      v6 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 52) );
  }
  return result;
}

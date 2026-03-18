/*
 * XREFs of sub_1C00C4E20 @ 0x1C00C4E20
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00C4E20(_DWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return DisplayScenarioJournalCCDRetrieval();
  return result;
}

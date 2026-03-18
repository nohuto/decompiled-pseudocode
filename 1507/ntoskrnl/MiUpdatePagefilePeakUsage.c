/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x14013E28C
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdatePagefilePeakUsage(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 - a1[3] - 1LL;
  if ( a1[4] < v1 )
    a1[4] = v1;
}

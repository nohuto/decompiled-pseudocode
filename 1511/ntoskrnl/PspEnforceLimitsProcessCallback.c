/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x1403EC768
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     PspAddAccountingValues @ 0x1403EBE98 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, _QWORD *a2)
{
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues((_QWORD *)(*(_QWORD *)(a1 + 944) + 1112LL), (__int64)v5);
    if ( !a2[2] && *a2 && v5[1] > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}

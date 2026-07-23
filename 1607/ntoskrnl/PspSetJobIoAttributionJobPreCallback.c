/*
 * XREFs of PspSetJobIoAttributionJobPreCallback @ 0x1404D14FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobIoAttributionJobPreCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(_QWORD *)(a2 + 8);
  if ( a1 != v2 )
    *(_QWORD *)(a1 + 1344) = v2 & -(__int64)(*(_BYTE *)(a2 + 16) != 0);
  return 0LL;
}

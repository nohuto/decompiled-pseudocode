/*
 * XREFs of TpSetPoolStackInformation @ 0x180081440
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180081320 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetPoolStackInformation(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 10LL, a2);
  else
    return 3221225485LL;
}

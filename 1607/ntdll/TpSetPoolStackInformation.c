/*
 * XREFs of TpSetPoolStackInformation @ 0x180085EC0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180085DA0 (TpSetDefaultPoolStackInformation.c)
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

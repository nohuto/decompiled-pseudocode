/*
 * XREFs of TpSetPoolThreadBasePriority @ 0x180079280
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolThreadBasePriority(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( a2 >= 15 )
  {
    v3 = 16;
  }
  else
  {
    if ( a2 <= -15 )
      a2 = -16;
    v3 = a2;
  }
  return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 11LL, &v3, 4LL);
}

/*
 * XREFs of VidSchGetQueuedPresentLimit @ 0x1C005F5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetQueuedPresentLimit(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( a1 && a2 )
  {
    *a2 = *(_DWORD *)(a1 + 212);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}

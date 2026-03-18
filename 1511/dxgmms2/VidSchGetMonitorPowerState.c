/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1C005FF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _ERESOURCE *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rax

  if ( a1 )
  {
    v5 = (struct _ERESOURCE *)(a1 + 1200);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1200), 1u);
    v6 = *(_DWORD *)(a1 + 1924);
    ExReleaseResourceLite(v5);
    return v6;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
    return 0LL;
  }
}

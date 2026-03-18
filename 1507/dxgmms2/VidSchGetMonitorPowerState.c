/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1C0078510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct _ERESOURCE *v7; // rdi
  unsigned int v8; // ebx

  if ( a1 )
  {
    v7 = (struct _ERESOURCE *)(a1 + 1192);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
    v8 = *(_DWORD *)(a1 + 1972);
    ExReleaseResourceLite(v7);
    return v8;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
    return 0LL;
  }
}

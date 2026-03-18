/*
 * XREFs of VidSchCreateDevice @ 0x1C0038960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchCreateDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  *a3 = 0LL;
  if ( a1 && a2 )
    return VidSchiCreateDeviceInternal(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL), a2, a1);
  v4 = WdLogNewEntry5_WdAssertion(a1, a2, a1, a3);
  WdLogEvent5_WdAssertion(v4);
  return 3221225485LL;
}

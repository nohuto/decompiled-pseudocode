/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x1C0028EB4
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023518 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v2[4] = 0LL;
  v2[5] = 0LL;
  WdLogEvent5_WdPower(v2);
  *(_DWORD *)(a1 + 2616) = 2;
  v3 = *(_QWORD **)(a1 + 2576);
  v4 = a1 + 2592;
  *(_QWORD *)(a1 + 2592) = a1 + 2568;
  *(_QWORD *)(a1 + 2600) = v3;
  if ( *v3 != a1 + 2568 )
    __fastfail(3u);
  *v3 = v4;
  *(_QWORD *)(a1 + 2576) = v4;
  return KeSetEvent((PRKEVENT)(a1 + 2536), 0, 0);
}

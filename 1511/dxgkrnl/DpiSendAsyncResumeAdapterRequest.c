/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x1C0028A74
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C00104C8 (DpiRequestDevicePowerState.c)
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
  *(_DWORD *)(a1 + 2656) = 2;
  v3 = *(_QWORD **)(a1 + 2616);
  v4 = a1 + 2632;
  *(_QWORD *)(a1 + 2632) = a1 + 2608;
  *(_QWORD *)(a1 + 2640) = v3;
  if ( *v3 != a1 + 2608 )
    __fastfail(3u);
  *v3 = v4;
  *(_QWORD *)(a1 + 2616) = v4;
  return KeSetEvent((PRKEVENT)(a1 + 2576), 0, 0);
}

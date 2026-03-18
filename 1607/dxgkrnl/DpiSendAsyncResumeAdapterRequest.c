/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x1C002FEDC
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0010C28 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v2[4] = 0LL;
  v2[5] = 0LL;
  WdLogEvent5_WdPower(v2);
  *(_DWORD *)(a1 + 3800) = 2;
  v3 = *(_QWORD **)(a1 + 3760);
  v4 = (_QWORD *)(a1 + 3776);
  if ( *v3 != a1 + 3752 )
    __fastfail(3u);
  *v4 = a1 + 3752;
  *(_QWORD *)(a1 + 3784) = v3;
  *v3 = v4;
  *(_QWORD *)(a1 + 3760) = v4;
  return KeSetEvent((PRKEVENT)(a1 + 3720), 0, 0);
}

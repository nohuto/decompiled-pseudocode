/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x1C001D0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  _QWORD *v4; // rax
  __int64 v5; // r8

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 2504LL);
  v3 = (unsigned __int16)a2 + *(unsigned __int16 *)(v2 + 2LL * HIWORD(a2) + 2024);
  if ( v3 >= *(_DWORD *)(v2 + 2152) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v4[3] = 275LL;
    v4[4] = 23LL;
    v4[5] = v2;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = 520LL * v3;
  _InterlockedDecrement((volatile signed __int32 *)(v5 + *(_QWORD *)(v2 + 2008) + 348));
  DXGADAPTER::SetPowerComponentIdleCBWorker((DXGADAPTER *)v2, v3, v5);
}

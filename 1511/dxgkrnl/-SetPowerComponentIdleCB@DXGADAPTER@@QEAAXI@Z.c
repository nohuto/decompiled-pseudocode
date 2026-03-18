/*
 * XREFs of ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001BA80
 * Callers:
 *     DxgSetPowerComponentIdleCB @ 0x1C001D2E0 (DxgSetPowerComponentIdleCB.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C0002C94 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rax

  v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1020);
  if ( v4 >= *((_DWORD *)this + 542) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v5[3] = 275LL;
    v5[4] = 23LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( *((_BYTE *)this + 2465) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(520LL * v4 + *((_QWORD *)this + 253) + 348));
    DXGADAPTER::SetPowerComponentIdleCBWorker(this, v4, a3);
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v6[3] = 275LL;
    v6[4] = 23LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
}

/*
 * XREFs of ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00188CC
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003040 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010894 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0018B64 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001ADB8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001B11C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C001D3F0 (DxgkSetPowerComponentLatencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00D88B8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     Template_pqx @ 0x1C001C7A4 (Template_pqx.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentLatencyCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 2465) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1020);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_pqx((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentLatencyCB, a3, (_DWORD)this, v5, a3);
    v6 = *((_QWORD *)this + 253) + 520LL * v5;
    if ( a3 != *(_QWORD *)(v6 + 368) )
    {
      *(_QWORD *)(v6 + 368) = a3;
      PoFxSetComponentLatency(*((_QWORD *)this + 254), v5, a3);
    }
  }
}

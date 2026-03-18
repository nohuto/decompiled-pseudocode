/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C0011190
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001CB44 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerNotRequiredCallback(DXGADAPTER *this, __int64 a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pqq(0, (unsigned int)&Dxgk_PowerRuntimeDevicePowerRequiredCallback, a3, (_DWORD)this, 0, 0);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 0);
  PoFxCompleteDevicePowerNotRequired(*((_QWORD *)this + 272));
}

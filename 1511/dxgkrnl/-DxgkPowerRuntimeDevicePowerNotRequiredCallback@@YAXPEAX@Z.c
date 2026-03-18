/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C0010BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0018970 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerNotRequiredCallback(DXGADAPTER *this, __int64 a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pqq(0, (unsigned int)&Dxgk_PowerRuntimeDevicePowerRequiredCallback, a3, (_DWORD)this, 0, 0);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 0);
  PoFxCompleteDevicePowerNotRequired(*((_QWORD *)this + 254));
}

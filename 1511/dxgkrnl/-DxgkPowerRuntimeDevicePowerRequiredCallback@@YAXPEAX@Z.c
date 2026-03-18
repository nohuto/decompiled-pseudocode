/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C001AB70
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, __int64 a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pqq((_DWORD)this, (unsigned int)&Dxgk_PowerRuntimeDevicePowerRequiredCallback, a3, (_DWORD)this, 0, 1);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 1);
}

/*
 * XREFs of NVMeGetPowerState @ 0x1C000763C
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C0007984 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C0007AD4 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000813C (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0008214 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1080);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}

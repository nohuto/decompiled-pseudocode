/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C00083F0
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C0007984 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C0007AD4 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000813C (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0008214 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerStateGetMaxPower(unsigned __int16 *a1)
{
  if ( a1 )
    return ((*((_BYTE *)a1 + 3) & 1) != 0 ? 100 : 10000) * (unsigned int)*a1;
  else
    return 0xFFFFFFFFLL;
}

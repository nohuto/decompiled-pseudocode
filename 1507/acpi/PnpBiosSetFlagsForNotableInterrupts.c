/*
 * XREFs of PnpBiosSetFlagsForNotableInterrupts @ 0x1C001F8C4
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A590 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C001F740 (ACPIBuildProcessDevicePhasePrs.c)
 * Callees:
 *     PnpBiosScanForWakeInterrupt @ 0x1C001F954 (PnpBiosScanForWakeInterrupt.c)
 */

char __fastcall PnpBiosSetFlagsForNotableInterrupts(volatile signed __int64 *a1, char *a2, unsigned int a3)
{
  __int64 v4; // rsi
  char result; // al
  char v7; // cl
  char *v8; // rdx
  unsigned __int16 v9; // r8
  char *v10; // r8

  v4 = a3;
  result = PnpBiosScanForWakeInterrupt(a2, a3);
  if ( result )
  {
    result = 0;
    _InterlockedOr64(a1 + 113, 0x100000000uLL);
    _InterlockedOr64(a1, 0x10000uLL);
    _InterlockedOr64(a1 + 113, 0x100000uLL);
  }
  if ( (unsigned int)v4 >= 0x18 )
  {
    v7 = *a2;
    v8 = a2;
    while ( 1 )
    {
      if ( v7 < 0 )
      {
        v9 = *(_WORD *)(v8 + 1) + 3;
      }
      else
      {
        result = v7 & 7;
        v9 = (v7 & 7) + 1;
        v7 &= 0x78u;
      }
      if ( v7 == 120 )
        break;
      v10 = &v8[v9];
      if ( v10 >= &a2[v4] )
        break;
      if ( v7 == -116 && !v8[4] )
      {
        result = 0;
        _InterlockedOr64(a1 + 113, 0x800000000uLL);
        return result;
      }
      v8 = v10;
      if ( v10 >= &a2[v4] )
        return result;
      v7 = *v10;
    }
  }
  return result;
}

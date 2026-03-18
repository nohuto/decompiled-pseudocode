/*
 * XREFs of strstr @ 0x140143918
 * Callers:
 *     InbvDetermineFunction @ 0x140137C18 (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x140142A08 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1403AA824 (KiMatchLoadOption.c)
 *     SepIsOptionPresent @ 0x14052805C (SepIsOptionPresent.c)
 *     HvlPhase0Initialize @ 0x140530D90 (HvlPhase0Initialize.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     CmpGetBiosVersion @ 0x140744714 (CmpGetBiosVersion.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     KiInitializeNxSupportDiscard @ 0x14075A4A0 (KiInitializeNxSupportDiscard.c)
 *     KiPerformGroupConfiguration @ 0x140763928 (KiPerformGroupConfiguration.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x14076791C (BvgaDriverInitialize.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 *     MiInitializeBootDefaults @ 0x14076F498 (MiInitializeBootDefaults.c)
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 *     KitpInitAitSampleRate @ 0x14077066C (KitpInitAitSampleRate.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  char v5; // al
  signed __int64 i; // r9
  const char *v7; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = Str - SubStr; ; ++i )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( v7[i] == *v7 )
    {
      ++v7;
      if ( v7[i] )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}

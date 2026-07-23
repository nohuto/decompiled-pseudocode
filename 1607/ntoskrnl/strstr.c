/*
 * XREFs of strstr @ 0x14014D4A8
 * Callers:
 *     InbvDetermineFunction @ 0x140141720 (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x14014CEC8 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1403D688C (KiMatchLoadOption.c)
 *     SepIsOptionPresent @ 0x140553EE4 (SepIsOptionPresent.c)
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     KiPerformGroupConfiguration @ 0x140793198 (KiPerformGroupConfiguration.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     KiInitializeNxSupportDiscard @ 0x1407A11F4 (KiInitializeNxSupportDiscard.c)
 *     CmpGetBiosVersion @ 0x1407AD364 (CmpGetBiosVersion.c)
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1407B1FA8 (BvgaDriverInitialize.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 *     KitpInitAitSampleRate @ 0x1407BB31C (KitpInitAitSampleRate.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
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

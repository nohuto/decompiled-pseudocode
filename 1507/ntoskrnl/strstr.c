/*
 * XREFs of strstr @ 0x140171998
 * Callers:
 *     InbvDetermineFunction @ 0x14016641C (InbvDetermineFunction.c)
 *     HvlDebuggerSupportInitialize @ 0x140170870 (HvlDebuggerSupportInitialize.c)
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x1403FAEBC (KiMatchLoadOption.c)
 *     SepIsOptionPresent @ 0x140594F70 (SepIsOptionPresent.c)
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x14079A2C4 (CcInitializeBcbProfiler.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     KiInitializeNxSupportDiscard @ 0x1407C3E20 (KiInitializeNxSupportDiscard.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     CmpGetBiosVersion @ 0x1407D8AB8 (CmpGetBiosVersion.c)
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1407DB450 (BvgaDriverInitialize.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 *     KitpInitAitSampleRate @ 0x1407E659C (KitpInitAitSampleRate.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
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

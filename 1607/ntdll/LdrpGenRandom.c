/*
 * XREFs of LdrpGenRandom @ 0x18002F8CC
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x18008A328 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002F910 (RtlIsProcessorFeaturePresent.c)
 */

__int64 LdrpGenRandom()
{
  int v0; // ecx

  if ( !RtlIsProcessorFeaturePresent(0x1Cu) )
    return 0LL;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  r8 }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0LL;
  }
  return _R8;
}

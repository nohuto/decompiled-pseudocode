/*
 * XREFs of HvlGetReferenceTime @ 0x1401B03EC
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x1401B26E4 (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1401B522C (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}

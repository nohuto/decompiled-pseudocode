/*
 * XREFs of BreakForInstrumentation @ 0x18000412C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180004168 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180004238 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool __fastcall BreakForInstrumentation(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( g_fDisableInstrumentationBreaks )
    return 0;
  v4 = 0;
  if ( RegGetHKLMDword(a1, a2, &v4) )
    return v4 == 0;
  return v2;
}

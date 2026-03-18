/*
 * XREFs of RIMIDESetPTPPhysicalSize @ 0x1C00D7068
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C007C4F8 (RIMComputeSpecificHighMetricValue.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIDESetPTPPhysicalSize(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  __int64 v2; // r14
  int SpecificValueCaps; // ebx
  unsigned __int16 v7[8]; // [rsp+40h] [rbp-89h] BYREF
  struct _HIDP_VALUE_CAPS v8; // [rsp+50h] [rbp-79h] BYREF
  struct _HIDP_VALUE_CAPS v9; // [rsp+A0h] [rbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 680);
  v7[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 1u, *(_WORD *)(v2 + 6), 0x30u, &v9, v7, a2);
  if ( SpecificValueCaps >= 0 )
  {
    v8 = v9;
    *(_DWORD *)(a1 + 212) = RIMComputeSpecificHighMetricValue(
                              _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v9.PhysicalMin, 4))
                            - _mm_cvtsi128_si32(*(__m128i *)&v9.PhysicalMin),
                              (__int64)&v8);
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 1u, *(_WORD *)(v2 + 6), 0x31u, &v9, v7, a2);
    if ( SpecificValueCaps >= 0 )
    {
      v8 = v9;
      *(_DWORD *)(a1 + 216) = RIMComputeSpecificHighMetricValue(
                                _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v9.PhysicalMin, 4))
                              - _mm_cvtsi128_si32(*(__m128i *)&v9.PhysicalMin),
                                (__int64)&v8);
    }
  }
  return (unsigned int)SpecificValueCaps;
}

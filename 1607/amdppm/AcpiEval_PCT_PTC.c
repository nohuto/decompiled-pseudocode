/*
 * XREFs of AcpiEval_PCT_PTC @ 0x1C000FCE4
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001A7E0 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001AA7C (InitAcpiThrottleStates.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C000F740 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00112BC (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0011B04 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_PCT_PTC(__int64 a1, int a2, _BYTE *a3)
{
  int v6; // eax
  PVOID v7; // r14
  int v8; // edi
  int v10; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h] BYREF
  char v12; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+52h] [rbp-2Eh]
  const char *v14; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp-20h]
  char v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ah] [rbp-16h]
  const char *v18; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v19)(); // [rsp+78h] [rbp-8h]

  v13 = 2;
  v12 = 0;
  v14 = "Control";
  v16 = 1;
  v15 = AcpiParseRegister;
  v18 = "Status";
  v17 = 786434;
  v19 = AcpiParseRegister;
  P = 0LL;
  if ( a2 == 1413697631 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1052), 0x20u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1052), 0x400u);
  v6 = AcpiEvaluateMethod(a1, a2, 0LL, (unsigned int **)&P, &v10);
  v7 = P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v10 )
    {
      v8 = AcpiParseCore((unsigned int)&v12, 2, (int)P + 12, *((_DWORD *)P + 1) - 12, (__int64)a3, 24);
      if ( v8 >= 0 )
      {
        if ( *a3 != 10 )
          AcpiTranslateAccessSize(a3);
        if ( a3[12] != 10 )
          AcpiTranslateAccessSize(a3 + 12);
      }
    }
    else
    {
      v8 = -1073741275;
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 < 0 )
  {
    if ( a2 == 1413697631 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x20u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x400u);
  }
  return (unsigned int)v8;
}

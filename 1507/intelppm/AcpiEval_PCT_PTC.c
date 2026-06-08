/*
 * XREFs of AcpiEval_PCT_PTC @ 0x1C0014634
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00130A4 (InitAcpiPerfStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0013470 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0014768 (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PCT_PTC(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  PVOID v7; // rsi
  int v8; // edi
  int v10; // [rsp+30h] [rbp-50h]
  int v11; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v13[2]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+52h] [rbp-2Eh]
  const char *v15; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v16)(); // [rsp+60h] [rbp-20h]
  char v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ah] [rbp-16h]
  const char *v19; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v20)(); // [rsp+78h] [rbp-8h]

  v14 = 2;
  v13[0] = 0;
  v15 = "Control";
  v17 = 1;
  v16 = AcpiParseRegister;
  v19 = "Status";
  v18 = 786434;
  v20 = AcpiParseRegister;
  P = 0LL;
  if ( a2 == 1413697631 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x20u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x400u);
  v6 = AcpiEvaluateMethod(a1, a2, 0, (unsigned int)&P, (__int64)&v11);
  v7 = P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      v8 = AcpiParseCore(v13, 2u, (_WORD *)P + 6, *((_DWORD *)P + 1) - 12, a3, 24, v10, 0);
      if ( v8 >= 0 )
      {
        AcpiTranslateAccessSize(a3);
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
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x20u);
    else
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x400u);
  }
  return (unsigned int)v8;
}
